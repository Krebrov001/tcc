/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_pwm_three_level/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_dxf.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_sys_struct.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_externals.h"
#include "ee_pwm_three_level_8ad899e3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_pwm_three_level_8ad899e3_1_ds_dxf(const NeDynamicSystem *t0, const
  NeDynamicSystemInput *t142, NeDsMethodOutput *t143)
{
  PmRealVector out;
  real_T t1;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t50;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t58;
  real_T t59;
  real_T t60;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t65;
  real_T t66;
  real_T t67[138];
  real_T t68[12];
  real_T t69[18];
  real_T t70[12];
  real_T t83[4];
  real_T t84[4];
  real_T t85[4];
  real_T t86[5];
  real_T t87[5];
  real_T t88[5];
  real_T t89[5];
  real_T t90[5];
  real_T t91[5];
  real_T t92[4];
  real_T t93[4];
  real_T t94[4];
  real_T t95[4];
  real_T t96[4];
  real_T t97[4];
  size_t t136;
  int32_T M_idx_17;
  int32_T M_idx_18;
  int32_T M_idx_19;
  int32_T M_idx_27;
  int32_T M_idx_28;
  int32_T M_idx_29;
  int32_T M_idx_37;
  int32_T M_idx_38;
  int32_T M_idx_39;
  int32_T M_idx_40;
  int32_T M_idx_41;
  int32_T M_idx_42;
  int32_T M_idx_50;
  int32_T M_idx_51;
  int32_T M_idx_52;
  int32_T M_idx_53;
  int32_T M_idx_54;
  int32_T M_idx_55;
  int32_T M_idx_20;
  int32_T M_idx_21;
  int32_T M_idx_22;
  int32_T M_idx_24;
  int32_T M_idx_25;
  int32_T M_idx_26;
  int32_T M_idx_30;
  int32_T M_idx_31;
  int32_T M_idx_32;
  int32_T M_idx_33;
  int32_T M_idx_35;
  int32_T M_idx_36;
  int32_T M_idx_43;
  int32_T M_idx_44;
  int32_T M_idx_46;
  int32_T M_idx_47;
  int32_T M_idx_48;
  int32_T M_idx_49;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  int32_T M_idx_10;
  int32_T M_idx_11;
  int32_T M_idx_13;
  int32_T M_idx_14;
  int32_T M_idx_15;
  int32_T M_idx_16;
  (void)t0;
  M_idx_4 = t142->mM.mX[4];
  M_idx_5 = t142->mM.mX[5];
  M_idx_6 = t142->mM.mX[6];
  M_idx_7 = t142->mM.mX[7];
  M_idx_8 = t142->mM.mX[8];
  M_idx_9 = t142->mM.mX[9];
  M_idx_10 = t142->mM.mX[10];
  M_idx_11 = t142->mM.mX[11];
  M_idx_13 = t142->mM.mX[13];
  M_idx_14 = t142->mM.mX[14];
  M_idx_15 = t142->mM.mX[15];
  M_idx_16 = t142->mM.mX[16];
  M_idx_17 = t142->mM.mX[17];
  M_idx_18 = t142->mM.mX[18];
  M_idx_19 = t142->mM.mX[19];
  M_idx_20 = t142->mM.mX[20];
  M_idx_21 = t142->mM.mX[21];
  M_idx_22 = t142->mM.mX[22];
  M_idx_24 = t142->mM.mX[24];
  M_idx_25 = t142->mM.mX[25];
  M_idx_26 = t142->mM.mX[26];
  M_idx_27 = t142->mM.mX[27];
  M_idx_28 = t142->mM.mX[28];
  M_idx_29 = t142->mM.mX[29];
  M_idx_30 = t142->mM.mX[30];
  M_idx_31 = t142->mM.mX[31];
  M_idx_32 = t142->mM.mX[32];
  M_idx_33 = t142->mM.mX[33];
  M_idx_35 = t142->mM.mX[35];
  M_idx_36 = t142->mM.mX[36];
  M_idx_37 = t142->mM.mX[37];
  M_idx_38 = t142->mM.mX[38];
  M_idx_39 = t142->mM.mX[39];
  M_idx_40 = t142->mM.mX[40];
  M_idx_41 = t142->mM.mX[41];
  M_idx_42 = t142->mM.mX[42];
  M_idx_43 = t142->mM.mX[43];
  M_idx_44 = t142->mM.mX[44];
  M_idx_46 = t142->mM.mX[46];
  M_idx_47 = t142->mM.mX[47];
  M_idx_48 = t142->mM.mX[48];
  M_idx_49 = t142->mM.mX[49];
  M_idx_50 = t142->mM.mX[50];
  M_idx_51 = t142->mM.mX[51];
  M_idx_52 = t142->mM.mX[52];
  M_idx_53 = t142->mM.mX[53];
  M_idx_54 = t142->mM.mX[54];
  M_idx_55 = t142->mM.mX[55];
  out = t143->mDXF;
  if (M_idx_17 != 0) {
    t1 = -1000.0;
  } else if (M_idx_18 != 0) {
    t1 = -3.3333333333333335;
  } else {
    t1 = -1.0E-5;
  }

  if (M_idx_19 != 0) {
    t2 = 1000.0;
  } else {
    t2 = 1.0E-6;
  }

  if (M_idx_27 != 0) {
    t3 = 1000.0;
  } else if (M_idx_28 != 0) {
    t3 = 3.3333333333333335;
  } else {
    t3 = 1.0E-5;
  }

  if (M_idx_29 != 0) {
    t4 = -1000.0;
  } else {
    t4 = -1.0E-6;
  }

  if (M_idx_37 != 0) {
    t5 = 1000.0;
  } else if (M_idx_38 != 0) {
    t5 = 3.3333333333333335;
  } else {
    t5 = 1.0E-5;
  }

  if (M_idx_39 != 0) {
    t6 = -1000.0;
  } else {
    t6 = -1.0E-6;
  }

  if (M_idx_40 != 0) {
    t7 = -1000.0;
  } else if (M_idx_41 != 0) {
    t7 = -3.3333333333333335;
  } else {
    t7 = -1.0E-5;
  }

  if (M_idx_42 != 0) {
    t8 = 1000.0;
  } else {
    t8 = 1.0E-6;
  }

  if (M_idx_50 != 0) {
    t9 = 1000.0;
  } else if (M_idx_51 != 0) {
    t9 = 3.3333333333333335;
  } else {
    t9 = 1.0E-5;
  }

  if (M_idx_52 != 0) {
    t10 = -1000.0;
  } else {
    t10 = -1.0E-6;
  }

  if (M_idx_53 != 0) {
    t11 = -1000.0;
  } else if (M_idx_54 != 0) {
    t11 = -3.3333333333333335;
  } else {
    t11 = -1.0E-5;
  }

  if (M_idx_55 != 0) {
    t12 = 1000.0;
  } else {
    t12 = 1.0E-6;
  }

  if (M_idx_17 != 0) {
    t13 = -0.01;
  } else if (M_idx_18 != 0) {
    t13 = -3.3333333333333335E-5;
  } else {
    t13 = -1.0000000000000002E-10;
  }

  if (M_idx_19 != 0) {
    t14 = 0.01;
  } else {
    t14 = 1.0000000000000001E-11;
  }

  if (M_idx_27 != 0) {
    t15 = 0.01;
  } else if (M_idx_28 != 0) {
    t15 = 3.3333333333333335E-5;
  } else {
    t15 = 1.0000000000000002E-10;
  }

  if (M_idx_29 != 0) {
    t16 = -0.01;
  } else {
    t16 = -1.0000000000000001E-11;
  }

  if (M_idx_37 != 0) {
    t17 = 0.01;
  } else if (M_idx_38 != 0) {
    t17 = 3.3333333333333335E-5;
  } else {
    t17 = 1.0000000000000002E-10;
  }

  if (M_idx_39 != 0) {
    t18 = -0.01;
  } else {
    t18 = -1.0000000000000001E-11;
  }

  if (M_idx_40 != 0) {
    t19 = -0.01;
  } else if (M_idx_41 != 0) {
    t19 = -3.3333333333333335E-5;
  } else {
    t19 = -1.0000000000000002E-10;
  }

  if (M_idx_42 != 0) {
    t20 = 0.01;
  } else {
    t20 = 1.0000000000000001E-11;
  }

  if (M_idx_50 != 0) {
    t21 = 0.01;
  } else if (M_idx_51 != 0) {
    t21 = 3.3333333333333335E-5;
  } else {
    t21 = 1.0000000000000002E-10;
  }

  if (M_idx_52 != 0) {
    t22 = -0.01;
  } else {
    t22 = -1.0000000000000001E-11;
  }

  if (M_idx_53 != 0) {
    t23 = -0.01;
  } else if (M_idx_54 != 0) {
    t23 = -3.3333333333333335E-5;
  } else {
    t23 = -1.0000000000000002E-10;
  }

  if (M_idx_55 != 0) {
    t24 = 0.01;
  } else {
    t24 = 1.0000000000000001E-11;
  }

  if (M_idx_20 != 0) {
    t25 = -1000.0;
  } else if (M_idx_21 != 0) {
    t25 = -3.3333333333333335;
  } else {
    t25 = -1.0E-5;
  }

  if (M_idx_22 != 0) {
    t26 = 1000.0;
  } else {
    t26 = 1.0E-6;
  }

  if (M_idx_24 != 0) {
    t27 = 1000.0;
  } else if (M_idx_25 != 0) {
    t27 = 3.3333333333333335;
  } else {
    t27 = 1.0E-5;
  }

  if (M_idx_26 != 0) {
    t28 = -1000.0;
  } else {
    t28 = -1.0E-6;
  }

  if (M_idx_30 != 0) {
    t29 = -1000.0;
  } else if (M_idx_31 != 0) {
    t29 = -3.3333333333333335;
  } else {
    t29 = -1.0E-5;
  }

  if (M_idx_32 != 0) {
    t30 = 1000.0;
  } else {
    t30 = 1.0E-6;
  }

  if (M_idx_33 != 0) {
    t31 = 1000.0;
  } else if (M_idx_35 != 0) {
    t31 = 3.3333333333333335;
  } else {
    t31 = 1.0E-5;
  }

  if (M_idx_36 != 0) {
    t32 = -1000.0;
  } else {
    t32 = -1.0E-6;
  }

  if (M_idx_43 != 0) {
    t33 = -1000.0;
  } else if (M_idx_44 != 0) {
    t33 = -3.3333333333333335;
  } else {
    t33 = -1.0E-5;
  }

  if (M_idx_46 != 0) {
    t34 = 1000.0;
  } else {
    t34 = 1.0E-6;
  }

  if (M_idx_47 != 0) {
    t35 = 1000.0;
  } else if (M_idx_48 != 0) {
    t35 = 3.3333333333333335;
  } else {
    t35 = 1.0E-5;
  }

  if (M_idx_49 != 0) {
    t36 = -1000.0;
  } else {
    t36 = -1.0E-6;
  }

  if (M_idx_4 != 0) {
    t37 = 1000.0;
  } else if (M_idx_5 != 0) {
    t37 = 3.3333333333333335;
  } else {
    t37 = 1.0E-5;
  }

  if (M_idx_17 != 0) {
    t38 = -1000.0;
  } else if (M_idx_18 != 0) {
    t38 = -3.3333333333333335;
  } else {
    t38 = -1.0E-5;
  }

  if (M_idx_19 != 0) {
    t39 = 1000.0;
  } else {
    t39 = 1.0E-6;
  }

  if (M_idx_30 != 0) {
    t40 = 1000.0;
  } else if (M_idx_31 != 0) {
    t40 = 3.3333333333333335;
  } else {
    t40 = 1.0E-5;
  }

  if (M_idx_32 != 0) {
    t41 = -1000.0;
  } else {
    t41 = -1.0E-6;
  }

  if (M_idx_6 != 0) {
    t42 = -1000.0;
  } else if (M_idx_7 != 0) {
    t42 = -3.3333333333333335;
  } else {
    t42 = -1.0E-5;
  }

  if (M_idx_33 != 0) {
    t43 = -1000.0;
  } else if (M_idx_35 != 0) {
    t43 = -3.3333333333333335;
  } else {
    t43 = -1.0E-5;
  }

  if (M_idx_36 != 0) {
    t44 = 1000.0;
  } else {
    t44 = 1.0E-6;
  }

  if (M_idx_37 != 0) {
    t45 = 1000.0;
  } else if (M_idx_38 != 0) {
    t45 = 3.3333333333333335;
  } else {
    t45 = 1.0E-5;
  }

  if (M_idx_39 != 0) {
    t46 = -1000.0;
  } else {
    t46 = -1.0E-6;
  }

  if (M_idx_8 != 0) {
    t47 = 1000.0;
  } else if (M_idx_9 != 0) {
    t47 = 3.3333333333333335;
  } else {
    t47 = 1.0E-5;
  }

  if (M_idx_40 != 0) {
    t48 = -1000.0;
  } else if (M_idx_41 != 0) {
    t48 = -3.3333333333333335;
  } else {
    t48 = -1.0E-5;
  }

  if (M_idx_42 != 0) {
    t49 = 1000.0;
  } else {
    t49 = 1.0E-6;
  }

  if (M_idx_43 != 0) {
    t50 = 1000.0;
  } else if (M_idx_44 != 0) {
    t50 = 3.3333333333333335;
  } else {
    t50 = 1.0E-5;
  }

  if (M_idx_46 != 0) {
    t51 = -1000.0;
  } else {
    t51 = -1.0E-6;
  }

  if (M_idx_10 != 0) {
    t52 = -1000.0;
  } else if (M_idx_11 != 0) {
    t52 = -3.3333333333333335;
  } else {
    t52 = -1.0E-5;
  }

  if (M_idx_47 != 0) {
    t53 = -1000.0;
  } else if (M_idx_48 != 0) {
    t53 = -3.3333333333333335;
  } else {
    t53 = -1.0E-5;
  }

  if (M_idx_49 != 0) {
    t54 = 1000.0;
  } else {
    t54 = 1.0E-6;
  }

  if (M_idx_50 != 0) {
    t55 = 1000.0;
  } else if (M_idx_51 != 0) {
    t55 = 3.3333333333333335;
  } else {
    t55 = 1.0E-5;
  }

  if (M_idx_52 != 0) {
    t56 = -1000.0;
  } else {
    t56 = -1.0E-6;
  }

  if (M_idx_13 != 0) {
    t57 = 1000.0;
  } else if (M_idx_14 != 0) {
    t57 = 3.3333333333333335;
  } else {
    t57 = 1.0E-5;
  }

  if (M_idx_20 != 0) {
    t58 = 1000.0;
  } else if (M_idx_21 != 0) {
    t58 = 3.3333333333333335;
  } else {
    t58 = 1.0E-5;
  }

  if (M_idx_22 != 0) {
    t59 = -1000.0;
  } else {
    t59 = -1.0E-6;
  }

  if (M_idx_53 != 0) {
    t60 = -1000.0;
  } else if (M_idx_54 != 0) {
    t60 = -3.3333333333333335;
  } else {
    t60 = -1.0E-5;
  }

  if (M_idx_55 != 0) {
    t61 = 1000.0;
  } else {
    t61 = 1.0E-6;
  }

  if (M_idx_15 != 0) {
    t62 = -1000.0;
  } else if (M_idx_16 != 0) {
    t62 = -3.3333333333333335;
  } else {
    t62 = -1.0E-5;
  }

  if (M_idx_24 != 0) {
    t63 = -1000.0;
  } else if (M_idx_25 != 0) {
    t63 = -3.3333333333333335;
  } else {
    t63 = -1.0E-5;
  }

  if (M_idx_26 != 0) {
    t64 = 1000.0;
  } else {
    t64 = 1.0E-6;
  }

  if (M_idx_27 != 0) {
    t65 = 1000.0;
  } else if (M_idx_28 != 0) {
    t65 = 3.3333333333333335;
  } else {
    t65 = 1.0E-5;
  }

  if (M_idx_29 != 0) {
    t66 = -1000.0;
  } else {
    t66 = -1.0E-6;
  }

  t68[0ULL] = t1;
  t68[1ULL] = t2;
  t68[2ULL] = t3;
  t68[3ULL] = t4;
  t68[4ULL] = t5;
  t68[5ULL] = t6;
  t68[6ULL] = t7;
  t68[7ULL] = t8;
  t68[8ULL] = t9;
  t68[9ULL] = t10;
  t68[10ULL] = t11;
  t68[11ULL] = t12;
  t69[0ULL] = 1.0;
  t69[6ULL] = 0.0;
  t69[12ULL] = 0.0;
  t69[1ULL] = 0.0;
  t69[7ULL] = 1.0;
  t69[13ULL] = 0.0;
  t69[2ULL] = 0.0;
  t69[8ULL] = 0.0;
  t69[14ULL] = 1.0;
  t69[3ULL] = 0.0;
  t69[9ULL] = 0.0;
  t69[15ULL] = -1.0;
  t69[4ULL] = -1.0;
  t69[10ULL] = 0.0;
  t69[16ULL] = 0.0;
  t69[5ULL] = 0.0;
  t69[11ULL] = -1.0;
  t69[17ULL] = 0.0;
  t70[0ULL] = t13;
  t70[1ULL] = t14;
  t70[2ULL] = t15;
  t70[3ULL] = t16;
  t70[4ULL] = t17;
  t70[5ULL] = t18;
  t70[6ULL] = t19;
  t70[7ULL] = t20;
  t70[8ULL] = t21;
  t70[9ULL] = t22;
  t70[10ULL] = t23;
  t70[11ULL] = t24;
  t83[0ULL] = t25;
  t83[1ULL] = t26;
  t83[2ULL] = t27;
  t83[3ULL] = t28;
  t84[0ULL] = t29;
  t84[1ULL] = t30;
  t84[2ULL] = t31;
  t84[3ULL] = t32;
  t85[0ULL] = t33;
  t85[1ULL] = t34;
  t85[2ULL] = t35;
  t85[3ULL] = t36;
  t86[0ULL] = t37;
  t86[1ULL] = t38;
  t86[2ULL] = t39;
  t86[3ULL] = t40;
  t86[4ULL] = t41;
  t87[0ULL] = t42;
  t87[1ULL] = t43;
  t87[2ULL] = t44;
  t87[3ULL] = t45;
  t87[4ULL] = t46;
  t88[0ULL] = t47;
  t88[1ULL] = t48;
  t88[2ULL] = t49;
  t88[3ULL] = t50;
  t88[4ULL] = t51;
  t89[0ULL] = t52;
  t89[1ULL] = t53;
  t89[2ULL] = t54;
  t89[3ULL] = t55;
  t89[4ULL] = t56;
  t90[0ULL] = t57;
  t90[1ULL] = t58;
  t90[2ULL] = t59;
  t90[3ULL] = t60;
  t90[4ULL] = t61;
  t91[0ULL] = t62;
  t91[1ULL] = t63;
  t91[2ULL] = t64;
  t91[3ULL] = t65;
  t91[4ULL] = t66;
  t92[0ULL] = -1.0;
  t92[1ULL] = -1.0;
  t92[2ULL] = 1.0;
  t92[3ULL] = 1.0;
  t93[0ULL] = 1.0;
  t93[1ULL] = 1.0;
  t93[2ULL] = -1.0;
  t93[3ULL] = 1.0;
  t94[0ULL] = -1.0;
  t94[1ULL] = -1.0;
  t94[2ULL] = 1.0;
  t94[3ULL] = 1.0;
  t95[0ULL] = 1.0;
  t95[1ULL] = 1.0;
  t95[2ULL] = -1.0;
  t95[3ULL] = 1.0;
  t96[0ULL] = -1.0;
  t96[1ULL] = -1.0;
  t96[2ULL] = 1.0;
  t96[3ULL] = 1.0;
  t97[0ULL] = 1.0;
  t97[1ULL] = 1.0;
  t97[2ULL] = -1.0;
  t97[3ULL] = 1.0;
  for (t136 = 0ULL; t136 < 12ULL; t136++) {
    t67[t136] = t68[t136];
  }

  for (t136 = 0ULL; t136 < 18ULL; t136++) {
    t67[t136 + 12ULL] = t69[t136];
  }

  for (t136 = 0ULL; t136 < 12ULL; t136++) {
    t67[t136 + 30ULL] = t70[t136];
  }

  t67[42ULL] = 1.0;
  t67[43ULL] = 1.0;
  t67[44ULL] = -1.0;
  t67[45ULL] = 1.0;
  t67[46ULL] = 1.0;
  t67[47ULL] = 1.0;
  t67[48ULL] = -1.0;
  t67[49ULL] = 1.0;
  t67[50ULL] = 1.0;
  t67[51ULL] = 1.0;
  t67[52ULL] = -1.0;
  t67[53ULL] = 1.0;
  t67[54ULL] = 1.0;
  t67[55ULL] = 1.0;
  t67[56ULL] = -1.0;
  t67[57ULL] = 1.0;
  t67[58ULL] = 1.0;
  t67[59ULL] = 1.0;
  t67[60ULL] = -1.0;
  t67[61ULL] = 1.0;
  t67[62ULL] = 1.0;
  t67[63ULL] = 1.0;
  t67[64ULL] = -1.0;
  t67[65ULL] = 1.0;
  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 66ULL] = t83[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 70ULL] = t84[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 74ULL] = t85[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 78ULL] = t86[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 83ULL] = t87[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 88ULL] = t88[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 93ULL] = t89[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 98ULL] = t90[t136];
  }

  for (t136 = 0ULL; t136 < 5ULL; t136++) {
    t67[t136 + 103ULL] = t91[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 108ULL] = t92[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 112ULL] = t93[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 116ULL] = t94[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 120ULL] = t95[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 124ULL] = t96[t136];
  }

  for (t136 = 0ULL; t136 < 4ULL; t136++) {
    t67[t136 + 128ULL] = t97[t136];
  }

  t67[132ULL] = 1.0;
  t67[133ULL] = 1.0;
  t67[134ULL] = 1.0;
  t67[135ULL] = 1.0;
  t67[136ULL] = 1.0;
  t67[137ULL] = 1.0;
  for (M_idx_4 = 0; M_idx_4 < 138; M_idx_4++) {
    out.mX[M_idx_4] = t67[M_idx_4];
  }

  (void)t0;
  (void)t143;
  return 0;
}
