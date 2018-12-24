
///////////////////////////////////////////////////////////////////////////////
//  Copyright 2014 Anton Bikineev
//  Copyright 2014 Christopher Kormanyos
//  Copyright 2014 John Maddock
//  Copyright 2014 Paul Bristow
//  Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_HYPERGEOMETRIC_1F1_RECURRENCE_HPP_
#define BOOST_HYPERGEOMETRIC_1F1_RECURRENCE_HPP_

#include <boost/math/special_functions/modf.hpp>
#include <boost/math/special_functions/next.hpp>

#include <boost/math/tools/recurrence.hpp>

  namespace boost { namespace math { namespace detail {

  // forward declaration for initial values
  template <class T, class Policy>
  inline T hypergeometric_1F1_imp(const T& a, const T& b, const T& z, const Policy& pol);

  template <class T, class Policy>
  inline T hypergeometric_1F1_imp(const T& a, const T& b, const T& z, const Policy& pol, int& log_scaling);

  template <class T>
  struct hypergeometric_1F1_recurrence_a_coefficients
  {
    typedef boost::math::tuple<T, T, T> result_type;

    hypergeometric_1F1_recurrence_a_coefficients(const T& a, const T& b, const T& z):
    a(a), b(b), z(z)
    {
    }

    result_type operator()(boost::intmax_t i) const
    {
      const T ai = a + i;

      const T an = b - ai;
      const T bn = (2 * ai - b + z);
      const T cn = -ai;

      return boost::math::make_tuple(an, bn, cn);
    }

  private:
    const T a, b, z;
  };

  template <class T>
  struct hypergeometric_1F1_recurrence_b_coefficients
  {
    typedef boost::math::tuple<T, T, T> result_type;

    hypergeometric_1F1_recurrence_b_coefficients(const T& a, const T& b, const T& z):
    a(a), b(b), z(z)
    {
    }

    result_type operator()(boost::intmax_t i) const
    {
      const T bi = b + i;

      const T an = bi * (bi - 1);
      const T bn = bi * (1 - bi - z);
      const T cn = z * (bi - a);

      return boost::math::make_tuple(an, bn, cn);
    }

  private:
    const T a, b, z;
  };
  //
  // for use when we're recursing to a small b:
  //
  template <class T>
  struct hypergeometric_1F1_recurrence_small_b_coefficients
  {
     typedef boost::math::tuple<T, T, T> result_type;

     hypergeometric_1F1_recurrence_small_b_coefficients(const T& a, const T& b, const T& z, int N) :
        a(a), b(b), z(z), N(N)
     {
     }

     result_type operator()(boost::intmax_t i) const
     {
        const T bi = b + (i + N);
        const T bi_minus_1 = b + (i + N - 1);

        const T an = bi * bi_minus_1;
        const T bn = bi * (-bi_minus_1 - z);
        const T cn = z * (bi - a);

        return boost::math::make_tuple(an, bn, cn);
     }

  private:
     const T a, b, z;
     int N;
  };

  template <class T>
  struct hypergeometric_1F1_recurrence_a_and_b_coefficients
  {
    typedef boost::math::tuple<T, T, T> result_type;

    hypergeometric_1F1_recurrence_a_and_b_coefficients(const T& a, const T& b, const T& z):
    a(a), b(b), z(z)
    {
    }

    result_type operator()(boost::intmax_t i) const
    {
      const T ai = a + i;
      const T bi = b + i;

      const T an = bi * (bi - 1);
      const T bn = bi * ((1 - bi) + z);
      const T cn = -ai * z;

      return boost::math::make_tuple(an, bn, cn);
    }

  private:
    const T a, b, z;
  };

  template <class T, class Policy>
  inline T hypergeometric_1F1_backward_recurrence_for_negative_a(const T& a, const T& b, const T& z, const Policy& pol, const char* function, int& log_scaling)
  {
    BOOST_MATH_STD_USING // modf, frexp, fabs, pow

    boost::intmax_t integer_part = 0;
    const T bk = modf(b, &integer_part);
    T ak = modf(a, &integer_part);
    //
    // We need ak-1 positive to avoid infinite recursion below:
    //
    if (0 != ak)
    {
       ak += 2;
       integer_part -= 2;
    }

    int exp_of_a = 0; frexp(a, &exp_of_a);
    int exp_of_b = 0; frexp(b, &exp_of_b);

    const bool are_fractional_parts_close_enough =
      fabs(boost::math::float_distance(ak, bk)) <= pow(2, (std::max)(exp_of_a, exp_of_b));

    if ((a < b) && (b < 0) && (are_fractional_parts_close_enough)) // TODO: has to be researched deeper
    {
      ak = b - 1;
      integer_part -= (boost::math::lltrunc(ceil(b)) - 1);
    }

    if (-integer_part > static_cast<boost::intmax_t>(policies::get_max_series_iterations<Policy>()))
       return policies::raise_evaluation_error<T>(function, "1F1 arguments sit in a range with a so negative that we have no evaluation method, got a = %1%", std::numeric_limits<T>::quiet_NaN(), pol);

    T first, second;
    if(ak == 0)
    { 
       first = 1;
       --ak;
       second = 1 - z / b;
    }
    else
    {
       int scaling1(0), scaling2(0);
       first = detail::hypergeometric_1F1_imp(ak, b, z, pol, scaling1);
       --ak;
       second = detail::hypergeometric_1F1_imp(ak, b, z, pol, scaling2);
       if (scaling1 != scaling2)
       {
          second *= exp(scaling2 - scaling1);
       }
       log_scaling += scaling1;
    }
    ++integer_part;

    detail::hypergeometric_1F1_recurrence_a_coefficients<T> s(ak, b, z);

    return tools::apply_recurrence_relation_backward(s,
                                                     static_cast<unsigned int>(std::abs(integer_part)),
                                                     first,
                                                     second, &log_scaling);
  }

  template <class T, class Policy>
  inline T hypergeometric_1F1_forward_recurrence_for_positive_a(const T& a, const T& b, const T& z, const Policy& pol, int& log_scaling)
  {
    BOOST_MATH_STD_USING // modf, fabs

    boost::intmax_t integer_part = 0;
    T ak = modf(a, &integer_part);

    int scaling1(0), scaling2(0);
    T first = detail::hypergeometric_1F1_imp(ak, b, z, pol, scaling1);
    ++ak;
    T second = detail::hypergeometric_1F1_imp(ak, b, z, pol, scaling2);
    --integer_part;
    if (scaling1 != scaling2)
    {
       second *= exp(scaling2 - scaling1);
    }
    log_scaling += scaling1;

    detail::hypergeometric_1F1_recurrence_a_coefficients<T> s(ak, b, z);

    return tools::apply_recurrence_relation_forward(s, integer_part, first, second, &log_scaling);
  }

  template <class T, class Policy>
  inline T hypergeometric_1F1_backward_recurrence_for_negative_b(const T& a, const T& b, const T& z, const Policy& pol, int& log_scaling)
  {
    BOOST_MATH_STD_USING // modf, fabs

    boost::intmax_t integer_part = 0;
    T bk = modf(b, &integer_part);

    int scaling1(0), scaling2(0);
    T first = detail::hypergeometric_1F1_imp(a, bk, z, pol, scaling1);
    --bk;
    T second = detail::hypergeometric_1F1_imp(a, bk, z, pol, scaling2);
    ++integer_part;
    if (scaling1 != scaling2)
    {
       second *= exp(scaling2 - scaling1);
    }
    log_scaling += scaling1;

    detail::hypergeometric_1F1_recurrence_b_coefficients<T> s(a, bk, z);

    return tools::apply_recurrence_relation_backward(s,
                                                     static_cast<unsigned int>(std::abs(integer_part)),
                                                     first,
                                                     second, &log_scaling);
  }

  // This method accumulates errors at an alarming rate:.
  template <class T, class Policy>
  inline T hypergeometric_1F1_backward_recurrence_for_negative_a_and_b(const T& a, const T& b, const T& z, const Policy& pol, int& log_scaling)
  {
    BOOST_MATH_STD_USING // modf, fabs

    boost::intmax_t integer_part = 0;
    T ak = modf(a, &integer_part);
    T bk = b - integer_part;

    int scaling1(0), scaling2(0);
    T first = detail::hypergeometric_1F1_imp(ak, bk, z, pol, scaling1);
    --ak; --bk;
    T second = detail::hypergeometric_1F1_imp(ak, bk, z, pol, scaling2);
    ++integer_part;
    if (scaling1 != scaling2)
    {
       second *= exp(scaling2 - scaling1);
    }
    log_scaling += scaling1;

    detail::hypergeometric_1F1_recurrence_a_and_b_coefficients<T> s(ak, bk, z);

    return tools::apply_recurrence_relation_backward(s, fabs(integer_part), first, second, &log_scaling);
  }

  // ranges
  template <class T>
  inline bool hypergeometric_1F1_is_a_small_enough(const T& a)
  {
    return a < -10; // TODO: make dependent on precision
  }

  template <class T, class Policy>
  T hypergeometric_1F1_fwd_on_b_imp(const T& a, const T& b, const T& z, const Policy& pol, int& log_scaling)
  {
     BOOST_MATH_STD_USING // modf, fabs

     int integer_part = 1 + itrunc(ceil(fabs(a) - b));
     T bk = b + integer_part;

     T first = boost::math::detail::hypergeometric_1F1_imp(a, bk, z, pol, log_scaling);
     --bk;
     int log_scaling2 = 0;
     T second = boost::math::detail::hypergeometric_1F1_imp(a, bk, z, pol, log_scaling2);

     if (log_scaling2 != log_scaling)
     {
        second *= exp(log_scaling2 - log_scaling);
     }

     //std::cout << first * exp(boost::multiprecision::mpfr_float(log_scaling)) << std::endl;
     //std::cout << second * exp(boost::multiprecision::mpfr_float(log_scaling)) << std::endl;

     if ((fabs(first) > 1.0e3) || (fabs(first) < 1.0e-3))
     {
        int rescaling = itrunc(floor(log(fabs(first))));
        T scale = exp(-rescaling);

        first *= scale;
        second *= scale;
        log_scaling += rescaling;
     }

     //std::cout << first * exp(boost::multiprecision::mpfr_float(log_scaling)) << std::endl;
     //std::cout << second * exp(boost::multiprecision::mpfr_float(log_scaling)) << std::endl;

     boost::math::detail::hypergeometric_1F1_recurrence_b_coefficients<T> s(a, bk, z);

     return boost::math::tools::apply_recurrence_relation_backward(s, static_cast<unsigned int>(integer_part), first, second);
  }

  template <class T, class Policy>
  T hypergeometric_1F1_backwards_recursion_on_b_for_negative_a(const T& a, const T& b, const T& z, const Policy& pol, const char* function, int& log_scaling)
  {
     BOOST_MATH_STD_USING // modf, frexp, fabs, pow
     //
     // Recursion from some b + N > z down to b:
     //
     int integer_part = boost::math::itrunc(z - b) + 2;

     if (integer_part > static_cast<boost::intmax_t>(boost::math::policies::get_max_series_iterations<Policy>()))
        return boost::math::policies::raise_evaluation_error<T>(function, "1F1 arguments sit in a range with a so negative that we have no evaluation method, got a = %1%", std::numeric_limits<T>::quiet_NaN(), pol);
     //
     // TODO: these 1F1's will be calculated via recursion on a, we should really
     // use a single recurrence on a and then "turn the corner" and recurse on b:
     //
     int scaling1(0), scaling2(0);
     T first, second;
     first = boost::math::detail::hypergeometric_1F1_imp(a, b + integer_part, z, pol, scaling1);
     --integer_part;
     second = boost::math::detail::hypergeometric_1F1_imp(a, b + integer_part, z, pol, scaling2);
     if (scaling1 != scaling2)
     {
        second *= exp(scaling2 - scaling1);
     }
     log_scaling += scaling1;

     boost::math::detail::hypergeometric_1F1_recurrence_small_b_coefficients<T> s(a, b, z, integer_part);

     return boost::math::tools::apply_recurrence_relation_backward(s,
        static_cast<unsigned int>(std::abs(integer_part)),
        first,
        second,
        &log_scaling);
  }



  } } } // namespaces

#endif // BOOST_HYPERGEOMETRIC_1F1_RECURRENCE_HPP_
