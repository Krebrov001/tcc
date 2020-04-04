#include "pm_std.h"
boolean_T pm_math_lin_alg_choleskyFactor(real_T*pm_math__lerGssn0Ru_r3kSOzEmI_
,uint32_T n);void pm_math_lin_alg_choleskySolve(const real_T*
pm_math_gzASVCMt38HYDpND3My9f_,const real_T*b,uint32_T n,real_T*x,real_T*
pm_math_9vzhxzKknmyaJetRZA1K51);void pm_math_XJzegwSdpmUltXdthe53i1(const
real_T*pm_math_Ko2UL7FliD3gp_gb0mLQz1,const real_T*b,uint32_T n,boolean_T
pm_math_sVKngqkZdQ1F7IUv4STVE0,real_T*x);void pm_math_fZf7B2a2XHIWuXJVD2nsr_(
const real_T*pm_math_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*b,uint32_T n,
boolean_T pm_math_sVKngqkZdQ1F7IUv4STVE0,real_T*x);
#include "math.h"
boolean_T pm_math_lin_alg_choleskyFactor(real_T*pm_math__lerGssn0Ru_r3kSOzEmI_
,uint32_T n){boolean_T pm_math_gd6MvCcYnOaE4WNDSRT041=false;uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;real_T*pm_math_ex6UgoXHcZRhCC4ycVbKo0=
pm_math__lerGssn0Ru_r3kSOzEmI_;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=0;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){uint32_T
pm_math_PIqWtbzrbQqv_KS_31HnE2;real_T pm_math_hCXUd_x6pbKZfXtyKXEw82=0.0;
real_T*pm_math_cELoG4EEGB_bmxNDbz7vS_=pm_math__lerGssn0Ru_r3kSOzEmI_;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=0;pm_math_PIqWtbzrbQqv_KS_31HnE2<
pm_math_OUB2pptsvtdGL_LyqpgOa0;pm_math_PIqWtbzrbQqv_KS_31HnE2++){real_T
pm_math_aoel664zPcTjzpXADn7l40=0.0;{real_T*pm_math_9_yWAFd98YjxIPCHmG5rr0=
pm_math_cELoG4EEGB_bmxNDbz7vS_;real_T*pm_math_Ds0gTsuf_v_EnBO9LqpvK_=
pm_math_ex6UgoXHcZRhCC4ycVbKo0;uint32_T pm_math_McOnlf2mjho3TyMJcqDjp0=
pm_math_PIqWtbzrbQqv_KS_31HnE2;while(pm_math_McOnlf2mjho3TyMJcqDjp0-->0){
pm_math_aoel664zPcTjzpXADn7l40+= *pm_math_9_yWAFd98YjxIPCHmG5rr0++**
pm_math_Ds0gTsuf_v_EnBO9LqpvK_++;}}pm_math_aoel664zPcTjzpXADn7l40=(
pm_math_ex6UgoXHcZRhCC4ycVbKo0[pm_math_PIqWtbzrbQqv_KS_31HnE2]-
pm_math_aoel664zPcTjzpXADn7l40)/pm_math_cELoG4EEGB_bmxNDbz7vS_[
pm_math_PIqWtbzrbQqv_KS_31HnE2];pm_math_ex6UgoXHcZRhCC4ycVbKo0[
pm_math_PIqWtbzrbQqv_KS_31HnE2]=pm_math_aoel664zPcTjzpXADn7l40;
pm_math_cELoG4EEGB_bmxNDbz7vS_[pm_math_OUB2pptsvtdGL_LyqpgOa0]=
pm_math_aoel664zPcTjzpXADn7l40;pm_math_hCXUd_x6pbKZfXtyKXEw82+=
pm_math_aoel664zPcTjzpXADn7l40*pm_math_aoel664zPcTjzpXADn7l40;
pm_math_cELoG4EEGB_bmxNDbz7vS_+=n;}pm_math_hCXUd_x6pbKZfXtyKXEw82=
pm_math_ex6UgoXHcZRhCC4ycVbKo0[pm_math_OUB2pptsvtdGL_LyqpgOa0]-
pm_math_hCXUd_x6pbKZfXtyKXEw82;if(pm_math_hCXUd_x6pbKZfXtyKXEw82<=0.0){return(
pm_math_gd6MvCcYnOaE4WNDSRT041=true);}pm_math_ex6UgoXHcZRhCC4ycVbKo0[
pm_math_OUB2pptsvtdGL_LyqpgOa0]=sqrt(pm_math_hCXUd_x6pbKZfXtyKXEw82);
pm_math_ex6UgoXHcZRhCC4ycVbKo0+=n;}return(pm_math_gd6MvCcYnOaE4WNDSRT041);}
void pm_math_lin_alg_choleskySolve(const real_T*pm_math_H_x9C_RWhh5ee8MQ_IvEz_
,const real_T*b,uint32_T n,real_T*x,real_T*pm_math_9vzhxzKknmyaJetRZA1K51){
pm_math_XJzegwSdpmUltXdthe53i1(pm_math_H_x9C_RWhh5ee8MQ_IvEz_,b,n,false,
pm_math_9vzhxzKknmyaJetRZA1K51);pm_math_fZf7B2a2XHIWuXJVD2nsr_(
pm_math_H_x9C_RWhh5ee8MQ_IvEz_,pm_math_9vzhxzKknmyaJetRZA1K51,n,false,x);}
