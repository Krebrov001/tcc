#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
extern int32_T ex_AYw_1C1hAo2dXKmju97mm0(const int32_T);extern int32_T
ex_jP6qyn5SvHsksFqu53Ywt1(uint32_T);
#include "math.h"
static void ex_hLiDXH6wq_HKd46Bt1Dtp2(int32_T ex_DTgb0ttXCPlPWcN7v_KZC_,
int32_T*const out){int32_T ex_INuP1MbZ16qfYFyRD1reU0;int32_T
ex_PAFky__7iTOBA7aSwd4y51;real_T ex_xyKno9ueOIYaH8XrVw6tQ1;real_T
ex__C5ziQdaxfW5aFpxg2zZJ0;do{ex_DTgb0ttXCPlPWcN7v_KZC_=
ex_AYw_1C1hAo2dXKmju97mm0(ex_DTgb0ttXCPlPWcN7v_KZC_);ex_INuP1MbZ16qfYFyRD1reU0
=ex_DTgb0ttXCPlPWcN7v_KZC_;ex_xyKno9ueOIYaH8XrVw6tQ1=2.0*
4.6566128752457969e-10*ex_INuP1MbZ16qfYFyRD1reU0-1.0;ex_DTgb0ttXCPlPWcN7v_KZC_
=ex_AYw_1C1hAo2dXKmju97mm0(ex_DTgb0ttXCPlPWcN7v_KZC_);
ex_PAFky__7iTOBA7aSwd4y51=ex_DTgb0ttXCPlPWcN7v_KZC_;ex__C5ziQdaxfW5aFpxg2zZJ0=
2.0*4.6566128752457969e-10*ex_PAFky__7iTOBA7aSwd4y51-1.0;}while(
ex_xyKno9ueOIYaH8XrVw6tQ1*ex_xyKno9ueOIYaH8XrVw6tQ1+ex__C5ziQdaxfW5aFpxg2zZJ0*
ex__C5ziQdaxfW5aFpxg2zZJ0>1.0);out[0]=ex_INuP1MbZ16qfYFyRD1reU0;out[1]=
ex_PAFky__7iTOBA7aSwd4y51;}void compute_gaussian_value(real_T*out,const real_T
*mean,const real_T*sqrtvar,const int32_T*seed){real_T ex_xyKno9ueOIYaH8XrVw6tQ1
=2*4.6566128752457969e-10*seed[0]-1.0;real_T ex__C5ziQdaxfW5aFpxg2zZJ0=2*
4.6566128752457969e-10*seed[1]-1.0;ex__C5ziQdaxfW5aFpxg2zZJ0=
ex__C5ziQdaxfW5aFpxg2zZJ0*ex__C5ziQdaxfW5aFpxg2zZJ0+ex_xyKno9ueOIYaH8XrVw6tQ1*
ex_xyKno9ueOIYaH8XrVw6tQ1;out[0]=(sqrt(-2.0*log(ex__C5ziQdaxfW5aFpxg2zZJ0)/
ex__C5ziQdaxfW5aFpxg2zZJ0)*ex_xyKno9ueOIYaH8XrVw6tQ1)*sqrtvar[0]+mean[0];}void
compute_gaussian_value_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue in){const real_T*mean=(const real_T*)((const void*const*)in)[0];
const real_T*ex_6PnIiNV6PoPlA1ihCbgyP_=(const real_T*)((const void*const*)in)[
1];const int32_T*seed=(const int32_T*)((const void*const*)in)[2];real_T*out=(
real_T*)ex_JC14Uma4n_uWFYyh6wmkX2;compute_gaussian_value(out,mean,
ex_6PnIiNV6PoPlA1ihCbgyP_,seed);}void update_gaussian_seed(int32_T*out,const
int32_T*x){ex_hLiDXH6wq_HKd46Bt1Dtp2(x[1],out);}void
update_gaussian_seed_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){const int32_T*x=(const int32_T*)((
const void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[0];int32_T*out=(int32_T*)
ex_JC14Uma4n_uWFYyh6wmkX2;update_gaussian_seed(out,x);}void init_gaussian_seed
(int32_T*out,const uint32_T*x){int32_T ex_yHPrSIcEWDK9hl1llPimY0=
ex_jP6qyn5SvHsksFqu53Ywt1(x[0]);ex_hLiDXH6wq_HKd46Bt1Dtp2(
ex_yHPrSIcEWDK9hl1llPimY0,out);}void init_gaussian_seed_custom_function_(
PMValue ex_JC14Uma4n_uWFYyh6wmkX2,ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){
const uint32_T*x=(const uint32_T*)((const void*const*)
ex_8Knj_sbNPYaamO7zB0XjK0)[0];int32_T*out=(int32_T*)ex_JC14Uma4n_uWFYyh6wmkX2;
init_gaussian_seed(out,x);}
