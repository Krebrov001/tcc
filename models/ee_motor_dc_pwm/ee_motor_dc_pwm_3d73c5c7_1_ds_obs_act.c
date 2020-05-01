/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_motor_dc_pwm/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_motor_dc_pwm_3d73c5c7_1_ds_obs_act.h"
#include "ee_motor_dc_pwm_3d73c5c7_1_ds_sys_struct.h"
#include "ee_motor_dc_pwm_3d73c5c7_1_ds_externals.h"
#include "ee_motor_dc_pwm_3d73c5c7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_motor_dc_pwm_3d73c5c7_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T Controlled_PWM_Voltage_pwm_duty_cycle;
  real_T Current_Sensor_I;
  real_T X_idx_4;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_5;
  real_T X_idx_2;
  real_T X_idx_3;
  X_idx_0 = t3->mX.mX[0];
  X_idx_1 = t3->mX.mX[1];
  X_idx_2 = t3->mX.mX[2];
  X_idx_3 = t3->mX.mX[3];
  X_idx_4 = t3->mX.mX[4];
  X_idx_5 = t3->mX.mX[5];
  out = t4->mOBS_ACT;
  Controlled_PWM_Voltage_pwm_duty_cycle = X_idx_4 * 0.2;
  Current_Sensor_I = (X_idx_0 * 0.99999999669439577 + X_idx_1 *
                      -2.8058841041241656E-11) + X_idx_5 *
    9.9999999669439588E-10;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 2.5;
  out.mX[4] = X_idx_4;
  out.mX[5] = Controlled_PWM_Voltage_pwm_duty_cycle;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = X_idx_4;
  out.mX[9] = Controlled_PWM_Voltage_pwm_duty_cycle * 5.0;
  out.mX[10] = Current_Sensor_I;
  out.mX[11] = Current_Sensor_I;
  out.mX[12] = X_idx_5;
  out.mX[13] = X_idx_5;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = X_idx_1;
  out.mX[17] = Current_Sensor_I;
  out.mX[18] = X_idx_0;
  out.mX[19] = 0.0;
  out.mX[20] = X_idx_5;
  out.mX[21] = -(Current_Sensor_I * Current_Sensor_I * 0.0033056043440548469) /
    -1.0 * 1000.0;
  out.mX[22] = 0.0;
  out.mX[23] = X_idx_5;
  out.mX[24] = X_idx_1 * 9.5492965855137211;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = X_idx_4;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = -Current_Sensor_I;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = X_idx_5;
  out.mX[36] = -(Current_Sensor_I * Current_Sensor_I * 0.0001) / -1.0 * 1000.0;
  out.mX[37] = X_idx_2;
  out.mX[38] = X_idx_3;
  out.mX[39] = 0.0;
  out.mX[40] = X_idx_1;
  out.mX[41] = X_idx_1;
  out.mX[42] = X_idx_3 * 57.295779513082323;
  out.mX[43] = 0.0;
  out.mX[44] = X_idx_1;
  out.mX[45] = 0.0;
  out.mX[46] = 0.0;
  out.mX[47] = 0.0;
  out.mX[48] = 2.5;
  out.mX[49] = 2.5;
  (void)sys;
  (void)t4;
  return 0;
}
