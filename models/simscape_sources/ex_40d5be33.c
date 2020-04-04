#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
size_t ex_XgFqE_qWosDa601lsTn6b1(const real_T*x,const size_t n,const real_T t)
;void ex_58tHK_FJLrTVg5pTR2KLX0(real_T*ex__lerGssn0Ru_r3kSOzEmI_,const size_t
n1,const size_t n2,const size_t n3,const size_t n4,const size_t
ex_G5C_Yq8nLf6PL2EMNiFAc1,const size_t ex_KTkrfjRMBsZjPvzwkIouc_,const size_t
ex_x_teXoaz0hlS1RzJxhHla0,const size_t ex_fo8lU9fQuflzUTvG3MoQ51);void
ex_kxquG9pkEjt4fXtMQOsqG2(real_T*x,real_T*f,const size_t n);void
ex_nC4jUddYFsKRLzFkVBm3G0(real_T*x1,real_T*x2,real_T*f,const size_t n1,const
size_t n2);void ex_p_64ouPbD9bddOkoAZOpZ1(real_T*x1,real_T*x2,real_T*x3,real_T
*f,const size_t n1,const size_t n2,const size_t n3);void
ex_5NKaAbmUyQr1tleeDl4Vc2(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,
const size_t n1,const size_t n2,const size_t n3,const size_t n4);size_t
ex_ia6STLGqo9aFeiYN0gcmB_(real_T*H,real_T*G,size_t*numEdges,const real_T*x,
const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_1YXwEl8_6cUeYGB_i0l0p2);
#include "lang_std.h"
#include "string.h"
static void ex_1X7KE4oJfXSn_un293DVv1(real_T*fi,const real_T*H1,const real_T*
G1,const size_t*numEdges1,const size_t*bin1,const real_T*H2,const real_T*G2,
const size_t*numEdges2,const size_t*bin2,const real_T*f,const boolean_T*mode1,
const boolean_T*mode2,const size_t*n1,const size_t*n2,const boolean_T
ex_XPTig2EtwH6R7_NgNRUTK0,const boolean_T ex_Qmu676yE9oxL758xSv1lO1);static
void ex_HsJJykQUGNbhapEqWswDC1(real_T*x1,real_T*x2,real_T*f,real_T*bv1,real_T*
bv2,const real_T*x1s,const real_T*x2s,const real_T*fs,const size_t n1,const
size_t n2);void tlu2_2d_linear_nearest_process(real_T*x1,real_T*x2,real_T*f,
real_T*bv1,real_T*bv2,const real_T*x1s,const real_T*x2s,const real_T*fs,const
size_t*n1,const size_t*n2){ex_HsJJykQUGNbhapEqWswDC1(x1,x2,f,bv1,bv2,x1s,x2s,
fs,*n1,*n2);}void tlu2_2d_linear_nearest_process_custom_function_(void*out,
const void*in){const real_T*x1s=(const real_T*)((const void*const*)in)[0];
const real_T*x2s=(const real_T*)((const void*const*)in)[1];const real_T*fs=(
const real_T*)((const void*const*)in)[2];const size_t*n1=(const size_t*)((
const void*const*)in)[3];const size_t*n2=(const size_t*)((const void*const*)in
)[4];real_T*x1=(real_T*)((void**)out)[0];real_T*x2=(real_T*)((void**)out)[1];
real_T*f=(real_T*)((void**)out)[2];real_T*bv1=(real_T*)((void**)out)[3];real_T
*bv2=(real_T*)((void**)out)[4];tlu2_2d_linear_nearest_process(x1,x2,f,bv1,bv2,
x1s,x2s,fs,n1,n2);}void tlu2_2d_linear_linear_process(real_T*x1,real_T*x2,
real_T*f,real_T*bv1,real_T*bv2,const real_T*x1s,const real_T*x2s,const real_T*
fs,const size_t*n1,const size_t*n2){ex_HsJJykQUGNbhapEqWswDC1(x1,x2,f,bv1,bv2,
x1s,x2s,fs,*n1,*n2);}void tlu2_2d_linear_linear_process_custom_function_(void*
out,const void*in){const real_T*x1s=(const real_T*)((const void*const*)in)[0];
const real_T*x2s=(const real_T*)((const void*const*)in)[1];const real_T*fs=(
const real_T*)((const void*const*)in)[2];const size_t*n1=(const size_t*)((
const void*const*)in)[3];const size_t*n2=(const size_t*)((const void*const*)in
)[4];real_T*x1=(real_T*)((void**)out)[0];real_T*x2=(real_T*)((void**)out)[1];
real_T*f=(real_T*)((void**)out)[2];real_T*bv1=(real_T*)((void**)out)[3];real_T
*bv2=(real_T*)((void**)out)[4];tlu2_2d_linear_linear_process(x1,x2,f,bv1,bv2,
x1s,x2s,fs,n1,n2);}static void ex_HsJJykQUGNbhapEqWswDC1(real_T*x1,real_T*x2,
real_T*f,real_T*bv1,real_T*bv2,const real_T*x1s,const real_T*x2s,const real_T*
fs,const size_t n1,const size_t n2){const size_t n=n1*n2;memcpy(x1,x1s,n1*
sizeof(real_T));memcpy(x2,x2s,n2*sizeof(real_T));memcpy(f,fs,n*sizeof(real_T))
;ex_nC4jUddYFsKRLzFkVBm3G0(x1,x2,f,n1,n2);bv1[0]=x1[0];bv1[1]=x1[n1-1];bv2[0]=
x2[0];bv2[1]=x2[n2-1];}void tlu2_2d_linear_nearest_value(real_T*fi,const real_T
*H1,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const real_T*H2,
const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T*f,const
boolean_T*mode1,const boolean_T*mode2,const size_t*n1,const size_t*n2){
ex_1X7KE4oJfXSn_un293DVv1(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,mode1
,mode2,n1,n2,false,false);}void tlu2_2d_linear_nearest_value_custom_function_(
void*out,const void*in){const real_T*H1=(const real_T*)((const void*const*)in)
[0];const real_T*G1=(const real_T*)((const void*const*)in)[1];const size_t*
numEdges1=(const size_t*)((const void*const*)in)[2];const size_t*bin1=(const
size_t*)((const void*const*)in)[3];const real_T*H2=(const real_T*)((const void
*const*)in)[4];const real_T*G2=(const real_T*)((const void*const*)in)[5];const
size_t*numEdges2=(const size_t*)((const void*const*)in)[6];const size_t*bin2=(
const size_t*)((const void*const*)in)[7];const real_T*f=(const real_T*)((const
void*const*)in)[8];const boolean_T*mode1=(const boolean_T*)((const void*const*
)in)[9];const boolean_T*mode2=(const boolean_T*)((const void*const*)in)[10];
const size_t*n1=(const size_t*)((const void*const*)in)[11];const size_t*n2=(
const size_t*)((const void*const*)in)[12];real_T*fi=(real_T*)out;
tlu2_2d_linear_nearest_value(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,
mode1,mode2,n1,n2);}void tlu2_2d_linear_linear_value(real_T*fi,const real_T*H1
,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const real_T*H2,
const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T*f,const
boolean_T*mode1,const boolean_T*mode2,const size_t*n1,const size_t*n2){
ex_1X7KE4oJfXSn_un293DVv1(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,mode1
,mode2,n1,n2,true,false);}void tlu2_2d_linear_linear_value_custom_function_(
void*out,const void*in){const real_T*H1=(const real_T*)((const void*const*)in)
[0];const real_T*G1=(const real_T*)((const void*const*)in)[1];const size_t*
numEdges1=(const size_t*)((const void*const*)in)[2];const size_t*bin1=(const
size_t*)((const void*const*)in)[3];const real_T*H2=(const real_T*)((const void
*const*)in)[4];const real_T*G2=(const real_T*)((const void*const*)in)[5];const
size_t*numEdges2=(const size_t*)((const void*const*)in)[6];const size_t*bin2=(
const size_t*)((const void*const*)in)[7];const real_T*f=(const real_T*)((const
void*const*)in)[8];const boolean_T*mode1=(const boolean_T*)((const void*const*
)in)[9];const boolean_T*mode2=(const boolean_T*)((const void*const*)in)[10];
const size_t*n1=(const size_t*)((const void*const*)in)[11];const size_t*n2=(
const size_t*)((const void*const*)in)[12];real_T*fi=(real_T*)out;
tlu2_2d_linear_linear_value(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,
mode1,mode2,n1,n2);}void tlu2_2d_linear_nearest_derivatives(real_T*fi,const
real_T*H1,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const real_T
*H2,const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T*f,
const boolean_T*mode1,const boolean_T*mode2,const size_t*n1,const size_t*n2){
ex_1X7KE4oJfXSn_un293DVv1(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,mode1
,mode2,n1,n2,false,true);}void
tlu2_2d_linear_nearest_derivatives_custom_function_(void*out,const void*in){
const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(
const real_T*)((const void*const*)in)[1];const size_t*numEdges1=(const size_t*
)((const void*const*)in)[2];const size_t*bin1=(const size_t*)((const void*
const*)in)[3];const real_T*H2=(const real_T*)((const void*const*)in)[4];const
real_T*G2=(const real_T*)((const void*const*)in)[5];const size_t*numEdges2=(
const size_t*)((const void*const*)in)[6];const size_t*bin2=(const size_t*)((
const void*const*)in)[7];const real_T*f=(const real_T*)((const void*const*)in)
[8];const boolean_T*mode1=(const boolean_T*)((const void*const*)in)[9];const
boolean_T*mode2=(const boolean_T*)((const void*const*)in)[10];const size_t*n1=
(const size_t*)((const void*const*)in)[11];const size_t*n2=(const size_t*)((
const void*const*)in)[12];real_T*fi=(real_T*)out;
tlu2_2d_linear_nearest_derivatives(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,
bin2,f,mode1,mode2,n1,n2);}void tlu2_2d_linear_linear_derivatives(real_T*fi,
const real_T*H1,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const
real_T*H2,const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T
*f,const boolean_T*mode1,const boolean_T*mode2,const size_t*n1,const size_t*n2
){ex_1X7KE4oJfXSn_un293DVv1(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,f,
mode1,mode2,n1,n2,true,true);}void
tlu2_2d_linear_linear_derivatives_custom_function_(void*out,const void*in){
const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(
const real_T*)((const void*const*)in)[1];const size_t*numEdges1=(const size_t*
)((const void*const*)in)[2];const size_t*bin1=(const size_t*)((const void*
const*)in)[3];const real_T*H2=(const real_T*)((const void*const*)in)[4];const
real_T*G2=(const real_T*)((const void*const*)in)[5];const size_t*numEdges2=(
const size_t*)((const void*const*)in)[6];const size_t*bin2=(const size_t*)((
const void*const*)in)[7];const real_T*f=(const real_T*)((const void*const*)in)
[8];const boolean_T*mode1=(const boolean_T*)((const void*const*)in)[9];const
boolean_T*mode2=(const boolean_T*)((const void*const*)in)[10];const size_t*n1=
(const size_t*)((const void*const*)in)[11];const size_t*n2=(const size_t*)((
const void*const*)in)[12];real_T*fi=(real_T*)out;
tlu2_2d_linear_linear_derivatives(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2
,f,mode1,mode2,n1,n2);}static void ex_1X7KE4oJfXSn_un293DVv1(real_T*fi,const
real_T*H1,const real_T*G1,const size_t*ex_uKkFSkgeyrLLsE4_QaCHz2,const size_t*
ex_TLD86yw1_uzOWQZ_xODU41,const real_T*H2,const real_T*G2,const size_t*
ex_FxMO1PEpgiyDmHyNzql4c0,const size_t*ex_rpLZ0PHV24Nld7ZZDKKnM1,const real_T*
f,const boolean_T*mode1,const boolean_T*mode2,const size_t*
ex_4oLMdqgndOv3ORJ6iGRvh1,const size_t*ex_kDyljgJucJCk5zEUSySgd0,const
boolean_T ex_1YXwEl8_6cUeYGB_i0l0p2,const boolean_T ex_Qmu676yE9oxL758xSv1lO1)
{const size_t n1= *ex_4oLMdqgndOv3ORJ6iGRvh1;const size_t n2= *
ex_kDyljgJucJCk5zEUSySgd0;size_t numEdges1= *ex_uKkFSkgeyrLLsE4_QaCHz2;size_t
numEdges2= *ex_FxMO1PEpgiyDmHyNzql4c0;size_t bin1= *ex_TLD86yw1_uzOWQZ_xODU41;
size_t bin2= *ex_rpLZ0PHV24Nld7ZZDKKnM1;size_t bin=bin1+n1*bin2;size_t
ex__VPpmCt_TuqLdOtTsmwgk2,ex_947YwtWZMq1Crv_q1N3191;size_t
ex_vJNTlzCToBxcUvOWkhNhd0,ex_EIf_lwUWE1bdKMrfR2M1P1;fi[0]=0.0;if(
ex_Qmu676yE9oxL758xSv1lO1){fi[1]=0.0;}for(ex_947YwtWZMq1Crv_q1N3191=0;
ex_947YwtWZMq1Crv_q1N3191<numEdges2;++ex_947YwtWZMq1Crv_q1N3191){
ex_EIf_lwUWE1bdKMrfR2M1P1=n1*ex_947YwtWZMq1Crv_q1N3191+bin;for(
ex__VPpmCt_TuqLdOtTsmwgk2=0;ex__VPpmCt_TuqLdOtTsmwgk2<numEdges1;++
ex__VPpmCt_TuqLdOtTsmwgk2){ex_vJNTlzCToBxcUvOWkhNhd0=ex__VPpmCt_TuqLdOtTsmwgk2
+ex_EIf_lwUWE1bdKMrfR2M1P1;if(ex_Qmu676yE9oxL758xSv1lO1){fi[0]+=f[
ex_vJNTlzCToBxcUvOWkhNhd0]*G1[ex__VPpmCt_TuqLdOtTsmwgk2]*H2[
ex_947YwtWZMq1Crv_q1N3191];fi[1]+=f[ex_vJNTlzCToBxcUvOWkhNhd0]*H1[
ex__VPpmCt_TuqLdOtTsmwgk2]*G2[ex_947YwtWZMq1Crv_q1N3191];}else{fi[0]+=f[
ex_vJNTlzCToBxcUvOWkhNhd0]*H1[ex__VPpmCt_TuqLdOtTsmwgk2]*H2[
ex_947YwtWZMq1Crv_q1N3191];}}}}
