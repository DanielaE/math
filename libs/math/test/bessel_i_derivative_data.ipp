//  Copyright (c) 2014 Anton Bikineev
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

   static const boost::array<boost::array<typename table_type<T>::type, 3>, 225> bessel_i_derivative_data = {{
      {{ SC_(-0.8049192047119140625e2), SC_(0.24750102996826171875e2), SC_(-142534136299562130024973134221.99005521993999868526) }}, 
      {{ SC_(-0.8049192047119140625e2), SC_(0.637722015380859375e2), SC_(3266802.8196736368245987228932389940584716010368863) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.24750102996826171875e2), SC_(-2291130167743201604923486.7470168394180873251146683) }}, 
      {{ SC_(-0.7460263824462890625e2), SC_(0.637722015380859375e2), SC_(1344490102.0814298977326531771280029458266767233075) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.24750102996826171875e2), SC_(-32540376529649616064637.054384142008796248247633549) }}, 
      {{ SC_(-0.7290460205078125e2), SC_(0.637722015380859375e2), SC_(7147268346.3248078929703647247611304885252038670462) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.24750102996826171875e2), SC_(-990349288161909.27877000203289482196681509723184343) }}, 
      {{ SC_(-0.62323604583740234375e2), SC_(0.637722015380859375e2), SC_(119443067019517.62291415298106980016813953495181988) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.24750102996826171875e2), SC_(19023942618.631889641004140617446508059806168301492) }}, 
      {{ SC_(-0.5579319000244140625e2), SC_(0.637722015380859375e2), SC_(25951554033686744.924489835522535920574130661280939) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.95070552825927734375e1), SC_(-139935955680816392142241.6017739312504406079396547) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.24750102996826171875e2), SC_(-1316.4819205264052438206308151294983883218464343657) }}, 
      {{ SC_(-0.4430035400390625e2), SC_(0.637722015380859375e2), SC_(97659860560077602476.5334648266576340476103312936) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.51139926910400390625e1), SC_(-21886385122041931939808640058.436968667167426884987) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.95070552825927734375e1), SC_(-366409917635868618.57259467125590453834420202165244) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.24750102996826171875e2), SC_(-0.65676331363722000059647957905593102805970617578866) }}, 
      {{ SC_(-0.383665924072265625e2), SC_(0.637722015380859375e2), SC_(3557012660759047650461.532327709948603014817941907) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.177219114266335964202880859375e-2), SC_(1.4833367404804201575176799553131990442005390200221e-31) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.22177286446094512939453125e-2), SC_(9.7067363329468854142395046595693155072217998479942e-31) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.7444499991834163665771484375e-2), SC_(2.4682929270337628797042098965059154632607360182696e-26) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1433600485324859619140625e-1), SC_(5.9735339257834716574183494832987740754773091009375e-24) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1760916970670223236083984375e-1), SC_(3.3444608178960899374763518228608434403750200803958e-23) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.6152711808681488037109375e-1), SC_(1.1897217647554727497828427765278925609778771252694e-18) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.11958599090576171875e0), SC_(3.112388457299505077603547753672491840287143218901e-16) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.15262925624847412109375e0), SC_(2.4029211462799040331579944694685556203211458958864e-15) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.408089816570281982421875e0), SC_(9.1248397371567801754347274160120968479044369622808e-12) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.6540834903717041015625e0), SC_(4.7824858061924877937035072754189112286627442784541e-10) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.1097540378570556640625e1), SC_(3.7357157150377308603849917033639687198183694823432e-08) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.30944411754608154296875e1), SC_(0.00028020048280478142178576824790264733624837467921411) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.51139926910400390625e1), SC_(0.029788046942789361031443182853628675678245310369738) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.95070552825927734375e1), SC_(26.790075656171534352605317140741843098322239283698) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.24750102996826171875e2), SC_(793253115.04894282077189591606690873895096254021978) }}, 
      {{ SC_(0.93762989044189453125e1), SC_(0.637722015380859375e2), SC_(124597532591880012929558741.1798487805702969053126) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.177219114266335964202880859375e-2), SC_(7.9393797427103935193312904118641365643393472110682e-32) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.22177286446094512939453125e-2), SC_(5.2750361873309848688111983240733858118506477606492e-31) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.7444499991834163665771484375e-2), SC_(1.4561850484459152000175324059092409330365341115566e-26) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1433600485324859619140625e-1), SC_(3.6842735867028953425506020308884251003040007247277e-24) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1760916970670223236083984375e-1), SC_(2.0917201163762906692944412202556845245361847731237e-23) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.6152711808681488037109375e-1), SC_(8.099724957137276546627350759114925458695705536831e-19) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.11958599090576171875e0), SC_(2.2166188303591576397287172828602526472428149190877e-16) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.15262925624847412109375e0), SC_(1.7398898295816921704025845808278773511501789661039e-15) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.408089816570281982421875e0), SC_(7.0625243779726096513575976577390827520115876914691e-12) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.6540834903717041015625e0), SC_(3.8217061180073757347806489526965144626367691098288e-10) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.1097540378570556640625e1), SC_(3.0913372973610985976471301589555712666730023107543e-08) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.30944411754608154296875e1), SC_(0.00024830676215071733631164447908300056546252338891911) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.51139926910400390625e1), SC_(0.027225037364339635343941718253802560863885329512512) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.95070552825927734375e1), SC_(25.296697292204887546137285781211352894138008158535) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.24750102996826171875e2), SC_(773887818.69440844099959239658824877395876924432055) }}, 
      {{ SC_(0.944411754608154296875e1), SC_(0.637722015380859375e2), SC_(123371059205722849456522471.39199589118773988433275) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.177219114266335964202880859375e-2), SC_(1.2286252390380290844561278210597794601482999571983e-104) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.22177286446094512939453125e-2), SC_(3.7181168789004272463796407464346105515848606922329e-102) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.7444499991834163665771484375e-2), SC_(9.2610851221489173483182330607686343001719727741597e-89) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1433600485324859619140625e-1), SC_(1.643476887122182179956901151590609432640352852077e-81) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1760916970670223236083984375e-1), SC_(3.0950958199468447682336413996941870547152191981674e-79) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.6152711808681488037109375e-1), SC_(2.1392038603823891823422157728886539760760291580653e-65) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.11958599090576171875e0), SC_(4.8064400564807594070701023433867803573129630888345e-58) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.15262925624847412109375e0), SC_(2.4032291539568302335053149943843587858638571389874e-55) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.408089816570281982421875e0), SC_(1.8234350315474405459152584644263976003971834673721e-44) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.6540834903717041015625e0), SC_(3.0241871675691159181451491339277900952524486071002e-39) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.1097540378570556640625e1), SC_(1.6205375716163189419960176666595505199258671513103e-33) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.30944411754608154296875e1), SC_(5.1477930447574412268206532943451913765254330040223e-22) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.51139926910400390625e1), SC_(2.1827206165702638933845082222556521417430730380844e-16) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.95070552825927734375e1), SC_(2.9195970485656579467760872558336916432951033483332e-09) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.24750102996826171875e2), SC_(10826.527068717066528491846218450353760561479759982) }}, 
      {{ SC_(0.264718532562255859375e2), SC_(0.637722015380859375e2), SC_(1138075386232486817219014.8052993051304724020136075) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.177219114266335964202880859375e-2), SC_(1.632362010614025868688932327750627876605396014588e-275) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.22177286446094512939453125e-2), SC_(1.762381436841527011849001278447617221768896515477e-269) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.7444499991834163665771484375e-2), SC_(6.6759847143868307027065445521849777871007306954136e-237) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1433600485324859619140625e-1), SC_(2.8413744248913192676665654065072379053073155149995e-219) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1760916970670223236083984375e-1), SC_(9.6796251519365738433769389146932410237305854016773e-214) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.6152711808681488037109375e-1), SC_(4.3868562810147839682491489589259890784816573040545e-180) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.11958599090576171875e0), SC_(3.3133885952180986858287524787023329689682116102751e-162) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.15262925624847412109375e0), SC_(1.2128190016563561979755446838988618653681374993639e-155) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.408089816570281982421875e0), SC_(3.4814116521283384702517328106396550498484169139948e-129) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.6540834903717041015625e0), SC_(1.7111604293099981058811517931076833381871921804211e-116) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.1097540378570556640625e1), SC_(1.4422544328066011890557231387613912785242406476365e-102) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.30944411754608154296875e1), SC_(1.1451154629918412504592632865401292332327654879585e-74) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.51139926910400390625e1), SC_(4.0070673607625816553677715219345898864142088217776e-61) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.95070552825927734375e1), SC_(2.4875262867594197642521228223206333835260900106824e-44) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.24750102996826171875e2), SC_(1.0725853101609339090593117055019026769846147589987e-17) }}, 
      {{ SC_(0.62944732666015625e2), SC_(0.637722015380859375e2), SC_(69806774000991.981050098476617116562579929772726245) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.177219114266335964202880859375e-2), SC_(3.0795075713373245170564693209507552885531668052322e-295) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.22177286446094512939453125e-2), SC_(8.2585814147621235194686725245004192244997424675025e-289) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.7444499991834163665771484375e-2), SC_(4.2559329352980990333465412959416506363209167587173e-254) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1433600485324859619140625e-1), SC_(2.5857906110824316476302796916108192832705011750687e-235) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1760916970670223236083984375e-1), SC_(2.0288735053710467855117165534842590974767207207859e-229) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.6152711808681488037109375e-1), SC_(1.4716924210346402659960982541246335667937580263824e-193) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.11958599090576171875e0), SC_(1.6475324190637916449886602361066243304687776777444e-174) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.15262925624847412109375e0), SC_(1.6226453660019147553054614873926171882634928426372e-167) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.408089816570281982421875e0), SC_(2.5175324481503500570184737845026562070532546627185e-139) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.6540834903717041015625e0), SC_(8.3881308654401361699945722134397500006097045735341e-126) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.1097540378570556640625e1), SC_(5.7715122879778170240728020870949990083309248355342e-111) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.30944411754608154296875e1), SC_(3.0654395547893837002052218519388992244041349516261e-81) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.51139926910400390625e1), SC_(8.2003984081112594307363027866319782488192555860671e-67) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.95070552825927734375e1), SC_(6.200490108030621481717367383544868119732779991649e-49) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.24750102996826171875e2), SC_(1.1484072822157114435741678836431453415625281354583e-20) }}, 
      {{ SC_(0.67001708984375e2), SC_(0.637722015380859375e2), SC_(1882431939202.1648135308211699453194754099827646073) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.177219114266335964202880859375e-2), SC_(7.1993058715176692707909545977542101576978902629997e-365) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.22177286446094512939453125e-2), SC_(4.6189647675920818228477787495300927648880227749548e-357) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.7444499991834163665771484375e-2), SC_(6.637653229579832943601390616060165246442539943324e-315) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1433600485324859619140625e-1), SC_(4.3102132572399443285127078566331609500823755904228e-292) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1760916970670223236083984375e-1), SC_(6.2158948593041667580197386192485645449767163129178e-285) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.6152711808681488037109375e-1), SC_(2.2170706972561526295259801840425237167479458891492e-241) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.11958599090576171875e0), SC_(3.0241607708249140489586281304097109739647176465164e-218) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.15262925624847412109375e0), SC_(9.418847738799939103168386855858431832591248936811e-210) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.408089816570281982421875e0), SC_(1.6265930491345472772111976569894816356870485147153e-175) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.6540834903717041015625e0), SC_(4.3080115194438098150087717213388986951797779271287e-159) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.1097540378570556640625e1), SC_(4.5073098911157230329481517944589083374841589800605e-141) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.30944411754608154296875e1), SC_(5.6167794494214786296478563730194863567468472683289e-105) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.51139926910400390625e1), SC_(1.822656617706300448539503357453364760270365438864e-87) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.95070552825927734375e1), SC_(8.5704891337692157403434649287602372160066937779083e-66) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.24750102996826171875e2), SC_(8.6881113707816421353442513653795258602893726841149e-32) }}, 
      {{ SC_(0.8115838623046875e2), SC_(0.637722015380859375e2), SC_(1617649.4354678485627380481219136110430921391331897) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.177219114266335964202880859375e-2), SC_(2.1337314780433023071253830818680635341102390423424e-372) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.22177286446094512939453125e-2), SC_(1.9236468477598653871005466718621584242716472509795e-364) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.7444499991834163665771484375e-2), SC_(1.7350558469277704916806297676840604397934753883088e-321) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1433600485324859619140625e-1), SC_(3.044131111243828481505732791395440428410252467497e-298) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1760916970670223236083984375e-1), SC_(5.9969912201526959957889453725088739277567897075027e-291) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.6152711808681488037109375e-1), SC_(1.4266594725898433542013786706157135640259186846101e-246) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.11958599090576171875e0), SC_(5.3322472505503945805669306065156969299274872366813e-223) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.15262925624847412109375e0), SC_(2.4044604452865816807064344460494732181924838017599e-214) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.408089816570281982421875e0), SC_(1.845615210278874980268444611142904946297868235348e-179) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.6540834903717041015625e0), SC_(9.9974095177384560300881151990910235045207409722762e-163) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.1097540378570556640625e1), SC_(2.2933085190276181755163341575742980201744586021307e-144) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.30944411754608154296875e1), SC_(1.3760068297929422035121422541344836370023463362112e-107) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.51139926910400390625e1), SC_(9.5576508613049726576106420556767384976606107970553e-90) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.95070552825927734375e1), SC_(1.146825152638600062498145160892476430739737467161e-67) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.24750102996826171875e2), SC_(4.8202778062425803121906942399051869824382907581079e-33) }}, 
      {{ SC_(0.826751708984375e2), SC_(0.637722015380859375e2), SC_(321545.92541685474819558905268688047015358187110107) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.177219114266335964202880859375e-2), SC_(1.9420356342138526889257234094828532249379931857193e-416) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.22177286446094512939453125e-2), SC_(1.2673457667528725255614876439435750775206880096062e-407) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.7444499991834163665771484375e-2), SC_(5.0120856794029180893564370961271669747845203722658e-360) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1433600485324859619140625e-1), SC_(2.8578414266328775608393218254761072916472326765375e-334) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1760916970670223236083984375e-1), SC_(3.4576589617854072255491833815950179765493097214576e-326) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.6152711808681488037109375e-1), SC_(5.1367055010288925434184639689708542128550374448043e-277) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.11958599090576171875e0), SC_(6.7707110514152055469426755384612859295996162434507e-251) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.15262925624847412109375e0), SC_(2.6299157791650666290094679911691206263072932777858e-241) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.408089816570281982421875e0), SC_(1.1881552611574945474151890493098342570198940780072e-202) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.6540834903717041015625e0), SC_(4.1387935853828150079064007340994906098391763595023e-184) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.1097540378570556640625e1), SC_(9.1488143720178502044269620748256985678652513304794e-164) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.30944411754608154296875e1), SC_(5.1481853461542550612979530615983083899789511977363e-123) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.51139926910400390625e1), SC_(2.9986211058440061810577069363569118709007799757606e-103) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.95070552825927734375e1), SC_(8.4055558601500789473580514095070639830784144103471e-79) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.24750102996826171875e2), SC_(1.4138089014232647985841023858383320068408072754542e-40) }}, 
      {{ SC_(0.9150136566162109375e2), SC_(0.637722015380859375e2), SC_(17.28589515499288087293873997915746434993105371068) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.177219114266335964202880859375e-2), SC_(7.6618863611058558853122002433870633875250464831379e-424) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.22177286446094512939453125e-2), SC_(6.962502149506368312787985506753589166487217730338e-415) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.7444499991834163665771484375e-2), SC_(1.6456315640366475428477104383402048686105366825932e-366) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1433600485324859619140625e-1), SC_(2.4689135196236308311980218814818473304652627086375e-340) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1760916970670223236083984375e-1), SC_(4.0467125031170780221174588410861383946818829905602e-332) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.6152711808681488037109375e-1), SC_(3.8118669818966907957780884496228282993229577709856e-282) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.11958599090576171875e0), SC_(1.3402237339470433362399803365824856869577484600303e-255) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.15262925624847412109375e0), SC_(7.4629972928947281844431866187302467357712130198734e-246) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.408089816570281982421875e0), SC_(1.4401591890850019248433932932485186260115263118742e-206) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.6540834903717041015625e0), SC_(1.0066383715499410337341678883003839879567113504005e-187) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.1097540378570556640625e1), SC_(4.7776096177154649384991611413700359005353321203558e-167) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.30944411754608154296875e1), SC_(1.2414461979488675628422602830370682216021538848639e-125) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.51139926910400390625e1), SC_(1.5169811003777042945959637574955936357347003287343e-105) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.95070552825927734375e1), SC_(1.059135167534398759163888143455767603228133421273e-80) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.24750102996826171875e2), SC_(7.1531683828857561354263752868485539030922509279303e-42) }}, 
      {{ SC_(0.9297769927978515625e2), SC_(0.637722015380859375e2), SC_(3.1140752263668997442734896574305738869767905751981) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.177219114266335964202880859375e-2), SC_(1.1661277757218256260409430215822949722914656717031e-426) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.22177286446094512939453125e-2), SC_(1.2018324123453446354096977880675155644270790204158e-417) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.7444499991834163665771484375e-2), SC_(5.6054076194175039575244446266311430330206643551553e-369) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1433600485324859619140625e-1), SC_(1.2148385824756112587081375497421817138615867641022e-342) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1760916970670223236083984375e-1), SC_(2.2348274624894144625770117300774428742332446484079e-334) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.6152711808681488037109375e-1), SC_(4.2485632890109563179987324153449202788837008882968e-284) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.11958599090576171875e0), SC_(2.1690856412592241284676264176655596346119701828162e-257) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.15262925624847412109375e0), SC_(1.3851128670629291186758575024616184151857112539491e-247) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.408089816570281982421875e0), SC_(4.6421277384739523422371340222665902147491772786676e-208) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.6540834903717041015625e0), SC_(4.2283723224704485547956045759458418333219191488477e-189) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.1097540378570556640625e1), SC_(2.6833358132717840691517100908105954462406974502051e-168) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.30944411754608154296875e1), SC_(1.247390104924330321042470965173720099076338502325e-126) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.51139926910400390625e1), SC_(2.020210047102409613023936980279078597139872222018e-106) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.95070552825927734375e1), SC_(1.9955251551926842925930555683640515631686061422485e-81) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.24750102996826171875e2), SC_(2.2867175418426324837359952674106145152422588783687e-42) }}, 
      {{ SC_(0.935389862060546875e2), SC_(0.637722015380859375e2), SC_(1.6147998222697175519782091211015094728796977518207) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.177219114266335964202880859375e-2), SC_(7.7407174681492540071999304897751173868684457437001e-428) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.22177286446094512939453125e-2), SC_(8.4086432798610158915026658254613097148281508578832e-419) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.7444499991834163665771484375e-2), SC_(5.2102397935309216070908245075051523777780039797954e-370) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1433600485324859619140625e-1), SC_(1.3168215731211130848666344876761031623388840757876e-343) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1760916970670223236083984375e-1), SC_(2.542156460770037475292219713467756455481900491816e-335) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.6152711808681488037109375e-1), SC_(6.4811274794530063129506457913591001481117097235721e-285) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.11958599090576171875e0), SC_(3.8671074049480457796226812986921044241949880135038e-258) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.15262925624847412109375e0), SC_(2.6148662205325438996486588632560171879973109944242e-248) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.408089816570281982421875e0), SC_(1.1037519208447777671705164118921036226392271960928e-208) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.6540834903717041015625e0), SC_(1.1230151633521670238426547982117929969308447859491e-189) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.1097540378570556640625e1), SC_(8.0466338727228345610326173987873011127073893987258e-169) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.30944411754608154296875e1), SC_(4.7699371229309282685368620449590413606875117758542e-127) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.51139926910400390625e1), SC_(8.6903353584621284959691334563490081337002544783555e-107) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.95070552825927734375e1), SC_(9.9237330880770727584989103434947342823156386680536e-82) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.24750102996826171875e2), SC_(1.4184074632248481117747733128461549835737275401749e-42) }}, 
      {{ SC_(0.937735595703125e2), SC_(0.637722015380859375e2), SC_(1.2262087826458825244894568674316053325965399278318) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.177219114266335964202880859375e-2), SC_(5.1934668546157384097187677930546335775551093249245e-452) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.22177286446094512939453125e-2), SC_(1.6564375965270384518417875777876145019824624752511e-442) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.7444499991834163665771484375e-2), SC_(3.4449197120473817490306315407857492468933163272697e-391) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1433600485324859619140625e-1), SC_(2.0261067427217268882764404798020620490244315528898e-363) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1760916970670223236083984375e-1), SC_(1.0501968055478962199726801014833998389731255645277e-354) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.6152711808681488037109375e-1), SC_(1.0893333354890297332144228152538296498299371883906e-301) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.11958599090576171875e0), SC_(1.5813286841700678191351937520033292476413518543747e-273) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.15262925624847412109375e0), SC_(3.4511773402735000615146412720239233966192751056587e-263) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.408089816570281982421875e0), SC_(1.639464995580696838283506031532612591832810098039e-221) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.6540834903717041015625e0), SC_(1.6075588383847372939491059578822319391219082116837e-201) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.1097540378570556640625e1), SC_(1.383367960474755330837001872339252895647146189204e-179) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.30944411754608154296875e1), SC_(1.1894547122266173284580504405934836255140398237346e-135) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.51139926910400390625e1), SC_(2.4141410173177178007591210449414366774973156433676e-114) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.95070552825927734375e1), SC_(5.3705913195666332157368504472534602682347597904246e-88) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.24750102996826171875e2), SC_(7.1057971431288206847704264194041343716457271036256e-47) }}, 
      {{ SC_(0.98576263427734375e2), SC_(0.637722015380859375e2), SC_(0.0039345019880193955268905974769199918011548388459448) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.177219114266335964202880859375e-2), SC_(1.2669013491383325664362949890567337966880131879219e-455) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.22177286446094512939453125e-2), SC_(4.7445792264691913698239760210387810671521193426311e-446) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.7444499991834163665771484375e-2), SC_(2.3483744633355519061337833910315333769185413776926e-394) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1433600485324859619140625e-1), SC_(2.2081056218712490205081864702951174353423511390333e-366) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1760916970670223236083984375e-1), SC_(1.3260961326906320083521649120762449877306863066949e-357) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.6152711808681488037109375e-1), SC_(3.3689112308888555541155780863328611537293119215684e-304) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.11958599090576171875e0), SC_(7.8704444271803266449410224277205927589659149607199e-276) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.15262925624847412109375e0), SC_(2.0455506154335438653697128280863307177593737433096e-265) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.408089816570281982421875e0), SC_(1.9649968937054947083507693323325306115786423657801e-223) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.6540834903717041015625e0), SC_(2.7009554486387227542069707937331979556217406548287e-203) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.1097540378570556640625e1), SC_(3.3669018281214257622929975926519987609804001563885e-181) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.30944411754608154296875e1), SC_(6.0798127566409819483912000773989019132264961627001e-137) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.51139926910400390625e1), SC_(1.7676119678602966764380062800375583149171867312673e-115) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.95070552825927734375e1), SC_(6.1226313979466826145691556576771473978778277352618e-89) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.24750102996826171875e2), SC_(1.5919660033638893814293912578681090424440634920881e-47) }}, 
      {{ SC_(0.99292266845703125e2), SC_(0.637722015380859375e2), SC_(0.001643352512064229232537155624609682872404513604206) }}
   }};
