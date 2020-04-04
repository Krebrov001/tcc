#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
#include "pm_std.h"
static size_t ex_L5fur6LFRji_Faer_7yzJ1(const real_T x,const real_T*
ex_kqTQ1epcuYM_DyDj2jQ1y1,const size_t n){size_t ex_SmSSPSQfR1qEYWsVj5ELF0;if(
x<ex_kqTQ1epcuYM_DyDj2jQ1y1[0]){ex_SmSSPSQfR1qEYWsVj5ELF0=0;}else if(x>
ex_kqTQ1epcuYM_DyDj2jQ1y1[n-1]){ex_SmSSPSQfR1qEYWsVj5ELF0=n+1;}else{for(
ex_SmSSPSQfR1qEYWsVj5ELF0=1;((ex_SmSSPSQfR1qEYWsVj5ELF0<=n)&&(
ex_kqTQ1epcuYM_DyDj2jQ1y1[ex_SmSSPSQfR1qEYWsVj5ELF0-1]<x));++
ex_SmSSPSQfR1qEYWsVj5ELF0);}return ex_SmSSPSQfR1qEYWsVj5ELF0;}static void
ex_h9PBDMihcYS7CWc28W2Hk2(const real_T*freqs,const real_T*ys,const size_t*dims
,const size_t ex_dYWQAHvQodwoJxkVJbvZO2,const real_T ex_vKct5bj2VVv2h_QlqkYJ__
,const boolean_T ex_xVJyoK3_zCEvg7tMJpsHl0,real_T*out){const size_t n1=dims[0]
;const size_t n2=dims[1];const real_T*ex_kqTQ1epcuYM_DyDj2jQ1y1=freqs;const
real_T*ex_8B7ltUy9RiwsITRZEKL491=ys;const real_T ex_tTtxUlYB91DFoEeDuWMX42=
ex_kqTQ1epcuYM_DyDj2jQ1y1[ex_dYWQAHvQodwoJxkVJbvZO2-2];const real_T
ex_INFh9oCMwF1cYY_NM_qI6_=ex_kqTQ1epcuYM_DyDj2jQ1y1[ex_dYWQAHvQodwoJxkVJbvZO2-
1];size_t ex_SmSSPSQfR1qEYWsVj5ELF0;for(ex_SmSSPSQfR1qEYWsVj5ELF0=0;
ex_SmSSPSQfR1qEYWsVj5ELF0<n1*n2;++ex_SmSSPSQfR1qEYWsVj5ELF0){const real_T
ex_R7GeHlROOcMcs_D8xOULH_=ex_8B7ltUy9RiwsITRZEKL491[n1*n2*(
ex_dYWQAHvQodwoJxkVJbvZO2-2)+ex_SmSSPSQfR1qEYWsVj5ELF0];const real_T
ex_2lOQ_J4Eg_4WEdK8QEWds2=ex_8B7ltUy9RiwsITRZEKL491[n1*n2*(
ex_dYWQAHvQodwoJxkVJbvZO2-1)+ex_SmSSPSQfR1qEYWsVj5ELF0];if(
ex_xVJyoK3_zCEvg7tMJpsHl0){out[ex_SmSSPSQfR1qEYWsVj5ELF0]=(
ex_2lOQ_J4Eg_4WEdK8QEWds2-ex_R7GeHlROOcMcs_D8xOULH_)/(
ex_INFh9oCMwF1cYY_NM_qI6_-ex_tTtxUlYB91DFoEeDuWMX42);}else{const real_T
ex_2uBQKmJh8fN996cwNJ9xZ2=(ex_vKct5bj2VVv2h_QlqkYJ__-ex_tTtxUlYB91DFoEeDuWMX42
)/(ex_INFh9oCMwF1cYY_NM_qI6_-ex_tTtxUlYB91DFoEeDuWMX42);out[
ex_SmSSPSQfR1qEYWsVj5ELF0]=(ex_R7GeHlROOcMcs_D8xOULH_+
ex_2uBQKmJh8fN996cwNJ9xZ2*(ex_2lOQ_J4Eg_4WEdK8QEWds2-ex_R7GeHlROOcMcs_D8xOULH_
));}}}void tlu_simrf_F(real_T*out,const real_T*freqs,const real_T*ys,const
real_T*ex_fTSMkiBbL1SVd6HrBLoO61,const size_t*dims){const size_t n1=dims[0];
const size_t n2=dims[1];const size_t ex_aaoxK9WbdAx5eZJ1nk8lT_=dims[2];const
real_T freq= *ex_fTSMkiBbL1SVd6HrBLoO61;const size_t ex_dYWQAHvQodwoJxkVJbvZO2
=ex_L5fur6LFRji_Faer_7yzJ1(freq,freqs,ex_aaoxK9WbdAx5eZJ1nk8lT_);if(
ex_dYWQAHvQodwoJxkVJbvZO2>=ex_aaoxK9WbdAx5eZJ1nk8lT_+1){size_t
ex_SmSSPSQfR1qEYWsVj5ELF0;for(ex_SmSSPSQfR1qEYWsVj5ELF0=0;
ex_SmSSPSQfR1qEYWsVj5ELF0<n1*n2;++ex_SmSSPSQfR1qEYWsVj5ELF0){out[
ex_SmSSPSQfR1qEYWsVj5ELF0]=ys[n1*n2*(ex_aaoxK9WbdAx5eZJ1nk8lT_-1)+
ex_SmSSPSQfR1qEYWsVj5ELF0];}}else if(ex_dYWQAHvQodwoJxkVJbvZO2<=1){size_t
ex_SmSSPSQfR1qEYWsVj5ELF0;for(ex_SmSSPSQfR1qEYWsVj5ELF0=0;
ex_SmSSPSQfR1qEYWsVj5ELF0<n1*n2;++ex_SmSSPSQfR1qEYWsVj5ELF0){out[
ex_SmSSPSQfR1qEYWsVj5ELF0]=ys[ex_SmSSPSQfR1qEYWsVj5ELF0];}}else{
ex_h9PBDMihcYS7CWc28W2Hk2(freqs,ys,dims,ex_dYWQAHvQodwoJxkVJbvZO2,freq,false,
out);}}void tlu_simrf_F_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){real_T*out=(real_T*)
ex_JC14Uma4n_uWFYyh6wmkX2;const real_T*freqs=(const real_T*)((const void*const
*)ex_8Knj_sbNPYaamO7zB0XjK0)[0];const real_T*ys=(const real_T*)((const void*
const*)ex_8Knj_sbNPYaamO7zB0XjK0)[1];const real_T*freq=(const real_T*)((const
void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[2];const size_t*dims=(const size_t*)((
const void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[3];tlu_simrf_F(out,freqs,ys,freq,
dims);}void tlu_simrf_DF(real_T*out,const real_T*freqs,const real_T*ys,const
real_T*ex_fTSMkiBbL1SVd6HrBLoO61,const size_t*dims){const size_t n1=dims[0];
const size_t n2=dims[1];const size_t ex_aaoxK9WbdAx5eZJ1nk8lT_=dims[2];const
real_T freq= *ex_fTSMkiBbL1SVd6HrBLoO61;const size_t ex_dYWQAHvQodwoJxkVJbvZO2
=ex_L5fur6LFRji_Faer_7yzJ1(freq,freqs,ex_aaoxK9WbdAx5eZJ1nk8lT_);if((
ex_dYWQAHvQodwoJxkVJbvZO2>=ex_aaoxK9WbdAx5eZJ1nk8lT_+1)||(
ex_dYWQAHvQodwoJxkVJbvZO2<=1)){size_t ex_SmSSPSQfR1qEYWsVj5ELF0;for(
ex_SmSSPSQfR1qEYWsVj5ELF0=0;ex_SmSSPSQfR1qEYWsVj5ELF0<n1*n2;++
ex_SmSSPSQfR1qEYWsVj5ELF0){out[ex_SmSSPSQfR1qEYWsVj5ELF0]=0.0;}}else{
ex_h9PBDMihcYS7CWc28W2Hk2(freqs,ys,dims,ex_dYWQAHvQodwoJxkVJbvZO2,freq,true,
out);}}void tlu_simrf_DF_custom_function_(PMValue ex_JC14Uma4n_uWFYyh6wmkX2,
ConstPMValue ex_8Knj_sbNPYaamO7zB0XjK0){real_T*out=(real_T*)
ex_JC14Uma4n_uWFYyh6wmkX2;const real_T*freqs=(const real_T*)((const void*const
*)ex_8Knj_sbNPYaamO7zB0XjK0)[0];const real_T*ys=(const real_T*)((const void*
const*)ex_8Knj_sbNPYaamO7zB0XjK0)[1];const real_T*freq=(const real_T*)((const
void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[2];const size_t*dims=(const size_t*)((
const void*const*)ex_8Knj_sbNPYaamO7zB0XjK0)[3];tlu_simrf_DF(out,freqs,ys,freq
,dims);}
