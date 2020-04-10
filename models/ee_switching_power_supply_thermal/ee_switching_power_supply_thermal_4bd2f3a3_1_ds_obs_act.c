/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_switching_power_supply_thermal/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_act.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_sys_struct.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_externals.h"
#include "ee_switching_power_supply_thermal_4bd2f3a3_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_switching_power_supply_thermal_4bd2f3a3_1_ds_obs_act(const
  NeDynamicSystem *sys, const NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  real_T Current_sensor_Current_Sensor_I;
  real_T Cyclic_Load_Controlled_Current_Source_v;
  real_T Diode_1_p_v;
  real_T Diode_1_v;
  real_T Diode_1_private_ohmicResistance_i;
  real_T Diode_2_v;
  real_T Diode_2_private_ohmicResistance_i;
  real_T Driver_Half_Bridge_Driver_HO_v;
  real_T Driver_Half_Bridge_Driver_LO_v;
  real_T Driver_Half_Bridge_Driver_iL;
  real_T N_Channel_MOSFET_1_capacitor_GD_n_v;
  real_T N_Channel_MOSFET_1_capacitor_GD_p_v;
  real_T N_Channel_MOSFET_1_capacitor_GS_n_v;
  real_T N_Channel_MOSFET_1_drain_resistor_Q;
  real_T N_Channel_MOSFET_1_drain_resistor_i;
  real_T N_Channel_MOSFET_2_capacitor_GD_n_v;
  real_T N_Channel_MOSFET_2_capacitor_GD_p_v;
  real_T N_Channel_MOSFET_2_capacitor_GS_n_v;
  real_T N_Channel_MOSFET_2_drain_resistor_Q;
  real_T R_i;
  real_T R_Load_i;
  real_T Thermal_1_Convection_Heatsink_Q;
  real_T Thermal_2_Convection_Heatsink_Q;
  real_T t0[254];
  real_T t1;
  real_T t2;
  real_T t3;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T U_idx_0;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_19;
  real_T X_idx_18;
  real_T X_idx_20;
  real_T X_idx_4;
  real_T X_idx_23;
  real_T X_idx_5;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_6;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_31;
  real_T X_idx_10;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_35;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_36;
  real_T X_idx_37;
  real_T X_idx_3;
  real_T X_idx_21;
  real_T D_idx_0;
  real_T X_idx_22;
  int32_T Q_idx_0;
  real_T U_idx_1;
  real_T D_idx_1;
  real_T D_idx_2;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  real_T X_idx_9;
  real_T X_idx_13;
  Q_idx_0 = t5->mQ.mX[0];
  Q_idx_1 = t5->mQ.mX[1];
  Q_idx_2 = t5->mQ.mX[2];
  U_idx_0 = t5->mU.mX[0];
  U_idx_1 = t5->mU.mX[1];
  X_idx_0 = t5->mX.mX[0];
  X_idx_1 = t5->mX.mX[1];
  X_idx_2 = t5->mX.mX[2];
  X_idx_3 = t5->mX.mX[3];
  X_idx_4 = t5->mX.mX[4];
  X_idx_5 = t5->mX.mX[5];
  X_idx_6 = t5->mX.mX[6];
  X_idx_7 = t5->mX.mX[7];
  X_idx_8 = t5->mX.mX[8];
  X_idx_9 = t5->mX.mX[9];
  X_idx_10 = t5->mX.mX[10];
  X_idx_11 = t5->mX.mX[11];
  X_idx_12 = t5->mX.mX[12];
  X_idx_13 = t5->mX.mX[13];
  X_idx_14 = t5->mX.mX[14];
  X_idx_15 = t5->mX.mX[15];
  X_idx_16 = t5->mX.mX[16];
  X_idx_17 = t5->mX.mX[17];
  X_idx_18 = t5->mX.mX[18];
  X_idx_19 = t5->mX.mX[19];
  X_idx_20 = t5->mX.mX[20];
  X_idx_21 = t5->mX.mX[21];
  X_idx_22 = t5->mX.mX[22];
  X_idx_23 = t5->mX.mX[23];
  X_idx_24 = t5->mX.mX[24];
  X_idx_25 = t5->mX.mX[25];
  X_idx_26 = t5->mX.mX[26];
  X_idx_27 = t5->mX.mX[27];
  X_idx_28 = t5->mX.mX[28];
  X_idx_29 = t5->mX.mX[29];
  X_idx_30 = t5->mX.mX[30];
  X_idx_31 = t5->mX.mX[31];
  X_idx_32 = t5->mX.mX[32];
  X_idx_33 = t5->mX.mX[33];
  X_idx_34 = t5->mX.mX[34];
  X_idx_35 = t5->mX.mX[35];
  X_idx_36 = t5->mX.mX[36];
  X_idx_37 = t5->mX.mX[37];
  D_idx_0 = t5->mD.mX[0];
  D_idx_1 = t5->mD.mX[1];
  D_idx_2 = t5->mD.mX[2];
  out = t6->mOBS_ACT;
  Current_sensor_Current_Sensor_I = ((((X_idx_0 * -0.0001 + X_idx_1 * -0.0001) +
    -X_idx_2) + X_idx_14 * -1.000001) + X_idx_15 * -1.0000010001) + X_idx_16;
  Cyclic_Load_Controlled_Current_Source_v = -X_idx_0 / -1.0;
  t1 = (((((((X_idx_0 * 0.0001 + X_idx_1 * 0.0001) + -X_idx_17) + X_idx_14 *
            1.000001) + X_idx_15 * 1.0000010001) + -X_idx_19) + -X_idx_16) +
        X_idx_18) + X_idx_2;
  Diode_1_p_v = (-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 * -0.010001;
  Diode_1_v = (((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 * -1.000001) +
                    X_idx_2 * -0.01) + X_idx_14 * -0.02000001) + X_idx_15 *
                  -0.020001010001) + X_idx_18 * -0.01) + X_idx_19 * 0.01) +
               X_idx_16 * 0.01) + -30.0;
  t2 = ((((((X_idx_0 * -1.0000000000000002E-6 + X_idx_1 * -1.000001) + X_idx_2 *
            -0.01) + X_idx_14 * -0.02000001) + X_idx_15 * -0.020001010001) +
         X_idx_18 * -0.01) + X_idx_19 * 0.01) + X_idx_16 * 0.01;
  Diode_1_private_ohmicResistance_i = ((((((X_idx_0 * 0.0001 + X_idx_1 * 0.0001)
    + X_idx_14 * 1.000001) + X_idx_15 * 1.0000010001) + -X_idx_19) + -X_idx_16)
    + X_idx_18) + X_idx_2;
  Diode_2_v = X_idx_15 * 9.9999999999926537E-7 + X_idx_1;
  t3 = X_idx_14 * -0.01 + X_idx_15 * -0.01;
  Diode_2_private_ohmicResistance_i = X_idx_14 + X_idx_15;
  Driver_Half_Bridge_Driver_HO_v = ((((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 *
    -0.010001) + X_idx_18 * -0.001) + X_idx_19 * -0.01) + X_idx_4;
  Driver_Half_Bridge_Driver_LO_v = (X_idx_16 * -0.001 + X_idx_23 * -0.011) +
    X_idx_5;
  Driver_Half_Bridge_Driver_iL = X_idx_16 + X_idx_23;
  N_Channel_MOSFET_1_capacitor_GD_n_v = ((((-X_idx_1 + -X_idx_6) + X_idx_14 *
    -0.01) + X_idx_15 * -0.010001) + X_idx_19 * -0.01) + X_idx_4;
  N_Channel_MOSFET_1_capacitor_GD_p_v = (((-X_idx_1 + X_idx_14 * -0.01) +
    X_idx_15 * -0.010001) + X_idx_19 * -0.01) + X_idx_4;
  N_Channel_MOSFET_1_capacitor_GS_n_v = ((-X_idx_1 + X_idx_14 * -0.01) +
    X_idx_15 * -0.010001) + X_idx_19 * -0.01;
  N_Channel_MOSFET_1_drain_resistor_Q = ((-X_idx_27 + -X_idx_28) + -X_idx_29) +
    -X_idx_30;
  N_Channel_MOSFET_1_drain_resistor_i = -X_idx_19 + X_idx_18;
  N_Channel_MOSFET_2_capacitor_GD_n_v = ((-X_idx_1 + X_idx_14 * -0.01) +
    X_idx_15 * -0.010001) + X_idx_16 * -0.01;
  N_Channel_MOSFET_2_capacitor_GD_p_v = X_idx_23 * -0.01 + X_idx_5;
  N_Channel_MOSFET_2_capacitor_GS_n_v = X_idx_23 * -0.01;
  N_Channel_MOSFET_2_drain_resistor_Q = ((-X_idx_32 + -X_idx_33) + -X_idx_34) +
    -X_idx_35;
  R_i = ((X_idx_0 * 0.0001 + X_idx_1 * 0.0001) + X_idx_14 *
         1.0000000000000002E-6) + X_idx_15 * 1.0001E-6;
  R_Load_i = X_idx_0 * 0.26666666666666666;
  Thermal_1_Convection_Heatsink_Q = (X_idx_7 * 0.00042016806722689078 + X_idx_8 *
    -0.00042016806722689078) + -X_idx_36;
  Thermal_2_Convection_Heatsink_Q = (X_idx_11 * 0.00042016806722689078 +
    X_idx_12 * -0.00042016806722689078) + -X_idx_37;
  t0[0ULL] = ((((X_idx_0 * -0.26676666666666665 + X_idx_1 * -0.0001) + -X_idx_2)
               + X_idx_14 * -1.0000000000000002E-6) + X_idx_15 * -1.0001E-6) +
    -U_idx_0;
  t0[1ULL] = 0.0;
  t0[2ULL] = X_idx_0;
  t0[3ULL] = X_idx_0;
  t0[4ULL] = X_idx_0;
  t0[5ULL] = Current_sensor_Current_Sensor_I;
  t0[6ULL] = Current_sensor_Current_Sensor_I;
  t0[7ULL] = 30.0;
  t0[8ULL] = 30.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 30.0;
  t0[11ULL] = 30.0;
  t0[12ULL] = 0.0;
  t0[13ULL] = U_idx_0;
  t0[14ULL] = U_idx_0;
  t0[15ULL] = X_idx_0;
  t0[16ULL] = Cyclic_Load_Controlled_Current_Source_v;
  t0[17ULL] = X_idx_0;
  t0[18ULL] = 0.0;
  t0[19ULL] = -Current_sensor_Current_Sensor_I;
  t0[20ULL] = 0.0;
  t0[21ULL] = 30.0;
  t0[22ULL] = 30.0;
  t0[23ULL] = X_idx_17;
  t0[24ULL] = 30.0;
  t0[25ULL] = t2;
  t0[26ULL] = Diode_1_v;
  t0[27ULL] = X_idx_3;
  t0[28ULL] = 298.15;
  t0[29ULL] = t1;
  t0[30ULL] = X_idx_17;
  t0[31ULL] = t2;
  t0[32ULL] = 30.0;
  t0[33ULL] = Diode_1_private_ohmicResistance_i;
  t0[34ULL] = t2;
  t0[35ULL] = Diode_1_p_v;
  t0[36ULL] = Diode_1_private_ohmicResistance_i * 0.01;
  t0[37ULL] = Diode_1_p_v;
  t0[38ULL] = -(t1 * Diode_1_v * 0.001 + t1 * t1 * 1.0E-5) / -1.0 * 1000.0;
  t0[39ULL] = Diode_1_v;
  t0[40ULL] = Diode_1_v;
  t0[41ULL] = X_idx_15;
  t0[42ULL] = Diode_1_p_v;
  t0[43ULL] = t3;
  t0[44ULL] = Diode_2_v;
  t0[45ULL] = X_idx_1;
  t0[46ULL] = 298.15;
  t0[47ULL] = X_idx_14;
  t0[48ULL] = X_idx_15;
  t0[49ULL] = t3;
  t0[50ULL] = Diode_1_p_v;
  t0[51ULL] = Diode_2_private_ohmicResistance_i;
  t0[52ULL] = t3;
  t0[53ULL] = 0.0;
  t0[54ULL] = Diode_2_private_ohmicResistance_i * 0.01;
  t0[55ULL] = 0.0;
  t0[56ULL] = -(X_idx_14 * Diode_2_v * 0.001 + X_idx_14 * X_idx_14 * 1.0E-5) /
    -1.0 * 1000.0;
  t0[57ULL] = Diode_2_v;
  t0[58ULL] = Diode_2_v;
  t0[59ULL] = 0.0;
  t0[60ULL] = X_idx_20;
  t0[61ULL] = X_idx_21;
  t0[62ULL] = 0.0;
  t0[63ULL] = 0.0;
  t0[64ULL] = X_idx_20;
  t0[65ULL] = X_idx_20;
  t0[66ULL] = D_idx_0;
  t0[67ULL] = X_idx_22;
  t0[68ULL] = (real_T)Q_idx_0;
  t0[69ULL] = U_idx_1;
  t0[70ULL] = 0.0;
  t0[71ULL] = 0.0;
  t0[72ULL] = D_idx_1;
  t0[73ULL] = D_idx_2;
  t0[74ULL] = -(X_idx_24 * 0.001 + X_idx_25 * 0.001) / -1.0 * 1000.0;
  t0[75ULL] = Driver_Half_Bridge_Driver_HO_v;
  t0[76ULL] = Diode_1_p_v;
  t0[77ULL] = Driver_Half_Bridge_Driver_LO_v;
  t0[78ULL] = 0.0;
  t0[79ULL] = X_idx_20;
  t0[80ULL] = 0.0;
  t0[81ULL] = X_idx_18;
  t0[82ULL] = Driver_Half_Bridge_Driver_iL;
  t0[83ULL] = X_idx_24;
  t0[84ULL] = X_idx_25;
  t0[85ULL] = X_idx_20;
  t0[86ULL] = (real_T)Q_idx_1;
  t0[87ULL] = (real_T)Q_idx_2;
  t0[88ULL] = Driver_Half_Bridge_Driver_HO_v;
  t0[89ULL] = Driver_Half_Bridge_Driver_LO_v;
  t0[90ULL] = Diode_1_p_v;
  t0[91ULL] = 0.0;
  t0[92ULL] = X_idx_2;
  t0[93ULL] = Diode_1_p_v;
  t0[94ULL] = X_idx_0;
  t0[95ULL] = ((X_idx_14 * 0.01 + X_idx_15 * 0.010001) + X_idx_0) + X_idx_1;
  t0[96ULL] = X_idx_2;
  t0[97ULL] = 30.0;
  t0[98ULL] = Driver_Half_Bridge_Driver_HO_v;
  t0[99ULL] = Diode_1_p_v;
  t0[100ULL] = X_idx_8;
  t0[101ULL] = (-X_idx_18 + X_idx_26) + X_idx_19;
  t0[102ULL] = N_Channel_MOSFET_1_capacitor_GD_n_v;
  t0[103ULL] = N_Channel_MOSFET_1_capacitor_GD_p_v;
  t0[104ULL] = X_idx_6;
  t0[105ULL] = X_idx_6;
  t0[106ULL] = -X_idx_26 + -X_idx_19;
  t0[107ULL] = N_Channel_MOSFET_1_capacitor_GS_n_v;
  t0[108ULL] = N_Channel_MOSFET_1_capacitor_GD_p_v;
  t0[109ULL] = X_idx_4;
  t0[110ULL] = X_idx_4;
  t0[111ULL] = X_idx_9;
  t0[112ULL] = N_Channel_MOSFET_1_drain_resistor_Q * 1000.0;
  t0[113ULL] = N_Channel_MOSFET_1_drain_resistor_i;
  t0[114ULL] = N_Channel_MOSFET_1_capacitor_GD_n_v;
  t0[115ULL] = 30.0;
  t0[116ULL] = N_Channel_MOSFET_1_drain_resistor_Q * -1000.0;
  t0[117ULL] = N_Channel_MOSFET_1_drain_resistor_i * 0.01;
  t0[118ULL] = X_idx_9;
  t0[119ULL] = X_idx_27 * 1000.0;
  t0[120ULL] = -X_idx_18;
  t0[121ULL] = N_Channel_MOSFET_1_capacitor_GD_p_v;
  t0[122ULL] = Driver_Half_Bridge_Driver_HO_v;
  t0[123ULL] = X_idx_27 * -1000.0;
  t0[124ULL] = X_idx_18 * -0.001;
  t0[125ULL] = N_Channel_MOSFET_1_capacitor_GD_n_v;
  t0[126ULL] = N_Channel_MOSFET_1_capacitor_GD_p_v;
  t0[127ULL] = N_Channel_MOSFET_1_capacitor_GS_n_v;
  t0[128ULL] = X_idx_9;
  t0[129ULL] = X_idx_26;
  t0[130ULL] = 0.0;
  t0[131ULL] = X_idx_28 * -1000.0;
  t0[132ULL] = -X_idx_6 + X_idx_4;
  t0[133ULL] = X_idx_4;
  t0[134ULL] = X_idx_9;
  t0[135ULL] = X_idx_28 * 1000.0;
  t0[136ULL] = X_idx_9;
  t0[137ULL] = X_idx_29 * 1000.0;
  t0[138ULL] = X_idx_19;
  t0[139ULL] = N_Channel_MOSFET_1_capacitor_GS_n_v;
  t0[140ULL] = Diode_1_p_v;
  t0[141ULL] = X_idx_29 * -1000.0;
  t0[142ULL] = X_idx_19 * 0.01;
  t0[143ULL] = X_idx_8;
  t0[144ULL] = X_idx_9;
  t0[145ULL] = (X_idx_7 * -0.00042016806722689078 + X_idx_8 *
                0.00042016806722689078) * 1000.0;
  t0[146ULL] = X_idx_30 * 1000.0;
  t0[147ULL] = X_idx_7;
  t0[148ULL] = X_idx_9;
  t0[149ULL] = Diode_1_p_v;
  t0[150ULL] = Driver_Half_Bridge_Driver_LO_v;
  t0[151ULL] = 0.0;
  t0[152ULL] = X_idx_12;
  t0[153ULL] = -X_idx_16 + X_idx_31;
  t0[154ULL] = N_Channel_MOSFET_2_capacitor_GD_n_v;
  t0[155ULL] = N_Channel_MOSFET_2_capacitor_GD_p_v;
  t0[156ULL] = X_idx_10;
  t0[157ULL] = X_idx_10;
  t0[158ULL] = -X_idx_31 + -X_idx_23;
  t0[159ULL] = N_Channel_MOSFET_2_capacitor_GS_n_v;
  t0[160ULL] = N_Channel_MOSFET_2_capacitor_GD_p_v;
  t0[161ULL] = X_idx_5;
  t0[162ULL] = X_idx_5;
  t0[163ULL] = X_idx_13;
  t0[164ULL] = N_Channel_MOSFET_2_drain_resistor_Q * 1000.0;
  t0[165ULL] = X_idx_16;
  t0[166ULL] = N_Channel_MOSFET_2_capacitor_GD_n_v;
  t0[167ULL] = Diode_1_p_v;
  t0[168ULL] = N_Channel_MOSFET_2_drain_resistor_Q * -1000.0;
  t0[169ULL] = X_idx_16 * 0.01;
  t0[170ULL] = X_idx_13;
  t0[171ULL] = X_idx_32 * 1000.0;
  t0[172ULL] = -Driver_Half_Bridge_Driver_iL;
  t0[173ULL] = N_Channel_MOSFET_2_capacitor_GD_p_v;
  t0[174ULL] = Driver_Half_Bridge_Driver_LO_v;
  t0[175ULL] = X_idx_32 * -1000.0;
  t0[176ULL] = Driver_Half_Bridge_Driver_iL * -0.001;
  t0[177ULL] = N_Channel_MOSFET_2_capacitor_GD_n_v;
  t0[178ULL] = N_Channel_MOSFET_2_capacitor_GD_p_v;
  t0[179ULL] = N_Channel_MOSFET_2_capacitor_GS_n_v;
  t0[180ULL] = X_idx_13;
  t0[181ULL] = X_idx_31;
  t0[182ULL] = 0.0;
  t0[183ULL] = X_idx_33 * -1000.0;
  t0[184ULL] = (((-X_idx_1 + X_idx_14 * -0.01) + X_idx_15 * -0.010001) +
                X_idx_16 * -0.01) + X_idx_23 * 0.01;
  t0[185ULL] = X_idx_5;
  t0[186ULL] = X_idx_13;
  t0[187ULL] = X_idx_33 * 1000.0;
  t0[188ULL] = X_idx_13;
  t0[189ULL] = X_idx_34 * 1000.0;
  t0[190ULL] = X_idx_23;
  t0[191ULL] = N_Channel_MOSFET_2_capacitor_GS_n_v;
  t0[192ULL] = 0.0;
  t0[193ULL] = X_idx_34 * -1000.0;
  t0[194ULL] = X_idx_23 * 0.01;
  t0[195ULL] = X_idx_12;
  t0[196ULL] = X_idx_13;
  t0[197ULL] = (X_idx_11 * -0.00042016806722689078 + X_idx_12 *
                0.00042016806722689078) * 1000.0;
  t0[198ULL] = X_idx_35 * 1000.0;
  t0[199ULL] = X_idx_11;
  t0[200ULL] = X_idx_13;
  t0[201ULL] = R_i;
  t0[202ULL] = Diode_1_p_v;
  t0[203ULL] = X_idx_0;
  t0[204ULL] = R_i * 10000.0;
  t0[205ULL] = R_Load_i;
  t0[206ULL] = 0.0;
  t0[207ULL] = X_idx_0;
  t0[208ULL] = R_Load_i * 3.75;
  t0[209ULL] = 298.15;
  t0[210ULL] = X_idx_8;
  t0[211ULL] = 298.15;
  t0[212ULL] = Thermal_1_Convection_Heatsink_Q * 1000.0;
  t0[213ULL] = Thermal_1_Convection_Heatsink_Q * 12499.999999999998;
  t0[214ULL] = X_idx_8;
  t0[215ULL] = X_idx_8;
  t0[216ULL] = X_idx_8;
  t0[217ULL] = Thermal_1_Convection_Heatsink_Q * 1000.0;
  t0[218ULL] = Thermal_1_Convection_Heatsink_Q * 1000.0;
  t0[219ULL] = X_idx_8;
  t0[220ULL] = X_idx_36 * 1000.0;
  t0[221ULL] = X_idx_8;
  t0[222ULL] = 0.0;
  t0[223ULL] = 298.15;
  t0[224ULL] = Thermal_1_Convection_Heatsink_Q * 1000.0;
  t0[225ULL] = 298.15;
  t0[226ULL] = 298.15;
  t0[227ULL] = 0.0;
  t0[228ULL] = 298.15;
  t0[229ULL] = X_idx_12;
  t0[230ULL] = 298.15;
  t0[231ULL] = Thermal_2_Convection_Heatsink_Q * 1000.0;
  t0[232ULL] = Thermal_2_Convection_Heatsink_Q * 12499.999999999998;
  t0[233ULL] = X_idx_12;
  t0[234ULL] = X_idx_12;
  t0[235ULL] = X_idx_12;
  t0[236ULL] = Thermal_2_Convection_Heatsink_Q * 1000.0;
  t0[237ULL] = Thermal_2_Convection_Heatsink_Q * 1000.0;
  t0[238ULL] = X_idx_12;
  t0[239ULL] = X_idx_37 * 1000.0;
  t0[240ULL] = X_idx_12;
  t0[241ULL] = 0.0;
  t0[242ULL] = 298.15;
  t0[243ULL] = Thermal_2_Convection_Heatsink_Q * 1000.0;
  t0[244ULL] = 298.15;
  t0[245ULL] = 298.15;
  t0[246ULL] = 0.0;
  t0[247ULL] = 0.0;
  t0[248ULL] = Cyclic_Load_Controlled_Current_Source_v;
  t0[249ULL] = 0.0;
  t0[250ULL] = 0.0;
  t0[251ULL] = X_idx_0;
  t0[252ULL] = Cyclic_Load_Controlled_Current_Source_v;
  t0[253ULL] = X_idx_0;
  for (Q_idx_0 = 0; Q_idx_0 < 254; Q_idx_0++) {
    out.mX[Q_idx_0] = t0[Q_idx_0];
  }

  (void)sys;
  (void)t6;
  return 0;
}
