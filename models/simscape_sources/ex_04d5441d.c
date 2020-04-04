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
static void ex_rweYrcVwoyC1CNGIlXOiH_(real_T*fi,const real_T*H,const real_T*G,
const size_t*numEdges,const size_t*bin,const real_T*f,const boolean_T*mode,
const size_t*n,const boolean_T ex_XPTig2EtwH6R7_NgNRUTK0,const boolean_T
ex_Qmu676yE9oxL758xSv1lO1);static void ex_yHfj6furiKagbUS6IlLsO_(real_T*x,
real_T*f,real_T*bv,const real_T*xs,const real_T*fs,const size_t n);void
tlu2_1d_linear_nearest_process(real_T*x,real_T*f,real_T*bv,const real_T*xs,
const real_T*fs,const size_t*n){ex_yHfj6furiKagbUS6IlLsO_(x,f,bv,xs,fs,*n);}
void tlu2_1d_linear_nearest_process_custom_function_(void*out,const void*in){
const real_T*xs=(const real_T*)((const void*const*)in)[0];const real_T*fs=(
const real_T*)((const void*const*)in)[1];const size_t*n=(const size_t*)((const
void*const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f=(real_T*)((void
**)out)[1];real_T*bv=(real_T*)((void**)out)[2];tlu2_1d_linear_nearest_process(
x,f,bv,xs,fs,n);}void tlu2_1d_linear_linear_process(real_T*x,real_T*f,real_T*
bv,const real_T*xs,const real_T*fs,const size_t*n){ex_yHfj6furiKagbUS6IlLsO_(x
,f,bv,xs,fs,*n);}void tlu2_1d_linear_linear_process_custom_function_(void*out,
const void*in){const real_T*xs=(const real_T*)((const void*const*)in)[0];const
real_T*fs=(const real_T*)((const void*const*)in)[1];const size_t*n=(const
size_t*)((const void*const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f
=(real_T*)((void**)out)[1];real_T*bv=(real_T*)((void**)out)[2];
tlu2_1d_linear_linear_process(x,f,bv,xs,fs,n);}static void
ex_yHfj6furiKagbUS6IlLsO_(real_T*x,real_T*f,real_T*bv,const real_T*xs,const
real_T*fs,const size_t n){memcpy(x,xs,n*sizeof(real_T));memcpy(f,fs,n*sizeof(
real_T));ex_kxquG9pkEjt4fXtMQOsqG2(x,f,n);bv[0]=x[0];bv[1]=x[n-1];}void
tlu2_1d_linear_nearest_value(real_T*fi,const real_T*H,const real_T*G,const
size_t*numEdges,const size_t*bin,const real_T*f,const boolean_T*mode,const
size_t*n){ex_rweYrcVwoyC1CNGIlXOiH_(fi,H,G,numEdges,bin,f,mode,n,false,false);
}void tlu2_1d_linear_nearest_value_custom_function_(void*out,const void*in){
const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const
real_T*)((const void*const*)in)[1];const size_t*numEdges=(const size_t*)((
const void*const*)in)[2];const size_t*bin=(const size_t*)((const void*const*)
in)[3];const real_T*f=(const real_T*)((const void*const*)in)[4];const boolean_T
*mode=(const boolean_T*)((const void*const*)in)[5];const size_t*n=(const size_t
*)((const void*const*)in)[6];real_T*fi=(real_T*)out;
tlu2_1d_linear_nearest_value(fi,H,G,numEdges,bin,f,mode,n);}void
tlu2_1d_linear_linear_value(real_T*fi,const real_T*H,const real_T*G,const
size_t*numEdges,const size_t*bin,const real_T*f,const boolean_T*mode,const
size_t*n){ex_rweYrcVwoyC1CNGIlXOiH_(fi,H,G,numEdges,bin,f,mode,n,true,false);}
void tlu2_1d_linear_linear_value_custom_function_(void*out,const void*in){
const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const
real_T*)((const void*const*)in)[1];const size_t*numEdges=(const size_t*)((
const void*const*)in)[2];const size_t*bin=(const size_t*)((const void*const*)
in)[3];const real_T*f=(const real_T*)((const void*const*)in)[4];const boolean_T
*mode=(const boolean_T*)((const void*const*)in)[5];const size_t*n=(const size_t
*)((const void*const*)in)[6];real_T*fi=(real_T*)out;
tlu2_1d_linear_linear_value(fi,H,G,numEdges,bin,f,mode,n);}void
tlu2_1d_linear_nearest_derivatives(real_T*fi,const real_T*H,const real_T*G,
const size_t*numEdges,const size_t*bin,const real_T*f,const boolean_T*mode,
const size_t*n){ex_rweYrcVwoyC1CNGIlXOiH_(fi,H,G,numEdges,bin,f,mode,n,false,
true);}void tlu2_1d_linear_nearest_derivatives_custom_function_(void*out,const
void*in){const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T
*G=(const real_T*)((const void*const*)in)[1];const size_t*numEdges=(const
size_t*)((const void*const*)in)[2];const size_t*bin=(const size_t*)((const void
*const*)in)[3];const real_T*f=(const real_T*)((const void*const*)in)[4];const
boolean_T*mode=(const boolean_T*)((const void*const*)in)[5];const size_t*n=(
const size_t*)((const void*const*)in)[6];real_T*fi=(real_T*)out;
tlu2_1d_linear_nearest_derivatives(fi,H,G,numEdges,bin,f,mode,n);}void
tlu2_1d_linear_linear_derivatives(real_T*fi,const real_T*H,const real_T*G,
const size_t*numEdges,const size_t*bin,const real_T*f,const boolean_T*mode,
const size_t*n){ex_rweYrcVwoyC1CNGIlXOiH_(fi,H,G,numEdges,bin,f,mode,n,true,
true);}void tlu2_1d_linear_linear_derivatives_custom_function_(void*out,const
void*in){const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T
*G=(const real_T*)((const void*const*)in)[1];const size_t*numEdges=(const
size_t*)((const void*const*)in)[2];const size_t*bin=(const size_t*)((const void
*const*)in)[3];const real_T*f=(const real_T*)((const void*const*)in)[4];const
boolean_T*mode=(const boolean_T*)((const void*const*)in)[5];const size_t*n=(
const size_t*)((const void*const*)in)[6];real_T*fi=(real_T*)out;
tlu2_1d_linear_linear_derivatives(fi,H,G,numEdges,bin,f,mode,n);}static void
ex_rweYrcVwoyC1CNGIlXOiH_(real_T*fi,const real_T*H,const real_T*G,const size_t
*numEdges,const size_t*ex_nojcxOuQdDNrZlkHNs5QX_,const real_T*f,const boolean_T
*mode,const size_t*n,const boolean_T ex_XPTig2EtwH6R7_NgNRUTK0,const boolean_T
ex_Qmu676yE9oxL758xSv1lO1){size_t bin= *ex_nojcxOuQdDNrZlkHNs5QX_;if(
ex_Qmu676yE9oxL758xSv1lO1){if(*numEdges<2){fi[0]=0.0;}else if(f[bin]==f[bin+1]
){fi[0]=0.0;}else{fi[0]=f[bin]*G[0]+f[bin+1]*G[1];}}else{if(*numEdges<2){fi[0]
=f[0];}else if(f[bin]==f[bin+1]){fi[0]=f[bin];}else{fi[0]=f[bin]*H[0]+f[bin+1]
*H[1];}}}
