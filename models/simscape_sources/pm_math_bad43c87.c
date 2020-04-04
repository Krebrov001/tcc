#include "pm_std.h"
#include "string.h"
boolean_T pm_math_lin_alg_solveTriDiagPDSymm(real_T*
pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*pm_math_cSb__hKgWy9Yp3O93FZp22,real_T*b,
const uint32_T n);boolean_T pm_math_lin_alg_solveTriDiagSymm(real_T*
pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*pm_math_cSb__hKgWy9Yp3O93FZp22,real_T*b,
const uint32_T n);boolean_T pm_math_lin_alg_solveTriDiagSymmPer(real_T*
pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*pm_math_cSb__hKgWy9Yp3O93FZp22,double
pm_math_ojAHyVHgbHhAjmJFnG_l31,real_T*b,const uint32_T n,real_T*
pm_math_NnCmJnsXc51VOXM7s0_HH0);boolean_T pm_math_lin_alg_solveTriDiagPDSymm(
real_T*pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*pm_math_cSb__hKgWy9Yp3O93FZp22,
real_T*b,const uint32_T n){uint32_T pm_math_SmSSPSQfR1qEYWsVj5ELF0;real_T
pm_math_aoel664zPcTjzpXADn7l40;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=1;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<n;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){if(
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]==0.0){return
false;}pm_math_aoel664zPcTjzpXADn7l40=pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1];pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]=pm_math_aoel664zPcTjzpXADn7l40/
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1];
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]-=
pm_math_aoel664zPcTjzpXADn7l40*pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1];}for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=1;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<n;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]-=pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]*b[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1];}b[n-1]=
b[n-1]/pm_math_SKHbY6rGfe_c5uusXTSRI1[n-1];for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=
n-1;pm_math_SmSSPSQfR1qEYWsVj5ELF0>=1;pm_math_SmSSPSQfR1qEYWsVj5ELF0--){b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]=b[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]/
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]-
pm_math_cSb__hKgWy9Yp3O93FZp22[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]*b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0];}return true;}boolean_T
pm_math_lin_alg_solveTriDiagSymm(real_T*pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*
pm_math_cSb__hKgWy9Yp3O93FZp22,real_T*b,const uint32_T n){uint32_T
pm_math_SmSSPSQfR1qEYWsVj5ELF0;real_T pm_math_hIEoFLw7u0kzmk3XAwzz51=
pm_math_cSb__hKgWy9Yp3O93FZp22[0];real_T pm_math_QF1YhR_ib5_aShlWed2Ed0=0;
real_T pm_math_36vBhVR7fBuF2XpIRcX3j1;if(pm_math_SKHbY6rGfe_c5uusXTSRI1[0]==
0.0)return false;pm_math_cSb__hKgWy9Yp3O93FZp22[0]=
pm_math_cSb__hKgWy9Yp3O93FZp22[0]/pm_math_SKHbY6rGfe_c5uusXTSRI1[0];b[0]=b[0]/
pm_math_SKHbY6rGfe_c5uusXTSRI1[0];for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=1;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<n-1;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){if(
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]==0.0)return
false;pm_math_QF1YhR_ib5_aShlWed2Ed0=pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0];pm_math_36vBhVR7fBuF2XpIRcX3j1=
pm_math_SKHbY6rGfe_c5uusXTSRI1[pm_math_SmSSPSQfR1qEYWsVj5ELF0]-
pm_math_hIEoFLw7u0kzmk3XAwzz51*pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1];if(pm_math_36vBhVR7fBuF2XpIRcX3j1==0.0)
return false;pm_math_cSb__hKgWy9Yp3O93FZp22[pm_math_SmSSPSQfR1qEYWsVj5ELF0]=
pm_math_cSb__hKgWy9Yp3O93FZp22[pm_math_SmSSPSQfR1qEYWsVj5ELF0]/
pm_math_36vBhVR7fBuF2XpIRcX3j1;b[pm_math_SmSSPSQfR1qEYWsVj5ELF0]=(b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]-pm_math_hIEoFLw7u0kzmk3XAwzz51*b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1])/pm_math_36vBhVR7fBuF2XpIRcX3j1;
pm_math_hIEoFLw7u0kzmk3XAwzz51=pm_math_QF1YhR_ib5_aShlWed2Ed0;}
pm_math_36vBhVR7fBuF2XpIRcX3j1=pm_math_SKHbY6rGfe_c5uusXTSRI1[n-1]-
pm_math_hIEoFLw7u0kzmk3XAwzz51*pm_math_cSb__hKgWy9Yp3O93FZp22[n-2];if(
pm_math_36vBhVR7fBuF2XpIRcX3j1==0.0)return false;b[n-1]=(b[n-1]-
pm_math_hIEoFLw7u0kzmk3XAwzz51*b[n-2])/pm_math_36vBhVR7fBuF2XpIRcX3j1;for(
pm_math_SmSSPSQfR1qEYWsVj5ELF0=n-1;pm_math_SmSSPSQfR1qEYWsVj5ELF0>=1;
pm_math_SmSSPSQfR1qEYWsVj5ELF0--){b[pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]=b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]-pm_math_cSb__hKgWy9Yp3O93FZp22[
pm_math_SmSSPSQfR1qEYWsVj5ELF0-1]*b[pm_math_SmSSPSQfR1qEYWsVj5ELF0];}return
true;}boolean_T pm_math_lin_alg_solveTriDiagSymmPer(real_T*
pm_math_SKHbY6rGfe_c5uusXTSRI1,real_T*pm_math_cSb__hKgWy9Yp3O93FZp22,real_T
pm_math_ojAHyVHgbHhAjmJFnG_l31,real_T*b,const uint32_T n,real_T*
pm_math_NnCmJnsXc51VOXM7s0_HH0){uint32_T pm_math_SmSSPSQfR1qEYWsVj5ELF0;real_T
*pm_math_RckdaD7wZRq_HA4EMEcLV0=pm_math_NnCmJnsXc51VOXM7s0_HH0+2*n;real_T
pm_math_iO3eAMJPYuh__8MnDqiEc0,pm_math_tEz3ejM_w2LaPBzRw_qzJ_,
pm_math_UdIeUCgzmKtmEBSFf8g7U0,pm_math_lQYpFZ50ruqYqT7L1pPDl1,
pm_math_BnBdMfKvoBRj26P7k4_W72,pm_math_mHbu9IYmV2JCxNEFFKeiO2;real_T
pm_math_g12IZeR1QWI_xKcnk40vO1,pm_math_qAQNsjvM0OwpztlvOy4uy2;real_T
pm_math_36vBhVR7fBuF2XpIRcX3j1;pm_math_g12IZeR1QWI_xKcnk40vO1=
pm_math_cSb__hKgWy9Yp3O93FZp22[n-2];pm_math_qAQNsjvM0OwpztlvOy4uy2=
pm_math_ojAHyVHgbHhAjmJFnG_l31;memcpy(pm_math_NnCmJnsXc51VOXM7s0_HH0,
pm_math_SKHbY6rGfe_c5uusXTSRI1,n*sizeof(real_T));memcpy(
pm_math_NnCmJnsXc51VOXM7s0_HH0+n,pm_math_cSb__hKgWy9Yp3O93FZp22,(n-1)*sizeof(
real_T));for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;pm_math_SmSSPSQfR1qEYWsVj5ELF0<n
;pm_math_SmSSPSQfR1qEYWsVj5ELF0++)pm_math_RckdaD7wZRq_HA4EMEcLV0[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]=0.0;pm_math_RckdaD7wZRq_HA4EMEcLV0[0]=
pm_math_ojAHyVHgbHhAjmJFnG_l31;pm_math_RckdaD7wZRq_HA4EMEcLV0[n-2]=
pm_math_cSb__hKgWy9Yp3O93FZp22[n-2];if(!pm_math_lin_alg_solveTriDiagSymm(
pm_math_SKHbY6rGfe_c5uusXTSRI1,pm_math_cSb__hKgWy9Yp3O93FZp22,b,n-1))return
false;if(!pm_math_lin_alg_solveTriDiagSymm(pm_math_NnCmJnsXc51VOXM7s0_HH0,
pm_math_NnCmJnsXc51VOXM7s0_HH0+n,pm_math_RckdaD7wZRq_HA4EMEcLV0,n-1))return
false;pm_math_iO3eAMJPYuh__8MnDqiEc0=b[0];pm_math_tEz3ejM_w2LaPBzRw_qzJ_=b[n-2
];pm_math_UdIeUCgzmKtmEBSFf8g7U0=pm_math_RckdaD7wZRq_HA4EMEcLV0[0];
pm_math_lQYpFZ50ruqYqT7L1pPDl1=pm_math_RckdaD7wZRq_HA4EMEcLV0[n-2];
pm_math_BnBdMfKvoBRj26P7k4_W72=b[n-1];pm_math_36vBhVR7fBuF2XpIRcX3j1=(
pm_math_SKHbY6rGfe_c5uusXTSRI1[n-1]-pm_math_qAQNsjvM0OwpztlvOy4uy2*
pm_math_UdIeUCgzmKtmEBSFf8g7U0-pm_math_g12IZeR1QWI_xKcnk40vO1*
pm_math_lQYpFZ50ruqYqT7L1pPDl1);if(pm_math_36vBhVR7fBuF2XpIRcX3j1==0.0)return
false;pm_math_mHbu9IYmV2JCxNEFFKeiO2=(pm_math_BnBdMfKvoBRj26P7k4_W72-
pm_math_qAQNsjvM0OwpztlvOy4uy2*pm_math_iO3eAMJPYuh__8MnDqiEc0-
pm_math_g12IZeR1QWI_xKcnk40vO1*pm_math_tEz3ejM_w2LaPBzRw_qzJ_)/
pm_math_36vBhVR7fBuF2XpIRcX3j1;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<n-1;pm_math_SmSSPSQfR1qEYWsVj5ELF0++){b[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]-=pm_math_RckdaD7wZRq_HA4EMEcLV0[
pm_math_SmSSPSQfR1qEYWsVj5ELF0]*pm_math_mHbu9IYmV2JCxNEFFKeiO2;}b[n-1]=
pm_math_mHbu9IYmV2JCxNEFFKeiO2;return true;}
