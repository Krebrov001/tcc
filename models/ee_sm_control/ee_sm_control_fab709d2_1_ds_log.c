/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ee_sm_control/Solver Configuration'.
 */

#include "ne_ds.h"
#include "ee_sm_control_fab709d2_1_ds_log.h"
#include "ee_sm_control_fab709d2_1_ds_sys_struct.h"
#include "ee_sm_control_fab709d2_1_ds_externals.h"
#include "ee_sm_control_fab709d2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T ee_sm_control_fab709d2_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t137, NeDsMethodOutput *t138)
{
  PmRealVector out;
  real_T AVR_and_Exciter_Terminal_Voltage_Measurement_pu_output;
  real_T Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output;
  real_T Load_Step_off_wye_impedance_power_dissipated;
  real_T Synchronous_Machine_Round_Rotor_standard_efd;
  real_T t0[325];
  real_T t11[1];
  size_t t63;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t130;
  real_T t133;
  real_T X[42];
  real_T U_idx_3;
  real_T U_idx_0;
  int32_T Q_idx_0;
  real_T U_idx_1;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  real_T U_idx_2;
  int32_T Q_idx_4;
  int32_T Q_idx_5;
  Q_idx_0 = t137->mQ.mX[0];
  Q_idx_1 = t137->mQ.mX[1];
  Q_idx_2 = t137->mQ.mX[2];
  Q_idx_3 = t137->mQ.mX[3];
  Q_idx_4 = t137->mQ.mX[4];
  Q_idx_5 = t137->mQ.mX[5];
  U_idx_0 = t137->mU.mX[0];
  U_idx_1 = t137->mU.mX[1];
  U_idx_2 = t137->mU.mX[2];
  U_idx_3 = t137->mU.mX[3];
  X[0] = t137->mX.mX[0];
  X[1] = t137->mX.mX[1];
  X[2] = t137->mX.mX[2];
  X[3] = t137->mX.mX[3];
  X[4] = t137->mX.mX[4];
  X[5] = t137->mX.mX[5];
  X[6] = t137->mX.mX[6];
  X[7] = t137->mX.mX[7];
  X[8] = t137->mX.mX[8];
  X[9] = t137->mX.mX[9];
  X[10] = t137->mX.mX[10];
  X[11] = t137->mX.mX[11];
  X[12] = t137->mX.mX[12];
  X[13] = t137->mX.mX[13];
  X[14] = t137->mX.mX[14];
  X[15] = t137->mX.mX[15];
  X[16] = t137->mX.mX[16];
  X[17] = t137->mX.mX[17];
  X[18] = t137->mX.mX[18];
  X[19] = t137->mX.mX[19];
  X[20] = t137->mX.mX[20];
  X[21] = t137->mX.mX[21];
  X[22] = t137->mX.mX[22];
  X[23] = t137->mX.mX[23];
  X[24] = t137->mX.mX[24];
  X[25] = t137->mX.mX[25];
  X[26] = t137->mX.mX[26];
  X[27] = t137->mX.mX[27];
  X[28] = t137->mX.mX[28];
  X[29] = t137->mX.mX[29];
  X[30] = t137->mX.mX[30];
  X[31] = t137->mX.mX[31];
  X[32] = t137->mX.mX[32];
  X[33] = t137->mX.mX[33];
  X[34] = t137->mX.mX[34];
  X[35] = t137->mX.mX[35];
  X[36] = t137->mX.mX[36];
  X[37] = t137->mX.mX[37];
  X[38] = t137->mX.mX[38];
  X[39] = t137->mX.mX[39];
  X[40] = t137->mX.mX[40];
  X[41] = t137->mX.mX[41];
  out = t138->mLOG;
  t130 = -pmf_sqrt(X[20ULL] * X[20ULL] + X[21ULL] * X[21ULL]);
  Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output = -pmf_sqrt(X
    [17ULL] * X[17ULL] + X[18ULL] * X[18ULL]);
  AVR_and_Exciter_Terminal_Voltage_Measurement_pu_output =
    Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output / -1.0;
  t106 = -X[26ULL] + X[23ULL];
  t107 = -X[27ULL] + X[24ULL];
  t108 = -X[28ULL] + X[25ULL];
  t115 = -X[32ULL] + X[23ULL];
  t116 = -X[33ULL] + X[24ULL];
  t117 = -X[34ULL] + X[25ULL];
  Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output = -X[16ULL] /
    -1.0;
  t124 = X[23ULL] * 1.0E-6 + X[1ULL];
  t125 = X[24ULL] * 1.0E-6 + X[2ULL];
  t126 = X[25ULL] * 1.0E-6 + X[3ULL];
  t11[0ULL] = 0.0;
  t11[0ULL] = (t11[0ULL] + X[1ULL] * X[1ULL] * 0.0038019801980198019) + X[23ULL]
    * X[23ULL] * 1.0E-9;
  t11[0ULL] = (t11[0ULL] + X[2ULL] * X[2ULL] * 0.0038019801980198019) + X[24ULL]
    * X[24ULL] * 1.0E-9;
  t11[0ULL] = (t11[0ULL] + X[3ULL] * X[3ULL] * 0.0038019801980198019) + X[25ULL]
    * X[25ULL] * 1.0E-9;
  t133 = -t11[0ULL] / -1.0;
  t11[0ULL] = 0.0;
  t11[0ULL] += -X[29ULL] * -X[29ULL] * 5.76;
  t11[0ULL] += -X[30ULL] * -X[30ULL] * 5.76;
  t11[0ULL] += -X[31ULL] * -X[31ULL] * 5.76;
  Load_Step_off_wye_impedance_power_dissipated = -(t11[0ULL] * 0.001) / -1.0;
  t11[0ULL] = 0.0;
  t11[0ULL] += -X[35ULL] * -X[35ULL] * 2.88;
  t11[0ULL] += -X[36ULL] * -X[36ULL] * 2.88;
  t11[0ULL] += -X[37ULL] * -X[37ULL] * 2.88;
  Synchronous_Machine_Round_Rotor_standard_efd = U_idx_0 * 95.640710127612877;
  t0[0ULL] = 0.0;
  t0[1ULL] = U_idx_0;
  t0[2ULL] = 0.0;
  t0[3ULL] = X[12ULL];
  t0[4ULL] = 0.0;
  t0[5ULL] = U_idx_0 * 95.640710127612877;
  t0[6ULL] = X[12ULL] * -1300.0;
  t0[7ULL] = X[12ULL] * 1300.0;
  for (t63 = 8ULL; t63 - 8ULL < 10ULL; t63++) {
    t0[t63] = X[t63 + 5ULL];
  }

  t0[18ULL] = t130 / -1.0;
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 6ULL] = X[t63];
  }

  t0[29ULL] = AVR_and_Exciter_Terminal_Voltage_Measurement_pu_output;
  t0[30ULL] = U_idx_0 * 95.640710127612877;
  t0[31ULL] = 0.0;
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 19ULL] = X[t63];
  }

  t0[42ULL] = X[23ULL];
  t0[43ULL] = X[24ULL];
  t0[44ULL] = X[25ULL];
  t0[45ULL] = t106;
  t0[46ULL] = t107;
  t0[47ULL] = t108;
  t0[48ULL] = X[29ULL];
  t0[49ULL] = (real_T)Q_idx_0;
  t0[50ULL] = X[23ULL];
  t0[51ULL] = t106;
  t0[52ULL] = X[26ULL];
  t0[53ULL] = U_idx_1;
  t0[54ULL] = X[30ULL];
  t0[55ULL] = (real_T)Q_idx_1;
  t0[56ULL] = X[24ULL];
  t0[57ULL] = t107;
  t0[58ULL] = X[27ULL];
  t0[59ULL] = U_idx_1;
  t0[60ULL] = X[31ULL];
  t0[61ULL] = (real_T)Q_idx_2;
  t0[62ULL] = X[25ULL];
  t0[63ULL] = t108;
  t0[64ULL] = X[28ULL];
  t0[65ULL] = U_idx_1;
  t0[66ULL] = X[29ULL];
  t0[67ULL] = X[30ULL];
  t0[68ULL] = X[31ULL];
  t0[69ULL] = X[23ULL];
  t0[70ULL] = X[24ULL];
  t0[71ULL] = X[25ULL];
  t0[72ULL] = X[23ULL];
  t0[73ULL] = X[24ULL];
  t0[74ULL] = X[25ULL];
  t0[75ULL] = -X[29ULL];
  t0[76ULL] = -X[30ULL];
  t0[77ULL] = -X[31ULL];
  t0[78ULL] = -X[29ULL];
  t0[79ULL] = -X[30ULL];
  t0[80ULL] = -X[31ULL];
  t0[81ULL] = t106;
  t0[82ULL] = t107;
  t0[83ULL] = t108;
  t0[84ULL] = t106;
  t0[85ULL] = t107;
  t0[86ULL] = t108;
  t0[87ULL] = X[29ULL];
  t0[88ULL] = X[30ULL];
  t0[89ULL] = X[31ULL];
  t0[90ULL] = U_idx_1;
  t0[91ULL] = X[23ULL];
  t0[92ULL] = X[24ULL];
  t0[93ULL] = X[25ULL];
  t0[94ULL] = t115;
  t0[95ULL] = t116;
  t0[96ULL] = t117;
  t0[97ULL] = X[35ULL];
  t0[98ULL] = (real_T)Q_idx_3;
  t0[99ULL] = X[23ULL];
  t0[100ULL] = t115;
  t0[101ULL] = X[32ULL];
  t0[102ULL] = U_idx_2;
  t0[103ULL] = X[36ULL];
  t0[104ULL] = (real_T)Q_idx_4;
  t0[105ULL] = X[24ULL];
  t0[106ULL] = t116;
  t0[107ULL] = X[33ULL];
  t0[108ULL] = U_idx_2;
  t0[109ULL] = X[37ULL];
  t0[110ULL] = (real_T)Q_idx_5;
  t0[111ULL] = X[25ULL];
  t0[112ULL] = t117;
  t0[113ULL] = X[34ULL];
  t0[114ULL] = U_idx_2;
  t0[115ULL] = X[35ULL];
  t0[116ULL] = X[36ULL];
  t0[117ULL] = X[37ULL];
  t0[118ULL] = X[23ULL];
  t0[119ULL] = X[24ULL];
  t0[120ULL] = X[25ULL];
  t0[121ULL] = X[23ULL];
  t0[122ULL] = X[24ULL];
  t0[123ULL] = X[25ULL];
  t0[124ULL] = -X[35ULL];
  t0[125ULL] = -X[36ULL];
  t0[126ULL] = -X[37ULL];
  t0[127ULL] = -X[35ULL];
  t0[128ULL] = -X[36ULL];
  t0[129ULL] = -X[37ULL];
  t0[130ULL] = t115;
  t0[131ULL] = t116;
  t0[132ULL] = t117;
  t0[133ULL] = t115;
  t0[134ULL] = t116;
  t0[135ULL] = t117;
  t0[136ULL] = X[35ULL];
  t0[137ULL] = X[36ULL];
  t0[138ULL] = X[37ULL];
  t0[139ULL] = U_idx_2;
  t0[140ULL] = 0.0;
  t0[141ULL] = 0.0;
  t0[142ULL] = 0.0;
  t0[143ULL] = 0.0;
  t0[144ULL] = 0.0;
  t0[145ULL] = 0.0;
  t0[146ULL] = X[0ULL];
  t0[147ULL] = U_idx_3;
  t0[148ULL] = -U_idx_3;
  t0[149ULL] = X[0ULL] / -1.0;
  t0[150ULL] = 0.0;
  t0[151ULL] = X[0ULL];
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 139ULL] = X[t63];
  }

  t0[162ULL] = Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output;
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 150ULL] = X[t63];
  }

  t0[173ULL] = X[23ULL];
  t0[174ULL] = X[24ULL];
  t0[175ULL] = X[25ULL];
  t0[176ULL] = 0.0;
  t0[177ULL] = t124;
  t0[178ULL] = t125;
  t0[179ULL] = t126;
  t0[180ULL] = 0.0;
  t0[181ULL] = 0.0;
  t0[182ULL] = 0.0;
  t0[183ULL] = ((((-X[1ULL] + -X[2ULL]) + -X[3ULL]) + X[23ULL] * -1.0E-6) + X
                [24ULL] * -1.0E-6) + X[25ULL] * -1.0E-6;
  t0[184ULL] = 0.0;
  t0[185ULL] = t124;
  t0[186ULL] = t125;
  t0[187ULL] = t126;
  t0[188ULL] = X[1ULL];
  t0[189ULL] = X[2ULL];
  t0[190ULL] = X[3ULL];
  t0[191ULL] = X[23ULL];
  t0[192ULL] = X[24ULL];
  t0[193ULL] = X[25ULL];
  t0[194ULL] = 0.0;
  t0[195ULL] = 0.0;
  t0[196ULL] = 0.0;
  t0[197ULL] = X[23ULL];
  t0[198ULL] = X[24ULL];
  t0[199ULL] = X[25ULL];
  t0[200ULL] = t133 * 1000.0;
  t0[201ULL] = t106;
  t0[202ULL] = t107;
  t0[203ULL] = t108;
  t0[204ULL] = 0.0;
  t0[205ULL] = X[29ULL];
  t0[206ULL] = X[30ULL];
  t0[207ULL] = X[31ULL];
  t0[208ULL] = 0.0;
  t0[209ULL] = 0.0;
  t0[210ULL] = 0.0;
  t0[211ULL] = (-X[29ULL] + -X[30ULL]) + -X[31ULL];
  t0[212ULL] = 0.0;
  t0[213ULL] = X[29ULL];
  t0[214ULL] = X[30ULL];
  t0[215ULL] = X[31ULL];
  t0[216ULL] = t106;
  t0[217ULL] = t107;
  t0[218ULL] = t108;
  t0[219ULL] = 0.0;
  t0[220ULL] = 0.0;
  t0[221ULL] = 0.0;
  t0[222ULL] = -X[29ULL] * -5.76;
  t0[223ULL] = -X[30ULL] * -5.76;
  t0[224ULL] = -X[31ULL] * -5.76;
  t0[225ULL] = Load_Step_off_wye_impedance_power_dissipated * 1000.0;
  t0[226ULL] = t115;
  t0[227ULL] = t116;
  t0[228ULL] = t117;
  t0[229ULL] = 0.0;
  t0[230ULL] = X[35ULL];
  t0[231ULL] = X[36ULL];
  t0[232ULL] = X[37ULL];
  t0[233ULL] = 0.0;
  t0[234ULL] = 0.0;
  t0[235ULL] = 0.0;
  t0[236ULL] = (-X[35ULL] + -X[36ULL]) + -X[37ULL];
  t0[237ULL] = 0.0;
  t0[238ULL] = X[35ULL];
  t0[239ULL] = X[36ULL];
  t0[240ULL] = X[37ULL];
  t0[241ULL] = t115;
  t0[242ULL] = t116;
  t0[243ULL] = t117;
  t0[244ULL] = 0.0;
  t0[245ULL] = 0.0;
  t0[246ULL] = 0.0;
  t0[247ULL] = -X[35ULL] * -2.88;
  t0[248ULL] = -X[36ULL] * -2.88;
  t0[249ULL] = -X[37ULL] * -2.88;
  t0[250ULL] = -(t11[0ULL] * 0.001) / -1.0 * 1000.0;
  t0[251ULL] = X[0ULL];
  t0[252ULL] = -X[38ULL] + U_idx_3;
  t0[253ULL] = X[0ULL];
  t0[254ULL] = 0.0;
  t0[255ULL] = ((-X[1ULL] + -X[29ULL]) + -X[35ULL]) + X[23ULL] * -1.0E-6;
  t0[256ULL] = ((-X[2ULL] + -X[30ULL]) + -X[36ULL]) + X[24ULL] * -1.0E-6;
  t0[257ULL] = ((-X[3ULL] + -X[31ULL]) + -X[37ULL]) + X[25ULL] * -1.0E-6;
  t0[258ULL] = 1.6600000000000001;
  t0[259ULL] = 1.61;
  t0[260ULL] = X[23ULL];
  t0[261ULL] = X[24ULL];
  t0[262ULL] = X[25ULL];
  t0[263ULL] = X[0ULL];
  t0[264ULL] = X[23ULL];
  t0[265ULL] = X[24ULL];
  t0[266ULL] = X[25ULL];
  t0[267ULL] = X[4ULL];
  t0[268ULL] = X[38ULL];
  t0[269ULL] = X[0ULL];
  t0[270ULL] = Synchronous_Machine_Round_Rotor_standard_efd;
  t0[271ULL] = 0.0;
  t0[272ULL] = U_idx_0 * 95.640710127612877;
  t0[273ULL] = ((((((((((X[23ULL] * 1.0E-6 + X[24ULL] * 1.0E-6) + X[25ULL] *
                        1.0E-6) + X[1ULL]) + X[2ULL]) + X[3ULL]) + X[29ULL]) +
                   X[30ULL]) + X[31ULL]) + X[35ULL]) + X[36ULL]) + X[37ULL];
  t0[274ULL] = X[12ULL] * 1300.0;
  t0[275ULL] = 0.0;
  t0[276ULL] = Synchronous_Machine_Round_Rotor_standard_efd *
    0.010455798568054392;
  t0[277ULL] = X[12ULL];
  t0[278ULL] = X[7ULL] * -6.666666666666667;
  t0[279ULL] = (X[5ULL] * 0.60240963855421681 + X[12ULL] * -0.66346641236745907)
    + X[39ULL];
  t0[280ULL] = X[40ULL];
  t0[281ULL] = (X[6ULL] * 0.41357549880857991 + X[40ULL] * -0.66585655308181368)
    + X[41ULL] * 0.66585655308181368;
  t0[282ULL] = X[39ULL];
  t0[283ULL] = X[41ULL];
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 271ULL] = X[t63];
  }

  t0[294ULL] = X[7ULL];
  t0[295ULL] = X[8ULL];
  t0[296ULL] = X[9ULL];
  t0[297ULL] = X[6ULL];
  t0[298ULL] = X[10ULL];
  t0[299ULL] = X[5ULL];
  t0[300ULL] = X[11ULL];
  t0[301ULL] = X[38ULL] * 6.7926327645184706E-7;
  t0[302ULL] = X[0ULL] * 0.0026525823848649226;
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 290ULL] = X[t63];
  }

  t0[313ULL] = AVR_and_Exciter_Terminal_Voltage_Measurement_pu_output;
  for (t63 = 13ULL; t63 - 13ULL < 10ULL; t63++) {
    t0[t63 + 301ULL] = X[t63];
  }

  t0[324ULL] = Governor_and_Prime_Mover_Rotor_Velocity_Measurement_pu_output;
  for (Q_idx_0 = 0; Q_idx_0 < 325; Q_idx_0++) {
    out.mX[Q_idx_0] = t0[Q_idx_0];
  }

  (void)sys;
  (void)t138;
  return 0;
}
