#include "pm_std.h"
#include "string.h"
#include "math.h"
real_T pm_math_dot3(const real_T*pm_math_FaVrGTGC05Bgr7ERlj0Cw_,const real_T*
pm_math_InZYtpFDWs4EGffl0WhwS_);void pm_math_cross3(const real_T*
pm_math_FaVrGTGC05Bgr7ERlj0Cw_,const real_T*pm_math_InZYtpFDWs4EGffl0WhwS_,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void pm_math_Vector3_compOrthogonalBasis
(const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*
pm_math_SmSSPSQfR1qEYWsVj5ELF0,real_T*pm_math_OUB2pptsvtdGL_LyqpgOa0,real_T*
pm_math_PIqWtbzrbQqv_KS_31HnE2);void pm_math_quatCompose(const real_T*
pm_math_E5owhfJKTGQa3cJZ4ja_w2,const real_T*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void pm_math_quatComposeInverse(const
real_T*pm_math_E5owhfJKTGQa3cJZ4ja_w2,const real_T*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void
pm_math_quatInverseCompose(const real_T*pm_math_E5owhfJKTGQa3cJZ4ja_w2,const
real_T*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);
void pm_math_quatXform(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,const real_T
*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void
pm_math_quatInverseXform(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,const
real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);
void pm_math_quatDeriv(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,const real_T
*pm_math_uSitiBryL6HBoqd0Le5uh0,real_T*pm_math_K_l8L38Lj1T2tA_a_IjjR0);void
pm_math_quaternionMatrix3x3Ctor(const real_T*pm_math_Fg5SpbWVWkBjhHm28FAa2_,
real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2);void pm_math_matrix3x3Compose(const
real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,const real_T*
pm_math_GNiY3nuOMj2kn48GTcada2,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void
pm_math_matrix3x3ComposeTranspose(const real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,
const real_T*pm_math_GNiY3nuOMj2kn48GTcada2,real_T*
pm_math_v4k0LG4l9Qk9hEXlOIKML_);void pm_math_matrix3x3TransposeCompose(const
real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,const real_T*
pm_math_GNiY3nuOMj2kn48GTcada2,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void
pm_math_matrix3x3PreCross(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,const
real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);
void pm_math_matrix3x3PostCross(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,
const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*
pm_math_v4k0LG4l9Qk9hEXlOIKML_);void pm_math_matrix3x3Xform(const real_T*
pm_math__lerGssn0Ru_r3kSOzEmI_,const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void pm_math_matrix3x3TransposeXform(
const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,const real_T*
pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_);void
pm_math_matrix3x3MinRotation(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,
real_T*pm_math_Fg5SpbWVWkBjhHm28FAa2_,int pm_math_iUdLtJkuQijenMY73Q8_y_[3]);
real_T pm_math_dot3(const real_T*pm_math_FaVrGTGC05Bgr7ERlj0Cw_,const real_T*
pm_math_InZYtpFDWs4EGffl0WhwS_){return pm_math_FaVrGTGC05Bgr7ERlj0Cw_[0]*
pm_math_InZYtpFDWs4EGffl0WhwS_[0]+pm_math_FaVrGTGC05Bgr7ERlj0Cw_[1]*
pm_math_InZYtpFDWs4EGffl0WhwS_[1]+pm_math_FaVrGTGC05Bgr7ERlj0Cw_[2]*
pm_math_InZYtpFDWs4EGffl0WhwS_[2];}void pm_math_cross3(const real_T*
pm_math_FaVrGTGC05Bgr7ERlj0Cw_,const real_T*pm_math_InZYtpFDWs4EGffl0WhwS_,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_FaVrGTGC05Bgr7ERlj0Cw_[1]*pm_math_InZYtpFDWs4EGffl0WhwS_[2]-
pm_math_FaVrGTGC05Bgr7ERlj0Cw_[2]*pm_math_InZYtpFDWs4EGffl0WhwS_[1];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_FaVrGTGC05Bgr7ERlj0Cw_[2]*
pm_math_InZYtpFDWs4EGffl0WhwS_[0]-pm_math_FaVrGTGC05Bgr7ERlj0Cw_[0]*
pm_math_InZYtpFDWs4EGffl0WhwS_[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math_FaVrGTGC05Bgr7ERlj0Cw_[0]*pm_math_InZYtpFDWs4EGffl0WhwS_[1]-
pm_math_FaVrGTGC05Bgr7ERlj0Cw_[1]*pm_math_InZYtpFDWs4EGffl0WhwS_[0];}static
void pm_math_kZzwhHMy87o5VCyCWY_A_0(const real_T*
pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_oVv_yUB_a146HsxlRVhNW_){const
double pm_math_Kej6rd1coE0BgZanWF0ft0=sqrt(pm_math_ljExW6hRw43Vg4SLQUAvT1[0]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+pm_math_ljExW6hRw43Vg4SLQUAvT1[1]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+pm_math_ljExW6hRw43Vg4SLQUAvT1[2]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]);pm_math_oVv_yUB_a146HsxlRVhNW_[0]=
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]/pm_math_Kej6rd1coE0BgZanWF0ft0;
pm_math_oVv_yUB_a146HsxlRVhNW_[1]=pm_math_ljExW6hRw43Vg4SLQUAvT1[1]/
pm_math_Kej6rd1coE0BgZanWF0ft0;pm_math_oVv_yUB_a146HsxlRVhNW_[2]=
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]/pm_math_Kej6rd1coE0BgZanWF0ft0;}void
pm_math_Vector3_compOrthogonalBasis(const real_T*
pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_SmSSPSQfR1qEYWsVj5ELF0,real_T*
pm_math_OUB2pptsvtdGL_LyqpgOa0,real_T*pm_math_PIqWtbzrbQqv_KS_31HnE2){double
pm_math_CStia_gHBPPiGOpjc7OH51,pm_math_VzvV3TMs3Gs8XMjx9vTqr0,
pm_math_MmxTbhoJMatnloezSdsGJ_;double pm_math_VWz4N3hebsTJlLDN6omdB1[3]={0.0,
0.0,0.0};memcpy(pm_math_PIqWtbzrbQqv_KS_31HnE2,pm_math_ljExW6hRw43Vg4SLQUAvT1,
3*sizeof(double));pm_math_kZzwhHMy87o5VCyCWY_A_0(
pm_math_ljExW6hRw43Vg4SLQUAvT1,pm_math_PIqWtbzrbQqv_KS_31HnE2);
pm_math_CStia_gHBPPiGOpjc7OH51=fabs(pm_math_PIqWtbzrbQqv_KS_31HnE2[0]);
pm_math_VzvV3TMs3Gs8XMjx9vTqr0=fabs(pm_math_PIqWtbzrbQqv_KS_31HnE2[1]);
pm_math_MmxTbhoJMatnloezSdsGJ_=fabs(pm_math_PIqWtbzrbQqv_KS_31HnE2[2]);{const
int pm_math_FImSu0aLKUo9e_uchkWJJ_=(pm_math_CStia_gHBPPiGOpjc7OH51>=
pm_math_VzvV3TMs3Gs8XMjx9vTqr0)?((pm_math_CStia_gHBPPiGOpjc7OH51>
pm_math_MmxTbhoJMatnloezSdsGJ_)?1:0):((pm_math_VzvV3TMs3Gs8XMjx9vTqr0>
pm_math_MmxTbhoJMatnloezSdsGJ_)?2:0);pm_math_VWz4N3hebsTJlLDN6omdB1[
pm_math_FImSu0aLKUo9e_uchkWJJ_]=1.0;}pm_math_cross3(
pm_math_PIqWtbzrbQqv_KS_31HnE2,pm_math_VWz4N3hebsTJlLDN6omdB1,
pm_math_OUB2pptsvtdGL_LyqpgOa0);pm_math_kZzwhHMy87o5VCyCWY_A_0(
pm_math_OUB2pptsvtdGL_LyqpgOa0,pm_math_OUB2pptsvtdGL_LyqpgOa0);pm_math_cross3(
pm_math_OUB2pptsvtdGL_LyqpgOa0,pm_math_PIqWtbzrbQqv_KS_31HnE2,
pm_math_SmSSPSQfR1qEYWsVj5ELF0);pm_math_kZzwhHMy87o5VCyCWY_A_0(
pm_math_SmSSPSQfR1qEYWsVj5ELF0,pm_math_SmSSPSQfR1qEYWsVj5ELF0);}void
pm_math_quatCompose(const real_T*pm_math_E5owhfJKTGQa3cJZ4ja_w2,const real_T*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]-(pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]);*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]-pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1];}void
pm_math_quatComposeInverse(const real_T*pm_math_E5owhfJKTGQa3cJZ4ja_w2,const
real_T*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*-
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]-(pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]);*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]-pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]-pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1];}void
pm_math_quatInverseCompose(const real_T*pm_math_E5owhfJKTGQa3cJZ4ja_w2,const
real_T*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++= -pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]-(pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]);*pm_math_v4k0LG4l9Qk9hEXlOIKML_++= -
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++= -pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1]-pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*
pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3];*pm_math_v4k0LG4l9Qk9hEXlOIKML_= -
pm_math_E5owhfJKTGQa3cJZ4ja_w2[0]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[3]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[3]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[0]+
pm_math_E5owhfJKTGQa3cJZ4ja_w2[1]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[2]-
pm_math_E5owhfJKTGQa3cJZ4ja_w2[2]*pm_math_CJ7Xv8SkTE6DHuQnbEIyO0[1];}void
pm_math_quatXform(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,const real_T*
pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){real_T
pm_math_xsdaMNRSe_0UsHbUQnFas0[3],pm_math_7qsaFnqr0MVOgAdXVGwDD_[3];
pm_math_cross3(pm_math_YR4p0q3_6MaVNwkAzVg4q2+1,pm_math_ljExW6hRw43Vg4SLQUAvT1
,pm_math_xsdaMNRSe_0UsHbUQnFas0);pm_math_cross3(pm_math_YR4p0q3_6MaVNwkAzVg4q2
+1,pm_math_xsdaMNRSe_0UsHbUQnFas0,pm_math_7qsaFnqr0MVOgAdXVGwDD_);*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+2.0*(
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_xsdaMNRSe_0UsHbUQnFas0[0]+
pm_math_7qsaFnqr0MVOgAdXVGwDD_[0]);*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+2.0*(pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*
pm_math_xsdaMNRSe_0UsHbUQnFas0[1]+pm_math_7qsaFnqr0MVOgAdXVGwDD_[1]);*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math_ljExW6hRw43Vg4SLQUAvT1[2]+2.0*(
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_xsdaMNRSe_0UsHbUQnFas0[2]+
pm_math_7qsaFnqr0MVOgAdXVGwDD_[2]);}void pm_math_quatInverseXform(const real_T
*pm_math_YR4p0q3_6MaVNwkAzVg4q2,const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){real_T pm_math_xsdaMNRSe_0UsHbUQnFas0[3
],pm_math_7qsaFnqr0MVOgAdXVGwDD_[3];pm_math_cross3(
pm_math_YR4p0q3_6MaVNwkAzVg4q2+1,pm_math_ljExW6hRw43Vg4SLQUAvT1,
pm_math_xsdaMNRSe_0UsHbUQnFas0);pm_math_cross3(pm_math_YR4p0q3_6MaVNwkAzVg4q2+
1,pm_math_xsdaMNRSe_0UsHbUQnFas0,pm_math_7qsaFnqr0MVOgAdXVGwDD_);*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+2.0*(-
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_xsdaMNRSe_0UsHbUQnFas0[0]+
pm_math_7qsaFnqr0MVOgAdXVGwDD_[0]);*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+2.0*(-pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*
pm_math_xsdaMNRSe_0UsHbUQnFas0[1]+pm_math_7qsaFnqr0MVOgAdXVGwDD_[1]);*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math_ljExW6hRw43Vg4SLQUAvT1[2]+2.0*(-
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_xsdaMNRSe_0UsHbUQnFas0[2]+
pm_math_7qsaFnqr0MVOgAdXVGwDD_[2]);}void pm_math_quatDeriv(const real_T*
pm_math_YR4p0q3_6MaVNwkAzVg4q2,const real_T*pm_math_uSitiBryL6HBoqd0Le5uh0,
real_T*pm_math_K_l8L38Lj1T2tA_a_IjjR0){double pm_math_ihSUXcCSN3LpMRtNk_Jga2[3
];pm_math_ihSUXcCSN3LpMRtNk_Jga2[0]=0.5*pm_math_uSitiBryL6HBoqd0Le5uh0[0];
pm_math_ihSUXcCSN3LpMRtNk_Jga2[1]=0.5*pm_math_uSitiBryL6HBoqd0Le5uh0[1];
pm_math_ihSUXcCSN3LpMRtNk_Jga2[2]=0.5*pm_math_uSitiBryL6HBoqd0Le5uh0[2];*
pm_math_K_l8L38Lj1T2tA_a_IjjR0++= -pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[0]-pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[1]-pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[2];*pm_math_K_l8L38Lj1T2tA_a_IjjR0++= +
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[0]-
pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[1]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[2];*
pm_math_K_l8L38Lj1T2tA_a_IjjR0++= +pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[0]+pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[1]-pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]*
pm_math_ihSUXcCSN3LpMRtNk_Jga2[2];*pm_math_K_l8L38Lj1T2tA_a_IjjR0= -
pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[0]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[1]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_ihSUXcCSN3LpMRtNk_Jga2[2];}void
pm_math_quaternionMatrix3x3Ctor(const real_T*pm_math_Fg5SpbWVWkBjhHm28FAa2_,
real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2){const double
pm_math_l2eCWLVeXvPjnfBmjpOee1=0.25*(pm_math_Fg5SpbWVWkBjhHm28FAa2_[0]+
pm_math_Fg5SpbWVWkBjhHm28FAa2_[4]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[8]+1.0);const
double pm_math_m0Wr1kkIxPOPKk1Y4Kcit0=pm_math_l2eCWLVeXvPjnfBmjpOee1-0.5*(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[4]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[8]);const
double pm_math_Vi3h2N0FhBNf0m4DUq0H61=pm_math_l2eCWLVeXvPjnfBmjpOee1-0.5*(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[8]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[0]);const
double pm_math_wFfTK_3B4hQ2VJUxzNzY_2=pm_math_l2eCWLVeXvPjnfBmjpOee1-0.5*(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[0]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[4]);double
pm_math_MJ6HaMWdyRxHm3p_EZiD41=0.0;const int pm_math_I5MNPp2_vVk1tb_6FESlZ1=(
pm_math_l2eCWLVeXvPjnfBmjpOee1>pm_math_m0Wr1kkIxPOPKk1Y4Kcit0)?((
pm_math_l2eCWLVeXvPjnfBmjpOee1>pm_math_Vi3h2N0FhBNf0m4DUq0H61)?((
pm_math_l2eCWLVeXvPjnfBmjpOee1>pm_math_wFfTK_3B4hQ2VJUxzNzY_2)?0:3):((
pm_math_Vi3h2N0FhBNf0m4DUq0H61>pm_math_wFfTK_3B4hQ2VJUxzNzY_2)?2:3)):((
pm_math_m0Wr1kkIxPOPKk1Y4Kcit0>pm_math_Vi3h2N0FhBNf0m4DUq0H61)?((
pm_math_m0Wr1kkIxPOPKk1Y4Kcit0>pm_math_wFfTK_3B4hQ2VJUxzNzY_2)?1:3):((
pm_math_Vi3h2N0FhBNf0m4DUq0H61>pm_math_wFfTK_3B4hQ2VJUxzNzY_2)?2:3));switch(
pm_math_I5MNPp2_vVk1tb_6FESlZ1){case 0:pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]=sqrt(
pm_math_l2eCWLVeXvPjnfBmjpOee1);pm_math_MJ6HaMWdyRxHm3p_EZiD41=0.25/
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0];pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[7]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[5])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[2]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[6])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[3]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[1])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;break;case 1:pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]=
sqrt(pm_math_m0Wr1kkIxPOPKk1Y4Kcit0);pm_math_MJ6HaMWdyRxHm3p_EZiD41=0.25/
pm_math_YR4p0q3_6MaVNwkAzVg4q2[1];pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[7]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[5])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[1]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[3])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[2]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[6])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;break;case 2:pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]=
sqrt(pm_math_Vi3h2N0FhBNf0m4DUq0H61);pm_math_MJ6HaMWdyRxHm3p_EZiD41=0.25/
pm_math_YR4p0q3_6MaVNwkAzVg4q2[2];pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[2]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[6])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[5]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[7])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[3]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[1])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;break;case 3:pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]=
sqrt(pm_math_wFfTK_3B4hQ2VJUxzNzY_2);pm_math_MJ6HaMWdyRxHm3p_EZiD41=0.25/
pm_math_YR4p0q3_6MaVNwkAzVg4q2[3];pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[3]-pm_math_Fg5SpbWVWkBjhHm28FAa2_[1])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[6]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[2])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]=(
pm_math_Fg5SpbWVWkBjhHm28FAa2_[7]+pm_math_Fg5SpbWVWkBjhHm28FAa2_[5])*
pm_math_MJ6HaMWdyRxHm3p_EZiD41;break;}pm_math_MJ6HaMWdyRxHm3p_EZiD41=1.0/sqrt(
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]*pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]*pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]+
pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]*pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]);
pm_math_YR4p0q3_6MaVNwkAzVg4q2[0]*=pm_math_MJ6HaMWdyRxHm3p_EZiD41;
pm_math_YR4p0q3_6MaVNwkAzVg4q2[1]*=pm_math_MJ6HaMWdyRxHm3p_EZiD41;
pm_math_YR4p0q3_6MaVNwkAzVg4q2[2]*=pm_math_MJ6HaMWdyRxHm3p_EZiD41;
pm_math_YR4p0q3_6MaVNwkAzVg4q2[3]*=pm_math_MJ6HaMWdyRxHm3p_EZiD41;}void
pm_math_matrix3x3Compose(const real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,const
real_T*pm_math_GNiY3nuOMj2kn48GTcada2,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[1]*
pm_math_GNiY3nuOMj2kn48GTcada2[3]+pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[6];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[0]*pm_math_GNiY3nuOMj2kn48GTcada2[1]+
pm_math_ANolICJw1bAzbHfiMh1yR2[1]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[2]*pm_math_GNiY3nuOMj2kn48GTcada2[7];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[2]+pm_math_ANolICJw1bAzbHfiMh1yR2[1]*
pm_math_GNiY3nuOMj2kn48GTcada2[5]+pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[3]*pm_math_GNiY3nuOMj2kn48GTcada2[0]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[3]+
pm_math_ANolICJw1bAzbHfiMh1yR2[5]*pm_math_GNiY3nuOMj2kn48GTcada2[6];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[3]*
pm_math_GNiY3nuOMj2kn48GTcada2[1]+pm_math_ANolICJw1bAzbHfiMh1yR2[4]*
pm_math_GNiY3nuOMj2kn48GTcada2[4]+pm_math_ANolICJw1bAzbHfiMh1yR2[5]*
pm_math_GNiY3nuOMj2kn48GTcada2[7];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[3]*pm_math_GNiY3nuOMj2kn48GTcada2[2]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[5]+
pm_math_ANolICJw1bAzbHfiMh1yR2[5]*pm_math_GNiY3nuOMj2kn48GTcada2[8];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[7]*
pm_math_GNiY3nuOMj2kn48GTcada2[3]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[6];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[6]*pm_math_GNiY3nuOMj2kn48GTcada2[1]+
pm_math_ANolICJw1bAzbHfiMh1yR2[7]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[8]*pm_math_GNiY3nuOMj2kn48GTcada2[7];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[2]+pm_math_ANolICJw1bAzbHfiMh1yR2[7]*
pm_math_GNiY3nuOMj2kn48GTcada2[5]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];}void pm_math_matrix3x3ComposeTranspose(
const real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,const real_T*
pm_math_GNiY3nuOMj2kn48GTcada2,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[1]*
pm_math_GNiY3nuOMj2kn48GTcada2[1]+pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[0]*pm_math_GNiY3nuOMj2kn48GTcada2[3]+
pm_math_ANolICJw1bAzbHfiMh1yR2[1]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[2]*pm_math_GNiY3nuOMj2kn48GTcada2[5];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[6]+pm_math_ANolICJw1bAzbHfiMh1yR2[1]*
pm_math_GNiY3nuOMj2kn48GTcada2[7]+pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[3]*pm_math_GNiY3nuOMj2kn48GTcada2[0]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[1]+
pm_math_ANolICJw1bAzbHfiMh1yR2[5]*pm_math_GNiY3nuOMj2kn48GTcada2[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[3]*
pm_math_GNiY3nuOMj2kn48GTcada2[3]+pm_math_ANolICJw1bAzbHfiMh1yR2[4]*
pm_math_GNiY3nuOMj2kn48GTcada2[4]+pm_math_ANolICJw1bAzbHfiMh1yR2[5]*
pm_math_GNiY3nuOMj2kn48GTcada2[5];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[3]*pm_math_GNiY3nuOMj2kn48GTcada2[6]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[7]+
pm_math_ANolICJw1bAzbHfiMh1yR2[5]*pm_math_GNiY3nuOMj2kn48GTcada2[8];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[7]*
pm_math_GNiY3nuOMj2kn48GTcada2[1]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[6]*pm_math_GNiY3nuOMj2kn48GTcada2[3]+
pm_math_ANolICJw1bAzbHfiMh1yR2[7]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[8]*pm_math_GNiY3nuOMj2kn48GTcada2[5];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[6]+pm_math_ANolICJw1bAzbHfiMh1yR2[7]*
pm_math_GNiY3nuOMj2kn48GTcada2[7]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];}void pm_math_matrix3x3TransposeCompose(
const real_T*pm_math_ANolICJw1bAzbHfiMh1yR2,const real_T*
pm_math_GNiY3nuOMj2kn48GTcada2,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[3]*
pm_math_GNiY3nuOMj2kn48GTcada2[3]+pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[6];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[0]*pm_math_GNiY3nuOMj2kn48GTcada2[1]+
pm_math_ANolICJw1bAzbHfiMh1yR2[3]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[6]*pm_math_GNiY3nuOMj2kn48GTcada2[7];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[0]*
pm_math_GNiY3nuOMj2kn48GTcada2[2]+pm_math_ANolICJw1bAzbHfiMh1yR2[3]*
pm_math_GNiY3nuOMj2kn48GTcada2[5]+pm_math_ANolICJw1bAzbHfiMh1yR2[6]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[1]*pm_math_GNiY3nuOMj2kn48GTcada2[0]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[3]+
pm_math_ANolICJw1bAzbHfiMh1yR2[7]*pm_math_GNiY3nuOMj2kn48GTcada2[6];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[1]*
pm_math_GNiY3nuOMj2kn48GTcada2[1]+pm_math_ANolICJw1bAzbHfiMh1yR2[4]*
pm_math_GNiY3nuOMj2kn48GTcada2[4]+pm_math_ANolICJw1bAzbHfiMh1yR2[7]*
pm_math_GNiY3nuOMj2kn48GTcada2[7];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[1]*pm_math_GNiY3nuOMj2kn48GTcada2[2]+
pm_math_ANolICJw1bAzbHfiMh1yR2[4]*pm_math_GNiY3nuOMj2kn48GTcada2[5]+
pm_math_ANolICJw1bAzbHfiMh1yR2[7]*pm_math_GNiY3nuOMj2kn48GTcada2[8];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[0]+pm_math_ANolICJw1bAzbHfiMh1yR2[5]*
pm_math_GNiY3nuOMj2kn48GTcada2[3]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[6];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math_ANolICJw1bAzbHfiMh1yR2[2]*pm_math_GNiY3nuOMj2kn48GTcada2[1]+
pm_math_ANolICJw1bAzbHfiMh1yR2[5]*pm_math_GNiY3nuOMj2kn48GTcada2[4]+
pm_math_ANolICJw1bAzbHfiMh1yR2[8]*pm_math_GNiY3nuOMj2kn48GTcada2[7];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math_ANolICJw1bAzbHfiMh1yR2[2]*
pm_math_GNiY3nuOMj2kn48GTcada2[2]+pm_math_ANolICJw1bAzbHfiMh1yR2[5]*
pm_math_GNiY3nuOMj2kn48GTcada2[5]+pm_math_ANolICJw1bAzbHfiMh1yR2[8]*
pm_math_GNiY3nuOMj2kn48GTcada2[8];}void pm_math_matrix3x3PreCross(const real_T
*pm_math__lerGssn0Ru_r3kSOzEmI_,const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[6]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-
pm_math__lerGssn0Ru_r3kSOzEmI_[3]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[7]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-pm_math__lerGssn0Ru_r3kSOzEmI_[4]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[8]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-
pm_math__lerGssn0Ru_r3kSOzEmI_[5]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[0]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-pm_math__lerGssn0Ru_r3kSOzEmI_[6]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[1]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-
pm_math__lerGssn0Ru_r3kSOzEmI_[7]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[2]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-pm_math__lerGssn0Ru_r3kSOzEmI_[8]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[3]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-
pm_math__lerGssn0Ru_r3kSOzEmI_[0]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[4]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-pm_math__lerGssn0Ru_r3kSOzEmI_[1]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math__lerGssn0Ru_r3kSOzEmI_[5]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-
pm_math__lerGssn0Ru_r3kSOzEmI_[2]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1];}void
pm_math_matrix3x3PostCross(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,const
real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[1]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-pm_math__lerGssn0Ru_r3kSOzEmI_[2]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[2]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-
pm_math__lerGssn0Ru_r3kSOzEmI_[0]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[0]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-pm_math__lerGssn0Ru_r3kSOzEmI_[1]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[4]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-
pm_math__lerGssn0Ru_r3kSOzEmI_[5]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[5]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-pm_math__lerGssn0Ru_r3kSOzEmI_[3]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[3]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-
pm_math__lerGssn0Ru_r3kSOzEmI_[4]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[7]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2]-pm_math__lerGssn0Ru_r3kSOzEmI_[8]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1];*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[8]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]-
pm_math__lerGssn0Ru_r3kSOzEmI_[6]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_=pm_math__lerGssn0Ru_r3kSOzEmI_[6]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]-pm_math__lerGssn0Ru_r3kSOzEmI_[7]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0];}void pm_math_matrix3x3Xform(const real_T*
pm_math__lerGssn0Ru_r3kSOzEmI_,const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,
real_T*pm_math_v4k0LG4l9Qk9hEXlOIKML_){*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[0]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+
pm_math__lerGssn0Ru_r3kSOzEmI_[1]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+
pm_math__lerGssn0Ru_r3kSOzEmI_[2]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[3]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+pm_math__lerGssn0Ru_r3kSOzEmI_[4]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+pm_math__lerGssn0Ru_r3kSOzEmI_[5]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math__lerGssn0Ru_r3kSOzEmI_[6]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+
pm_math__lerGssn0Ru_r3kSOzEmI_[7]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+
pm_math__lerGssn0Ru_r3kSOzEmI_[8]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];}void
pm_math_matrix3x3TransposeXform(const real_T*pm_math__lerGssn0Ru_r3kSOzEmI_,
const real_T*pm_math_ljExW6hRw43Vg4SLQUAvT1,real_T*
pm_math_v4k0LG4l9Qk9hEXlOIKML_){*pm_math_v4k0LG4l9Qk9hEXlOIKML_++=
pm_math__lerGssn0Ru_r3kSOzEmI_[0]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+
pm_math__lerGssn0Ru_r3kSOzEmI_[3]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+
pm_math__lerGssn0Ru_r3kSOzEmI_[6]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*
pm_math_v4k0LG4l9Qk9hEXlOIKML_++=pm_math__lerGssn0Ru_r3kSOzEmI_[1]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+pm_math__lerGssn0Ru_r3kSOzEmI_[4]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+pm_math__lerGssn0Ru_r3kSOzEmI_[7]*
pm_math_ljExW6hRw43Vg4SLQUAvT1[2];*pm_math_v4k0LG4l9Qk9hEXlOIKML_=
pm_math__lerGssn0Ru_r3kSOzEmI_[2]*pm_math_ljExW6hRw43Vg4SLQUAvT1[0]+
pm_math__lerGssn0Ru_r3kSOzEmI_[5]*pm_math_ljExW6hRw43Vg4SLQUAvT1[1]+
pm_math__lerGssn0Ru_r3kSOzEmI_[8]*pm_math_ljExW6hRw43Vg4SLQUAvT1[2];}static
real_T pm_math_PJP1GXqudXol7xEs686qr2(const real_T*
pm_math__lerGssn0Ru_r3kSOzEmI_){const real_T*a=pm_math__lerGssn0Ru_r3kSOzEmI_;
const real_T*b=pm_math__lerGssn0Ru_r3kSOzEmI_+3;const real_T*
pm_math_ojAHyVHgbHhAjmJFnG_l31=pm_math__lerGssn0Ru_r3kSOzEmI_+6;real_T
pm_math_2cLCSLxQEwLEXmbP98dpf1[3];pm_math_cross3(b,
pm_math_ojAHyVHgbHhAjmJFnG_l31,pm_math_2cLCSLxQEwLEXmbP98dpf1);return
pm_math_dot3(a,pm_math_2cLCSLxQEwLEXmbP98dpf1);}void
pm_math_matrix3x3MinRotation(const real_T*pm_math_YR4p0q3_6MaVNwkAzVg4q2,
real_T*pm_math_Fg5SpbWVWkBjhHm28FAa2_,int pm_math_iUdLtJkuQijenMY73Q8_y_[3]){
const boolean_T pm_math_nOd5C1W8VBnyQNG1MFXfi1=pm_math_PJP1GXqudXol7xEs686qr2(
pm_math_YR4p0q3_6MaVNwkAzVg4q2)<0.0;const int pm_math_9zsEQo66Hfnh7vjPUhcQ31[6
][3]={{0,1,2},{1,2,0},{2,0,1},{0,2,1},{2,1,0},{1,0,2}};const int*
pm_math__xvo_8GLh3WX_oYoJnnpk_=NULL;int pm_math_osnGpTtW5Lc6GMOAosuMT1=0;
real_T pm_math_9N_Q7mKNdZvnIjr8ckmq52= -4.0;int pm_math_SmSSPSQfR1qEYWsVj5ELF0
;int pm_math_QtsTpSrjUOfL9fLlC_llA1;for(pm_math_QtsTpSrjUOfL9fLlC_llA1=0;
pm_math_QtsTpSrjUOfL9fLlC_llA1<6;++pm_math_QtsTpSrjUOfL9fLlC_llA1){const int*
pm_KYlcoOk9rSSGYswizhYqZ2=pm_math_9zsEQo66Hfnh7vjPUhcQ31[
pm_math_QtsTpSrjUOfL9fLlC_llA1];const boolean_T pm_math_Qv3TcGZZ8hpJNr3m_dfrE2
=pm_math_QtsTpSrjUOfL9fLlC_llA1>=3;int pm_math_8mVUzu3XdFFwW9U79lGlD_;for(
pm_math_8mVUzu3XdFFwW9U79lGlD_=0;pm_math_8mVUzu3XdFFwW9U79lGlD_<8;++
pm_math_8mVUzu3XdFFwW9U79lGlD_){const boolean_T pm_math_Xey4WF5t6LGZDloFBZrUN0
=((pm_math_8mVUzu3XdFFwW9U79lGlD_+(pm_math_8mVUzu3XdFFwW9U79lGlD_>>1)+(
pm_math_8mVUzu3XdFFwW9U79lGlD_>>2))&1)==1;real_T pm_math_NiZK0kCPRZ1NKbSXZADn22
=0.0;if((pm_math_Qv3TcGZZ8hpJNr3m_dfrE2^pm_math_Xey4WF5t6LGZDloFBZrUN0)!=
pm_math_nOd5C1W8VBnyQNG1MFXfi1)continue;for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<3;++pm_math_SmSSPSQfR1qEYWsVj5ELF0){const real_T
pm_math_SKHbY6rGfe_c5uusXTSRI1=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_KYlcoOk9rSSGYswizhYqZ2[pm_math_SmSSPSQfR1qEYWsVj5ELF0]+3*
pm_math_SmSSPSQfR1qEYWsVj5ELF0];pm_math_NiZK0kCPRZ1NKbSXZADn22+=(
pm_math_8mVUzu3XdFFwW9U79lGlD_&(1<<pm_math_SmSSPSQfR1qEYWsVj5ELF0))==0?+
pm_math_SKHbY6rGfe_c5uusXTSRI1:-pm_math_SKHbY6rGfe_c5uusXTSRI1;}if(
pm_math_NiZK0kCPRZ1NKbSXZADn22>pm_math_9N_Q7mKNdZvnIjr8ckmq52){
pm_math__xvo_8GLh3WX_oYoJnnpk_=pm_KYlcoOk9rSSGYswizhYqZ2;
pm_math_osnGpTtW5Lc6GMOAosuMT1=pm_math_8mVUzu3XdFFwW9U79lGlD_;
pm_math_9N_Q7mKNdZvnIjr8ckmq52=pm_math_NiZK0kCPRZ1NKbSXZADn22;}}}memcpy(
pm_math_iUdLtJkuQijenMY73Q8_y_,pm_math__xvo_8GLh3WX_oYoJnnpk_,3*sizeof(int));{
double pm_math_F6LtXE3E_wqYUyZN8tV5a1[9];if(pm_math_Fg5SpbWVWkBjhHm28FAa2_==
pm_math_YR4p0q3_6MaVNwkAzVg4q2){memcpy(pm_math_F6LtXE3E_wqYUyZN8tV5a1,
pm_math_YR4p0q3_6MaVNwkAzVg4q2,9*sizeof(real_T));
pm_math_YR4p0q3_6MaVNwkAzVg4q2=pm_math_F6LtXE3E_wqYUyZN8tV5a1;}
pm_math_Fg5SpbWVWkBjhHm28FAa2_[0]=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_math_iUdLtJkuQijenMY73Q8_y_[0]+0],pm_math_Fg5SpbWVWkBjhHm28FAa2_[3]=
pm_math_YR4p0q3_6MaVNwkAzVg4q2[pm_math_iUdLtJkuQijenMY73Q8_y_[0]+3],
pm_math_Fg5SpbWVWkBjhHm28FAa2_[6]=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_math_iUdLtJkuQijenMY73Q8_y_[0]+6];pm_math_Fg5SpbWVWkBjhHm28FAa2_[1]=
pm_math_YR4p0q3_6MaVNwkAzVg4q2[pm_math_iUdLtJkuQijenMY73Q8_y_[1]+0],
pm_math_Fg5SpbWVWkBjhHm28FAa2_[4]=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_math_iUdLtJkuQijenMY73Q8_y_[1]+3],pm_math_Fg5SpbWVWkBjhHm28FAa2_[7]=
pm_math_YR4p0q3_6MaVNwkAzVg4q2[pm_math_iUdLtJkuQijenMY73Q8_y_[1]+6];
pm_math_Fg5SpbWVWkBjhHm28FAa2_[2]=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_math_iUdLtJkuQijenMY73Q8_y_[2]+0],pm_math_Fg5SpbWVWkBjhHm28FAa2_[5]=
pm_math_YR4p0q3_6MaVNwkAzVg4q2[pm_math_iUdLtJkuQijenMY73Q8_y_[2]+3],
pm_math_Fg5SpbWVWkBjhHm28FAa2_[8]=pm_math_YR4p0q3_6MaVNwkAzVg4q2[
pm_math_iUdLtJkuQijenMY73Q8_y_[2]+6];}for(pm_math_SmSSPSQfR1qEYWsVj5ELF0=0;
pm_math_SmSSPSQfR1qEYWsVj5ELF0<3;++pm_math_SmSSPSQfR1qEYWsVj5ELF0)if((
pm_math_osnGpTtW5Lc6GMOAosuMT1&(1<<pm_math_SmSSPSQfR1qEYWsVj5ELF0))!=0){real_T
*pm_math_PMoj19AtRoOJbEKuPG4PB0=pm_math_Fg5SpbWVWkBjhHm28FAa2_+
pm_math_SmSSPSQfR1qEYWsVj5ELF0;pm_math_PMoj19AtRoOJbEKuPG4PB0[0]= -
pm_math_PMoj19AtRoOJbEKuPG4PB0[0];pm_math_PMoj19AtRoOJbEKuPG4PB0[3]= -
pm_math_PMoj19AtRoOJbEKuPG4PB0[3];pm_math_PMoj19AtRoOJbEKuPG4PB0[6]= -
pm_math_PMoj19AtRoOJbEKuPG4PB0[6];}}
