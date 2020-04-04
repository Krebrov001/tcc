#include "pm_std.h"
#include "pm_std.h"
size_t ssc_sli_7WYRMCbWdtkXE2UOEYCd90(const PmSparsityPattern*
mc_3fmwBoA2gfKGlaDfp8GCd1,const PmRealVector*x,size_t
ssc_sli_qo1FbMg90wtuDRBIUjQ2O_);
#include "mc_std.h"
const McLinearAlgebraFactory*ssc_sli_sDHUnxPZZ9eRygcM3c_BT_(size_t
ssc_sli_wpM2BH4ZgIGett_8VFoUR_);
#include "pm_std.h"
#include "mc_std.h"
#include "limits.h"
size_t ssc_sli_7WYRMCbWdtkXE2UOEYCd90(const PmSparsityPattern*
mc_3fmwBoA2gfKGlaDfp8GCd1,const PmRealVector*x,size_t
ssc_sli_qo1FbMg90wtuDRBIUjQ2O_){const McLinearAlgebraFactory*
mc_IFLsc44TYoaqZhNVj794Q0=ssc_sli_sDHUnxPZZ9eRygcM3c_BT_(
mc_3fmwBoA2gfKGlaDfp8GCd1->mNumCol);McLinearAlgebra*
ssc_sli_hWAHcsuAg4VvIe1q1qkLx0=NULL;int32_T ssc_sli_G9Ug5Uhj979D3_dBSwlTW0=
mc_IFLsc44TYoaqZhNVj794Q0->mCreateLinearAlgebra(mc_IFLsc44TYoaqZhNVj794Q0,&
ssc_sli_hWAHcsuAg4VvIe1q1qkLx0,mc_3fmwBoA2gfKGlaDfp8GCd1);size_t
mc_cPpFNNxfnE9grx4hesF5K_=0;;ssc_sli_G9Ug5Uhj979D3_dBSwlTW0=
ssc_sli_hWAHcsuAg4VvIe1q1qkLx0->mFactor(ssc_sli_hWAHcsuAg4VvIe1q1qkLx0,x->mX);
if(ssc_sli_G9Ug5Uhj979D3_dBSwlTW0==MC_LA_OK){const size_t
ssc_sli_NcD22ce8mGNX_aLPQCvfZ1=(size_t)-1;if(ssc_sli_qo1FbMg90wtuDRBIUjQ2O_>
sizeof(size_t)*CHAR_BIT){mc_cPpFNNxfnE9grx4hesF5K_=
ssc_sli_NcD22ce8mGNX_aLPQCvfZ1;}else{size_t ssc_sli_CUEspicsl5UJdOFqu623p0=(
size_t)1<<(ssc_sli_qo1FbMg90wtuDRBIUjQ2O_);size_t
ssc_sli__3dKNcp4A2iiLd6Hdj8sW2=ssc_sli_hWAHcsuAg4VvIe1q1qkLx0->mMemusage(
ssc_sli_hWAHcsuAg4VvIe1q1qkLx0);size_t ssc_sli_F3fe91thI4ugYvju8_FZV0=
ssc_sli_CUEspicsl5UJdOFqu623p0*ssc_sli__3dKNcp4A2iiLd6Hdj8sW2;;if(
ssc_sli_F3fe91thI4ugYvju8_FZV0/ssc_sli__3dKNcp4A2iiLd6Hdj8sW2!=
ssc_sli_CUEspicsl5UJdOFqu623p0){mc_cPpFNNxfnE9grx4hesF5K_=
ssc_sli_NcD22ce8mGNX_aLPQCvfZ1;}else{mc_cPpFNNxfnE9grx4hesF5K_=
ssc_sli_F3fe91thI4ugYvju8_FZV0;}}}else{mc_cPpFNNxfnE9grx4hesF5K_=0;}
ssc_sli_hWAHcsuAg4VvIe1q1qkLx0->mDestructor(ssc_sli_hWAHcsuAg4VvIe1q1qkLx0);
return mc_cPpFNNxfnE9grx4hesF5K_;}
