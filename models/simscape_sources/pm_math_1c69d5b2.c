#include "pm_std.h"
real_T pm_math__uBIz_L3oXPDeDY_8Osa00(const real_T*
pm_math_ljExW6hRw43Vg4SLQUAvT1,uint32_T n);real_T
pm_math_glUjFuEbnyTmECK_mCxdu1(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,
uint32_T pm_math_gN74BbsU5wqNjkJbC9b672,uint32_T n);real_T
pm_math_piIX7YLiok3TLwEaXGohj_(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,
uint32_T n);real_T pm_math_lin_alg_conditionReciprocal(const real_T*
pm_math_H_x9C_RWhh5ee8MQ_IvEz_,uint32_T n,boolean_T
pm_math__7OyLfBGo_60hGnDytO361,real_T*pm_math_9vzhxzKknmyaJetRZA1K51);
#include "math.h"
real_T pm_math_lin_alg_conditionReciprocal(const real_T*
pm_math_H_x9C_RWhh5ee8MQ_IvEz_,uint32_T n,boolean_T
pm_math__7OyLfBGo_60hGnDytO361,real_T*pm_math_ymVRqwMm7P_3pyMuLrMu22){real_T
pm_math_wuLe0R_tbn9liwFDVziQz_,pm_math_aoel664zPcTjzpXADn7l40,
pm_math_67SQv_75p606wOlfIPVF71,pm_math_hCXUd_x6pbKZfXtyKXEw82,
pm_math_hm7emQBhTzK2H5G2PgOAJ1,pm_math_wgogozEvJERf0_S8WlqBA0,
pm_math_k_YA6tPVgIHsPt4E57d1_1,pm_math_To7_FGfxfKkNsVuaNLGNo2,
pm_math_egnMj4vJWzNz4Ml1cgHew2;real_T*pm_math_zQmmBFzuicMBCxihgHEwU_,*
pm_math_5BK2xR4twnPRhemOAssp5_;const real_T*pm_math_u_NltnI0L6EGNgKRAH_gE_,*
pm_math_tFJqJIVFh2dhVkpU69hId1,*pm_math_JAxY_LK_jK0l6qcmlu85o_;uint32_T
pm_math_PIqWtbzrbQqv_KS_31HnE2;const real_T pm_math_fh_Rp7I7sj_3ED3um3kja0=
pm_math__7OyLfBGo_60hGnDytO361?pm_math_piIX7YLiok3TLwEaXGohj_(
pm_math_H_x9C_RWhh5ee8MQ_IvEz_,n):pm_math_glUjFuEbnyTmECK_mCxdu1(
pm_math_H_x9C_RWhh5ee8MQ_IvEz_,n,n);if(pm_math_fh_Rp7I7sj_3ED3um3kja0==0){
return(0);}pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=n;pm_math_PIqWtbzrbQqv_KS_31HnE2-->0;){*
pm_math_zQmmBFzuicMBCxihgHEwU_++=0.0;}pm_math_wuLe0R_tbn9liwFDVziQz_=1.0;
pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22;
pm_math_u_NltnI0L6EGNgKRAH_gE_=pm_math_H_x9C_RWhh5ee8MQ_IvEz_;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=0;pm_math_PIqWtbzrbQqv_KS_31HnE2<n;
pm_math_PIqWtbzrbQqv_KS_31HnE2++){pm_math_aoel664zPcTjzpXADn7l40= -(*
pm_math_zQmmBFzuicMBCxihgHEwU_);pm_math_wuLe0R_tbn9liwFDVziQz_=(
pm_math_aoel664zPcTjzpXADn7l40>=0)?fabs(pm_math_wuLe0R_tbn9liwFDVziQz_):-fabs(
pm_math_wuLe0R_tbn9liwFDVziQz_);pm_math_aoel664zPcTjzpXADn7l40+=
pm_math_wuLe0R_tbn9liwFDVziQz_;pm_math_67SQv_75p606wOlfIPVF71=fabs(*
pm_math_u_NltnI0L6EGNgKRAH_gE_);if(fabs(pm_math_aoel664zPcTjzpXADn7l40)>
pm_math_67SQv_75p606wOlfIPVF71){pm_math_hCXUd_x6pbKZfXtyKXEw82=
pm_math_67SQv_75p606wOlfIPVF71/fabs(pm_math_aoel664zPcTjzpXADn7l40);
pm_math_5BK2xR4twnPRhemOAssp5_=pm_math_ymVRqwMm7P_3pyMuLrMu22;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=n;
pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*pm_math_5BK2xR4twnPRhemOAssp5_++*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}}pm_math_wuLe0R_tbn9liwFDVziQz_*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}pm_math_wgogozEvJERf0_S8WlqBA0=
pm_math_wuLe0R_tbn9liwFDVziQz_-*pm_math_zQmmBFzuicMBCxihgHEwU_;
pm_math_k_YA6tPVgIHsPt4E57d1_1= -pm_math_wuLe0R_tbn9liwFDVziQz_-*
pm_math_zQmmBFzuicMBCxihgHEwU_;pm_math_hCXUd_x6pbKZfXtyKXEw82=fabs(
pm_math_wgogozEvJERf0_S8WlqBA0);pm_math_hm7emQBhTzK2H5G2PgOAJ1=fabs(
pm_math_k_YA6tPVgIHsPt4E57d1_1);if(pm_math_67SQv_75p606wOlfIPVF71!=0.0){
pm_math_aoel664zPcTjzpXADn7l40= *pm_math_u_NltnI0L6EGNgKRAH_gE_;
pm_math_wgogozEvJERf0_S8WlqBA0/=pm_math_aoel664zPcTjzpXADn7l40;
pm_math_k_YA6tPVgIHsPt4E57d1_1/=pm_math_aoel664zPcTjzpXADn7l40;}else{
pm_math_wgogozEvJERf0_S8WlqBA0=1.0;pm_math_k_YA6tPVgIHsPt4E57d1_1=1.0;}
pm_math_5BK2xR4twnPRhemOAssp5_=pm_math_zQmmBFzuicMBCxihgHEwU_;
pm_math_tFJqJIVFh2dhVkpU69hId1=pm_math_u_NltnI0L6EGNgKRAH_gE_;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=
pm_math_PIqWtbzrbQqv_KS_31HnE2+1;pm_math_OUB2pptsvtdGL_LyqpgOa0<n;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){pm_math_tFJqJIVFh2dhVkpU69hId1+=n;
pm_math_67SQv_75p606wOlfIPVF71= *pm_math_tFJqJIVFh2dhVkpU69hId1;
pm_math_aoel664zPcTjzpXADn7l40=pm_math_k_YA6tPVgIHsPt4E57d1_1*
pm_math_67SQv_75p606wOlfIPVF71+*(++pm_math_5BK2xR4twnPRhemOAssp5_);
pm_math_hm7emQBhTzK2H5G2PgOAJ1+=fabs(pm_math_aoel664zPcTjzpXADn7l40);*
pm_math_5BK2xR4twnPRhemOAssp5_+=pm_math_wgogozEvJERf0_S8WlqBA0*
pm_math_67SQv_75p606wOlfIPVF71;pm_math_hCXUd_x6pbKZfXtyKXEw82+=fabs(*
pm_math_5BK2xR4twnPRhemOAssp5_);}}if((pm_math_PIqWtbzrbQqv_KS_31HnE2+1<n)&&(
pm_math_hCXUd_x6pbKZfXtyKXEw82<pm_math_hm7emQBhTzK2H5G2PgOAJ1)){
pm_math_aoel664zPcTjzpXADn7l40=pm_math_k_YA6tPVgIHsPt4E57d1_1-
pm_math_wgogozEvJERf0_S8WlqBA0;pm_math_wgogozEvJERf0_S8WlqBA0=
pm_math_k_YA6tPVgIHsPt4E57d1_1;pm_math_5BK2xR4twnPRhemOAssp5_=
pm_math_zQmmBFzuicMBCxihgHEwU_;pm_math_tFJqJIVFh2dhVkpU69hId1=
pm_math_u_NltnI0L6EGNgKRAH_gE_;{uint32_T pm_math_OUB2pptsvtdGL_LyqpgOa0;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_PIqWtbzrbQqv_KS_31HnE2+1;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){
pm_math_tFJqJIVFh2dhVkpU69hId1+=n;pm_math_67SQv_75p606wOlfIPVF71= *
pm_math_tFJqJIVFh2dhVkpU69hId1;*(++pm_math_5BK2xR4twnPRhemOAssp5_)+=
pm_math_aoel664zPcTjzpXADn7l40*pm_math_67SQv_75p606wOlfIPVF71;}}}*
pm_math_zQmmBFzuicMBCxihgHEwU_++=pm_math_wgogozEvJERf0_S8WlqBA0;
pm_math_u_NltnI0L6EGNgKRAH_gE_+=n+1;}pm_math_hCXUd_x6pbKZfXtyKXEw82=
pm_math__uBIz_L3oXPDeDY_8Osa00(pm_math_ymVRqwMm7P_3pyMuLrMu22,n);
pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/pm_math_hCXUd_x6pbKZfXtyKXEw82;
pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=n;pm_math_PIqWtbzrbQqv_KS_31HnE2-->0;){*
pm_math_zQmmBFzuicMBCxihgHEwU_++*=pm_math_hCXUd_x6pbKZfXtyKXEw82;}
pm_math_To7_FGfxfKkNsVuaNLGNo2=1.0;if(!pm_math__7OyLfBGo_60hGnDytO361){
pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22+n-1;
pm_math_u_NltnI0L6EGNgKRAH_gE_=pm_math_H_x9C_RWhh5ee8MQ_IvEz_+n*n-1;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=n-1;pm_math_PIqWtbzrbQqv_KS_31HnE2!=(uint32_T)-
1;pm_math_PIqWtbzrbQqv_KS_31HnE2--){if(pm_math_PIqWtbzrbQqv_KS_31HnE2<n-1){
pm_math_5BK2xR4twnPRhemOAssp5_=pm_math_zQmmBFzuicMBCxihgHEwU_;
pm_math_JAxY_LK_jK0l6qcmlu85o_=pm_math_u_NltnI0L6EGNgKRAH_gE_;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=
pm_math_PIqWtbzrbQqv_KS_31HnE2+1;pm_math_OUB2pptsvtdGL_LyqpgOa0<n;
pm_math_OUB2pptsvtdGL_LyqpgOa0++){*pm_math_zQmmBFzuicMBCxihgHEwU_-= *(++
pm_math_JAxY_LK_jK0l6qcmlu85o_)**(++pm_math_5BK2xR4twnPRhemOAssp5_);}}}if(fabs
(*pm_math_zQmmBFzuicMBCxihgHEwU_)>1.0){pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/fabs
(*pm_math_zQmmBFzuicMBCxihgHEwU_);pm_math_5BK2xR4twnPRhemOAssp5_=
pm_math_ymVRqwMm7P_3pyMuLrMu22;{uint32_T pm_math_OUB2pptsvtdGL_LyqpgOa0;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=n;pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*
pm_math_5BK2xR4twnPRhemOAssp5_++*=pm_math_hCXUd_x6pbKZfXtyKXEw82;}}}
pm_math_u_NltnI0L6EGNgKRAH_gE_-=n+1;pm_math_zQmmBFzuicMBCxihgHEwU_--;}
pm_math_hCXUd_x6pbKZfXtyKXEw82=pm_math__uBIz_L3oXPDeDY_8Osa00(
pm_math_ymVRqwMm7P_3pyMuLrMu22,n);pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/
pm_math_hCXUd_x6pbKZfXtyKXEw82;pm_math_zQmmBFzuicMBCxihgHEwU_=
pm_math_ymVRqwMm7P_3pyMuLrMu22;for(pm_math_PIqWtbzrbQqv_KS_31HnE2=n;
pm_math_PIqWtbzrbQqv_KS_31HnE2-->0;){*pm_math_zQmmBFzuicMBCxihgHEwU_++*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}pm_math_zQmmBFzuicMBCxihgHEwU_=
pm_math_ymVRqwMm7P_3pyMuLrMu22;pm_math_u_NltnI0L6EGNgKRAH_gE_=
pm_math_H_x9C_RWhh5ee8MQ_IvEz_;for(pm_math_PIqWtbzrbQqv_KS_31HnE2=0;
pm_math_PIqWtbzrbQqv_KS_31HnE2<n;pm_math_PIqWtbzrbQqv_KS_31HnE2++){if(
pm_math_PIqWtbzrbQqv_KS_31HnE2<n-1){pm_math_5BK2xR4twnPRhemOAssp5_=
pm_math_zQmmBFzuicMBCxihgHEwU_;pm_math_JAxY_LK_jK0l6qcmlu85o_=
pm_math_u_NltnI0L6EGNgKRAH_gE_;{uint32_T pm_math_OUB2pptsvtdGL_LyqpgOa0;for(
pm_math_OUB2pptsvtdGL_LyqpgOa0=pm_math_PIqWtbzrbQqv_KS_31HnE2+1;
pm_math_OUB2pptsvtdGL_LyqpgOa0<n;pm_math_OUB2pptsvtdGL_LyqpgOa0++){*(++
pm_math_5BK2xR4twnPRhemOAssp5_)-= *pm_math_zQmmBFzuicMBCxihgHEwU_**(++
pm_math_JAxY_LK_jK0l6qcmlu85o_);}}}if(fabs(*pm_math_zQmmBFzuicMBCxihgHEwU_)>
1.0){pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/fabs(*pm_math_zQmmBFzuicMBCxihgHEwU_);
pm_math_5BK2xR4twnPRhemOAssp5_=pm_math_ymVRqwMm7P_3pyMuLrMu22;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=n;
pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*pm_math_5BK2xR4twnPRhemOAssp5_++*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}}pm_math_To7_FGfxfKkNsVuaNLGNo2*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}pm_math_u_NltnI0L6EGNgKRAH_gE_+=n+1;
pm_math_zQmmBFzuicMBCxihgHEwU_++;}pm_math_hCXUd_x6pbKZfXtyKXEw82=
pm_math__uBIz_L3oXPDeDY_8Osa00(pm_math_ymVRqwMm7P_3pyMuLrMu22,n);
pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/pm_math_hCXUd_x6pbKZfXtyKXEw82;
pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22;for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=n;pm_math_PIqWtbzrbQqv_KS_31HnE2-->0;){*
pm_math_zQmmBFzuicMBCxihgHEwU_++*=pm_math_hCXUd_x6pbKZfXtyKXEw82;}
pm_math_To7_FGfxfKkNsVuaNLGNo2*=pm_math_hCXUd_x6pbKZfXtyKXEw82;}
pm_math_zQmmBFzuicMBCxihgHEwU_=pm_math_ymVRqwMm7P_3pyMuLrMu22+n-1;
pm_math_u_NltnI0L6EGNgKRAH_gE_=pm_math_H_x9C_RWhh5ee8MQ_IvEz_+(n-1)*(n+1);for(
pm_math_PIqWtbzrbQqv_KS_31HnE2=n-1;pm_math_PIqWtbzrbQqv_KS_31HnE2!=(uint32_T)-
1;pm_math_PIqWtbzrbQqv_KS_31HnE2--){pm_math_aoel664zPcTjzpXADn7l40=fabs(*
pm_math_u_NltnI0L6EGNgKRAH_gE_);pm_math_67SQv_75p606wOlfIPVF71=fabs(*
pm_math_zQmmBFzuicMBCxihgHEwU_);if(pm_math_67SQv_75p606wOlfIPVF71>
pm_math_aoel664zPcTjzpXADn7l40){pm_math_hCXUd_x6pbKZfXtyKXEw82=
pm_math_aoel664zPcTjzpXADn7l40/pm_math_67SQv_75p606wOlfIPVF71;
pm_math_5BK2xR4twnPRhemOAssp5_=pm_math_ymVRqwMm7P_3pyMuLrMu22;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=n;
pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*pm_math_5BK2xR4twnPRhemOAssp5_++*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}}pm_math_To7_FGfxfKkNsVuaNLGNo2*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;}if(pm_math_aoel664zPcTjzpXADn7l40==0.0){*
pm_math_zQmmBFzuicMBCxihgHEwU_=1.0;}else{*pm_math_zQmmBFzuicMBCxihgHEwU_/= *
pm_math_u_NltnI0L6EGNgKRAH_gE_;}pm_math_aoel664zPcTjzpXADn7l40= -(*
pm_math_zQmmBFzuicMBCxihgHEwU_--);pm_math_5BK2xR4twnPRhemOAssp5_=
pm_math_ymVRqwMm7P_3pyMuLrMu22;pm_math_JAxY_LK_jK0l6qcmlu85o_=
pm_math_u_NltnI0L6EGNgKRAH_gE_-pm_math_PIqWtbzrbQqv_KS_31HnE2;{uint32_T
pm_math_OUB2pptsvtdGL_LyqpgOa0;for(pm_math_OUB2pptsvtdGL_LyqpgOa0=
pm_math_PIqWtbzrbQqv_KS_31HnE2;pm_math_OUB2pptsvtdGL_LyqpgOa0-->0;){*
pm_math_5BK2xR4twnPRhemOAssp5_++ += *pm_math_JAxY_LK_jK0l6qcmlu85o_++*
pm_math_aoel664zPcTjzpXADn7l40;}}pm_math_u_NltnI0L6EGNgKRAH_gE_-=n+1;}
pm_math_hCXUd_x6pbKZfXtyKXEw82=pm_math__uBIz_L3oXPDeDY_8Osa00(
pm_math_ymVRqwMm7P_3pyMuLrMu22,n);pm_math_hCXUd_x6pbKZfXtyKXEw82=1.0/
pm_math_hCXUd_x6pbKZfXtyKXEw82;pm_math_To7_FGfxfKkNsVuaNLGNo2*=
pm_math_hCXUd_x6pbKZfXtyKXEw82;pm_math_egnMj4vJWzNz4Ml1cgHew2=
pm_math_To7_FGfxfKkNsVuaNLGNo2/pm_math_fh_Rp7I7sj_3ED3um3kja0;return(
pm_math_egnMj4vJWzNz4Ml1cgHew2);}
