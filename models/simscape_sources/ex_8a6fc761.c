#include "pm_std.h"
#include "lang_std.h"
size_t ex_ia6STLGqo9aFeiYN0gcmB_(real_T*H,real_T*G,size_t*numEdges,const real_T
*x,const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_1YXwEl8_6cUeYGB_i0l0p2);size_t ex_XgFqE_qWosDa601lsTn6b1(const real_T*x,
const size_t n,const real_T t);void ex_58tHK_FJLrTVg5pTR2KLX0(real_T*
ex__lerGssn0Ru_r3kSOzEmI_,const size_t n1,const size_t n2,const size_t n3,
const size_t n4,const size_t ex_G5C_Yq8nLf6PL2EMNiFAc1,const size_t
ex_KTkrfjRMBsZjPvzwkIouc_,const size_t ex_x_teXoaz0hlS1RzJxhHla0,const size_t
ex_fo8lU9fQuflzUTvG3MoQ51);void ex_kxquG9pkEjt4fXtMQOsqG2(real_T*x,real_T*f,
const size_t n);void ex_nC4jUddYFsKRLzFkVBm3G0(real_T*x1,real_T*x2,real_T*f,
const size_t n1,const size_t n2);void ex_p_64ouPbD9bddOkoAZOpZ1(real_T*x1,
real_T*x2,real_T*x3,real_T*f,const size_t n1,const size_t n2,const size_t n3);
void ex_5NKaAbmUyQr1tleeDl4Vc2(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*
f,const size_t n1,const size_t n2,const size_t n3,const size_t n4);size_t
ex_ia6STLGqo9aFeiYN0gcmB_(real_T*H,real_T*G,size_t*numEdges,const real_T*x,
const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_1YXwEl8_6cUeYGB_i0l0p2){size_t bin;real_T ex_w_oCkEWPNmlVJvldp25MJ1;real_T
ex_3EwSP2D8RHe6dG6BQOgNv1,ex_BWzU1iqUNGj0f00v_MJWy0;if(n<2){H[0]=1.0;H[1]=0.0;
G[0]=0.0;G[1]=0.0;*numEdges=1;return 0;}else{*numEdges=2;}if(mode[0]){bin=0;
ex_3EwSP2D8RHe6dG6BQOgNv1=x[0];ex_BWzU1iqUNGj0f00v_MJWy0=x[1];
ex_w_oCkEWPNmlVJvldp25MJ1=ex_BWzU1iqUNGj0f00v_MJWy0-ex_3EwSP2D8RHe6dG6BQOgNv1;
if(ex_w_oCkEWPNmlVJvldp25MJ1==0.0){H[0]=0.5;H[1]=0.5;G[0]=0.0;G[1]=0.0;return
bin;}if(ex_1YXwEl8_6cUeYGB_i0l0p2){H[0]=(ex_BWzU1iqUNGj0f00v_MJWy0-t)/
ex_w_oCkEWPNmlVJvldp25MJ1;H[1]=(t-ex_3EwSP2D8RHe6dG6BQOgNv1)/
ex_w_oCkEWPNmlVJvldp25MJ1;G[0]= -1.0/ex_w_oCkEWPNmlVJvldp25MJ1;G[1]=1.0/
ex_w_oCkEWPNmlVJvldp25MJ1;}else{H[0]=1.0;H[1]=0.0;G[0]=0.0;G[1]=0.0;}}else if(
!mode[1]){bin=n-2;ex_3EwSP2D8RHe6dG6BQOgNv1=x[n-2];ex_BWzU1iqUNGj0f00v_MJWy0=x
[n-1];ex_w_oCkEWPNmlVJvldp25MJ1=ex_BWzU1iqUNGj0f00v_MJWy0-
ex_3EwSP2D8RHe6dG6BQOgNv1;if(ex_w_oCkEWPNmlVJvldp25MJ1==0.0){H[0]=0.5;H[1]=0.5
;G[0]=0.0;G[1]=0.0;return bin;}if(ex_1YXwEl8_6cUeYGB_i0l0p2){H[0]=(
ex_BWzU1iqUNGj0f00v_MJWy0-t)/ex_w_oCkEWPNmlVJvldp25MJ1;H[1]=(t-
ex_3EwSP2D8RHe6dG6BQOgNv1)/ex_w_oCkEWPNmlVJvldp25MJ1;G[0]= -1.0/
ex_w_oCkEWPNmlVJvldp25MJ1;G[1]=1.0/ex_w_oCkEWPNmlVJvldp25MJ1;}else{H[0]=0.0;H[
1]=1.0;G[0]=0.0;G[1]=0.0;}}else{bin=ex_XgFqE_qWosDa601lsTn6b1(x,n,t);if(bin<=0
){bin=0;}else if(bin>=n){bin=n-2;}else{--bin;}ex_3EwSP2D8RHe6dG6BQOgNv1=x[bin]
;ex_BWzU1iqUNGj0f00v_MJWy0=x[bin+1];ex_w_oCkEWPNmlVJvldp25MJ1=
ex_BWzU1iqUNGj0f00v_MJWy0-ex_3EwSP2D8RHe6dG6BQOgNv1;if(
ex_w_oCkEWPNmlVJvldp25MJ1==0.0){H[0]=0.5;H[1]=0.5;G[0]=0.0;G[1]=0.0;return bin
;}H[0]=(ex_BWzU1iqUNGj0f00v_MJWy0-t)/ex_w_oCkEWPNmlVJvldp25MJ1;H[1]=(t-
ex_3EwSP2D8RHe6dG6BQOgNv1)/ex_w_oCkEWPNmlVJvldp25MJ1;G[0]= -1.0/
ex_w_oCkEWPNmlVJvldp25MJ1;G[1]=1.0/ex_w_oCkEWPNmlVJvldp25MJ1;}return bin;}
