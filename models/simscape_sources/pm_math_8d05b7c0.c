#include "pm_std.h"
#include "math.h"
void pm_math_lin_alg_geSolve2x2(const real_T pm_math__lerGssn0Ru_r3kSOzEmI_[4]
,const real_T b[2],real_T x[2]);void pm_math_lin_alg_geSolve2x2(const real_T
pm_math__lerGssn0Ru_r3kSOzEmI_[4],const real_T b[2],real_T x[2]){if(fabs(
pm_math__lerGssn0Ru_r3kSOzEmI_[0])>=fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[1])&&
fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[0])>=fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[2
])&&fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[0])>=fabs(
pm_math__lerGssn0Ru_r3kSOzEmI_[3])){const real_T pm_math_PIqWtbzrbQqv_KS_31HnE2
=pm_math__lerGssn0Ru_r3kSOzEmI_[1]/pm_math__lerGssn0Ru_r3kSOzEmI_[0];x[1]=(b[1
]-pm_math_PIqWtbzrbQqv_KS_31HnE2*b[0])/(pm_math__lerGssn0Ru_r3kSOzEmI_[3]-
pm_math_PIqWtbzrbQqv_KS_31HnE2*pm_math__lerGssn0Ru_r3kSOzEmI_[2]);x[0]=(b[0]-
pm_math__lerGssn0Ru_r3kSOzEmI_[2]*x[1])/pm_math__lerGssn0Ru_r3kSOzEmI_[0];}
else if(fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[1])>=fabs(
pm_math__lerGssn0Ru_r3kSOzEmI_[2])&&fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[1])>=
fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[3])){const real_T
pm_math_PIqWtbzrbQqv_KS_31HnE2=pm_math__lerGssn0Ru_r3kSOzEmI_[0]/
pm_math__lerGssn0Ru_r3kSOzEmI_[1];x[1]=(b[0]-pm_math_PIqWtbzrbQqv_KS_31HnE2*b[
1])/(pm_math__lerGssn0Ru_r3kSOzEmI_[2]-pm_math_PIqWtbzrbQqv_KS_31HnE2*
pm_math__lerGssn0Ru_r3kSOzEmI_[3]);x[0]=(b[1]-pm_math__lerGssn0Ru_r3kSOzEmI_[3
]*x[1])/pm_math__lerGssn0Ru_r3kSOzEmI_[1];}else if(fabs(
pm_math__lerGssn0Ru_r3kSOzEmI_[2])>=fabs(pm_math__lerGssn0Ru_r3kSOzEmI_[3])){
const real_T pm_math_PIqWtbzrbQqv_KS_31HnE2=pm_math__lerGssn0Ru_r3kSOzEmI_[3]/
pm_math__lerGssn0Ru_r3kSOzEmI_[2];x[0]=(b[1]-pm_math_PIqWtbzrbQqv_KS_31HnE2*b[
0])/(pm_math__lerGssn0Ru_r3kSOzEmI_[1]-pm_math_PIqWtbzrbQqv_KS_31HnE2*
pm_math__lerGssn0Ru_r3kSOzEmI_[0]);x[1]=(b[0]-pm_math__lerGssn0Ru_r3kSOzEmI_[0
]*x[0])/pm_math__lerGssn0Ru_r3kSOzEmI_[2];}else{const real_T
pm_math_PIqWtbzrbQqv_KS_31HnE2=pm_math__lerGssn0Ru_r3kSOzEmI_[2]/
pm_math__lerGssn0Ru_r3kSOzEmI_[3];x[0]=(b[0]-pm_math_PIqWtbzrbQqv_KS_31HnE2*b[
1])/(pm_math__lerGssn0Ru_r3kSOzEmI_[0]-pm_math_PIqWtbzrbQqv_KS_31HnE2*
pm_math__lerGssn0Ru_r3kSOzEmI_[1]);x[1]=(b[1]-pm_math__lerGssn0Ru_r3kSOzEmI_[1
]*x[0])/pm_math__lerGssn0Ru_r3kSOzEmI_[3];}}
