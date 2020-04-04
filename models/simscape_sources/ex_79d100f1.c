#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
extern int32_T ex_AYw_1C1hAo2dXKmju97mm0(const int32_T);extern int32_T
ex_jP6qyn5SvHsksFqu53Ywt1(uint32_T);void compute_uniform_value(real_T*out,
const real_T*minimum,const real_T*maximum,const int32_T*seed){out[0]=((seed[0]
*4.6566128752457969e-10)*(maximum[0]-minimum[0])+minimum[0]);}void
compute_uniform_value_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue in){const real_T*minimum=(const real_T*)((const void*const*)in)[0
];const real_T*maximum=(const real_T*)((const void*const*)in)[1];const int32_T
*seed=(const int32_T*)((const void*const*)in)[2];real_T*out=(real_T*)
ex_JC14Uma4n_uWFYyh6wmkX2;compute_uniform_value(out,minimum,maximum,seed);}
void update_uniform_seed(int32_T*out,const int32_T*x){out[0]=
ex_AYw_1C1hAo2dXKmju97mm0(x[0]);}void update_uniform_seed_custom_function_(
PMValue ex_JC14Uma4n_uWFYyh6wmkX2,ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){
const int32_T*x=(const int32_T*)((const void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)
[0];int32_T*out=(int32_T*)ex_JC14Uma4n_uWFYyh6wmkX2;update_uniform_seed(out,x)
;}void init_uniform_seed(int32_T*out,const uint32_T*seed){out[0]=
ex_AYw_1C1hAo2dXKmju97mm0(ex_jP6qyn5SvHsksFqu53Ywt1(seed[0]));}void
init_uniform_seed_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){const uint32_T*x=(const uint32_T*)((
const void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[0];int32_T*out=(int32_T*)
ex_JC14Uma4n_uWFYyh6wmkX2;init_uniform_seed(out,x);}
