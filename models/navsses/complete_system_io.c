/*
 * complete_system_io.c
 *
 * Code generation for model "complete_system_io".
 *
 * Model version              : 1.309
 * Simulink Coder version : 8.5 (R2013b) 08-Aug-2013
 * C source code generated on : Tue Jun 20 11:55:30 2017
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Specified
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */
#include "complete_system_io.h"
#include "complete_system_io_private.h"

/* Block signals (auto storage) */
B_complete_system_io_T complete_system_io_B;

/* Continuous states */
X_complete_system_io_T complete_system_io_X;

/* Block states (auto storage) */
DW_complete_system_io_T complete_system_io_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_complete_system_io_T complete_system_io_Y;

/* Real-time model */
RT_MODEL_complete_system_io_T complete_system_io_M_;
RT_MODEL_complete_system_io_T *const complete_system_io_M =
  &complete_system_io_M_;

/*
 * Time delay interpolation routine
 *
 * The linear interpolation is performed using the formula:
 *
 *          (t2 - tMinusDelay)         (tMinusDelay - t1)
 * u(t)  =  ----------------- * u1  +  ------------------- * u2
 *              (t2 - t1)                  (t2 - t1)
 */
real_T rt_TDelayInterpolate(
  real_T tMinusDelay,                  /* tMinusDelay = currentSimTime - delay */
  real_T tStart,
  real_T *tBuf,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
{
  int_T i;
  real_T yout, t1, t2, u1, u2;

  /*
   * If there is only one data point in the buffer, this data point must be
   * the t= 0 and tMinusDelay > t0, it ask for something unknown. The best
   * guess if initial output as well
   */
  if ((newIdx == 0) && (oldestIdx ==0 ) && (tMinusDelay > tStart))
    return initOutput;

  /*
   * If tMinusDelay is less than zero, should output initial value
   */
  if (tMinusDelay <= tStart)
    return initOutput;

  /* For fixed buffer extrapolation:
   * if tMinusDelay is small than the time at oldestIdx, if discrete, output
   * tailptr value,  else use tailptr and tailptr+1 value to extrapolate
   * It is also for fixed buffer. Note: The same condition can happen for transport delay block where
   * use tStart and and t[tail] other than using t[tail] and t[tail+1].
   * See below
   */
  if ((tMinusDelay <= tBuf[oldestIdx] ) ) {
    if (discrete) {
      return(uBuf[oldestIdx]);
    } else {
      int_T tempIdx= oldestIdx + 1;
      if (oldestIdx == bufSz-1)
        tempIdx = 0;
      t1= tBuf[oldestIdx];
      t2= tBuf[tempIdx];
      u1= uBuf[oldestIdx];
      u2= uBuf[tempIdx];
      if (t2 == t1) {
        if (tMinusDelay >= t2) {
          yout = u2;
        } else {
          yout = u1;
        }
      } else {
        real_T f1 = (t2-tMinusDelay) / (t2-t1);
        real_T f2 = 1.0 - f1;

        /*
         * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
         */
        yout = f1*u1 + f2*u2;
      }

      return yout;
    }
  }

  /*
   * When block does not have direct feedthrough, we use the table of
   * values to extrapolate off the end of the table for delays that are less
   * than 0 (less then step size).  This is not completely accurate.  The
   * chain of events is as follows for a given time t.  Major output - look
   * in table.  Update - add entry to table.  Now, if we call the output at
   * time t again, there is a new entry in the table. For very small delays,
   * this means that we will have a different answer from the previous call
   * to the output fcn at the same time t.  The following code prevents this
   * from happening.
   */
  if (minorStepAndTAtLastMajorOutput) {
    /* pretend that the new entry has not been added to table */
    if (newIdx != 0) {
      if (*lastIdx == newIdx) {
        (*lastIdx)--;
      }

      newIdx--;
    } else {
      if (*lastIdx == newIdx) {
        *lastIdx = bufSz-1;
      }

      newIdx = bufSz - 1;
    }
  }

  i = *lastIdx;
  if (tBuf[i] < tMinusDelay) {
    /* Look forward starting at last index */
    while (tBuf[i] < tMinusDelay) {
      /* May occur if the delay is less than step-size - extrapolate */
      if (i == newIdx)
        break;
      i = ( i < (bufSz-1) ) ? (i+1) : 0;/* move through buffer */
    }
  } else {
    /*
     * Look backwards starting at last index which can happen when the
     * delay time increases.
     */
    while (tBuf[i] >= tMinusDelay) {
      /*
       * Due to the entry condition at top of function, we
       * should never hit the end.
       */
      i = (i > 0) ? i-1 : (bufSz-1);   /* move through buffer */
    }

    i = ( i < (bufSz-1) ) ? (i+1) : 0;
  }

  *lastIdx = i;
  if (discrete) {
    /*
     * tempEps = 128 * eps;
     * localEps = max(tempEps, tempEps*fabs(tBuf[i]))/2;
     */
    double tempEps = (DBL_EPSILON) * 128.0;
    double localEps = tempEps * fabs(tBuf[i]);
    if (tempEps > localEps) {
      localEps = tempEps;
    }

    localEps = localEps / 2.0;
    if (tMinusDelay >= (tBuf[i] - localEps)) {
      yout = uBuf[i];
    } else {
      if (i == 0) {
        yout = uBuf[bufSz-1];
      } else {
        yout = uBuf[i-1];
      }
    }
  } else {
    if (i == 0) {
      t1 = tBuf[bufSz-1];
      u1 = uBuf[bufSz-1];
    } else {
      t1 = tBuf[i-1];
      u1 = uBuf[i-1];
    }

    t2 = tBuf[i];
    u2 = uBuf[i];
    if (t2 == t1) {
      if (tMinusDelay >= t2) {
        yout = u2;
      } else {
        yout = u1;
      }
    } else {
      real_T f1 = (t2-tMinusDelay) / (t2-t1);
      real_T f2 = 1.0 - f1;

      /*
       * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
       */
      yout = f1*u1 + f2*u2;
    }
  }

  return(yout);
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  complete_system_io_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  complete_system_io_step();
  complete_system_io_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  complete_system_io_step();
  complete_system_io_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

void rt_invd5x5_snf(const real_T u[25], real_T y[25])
{
  int8_T p[5];
  real_T A[25];
  int8_T ipiv[5];
  int32_T jm;
  int32_T jj;
  int32_T j;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T pipk;
  int32_T k;
  int32_T c;
  int32_T i;
  for (i = 0; i < 25; i++) {
    y[i] = 0.0;
    A[i] = u[i];
  }

  for (i = 0; i < 5; i++) {
    ipiv[i] = (int8_T)(1 + i);
  }

  for (j = 0; j < 4; j++) {
    c = j * 6;
    jj = j * 6;
    pipk = 1;
    ix = c;
    smax = fabs(A[jj]);
    for (k = 2; k <= 5 - j; k++) {
      ix++;
      s = fabs(A[ix]);
      if (s > smax) {
        pipk = k;
        smax = s;
      }
    }

    pipk--;
    if (A[c + pipk] != 0.0) {
      if (pipk != 0) {
        ipiv[j] = (int8_T)((j + pipk) + 1);
        ix = j;
        pipk += j;
        for (k = 0; k < 5; k++) {
          smax = A[ix];
          A[ix] = A[pipk];
          A[pipk] = smax;
          ix += 5;
          pipk += 5;
        }
      }

      i = c - j;
      for (jm = c + 1; jm + 1 <= i + 5; jm++) {
        A[jm] /= A[c];
      }
    }

    pipk = jj + 5;
    for (jm = 1; jm <= 4 - j; jm++) {
      if (A[pipk] != 0.0) {
        smax = -A[pipk];
        ix = c;
        i = jj - j;
        for (k = jj + 6; k + 1 <= i + 10; k++) {
          A[k] += A[ix + 1] * smax;
          ix++;
        }
      }

      pipk += 5;
      jj += 5;
    }
  }

  for (i = 0; i < 5; i++) {
    p[i] = (int8_T)(1 + i);
  }

  if (ipiv[0] > 1) {
    pipk = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = p[0];
    p[0] = (int8_T)pipk;
  }

  if (ipiv[1] > 2) {
    pipk = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = (int8_T)pipk;
  }

  if (ipiv[2] > 3) {
    pipk = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = (int8_T)pipk;
  }

  if (ipiv[3] > 4) {
    pipk = p[ipiv[3] - 1];
    p[ipiv[3] - 1] = p[3];
    p[3] = (int8_T)pipk;
  }

  for (k = 0; k < 5; k++) {
    y[k + 5 * (p[k] - 1)] = 1.0;
    for (j = k; j + 1 < 6; j++) {
      if (y[(p[k] - 1) * 5 + j] != 0.0) {
        for (jm = j + 1; jm + 1 < 6; jm++) {
          y[jm + 5 * (p[k] - 1)] -= y[(p[k] - 1) * 5 + j] * A[5 * j + jm];
        }
      }
    }
  }

  for (j = 0; j < 5; j++) {
    c = 5 * j;
    for (k = 4; k >= 0; k += -1) {
      pipk = 5 * k;
      if (y[k + c] != 0.0) {
        y[k + c] /= A[k + pipk];
        for (jm = 0; jm + 1 <= k; jm++) {
          y[jm + c] -= y[k + c] * A[jm + pipk];
        }
      }
    }
  }
}

void rt_invd4x4_snf(const real_T u[16], real_T y[16])
{
  int8_T p[4];
  real_T A[16];
  int8_T ipiv[4];
  int32_T jm;
  int32_T jj;
  int32_T j;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T pipk;
  int32_T k;
  int32_T c;
  int32_T i;
  for (i = 0; i < 16; i++) {
    y[i] = 0.0;
    A[i] = u[i];
  }

  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    jj = j * 5;
    pipk = 1;
    ix = c;
    smax = fabs(A[jj]);
    for (k = 2; k <= 4 - j; k++) {
      ix++;
      s = fabs(A[ix]);
      if (s > smax) {
        pipk = k;
        smax = s;
      }
    }

    pipk--;
    if (A[c + pipk] != 0.0) {
      if (pipk != 0) {
        ipiv[j] = (int8_T)((j + pipk) + 1);
        pipk += j;
        smax = A[j];
        A[j] = A[pipk];
        A[pipk] = smax;
        ix = j + 4;
        pipk += 4;
        smax = A[ix];
        A[ix] = A[pipk];
        A[pipk] = smax;
        ix += 4;
        pipk += 4;
        smax = A[ix];
        A[ix] = A[pipk];
        A[pipk] = smax;
        ix += 4;
        pipk += 4;
        smax = A[ix];
        A[ix] = A[pipk];
        A[pipk] = smax;
      }

      i = c - j;
      for (jm = c + 1; jm + 1 <= i + 4; jm++) {
        A[jm] /= A[c];
      }
    }

    pipk = jj + 4;
    for (jm = 1; jm <= 3 - j; jm++) {
      if (A[pipk] != 0.0) {
        smax = -A[pipk];
        ix = c;
        i = jj - j;
        for (k = jj + 5; k + 1 <= i + 8; k++) {
          A[k] += A[ix + 1] * smax;
          ix++;
        }
      }

      pipk += 4;
      jj += 4;
    }
  }

  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    pipk = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = (int8_T)pipk;
  }

  if (ipiv[1] > 2) {
    pipk = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = (int8_T)pipk;
  }

  if (ipiv[2] > 3) {
    pipk = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = (int8_T)pipk;
  }

  y[(p[0] - 1) << 2] = 1.0;
  for (j = 0; j + 1 < 5; j++) {
    if (y[((p[0] - 1) << 2) + j] != 0.0) {
      for (jm = j + 1; jm + 1 < 5; jm++) {
        y[jm + ((p[0] - 1) << 2)] -= y[((p[0] - 1) << 2) + j] * A[(j << 2) + jm];
      }
    }
  }

  y[1 + ((p[1] - 1) << 2)] = 1.0;
  for (j = 1; j + 1 < 5; j++) {
    if (y[((p[1] - 1) << 2) + j] != 0.0) {
      for (jm = j + 1; jm + 1 < 5; jm++) {
        y[jm + ((p[1] - 1) << 2)] -= y[((p[1] - 1) << 2) + j] * A[(j << 2) + jm];
      }
    }
  }

  y[2 + ((p[2] - 1) << 2)] = 1.0;
  for (j = 2; j + 1 < 5; j++) {
    if (y[((p[2] - 1) << 2) + j] != 0.0) {
      for (jm = j + 1; jm + 1 < 5; jm++) {
        y[jm + ((p[2] - 1) << 2)] -= y[((p[2] - 1) << 2) + j] * A[(j << 2) + jm];
      }
    }
  }

  y[3 + ((p[3] - 1) << 2)] = 1.0;
  for (j = 3; j + 1 < 5; j++) {
    if (y[((p[3] - 1) << 2) + j] != 0.0) {
      for (jm = j + 1; jm + 1 < 5; jm++) {
        y[jm + ((p[3] - 1) << 2)] -= y[((p[3] - 1) << 2) + j] * A[(j << 2) + jm];
      }
    }
  }

  for (j = 0; j < 4; j++) {
    c = j << 2;
    if (y[3 + c] != 0.0) {
      y[3 + c] /= A[15];
      for (jm = 0; jm + 1 < 4; jm++) {
        y[jm + c] -= y[3 + c] * A[jm + 12];
      }
    }

    if (y[2 + c] != 0.0) {
      y[2 + c] /= A[10];
      for (jm = 0; jm + 1 < 3; jm++) {
        y[jm + c] -= y[2 + c] * A[jm + 8];
      }
    }

    if (y[1 + c] != 0.0) {
      y[1 + c] /= A[5];
      for (jm = 0; jm + 1 < 2; jm++) {
        y[jm + c] -= y[1 + c] * A[jm + 4];
      }
    }

    if (y[c] != 0.0) {
      y[c] /= A[0];
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u;
  int32_T u_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u = 1;
    } else {
      u = -1;
    }

    if (u1 > 0.0) {
      u_0 = 1;
    } else {
      u_0 = -1;
    }

    y = atan2(u, u_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void complete_system_io_step(void)
{
  /* local block i/o variables */
  real_T rtb_Torque;
  real_T rtb_CONTROLSYSTEM;
  real_T rtb_IC[5];
  real_T rtb_xk1_j[4];
  real_T rtb_IC_p[4];
  real_T rtb_MultiportSwitch_g[2];
  real_T rtb_MultiportSwitch1[2];
  real_T rtb__2H;
  real_T rtb_web_psb;
  real_T rtb_Fcn2;
  real_T rtb_Fcn3;
  real_T rtb_Vt;
  real_T rtb_Gain_n;
  real_T rtb_Efd;
  real_T rtb_xk1_jd;
  real_T rtb_Gain1_l;
  real_T rtb_xk1_o;
  real_T rtb_Fcn2_d;
  real_T rtb_xr;
  real_T rtb_Vfd;
  real_T rtb__2H_n;
  real_T rtb_web1;
  real_T rtb_web3;
  real_T rtb_Sum_f;
  real_T rtb_Sum_p;
  real_T rtb_Sum_c;
  real_T rtb_Fcn_p;
  real_T rtb_th;
  real_T rtb_Gain_o;
  real_T rtb_Sum_b;
  if (rtmIsMajorTimeStep(complete_system_io_M)) {
    /* set solver stop time */
    if (!(complete_system_io_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&complete_system_io_M->solverInfo,
                            ((complete_system_io_M->Timing.clockTickH0 + 1) *
        complete_system_io_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&complete_system_io_M->solverInfo,
                            ((complete_system_io_M->Timing.clockTick0 + 1) *
        complete_system_io_M->Timing.stepSize0 +
        complete_system_io_M->Timing.clockTickH0 *
        complete_system_io_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(complete_system_io_M)) {
    complete_system_io_M->Timing.t[0] = rtsiGetT
      (&complete_system_io_M->solverInfo);
  }

  {
    real_T rtb_d_thetarad;
    real_T rtb_Gain_l4;
    real_T rtb_dw;
    real_T rtb_changeIqIdcurrentsigns[5];
    real_T rtb_n;
    real_T rtb_UnitDelay;
    real_T rtb_RateTransition1[2];
    real_T rtb_outputformatting[18];
    real_T rtb_RateTransition3[18];
    int8_T rtAction;
    real_T rtb_Merge;
    real_T rtb_phimd;
    real_T tmpForInput[4];
    real_T rtb_Switch;
    real_T rtb_Phisat;
    real_T rtb_Ifsatd;
    real_T rtb_phimq;
    real_T rtb_Switch_m;
    real_T rtb_Sum2_j[25];
    real_T rtb_Sum2_k[16];
    real_T rtb_Linv_b[16];
    int32_T i;
    real_T rtb_Sum2_k_0[16];
    real_T rtb_Sum2_ij[25];
    int32_T i_0;
    boolean_T tmp;
    real_T tmp_0[5];
    int32_T i_1;
    real_T tmp_1[4];
    real_T tmp_2[4];
    real_T rtb_MultiportSwitch_idx;
    real_T rtb_MultiportSwitch_idx_0;
    real_T rtb_MultiportSwitch_idx_1;
    real_T rtb_MultiportSwitch_idx_2;
    real_T rtb_Ll_q_idx;
    real_T rtb_Ll_q_idx_0;
    real_T rtb_Product_n_idx;
    real_T rtb_Product_n_idx_0;
    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* DiscreteIntegrator: '<S99>/Discrete-Time Integrator1' */
      rtb_d_thetarad = complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE;

      /* DigitalClock: '<S99>/Digital Clock' */
      rtb_Gain_o = (((complete_system_io_M->Timing.clockTick1+
                      complete_system_io_M->Timing.clockTickH1* 4294967296.0)) *
                    5.0E-5);

      /* Sum: '<S99>/Sum3' incorporates:
       *  DiscreteIntegrator: '<S99>/Discrete-Time Integrator1'
       *  Gain: '<S99>/web2'
       */
      rtb_Gain_o = complete_system_io_P.web2_Gain * rtb_Gain_o +
        complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE;

      /* Trigonometry: '<S80>/Elementary Math' */
      rtb_Gain_l4 = sin(rtb_Gain_o);

      /* Trigonometry: '<S80>/Elementary Math1' */
      rtb_Gain_o = cos(rtb_Gain_o);

      /* Outputs for Enabled SubSystem: '<S79>/Saturation' incorporates:
       *  EnablePort: '<S89>/Enable'
       */
      /* Constant: '<S79>/Constant1' */
      if (complete_system_io_P.Constant1_Value_g > 0.0) {
        /* Abs: '<S91>/Abs' incorporates:
         *  Constant: '<S94>/u1'
         *  Gain: '<S95>/1//Ll_d'
         *  Math: '<S94>/Math Function2'
         *  Math: '<S94>/Math Function3'
         *  Product: '<S95>/Product4'
         *  Sum: '<S94>/Sum1'
         *  Sum: '<S95>/sum2'
         *  UnitDelay: '<S90>/fluxes'
         *  UnitDelay: '<S91>/Lmd_sat'
         *
         * About '<S94>/Math Function2':
         *  Operator: reciprocal
         *
         * About '<S94>/Math Function3':
         *  Operator: reciprocal
         */
        rtb_Phisat = fabs(1.0 / (((complete_system_io_P.u1_Value_p[0] +
          complete_system_io_P.u1_Value_p[1]) + complete_system_io_P.u1_Value_p
          [2]) + 1.0 / complete_system_io_DW.Lmd_sat_DSTATE) *
                          ((complete_system_io_P.Ll_d_Gain[0] *
                            complete_system_io_DW.fluxes_DSTATE[1] +
                            complete_system_io_P.Ll_d_Gain[1] *
                            complete_system_io_DW.fluxes_DSTATE[2]) +
                           complete_system_io_P.Ll_d_Gain[2] *
                           complete_system_io_DW.fluxes_DSTATE[3]));

        /* Lookup: '<S91>/Lookup Table' */
        rtb_Ifsatd = rt_Lookup(complete_system_io_P.LookupTable_XData_d, 2,
          rtb_Phisat, complete_system_io_P.LookupTable_YData_o);

        /* Switch: '<S91>/Switch' incorporates:
         *  Constant: '<S91>/Constant1'
         *  Product: '<S91>/Product'
         */
        if (rtb_Ifsatd != 0.0) {
          rtb_Switch = rtb_Phisat / rtb_Ifsatd;
        } else {
          rtb_Switch = complete_system_io_P.Constant1_Value_l;
        }

        /* End of Switch: '<S91>/Switch' */

        /* Gain: '<S91>/Lmd' */
        complete_system_io_B.Lmsatd = complete_system_io_P.Lmd_Gain * rtb_Switch;

        /* Outputs for Enabled SubSystem: '<S89>/Lmq_sat' incorporates:
         *  EnablePort: '<S92>/Enable'
         */
        /* Constant: '<S89>/Constant1' */
        if (complete_system_io_P.Constant1_Value_lv) {
          /* Abs: '<S92>/Abs' incorporates:
           *  Constant: '<S96>/u2'
           *  Gain: '<S97>/1//Ll_q'
           *  Math: '<S96>/Math Function'
           *  Math: '<S96>/Math Function1'
           *  Product: '<S97>/Product3'
           *  Sum: '<S96>/Sum2'
           *  Sum: '<S97>/sum1'
           *  UnitDelay: '<S90>/fluxes'
           *  UnitDelay: '<S92>/Lmq_sat'
           *
           * About '<S96>/Math Function':
           *  Operator: reciprocal
           *
           * About '<S96>/Math Function1':
           *  Operator: reciprocal
           */
          rtb_Phisat = fabs(1.0 / (((complete_system_io_P.u2_Value_h[0] +
            complete_system_io_P.u2_Value_h[1]) +
            complete_system_io_P.u2_Value_h[2]) + 1.0 /
            complete_system_io_DW.Lmq_sat_DSTATE) *
                            (complete_system_io_P.Ll_q_Gain[0] *
                             complete_system_io_DW.fluxes_DSTATE[0] +
                             complete_system_io_P.Ll_q_Gain[1] *
                             complete_system_io_DW.fluxes_DSTATE[4]));

          /* Lookup: '<S92>/Lookup Table' */
          rtb_phimd = rt_Lookup(complete_system_io_P.LookupTable_XData_k, 2,
                                rtb_Phisat,
                                complete_system_io_P.LookupTable_YData_c);

          /* Switch: '<S92>/Switch' incorporates:
           *  Constant: '<S92>/Constant1'
           *  Product: '<S92>/Product'
           */
          if (rtb_phimd != 0.0) {
            rtb_Switch_m = rtb_Phisat / rtb_phimd;
          } else {
            rtb_Switch_m = complete_system_io_P.Constant1_Value_h;
          }

          /* End of Switch: '<S92>/Switch' */

          /* Gain: '<S92>/Lmq' */
          complete_system_io_B.Lmsatq = complete_system_io_P.Lmq_Gain *
            rtb_Switch_m;
        }

        /* End of Constant: '<S89>/Constant1' */
        /* End of Outputs for SubSystem: '<S89>/Lmq_sat' */

        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S89>/Constant2'
         *  Constant: '<S89>/u3'
         */
        if (complete_system_io_P.Constant2_Value_id) {
          complete_system_io_B.Switch1 = complete_system_io_B.Lmsatq;
        } else {
          complete_system_io_B.Switch1 = complete_system_io_P.u3_Value_p;
        }

        /* End of Switch: '<S89>/Switch1' */

        /* Assignment: '<S93>/Update Lmq rows[1,5, (6)] col[1,5, (6)] ' incorporates:
         *  Constant: '<S93>/u1'
         */
        memcpy(&rtb_Sum2_j[0], &complete_system_io_P.u1_Value_m[0], 25U * sizeof
               (real_T));
        rtb_Sum2_j[0] = complete_system_io_B.Switch1;
        rtb_Sum2_j[4] = complete_system_io_B.Switch1;
        rtb_Sum2_j[20] = complete_system_io_B.Switch1;
        rtb_Sum2_j[24] = complete_system_io_B.Switch1;

        /* Assignment: '<S93>/Update Lmd rows[2,3,4] col[2,3,4]' */
        for (i = 0; i < 3; i++) {
          rtb_Sum2_j[1 + 5 * (1 + i)] = complete_system_io_B.Lmsatd;
          rtb_Sum2_j[2 + 5 * (1 + i)] = complete_system_io_B.Lmsatd;
          rtb_Sum2_j[3 + 5 * (1 + i)] = complete_system_io_B.Lmsatd;
        }

        /* End of Assignment: '<S93>/Update Lmd rows[2,3,4] col[2,3,4]' */

        /* Sum: '<S93>/Sum2' incorporates:
         *  Constant: '<S93>/u5'
         */
        for (i = 0; i < 25; i++) {
          rtb_Sum2_ij[i] = rtb_Sum2_j[i] + complete_system_io_P.u5_Value_g[i];
        }

        /* End of Sum: '<S93>/Sum2' */

        /* Product: '<S89>/inversion' */
        rt_invd5x5_snf(rtb_Sum2_ij, complete_system_io_B.Linv);

        /* Product: '<S89>/Product1' incorporates:
         *  Constant: '<S89>/u1'
         */
        for (i = 0; i < 5; i++) {
          for (i_1 = 0; i_1 < 5; i_1++) {
            complete_system_io_B.RLinv[i + 5 * i_1] = 0.0;
            for (i_0 = 0; i_0 < 5; i_0++) {
              complete_system_io_B.RLinv[i + 5 * i_1] +=
                complete_system_io_P.u1_Value_ox[5 * i_0 + i] *
                complete_system_io_B.Linv[5 * i_1 + i_0];
            }
          }
        }

        /* End of Product: '<S89>/Product1' */
      }

      /* End of Constant: '<S79>/Constant1' */
      /* End of Outputs for SubSystem: '<S79>/Saturation' */

      /* DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */
      rtb_dw = complete_system_io_DW.DiscreteTimeIntegrator_DSTATE;

      /* Sum: '<S99>/Sum' incorporates:
       *  Constant: '<S99>/nom. speed'
       *  DiscreteIntegrator: '<S99>/Discrete-Time Integrator'
       */
      rtb_n = complete_system_io_P.nomspeed_Value +
        complete_system_io_DW.DiscreteTimeIntegrator_DSTATE;

      /* DigitalClock: '<S90>/Digital Clock' */
      rtb_Fcn_p = (((complete_system_io_M->Timing.clockTick1+
                     complete_system_io_M->Timing.clockTickH1* 4294967296.0)) *
                   5.0E-5);

      /* Switch: '<S90>/IC' incorporates:
       *  Sum: '<S90>/Ad*x(k-1) + Bd*u(k-1) '
       *  UnitDelay: '<S90>/fluxes'
       */
      if (rtb_Fcn_p >= complete_system_io_P.IC_Threshold) {
        /* Assignment: '<S87>/W(1,2)=wr' incorporates:
         *  Constant: '<S87>/u1'
         */
        memcpy(&rtb_Sum2_j[0], &complete_system_io_P.u1_Value_d[0], 25U * sizeof
               (real_T));
        rtb_Sum2_j[5] = rtb_n;

        /* Assignment: '<S87>/W(2,1)=-wr' incorporates:
         *  Gain: '<S87>/Gain1'
         */
        rtb_Sum2_j[1] = complete_system_io_P.Gain1_Gain_l * rtb_n;

        /* Switch: '<S79>/Switch1' incorporates:
         *  Constant: '<S79>/Constant2'
         */
        tmp = (complete_system_io_P.Constant2_Value_i >=
               complete_system_io_P.Switch1_Threshold_n);

        /* Sum: '<S98>/Sum1' incorporates:
         *  Constant: '<S98>/In'
         *  Gain: '<S98>/wbase*Ts'
         *  Product: '<S90>/Product2'
         *  Sum: '<S79>/Sum1'
         */
        for (i = 0; i < 5; i++) {
          for (i_1 = 0; i_1 < 5; i_1++) {
            /* Switch: '<S79>/Switch1' incorporates:
             *  Constant: '<S79>/Constant6'
             *  Constant: '<S98>/In'
             *  Product: '<S90>/Product2'
             */
            if (tmp) {
              rtb_Switch = complete_system_io_B.RLinv[5 * i + i_1];
            } else {
              rtb_Switch = complete_system_io_P.Constant6_Value[5 * i + i_1];
            }

            rtb_Sum2_ij[i_1 + 5 * i] = ((0.0 - rtb_Sum2_j[5 * i + i_1]) -
              rtb_Switch) * complete_system_io_P.wbaseTs_Gain_n +
              complete_system_io_P.In_Value[5 * i + i_1];
          }
        }

        for (i = 0; i < 5; i++) {
          /* Product: '<S90>/Product2' incorporates:
           *  Sum: '<S90>/Ad*x(k-1) + Bd*u(k-1) '
           *  UnitDelay: '<S90>/fluxes'
           */
          tmp_0[i] = 0.0;
          for (i_1 = 0; i_1 < 5; i_1++) {
            tmp_0[i] += rtb_Sum2_ij[5 * i_1 + i] *
              complete_system_io_DW.fluxes_DSTATE[i_1];
          }

          /* Product: '<S90>/Product1' incorporates:
           *  Constant: '<S98>/In'
           *  Gain: '<S98>/wbase*Ts//2 '
           *  Sum: '<S90>/Ad*x(k-1) + Bd*u(k-1) '
           *  UnitDelay: '<S90>/voltages'
           */
          rtb_changeIqIdcurrentsigns[i] = 0.0;
          for (i_1 = 0; i_1 < 5; i_1++) {
            rtb_changeIqIdcurrentsigns[i] += complete_system_io_P.In_Value[5 *
              i_1 + i] * complete_system_io_P.wbaseTs2_Gain_b *
              complete_system_io_DW.voltages_DSTATE[i_1];
          }

          /* End of Product: '<S90>/Product1' */
          rtb_IC[i] = tmp_0[i] + rtb_changeIqIdcurrentsigns[i];
        }

        /* End of Sum: '<S98>/Sum1' */
      } else {
        for (i = 0; i < 5; i++) {
          rtb_IC[i] = complete_system_io_DW.fluxes_DSTATE[i];
        }
      }

      /* End of Switch: '<S90>/IC' */

      /* Switch: '<S79>/Switch' incorporates:
       *  Constant: '<S79>/Constant3'
       *  Constant: '<S79>/Constant4'
       *  Product: '<S79>/Product3'
       */
      tmp = (complete_system_io_P.Constant3_Value_l >=
             complete_system_io_P.Switch_Threshold);
      for (i = 0; i < 5; i++) {
        for (i_1 = 0; i_1 < 5; i_1++) {
          if (tmp) {
            rtb_Sum2_ij[i_1 + 5 * i] = complete_system_io_B.Linv[5 * i + i_1];
          } else {
            rtb_Sum2_ij[i_1 + 5 * i] = complete_system_io_P.Constant4_Value_g[5 *
              i + i_1];
          }
        }
      }

      for (i = 0; i < 5; i++) {
        /* Product: '<S79>/Product3' incorporates:
         *  Gain: '<S79>/change Iq Id  current signs'
         */
        tmp_0[i] = 0.0;
        for (i_1 = 0; i_1 < 5; i_1++) {
          tmp_0[i] += rtb_Sum2_ij[5 * i_1 + i] * rtb_IC[i_1];
        }

        /* Gain: '<S79>/change Iq Id  current signs' */
        rtb_changeIqIdcurrentsigns[i] =
          complete_system_io_P.changeIqIdcurrentsigns_Gain[i] * tmp_0[i];
      }

      /* End of Switch: '<S79>/Switch' */

      /* Fcn: '<S81>/Fcn' */
      rtb_Fcn_p = rtb_changeIqIdcurrentsigns[0] * rtb_Gain_o +
        rtb_changeIqIdcurrentsigns[1] * rtb_Gain_l4;

      /* Fcn: '<S81>/Fcn1' */
      rtb_phimq = ((-rtb_changeIqIdcurrentsigns[0] - 1.7320508075688772 *
                    rtb_changeIqIdcurrentsigns[1]) * rtb_Gain_o +
                   (1.7320508075688772 * rtb_changeIqIdcurrentsigns[0] -
                    rtb_changeIqIdcurrentsigns[1]) * rtb_Gain_l4) * 0.5;

      /* Sum: '<S81>/Sum' */
      rtb_Switch_m = (0.0 - rtb_Fcn_p) - rtb_phimq;

      /* RateTransition: '<S77>/Rate Transition2' incorporates:
       *  Gain: '<S81>/ib'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        complete_system_io_B.RateTransition2[0] = complete_system_io_P.ib_Gain *
          rtb_Fcn_p;
        complete_system_io_B.RateTransition2[1] = complete_system_io_P.ib_Gain *
          rtb_phimq;
      }

      /* End of RateTransition: '<S77>/Rate Transition2' */

      /* UnitDelay: '<S22>/fluxes' */
      rtb_xk1_j[0] = complete_system_io_DW.fluxes_DSTATE_m[0];
      rtb_xk1_j[1] = complete_system_io_DW.fluxes_DSTATE_m[1];
      rtb_xk1_j[2] = complete_system_io_DW.fluxes_DSTATE_m[2];
      rtb_xk1_j[3] = complete_system_io_DW.fluxes_DSTATE_m[3];

      /* Sum: '<S20>/Sum2' incorporates:
       *  Gain: '<S20>/Gain'
       *  UnitDelay: '<S20>/fluxes'
       */
      tmpForInput[0] = complete_system_io_P.Gain_Gain_h * rtb_xk1_j[0] -
        complete_system_io_DW.fluxes_DSTATE_e[0];
      tmpForInput[1] = complete_system_io_P.Gain_Gain_h * rtb_xk1_j[1] -
        complete_system_io_DW.fluxes_DSTATE_e[1];
      tmpForInput[2] = complete_system_io_P.Gain_Gain_h * rtb_xk1_j[2] -
        complete_system_io_DW.fluxes_DSTATE_e[2];
      tmpForInput[3] = complete_system_io_P.Gain_Gain_h * rtb_xk1_j[3] -
        complete_system_io_DW.fluxes_DSTATE_e[3];

      /* Outputs for Enabled SubSystem: '<S15>/Saturation' incorporates:
       *  EnablePort: '<S21>/Enable'
       */
      /* Constant: '<S15>/Constant' */
      if (complete_system_io_P.Constant_Value_j > 0.0) {
        /* Math: '<S23>/Math Function1' incorporates:
         *  Constant: '<S23>/u2'
         *  Math: '<S23>/Math Function'
         *  SignalConversion: '<S23>/TmpSignal ConversionAtMath FunctionInport1'
         *  Sum: '<S23>/Sum2'
         *  UnitDelay: '<S21>/Delay'
         *
         * About '<S23>/Math Function1':
         *  Operator: reciprocal
         *
         * About '<S23>/Math Function':
         *  Operator: reciprocal
         */
        rtb_Phisat = 1.0 / ((1.0 / complete_system_io_P.u2_Value[0] + 1.0 /
                             complete_system_io_P.u2_Value[1]) + 1.0 /
                            complete_system_io_DW.Delay_DSTATE);

        /* Product: '<S25>/Product2' incorporates:
         *  Constant: '<S25>/u1'
         */
        rtb_Ll_q_idx = complete_system_io_P.u1_Value[0] * rtb_Phisat;
        rtb_Ll_q_idx_0 = complete_system_io_P.u1_Value[1] * rtb_Phisat;

        /* Product: '<S25>/Product' */
        rtb_Product_n_idx = tmpForInput[0] * rtb_Ll_q_idx;

        /* Product: '<S25>/Product1' */
        rtb_Ll_q_idx *= tmpForInput[1];

        /* Math: '<S21>/Math Function' incorporates:
         *  Product: '<S25>/Product'
         *  Product: '<S25>/Product1'
         *  Sum: '<S25>/Sum1'
         *  Sum: '<S25>/Sum2'
         */
        rtb_Phisat = hypot(tmpForInput[2] * rtb_Ll_q_idx_0 + rtb_Product_n_idx,
                           tmpForInput[3] * rtb_Ll_q_idx_0 + rtb_Ll_q_idx);

        /* Lookup: '<S21>/Lookup Table' */
        rtb_phimd = rt_Lookup(complete_system_io_P.LookupTable_XData, 2,
                              rtb_Phisat, complete_system_io_P.LookupTable_YData);

        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S21>/Constant1'
         *  Product: '<S21>/Product'
         */
        if (rtb_phimd != 0.0) {
          complete_system_io_B.Switch = rtb_Phisat / rtb_phimd;
        } else {
          complete_system_io_B.Switch = complete_system_io_P.Constant1_Value;
        }

        /* End of Switch: '<S21>/Switch' */

        /* Assignment: '<S24>/Lm in rows[1,3] & col[1,3]' incorporates:
         *  Constant: '<S24>/u1'
         */
        memcpy(&rtb_Sum2_k[0], &complete_system_io_P.u1_Value_f[0], sizeof
               (real_T) << 4U);
        rtb_Sum2_k[0] = complete_system_io_B.Switch;
        rtb_Sum2_k[2] = complete_system_io_B.Switch;
        rtb_Sum2_k[8] = complete_system_io_B.Switch;
        rtb_Sum2_k[10] = complete_system_io_B.Switch;

        /* Assignment: '<S24>/Lm in rows[2,4] & col[2,4]' */
        rtb_Sum2_k[5] = complete_system_io_B.Switch;
        rtb_Sum2_k[7] = complete_system_io_B.Switch;
        rtb_Sum2_k[13] = complete_system_io_B.Switch;
        rtb_Sum2_k[15] = complete_system_io_B.Switch;

        /* Sum: '<S24>/Sum2' incorporates:
         *  Constant: '<S24>/u5'
         */
        for (i = 0; i < 16; i++) {
          rtb_Sum2_k_0[i] = rtb_Sum2_k[i] + complete_system_io_P.u5_Value[i];
        }

        /* End of Sum: '<S24>/Sum2' */

        /* Product: '<S21>/inversion' */
        rt_invd4x4_snf(rtb_Sum2_k_0, complete_system_io_B.Linv_o);

        /* Product: '<S21>/Product1' incorporates:
         *  Constant: '<S21>/u1'
         */
        for (i = 0; i < 4; i++) {
          for (i_1 = 0; i_1 < 4; i_1++) {
            complete_system_io_B.RLinv_g[i + (i_1 << 2)] = 0.0;
            complete_system_io_B.RLinv_g[i + (i_1 << 2)] +=
              complete_system_io_B.Linv_o[i_1 << 2] *
              complete_system_io_P.u1_Value_a[i];
            complete_system_io_B.RLinv_g[i + (i_1 << 2)] +=
              complete_system_io_B.Linv_o[(i_1 << 2) + 1] *
              complete_system_io_P.u1_Value_a[i + 4];
            complete_system_io_B.RLinv_g[i + (i_1 << 2)] +=
              complete_system_io_B.Linv_o[(i_1 << 2) + 2] *
              complete_system_io_P.u1_Value_a[i + 8];
            complete_system_io_B.RLinv_g[i + (i_1 << 2)] +=
              complete_system_io_B.Linv_o[(i_1 << 2) + 3] *
              complete_system_io_P.u1_Value_a[i + 12];
          }
        }

        /* End of Product: '<S21>/Product1' */
      }

      /* End of Constant: '<S15>/Constant' */
      /* End of Outputs for SubSystem: '<S15>/Saturation' */

      /* Switch: '<S15>/Switch' incorporates:
       *  Constant: '<S15>/Constant1'
       *  Constant: '<S15>/Constant2'
       */
      for (i = 0; i < 16; i++) {
        if (complete_system_io_P.Constant1_Value_j >=
            complete_system_io_P.Switch_Threshold_b) {
          rtb_Linv_b[i] = complete_system_io_B.Linv_o[i];
        } else {
          rtb_Linv_b[i] = complete_system_io_P.Constant2_Value[i];
        }
      }

      /* End of Switch: '<S15>/Switch' */

      /* DiscreteIntegrator: '<S38>/Discrete-Time Integrator1' */
      rtb_Switch = complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE_k;

      /* DiscreteIntegrator: '<S38>/Discrete-Time Integrator' */
      rtb_Ifsatd = complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_i;

      /* Outputs for Enabled SubSystem: '<S18>/sin(thr),cos(thr)' incorporates:
       *  EnablePort: '<S35>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S18>/Constant' */
        if (complete_system_io_P.Constant_Value_bf) {
          if (!complete_system_io_DW.sinthrcosthr_MODE) {
            complete_system_io_DW.sinthrcosthr_MODE = TRUE;
          }
        } else {
          if (complete_system_io_DW.sinthrcosthr_MODE) {
            /* Disable for Outport: '<S35>/sin(thr),cos(thr)' */
            complete_system_io_B.TrigonometricFunction_p =
              complete_system_io_P.sinthrcosthr_Y0;
            complete_system_io_B.TrigonometricFunction1_b =
              complete_system_io_P.sinthrcosthr_Y0;
            complete_system_io_B.Constant_j[0] =
              complete_system_io_P.sinthrcosthr_Y0;
            complete_system_io_B.Constant_j[1] =
              complete_system_io_P.sinthrcosthr_Y0;

            /* Disable for Outport: '<S35>/W' */
            for (i = 0; i < 16; i++) {
              complete_system_io_B.W21wr[i] = complete_system_io_P.W_Y0_e;
            }

            /* End of Disable for Outport: '<S35>/W' */
            complete_system_io_DW.sinthrcosthr_MODE = FALSE;
          }
        }

        /* End of Constant: '<S18>/Constant' */
      }

      if (complete_system_io_DW.sinthrcosthr_MODE) {
        /* Constant: '<S35>/Constant' */
        complete_system_io_B.Constant_j[0] =
          complete_system_io_P.Constant_Value[0];
        complete_system_io_B.Constant_j[1] =
          complete_system_io_P.Constant_Value[1];

        /* Trigonometry: '<S35>/Trigonometric Function' */
        complete_system_io_B.TrigonometricFunction_p = sin(rtb_Switch);

        /* Trigonometry: '<S35>/Trigonometric Function1' */
        complete_system_io_B.TrigonometricFunction1_b = cos(rtb_Switch);

        /* Assignment: '<S35>/W(1,2)=wr' incorporates:
         *  Constant: '<S35>/u1'
         */
        memcpy(&rtb_Sum2_k[0], &complete_system_io_P.u1_Value_o[0], sizeof
               (real_T) << 4U);
        rtb_Sum2_k[4] = rtb_Ifsatd;

        /* Assignment: '<S35>/W(2,1)=-wr' incorporates:
         *  Gain: '<S35>/Gain1'
         */
        memcpy(&complete_system_io_B.W21wr[0], &rtb_Sum2_k[0], sizeof(real_T) <<
               4U);
        complete_system_io_B.W21wr[1] = complete_system_io_P.Gain1_Gain *
          rtb_Ifsatd;
      }

      /* End of Outputs for SubSystem: '<S18>/sin(thr),cos(thr)' */

      /* Outputs for Enabled SubSystem: '<S18>/sin(thr),cos(thr)1' incorporates:
       *  EnablePort: '<S36>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S18>/Constant1' */
        if (complete_system_io_P.Constant1_Value_k) {
          if (!complete_system_io_DW.sinthrcosthr1_MODE) {
            complete_system_io_DW.sinthrcosthr1_MODE = TRUE;
          }
        } else {
          if (complete_system_io_DW.sinthrcosthr1_MODE) {
            /* Disable for Outport: '<S36>/sin(thr),cos(thr)' */
            complete_system_io_B.TrigonometricFunction =
              complete_system_io_P.sinthrcosthr_Y0_f;
            complete_system_io_B.TrigonometricFunction1 =
              complete_system_io_P.sinthrcosthr_Y0_f;
            complete_system_io_B.Constant[0] =
              complete_system_io_P.sinthrcosthr_Y0_f;
            complete_system_io_B.Constant[1] =
              complete_system_io_P.sinthrcosthr_Y0_f;
            complete_system_io_DW.sinthrcosthr1_MODE = FALSE;
          }
        }

        /* End of Constant: '<S18>/Constant1' */
      }

      if (complete_system_io_DW.sinthrcosthr1_MODE) {
        /* Constant: '<S36>/Constant' */
        complete_system_io_B.Constant[0] =
          complete_system_io_P.Constant_Value_b[0];
        complete_system_io_B.Constant[1] =
          complete_system_io_P.Constant_Value_b[1];

        /* Trigonometry: '<S36>/Trigonometric Function' */
        complete_system_io_B.TrigonometricFunction = sin(rtb_Switch);

        /* Trigonometry: '<S36>/Trigonometric Function1' */
        complete_system_io_B.TrigonometricFunction1 = cos(rtb_Switch);

        /* Assignment: '<S36>/W(3,4)=-wr' incorporates:
         *  Constant: '<S36>/u4'
         *  Gain: '<S36>/Gain3'
         */
        memcpy(&rtb_Sum2_k[0], &complete_system_io_P.u4_Value[0], sizeof(real_T)
               << 4U);
        rtb_Sum2_k[14] = complete_system_io_P.Gain3_Gain * rtb_Ifsatd;

        /* Assignment: '<S36>/W(4,3)=wr' */
        memcpy(&complete_system_io_B.W43wr[0], &rtb_Sum2_k[0], sizeof(real_T) <<
               4U);
        complete_system_io_B.W43wr[11] = rtb_Ifsatd;
      }

      /* End of Outputs for SubSystem: '<S18>/sin(thr),cos(thr)1' */

      /* Outputs for Enabled SubSystem: '<S18>/sin(beta),cos(beta),sin(th),cos(th)' incorporates:
       *  EnablePort: '<S34>/Enable'
       */
      /* Constant: '<S18>/Constant3' */
      if (complete_system_io_P.Constant3_Value_o) {
        /* DigitalClock: '<S34>/Digital Clock' */
        rtb_th = (((complete_system_io_M->Timing.clockTick1+
                    complete_system_io_M->Timing.clockTickH1* 4294967296.0)) *
                  5.0E-5);

        /* Sum: '<S34>/Sum' incorporates:
         *  Constant: '<S34>/we'
         */
        rtb_Phisat = complete_system_io_P.we_Value - rtb_Ifsatd;

        /* Gain: '<S34>/web_psb' */
        rtb_th *= complete_system_io_P.web_psb_Gain;

        /* Sum: '<S34>/Sum1' */
        rtb_phimd = rtb_th - rtb_Switch;

        /* Trigonometry: '<S34>/Trigonometric Function' */
        complete_system_io_B.TrigonometricFunction_o = sin(rtb_th);

        /* Trigonometry: '<S34>/Trigonometric Function1' */
        complete_system_io_B.TrigonometricFunction1_c = sin(rtb_phimd);

        /* Trigonometry: '<S34>/Trigonometric Function2' */
        complete_system_io_B.TrigonometricFunction2 = cos(rtb_phimd);

        /* Trigonometry: '<S34>/Trigonometric Function3' */
        complete_system_io_B.TrigonometricFunction3 = cos(rtb_th);

        /* Assignment: '<S34>/W(3,4)=1-wr' incorporates:
         *  Constant: '<S34>/u3'
         */
        memcpy(&rtb_Sum2_k[0], &complete_system_io_P.u3_Value[0], sizeof(real_T)
               << 4U);
        rtb_Sum2_k[14] = rtb_Phisat;

        /* Assignment: '<S34>/W(4,3)=wr-1' incorporates:
         *  Gain: '<S34>/Gain2'
         */
        memcpy(&complete_system_io_B.W43wr1[0], &rtb_Sum2_k[0], sizeof(real_T) <<
               4U);
        complete_system_io_B.W43wr1[11] = complete_system_io_P.Gain2_Gain *
          rtb_Phisat;
      }

      /* End of Constant: '<S18>/Constant3' */
      /* End of Outputs for SubSystem: '<S18>/sin(beta),cos(beta),sin(th),cos(th)' */

      /* DigitalClock: '<S22>/Digital Clock' */
      rtb_Sum_b = (((complete_system_io_M->Timing.clockTick1+
                     complete_system_io_M->Timing.clockTickH1* 4294967296.0)) *
                   5.0E-5);

      /* Switch: '<S22>/IC' incorporates:
       *  Sum: '<S22>/Ad*x(k-1) + Bd*u(k-1) '
       */
      if (rtb_Sum_b >= complete_system_io_P.IC_Threshold_o) {
        /* MultiPortSwitch: '<S18>/Multiport Switch1' incorporates:
         *  Constant: '<S18>/Constant4'
         */
        switch ((int32_T)complete_system_io_P.Constant4_Value_i) {
         case 1:
          memcpy(&rtb_Sum2_k[0], &complete_system_io_B.W21wr[0], sizeof(real_T) <<
                 4U);
          break;

         case 2:
          memcpy(&rtb_Sum2_k[0], &complete_system_io_B.W43wr[0], sizeof(real_T) <<
                 4U);
          break;

         default:
          memcpy(&rtb_Sum2_k[0], &complete_system_io_B.W43wr1[0], sizeof(real_T)
                 << 4U);
          break;
        }

        /* End of MultiPortSwitch: '<S18>/Multiport Switch1' */

        /* Switch: '<S15>/Switch1' incorporates:
         *  Constant: '<S15>/Constant3'
         */
        tmp = (complete_system_io_P.Constant3_Value >=
               complete_system_io_P.Switch1_Threshold);

        /* Sum: '<S26>/Sum1' incorporates:
         *  Constant: '<S26>/I4'
         *  Gain: '<S26>/wbase*Ts'
         *  Product: '<S22>/Product2'
         *  Sum: '<S15>/Sum1'
         */
        for (i = 0; i < 4; i++) {
          /* Switch: '<S15>/Switch1' incorporates:
           *  Constant: '<S15>/Constant4'
           *  Constant: '<S26>/I4'
           *  Product: '<S22>/Product2'
           */
          if (tmp) {
            rtb_Switch = complete_system_io_B.RLinv_g[i << 2];
          } else {
            rtb_Switch = complete_system_io_P.Constant4_Value[i << 2];
          }

          rtb_Sum2_k_0[i << 2] = ((0.0 - rtb_Sum2_k[i << 2]) - rtb_Switch) *
            complete_system_io_P.wbaseTs_Gain + complete_system_io_P.I4_Value[i <<
            2];

          /* Switch: '<S15>/Switch1' incorporates:
           *  Constant: '<S15>/Constant4'
           *  Constant: '<S26>/I4'
           *  Gain: '<S26>/wbase*Ts'
           *  Product: '<S22>/Product2'
           *  Sum: '<S15>/Sum1'
           */
          if (tmp) {
            rtb_Switch = complete_system_io_B.RLinv_g[(i << 2) + 1];
          } else {
            rtb_Switch = complete_system_io_P.Constant4_Value[(i << 2) + 1];
          }

          rtb_Sum2_k_0[1 + (i << 2)] = ((0.0 - rtb_Sum2_k[(i << 2) + 1]) -
            rtb_Switch) * complete_system_io_P.wbaseTs_Gain +
            complete_system_io_P.I4_Value[(i << 2) + 1];

          /* Switch: '<S15>/Switch1' incorporates:
           *  Constant: '<S15>/Constant4'
           *  Constant: '<S26>/I4'
           *  Gain: '<S26>/wbase*Ts'
           *  Product: '<S22>/Product2'
           *  Sum: '<S15>/Sum1'
           */
          if (tmp) {
            rtb_Switch = complete_system_io_B.RLinv_g[(i << 2) + 2];
          } else {
            rtb_Switch = complete_system_io_P.Constant4_Value[(i << 2) + 2];
          }

          rtb_Sum2_k_0[2 + (i << 2)] = ((0.0 - rtb_Sum2_k[(i << 2) + 2]) -
            rtb_Switch) * complete_system_io_P.wbaseTs_Gain +
            complete_system_io_P.I4_Value[(i << 2) + 2];

          /* Switch: '<S15>/Switch1' incorporates:
           *  Constant: '<S15>/Constant4'
           *  Constant: '<S26>/I4'
           *  Gain: '<S26>/wbase*Ts'
           *  Product: '<S22>/Product2'
           *  Sum: '<S15>/Sum1'
           */
          if (tmp) {
            rtb_Switch = complete_system_io_B.RLinv_g[(i << 2) + 3];
          } else {
            rtb_Switch = complete_system_io_P.Constant4_Value[(i << 2) + 3];
          }

          rtb_Sum2_k_0[3 + (i << 2)] = ((0.0 - rtb_Sum2_k[(i << 2) + 3]) -
            rtb_Switch) * complete_system_io_P.wbaseTs_Gain +
            complete_system_io_P.I4_Value[(i << 2) + 3];
        }

        /* End of Sum: '<S26>/Sum1' */

        /* Product: '<S22>/Product2' incorporates:
         *  Sum: '<S22>/Ad*x(k-1) + Bd*u(k-1) '
         */
        for (i = 0; i < 4; i++) {
          rtb_Switch = rtb_Sum2_k_0[i + 12] * rtb_xk1_j[3] + (rtb_Sum2_k_0[i + 8]
            * rtb_xk1_j[2] + (rtb_Sum2_k_0[i + 4] * rtb_xk1_j[1] +
                              rtb_Sum2_k_0[i] * rtb_xk1_j[0]));
          tmp_1[i] = rtb_Switch;
        }

        /* Product: '<S22>/Product1' incorporates:
         *  Constant: '<S26>/I4'
         *  Gain: '<S26>/wbase*Ts//2 '
         *  Sum: '<S22>/Ad*x(k-1) + Bd*u(k-1) '
         *  UnitDelay: '<S22>/voltages'
         */
        for (i = 0; i < 4; i++) {
          rtb_Switch = complete_system_io_P.I4_Value[i + 12] *
            complete_system_io_P.wbaseTs2_Gain *
            complete_system_io_DW.voltages_DSTATE_k[3] +
            (complete_system_io_P.I4_Value[i + 8] *
             complete_system_io_P.wbaseTs2_Gain *
             complete_system_io_DW.voltages_DSTATE_k[2] +
             (complete_system_io_P.I4_Value[i + 4] *
              complete_system_io_P.wbaseTs2_Gain *
              complete_system_io_DW.voltages_DSTATE_k[1] +
              complete_system_io_P.wbaseTs2_Gain *
              complete_system_io_P.I4_Value[i] *
              complete_system_io_DW.voltages_DSTATE_k[0]));
          tmp_2[i] = rtb_Switch;
        }

        /* End of Product: '<S22>/Product1' */
        rtb_IC_p[0] = tmp_1[0] + tmp_2[0];
        rtb_IC_p[1] = tmp_1[1] + tmp_2[1];
        rtb_IC_p[2] = tmp_1[2] + tmp_2[2];
        rtb_IC_p[3] = tmp_1[3] + tmp_2[3];
      } else {
        rtb_IC_p[0] = rtb_xk1_j[0];
        rtb_IC_p[1] = rtb_xk1_j[1];
        rtb_IC_p[2] = rtb_xk1_j[2];
        rtb_IC_p[3] = rtb_xk1_j[3];
      }

      /* End of Switch: '<S22>/IC' */

      /* Product: '<S15>/Product3' */
      for (i = 0; i < 4; i++) {
        rtb_Switch = rtb_Linv_b[i + 12] * rtb_IC_p[3] + (rtb_Linv_b[i + 8] *
          rtb_IC_p[2] + (rtb_Linv_b[i + 4] * rtb_IC_p[1] + rtb_Linv_b[i] *
                         rtb_IC_p[0]));
        tmpForInput[i] = rtb_Switch;
      }

      /* End of Product: '<S15>/Product3' */

      /* MultiPortSwitch: '<S18>/Multiport Switch' incorporates:
       *  Constant: '<S18>/Constant2'
       */
      switch ((int32_T)complete_system_io_P.Constant2_Value_k) {
       case 1:
        rtb_MultiportSwitch_idx = complete_system_io_B.TrigonometricFunction_p;
        rtb_MultiportSwitch_idx_0 =
          complete_system_io_B.TrigonometricFunction1_b;
        rtb_MultiportSwitch_idx_1 = complete_system_io_B.Constant_j[0];
        rtb_MultiportSwitch_idx_2 = complete_system_io_B.Constant_j[1];
        break;

       case 2:
        rtb_MultiportSwitch_idx = complete_system_io_B.TrigonometricFunction;
        rtb_MultiportSwitch_idx_0 = complete_system_io_B.TrigonometricFunction1;
        rtb_MultiportSwitch_idx_1 = complete_system_io_B.Constant[0];
        rtb_MultiportSwitch_idx_2 = complete_system_io_B.Constant[1];
        break;

       default:
        rtb_MultiportSwitch_idx = complete_system_io_B.TrigonometricFunction1_c;
        rtb_MultiportSwitch_idx_0 = complete_system_io_B.TrigonometricFunction2;
        rtb_MultiportSwitch_idx_1 = complete_system_io_B.TrigonometricFunction_o;
        rtb_MultiportSwitch_idx_2 = complete_system_io_B.TrigonometricFunction3;
        break;
      }

      /* End of MultiPortSwitch: '<S18>/Multiport Switch' */

      /* Outputs for Enabled SubSystem: '<S17>/Rotor reference frame' incorporates:
       *  EnablePort: '<S31>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S17>/Constant' */
        if (complete_system_io_P.Constant_Value_m) {
          if (!complete_system_io_DW.Rotorreferenceframe_MODE) {
            complete_system_io_DW.Rotorreferenceframe_MODE = TRUE;
          }
        } else {
          if (complete_system_io_DW.Rotorreferenceframe_MODE) {
            /* Disable for Outport: '<S31>/ira,irb' */
            complete_system_io_B.ira_p = complete_system_io_P.irairb_Y0;
            complete_system_io_B.irb_a = complete_system_io_P.irairb_Y0;

            /* Disable for Outport: '<S31>/isa,isb' */
            complete_system_io_B.isa_n = complete_system_io_P.isaisb_Y0;
            complete_system_io_B.isb_j = complete_system_io_P.isaisb_Y0;
            complete_system_io_DW.Rotorreferenceframe_MODE = FALSE;
          }
        }

        /* End of Constant: '<S17>/Constant' */
      }

      if (complete_system_io_DW.Rotorreferenceframe_MODE) {
        /* Fcn: '<S31>/ira' */
        complete_system_io_B.ira_p = tmpForInput[2];

        /* Fcn: '<S31>/irb' */
        complete_system_io_B.irb_a = -(1.7320508075688772 * tmpForInput[3] +
          tmpForInput[2]) / 2.0;

        /* Fcn: '<S31>/isa' */
        complete_system_io_B.isa_n = rtb_MultiportSwitch_idx_0 * tmpForInput[0]
          + rtb_MultiportSwitch_idx * tmpForInput[1];

        /* Fcn: '<S31>/isb' */
        complete_system_io_B.isb_j = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx + -rtb_MultiportSwitch_idx_0) * tmpForInput[0]
          + (-1.7320508075688772 * rtb_MultiportSwitch_idx_0 -
             rtb_MultiportSwitch_idx) * tmpForInput[1]) / 2.0;
      }

      /* End of Outputs for SubSystem: '<S17>/Rotor reference frame' */

      /* Outputs for Enabled SubSystem: '<S17>/Stationary reference frame' incorporates:
       *  EnablePort: '<S32>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S17>/Constant1' */
        if (complete_system_io_P.Constant1_Value_m) {
          if (!complete_system_io_DW.Stationaryreferenceframe_MODE) {
            complete_system_io_DW.Stationaryreferenceframe_MODE = TRUE;
          }
        } else {
          if (complete_system_io_DW.Stationaryreferenceframe_MODE) {
            /* Disable for Outport: '<S32>/ira,irb' */
            complete_system_io_B.ira_i = complete_system_io_P.irairb_Y0_i;
            complete_system_io_B.irb_h = complete_system_io_P.irairb_Y0_i;

            /* Disable for Outport: '<S32>/isa,isb' */
            complete_system_io_B.isa_a = complete_system_io_P.isaisb_Y0_l;
            complete_system_io_B.isb_b = complete_system_io_P.isaisb_Y0_l;
            complete_system_io_DW.Stationaryreferenceframe_MODE = FALSE;
          }
        }

        /* End of Constant: '<S17>/Constant1' */
      }

      if (complete_system_io_DW.Stationaryreferenceframe_MODE) {
        /* Fcn: '<S32>/ira' */
        complete_system_io_B.ira_i = rtb_MultiportSwitch_idx_0 * tmpForInput[2]
          - rtb_MultiportSwitch_idx * tmpForInput[3];

        /* Fcn: '<S32>/irb' */
        complete_system_io_B.irb_h = ((-rtb_MultiportSwitch_idx_0 -
          1.7320508075688772 * rtb_MultiportSwitch_idx) * tmpForInput[2] +
          (rtb_MultiportSwitch_idx - 1.7320508075688772 *
           rtb_MultiportSwitch_idx_0) * tmpForInput[3]) / 2.0;

        /* Fcn: '<S32>/isa' */
        complete_system_io_B.isa_a = tmpForInput[0];

        /* Fcn: '<S32>/isb' */
        complete_system_io_B.isb_b = -(1.7320508075688772 * tmpForInput[1] +
          tmpForInput[0]) / 2.0;
      }

      /* End of Outputs for SubSystem: '<S17>/Stationary reference frame' */

      /* Outputs for Enabled SubSystem: '<S17>/Synchronous reference frame' incorporates:
       *  EnablePort: '<S33>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S17>/Constant2' */
        if (complete_system_io_P.Constant2_Value_j) {
          if (!complete_system_io_DW.Synchronousreferenceframe_MODE) {
            complete_system_io_DW.Synchronousreferenceframe_MODE = TRUE;
          }
        } else {
          if (complete_system_io_DW.Synchronousreferenceframe_MODE) {
            /* Disable for Outport: '<S33>/ira,irb' */
            complete_system_io_B.ira = complete_system_io_P.irairb_Y0_n;
            complete_system_io_B.irb = complete_system_io_P.irairb_Y0_n;

            /* Disable for Outport: '<S33>/isa,isb' */
            complete_system_io_B.isa = complete_system_io_P.isaisb_Y0_c;
            complete_system_io_B.isb = complete_system_io_P.isaisb_Y0_c;
            complete_system_io_DW.Synchronousreferenceframe_MODE = FALSE;
          }
        }

        /* End of Constant: '<S17>/Constant2' */
      }

      if (complete_system_io_DW.Synchronousreferenceframe_MODE) {
        /* Fcn: '<S33>/ira' */
        complete_system_io_B.ira = rtb_MultiportSwitch_idx_0 * tmpForInput[2] +
          rtb_MultiportSwitch_idx * tmpForInput[3];

        /* Fcn: '<S33>/irb' */
        complete_system_io_B.irb = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx + -rtb_MultiportSwitch_idx_0) * tmpForInput[2]
          + (-1.7320508075688772 * rtb_MultiportSwitch_idx_0 -
             rtb_MultiportSwitch_idx) * tmpForInput[3]) / 2.0;

        /* Fcn: '<S33>/isa' */
        complete_system_io_B.isa = rtb_MultiportSwitch_idx_2 * tmpForInput[0] +
          rtb_MultiportSwitch_idx_1 * tmpForInput[1];

        /* Fcn: '<S33>/isb' */
        complete_system_io_B.isb = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx_1 + -rtb_MultiportSwitch_idx_2) * tmpForInput
          [0] + (-1.7320508075688772 * rtb_MultiportSwitch_idx_2 -
                 rtb_MultiportSwitch_idx_1) * tmpForInput[1]) / 2.0;
      }

      /* End of Outputs for SubSystem: '<S17>/Synchronous reference frame' */

      /* MultiPortSwitch: '<S17>/Multiport Switch' incorporates:
       *  Constant: '<S17>/Constant3'
       */
      switch ((int32_T)complete_system_io_P.Constant3_Value_i) {
       case 1:
        rtb_Ll_q_idx = complete_system_io_B.ira_p;
        rtb_Ll_q_idx_0 = complete_system_io_B.irb_a;
        break;

       case 2:
        rtb_Ll_q_idx = complete_system_io_B.ira_i;
        rtb_Ll_q_idx_0 = complete_system_io_B.irb_h;
        break;

       default:
        rtb_Ll_q_idx = complete_system_io_B.ira;
        rtb_Ll_q_idx_0 = complete_system_io_B.irb;
        break;
      }

      /* End of MultiPortSwitch: '<S17>/Multiport Switch' */

      /* MultiPortSwitch: '<S17>/Multiport Switch1' incorporates:
       *  Constant: '<S17>/Constant4'
       */
      switch ((int32_T)complete_system_io_P.Constant4_Value_j) {
       case 1:
        rtb_Product_n_idx = complete_system_io_B.isa_n;
        rtb_Product_n_idx_0 = complete_system_io_B.isb_j;
        break;

       case 2:
        rtb_Product_n_idx = complete_system_io_B.isa_a;
        rtb_Product_n_idx_0 = complete_system_io_B.isb_b;
        break;

       default:
        rtb_Product_n_idx = complete_system_io_B.isa;
        rtb_Product_n_idx_0 = complete_system_io_B.isb;
        break;
      }

      /* End of MultiPortSwitch: '<S17>/Multiport Switch1' */

      /* Gain: '<S17>/ib' */
      complete_system_io_B.ib[0] = complete_system_io_P.ib_Gain_k * rtb_Ll_q_idx;
      complete_system_io_B.ib[1] = complete_system_io_P.ib_Gain_k *
        rtb_Ll_q_idx_0;
      complete_system_io_B.ib[2] = complete_system_io_P.ib_Gain_k *
        rtb_Product_n_idx;
      complete_system_io_B.ib[3] = complete_system_io_P.ib_Gain_k *
        rtb_Product_n_idx_0;

      /* Lookup: '<S102>/Look-Up Table' incorporates:
       *  UnitDelay: '<S102>/break  Alg.Loop'
       */
      complete_system_io_B.Current = rt_Lookup
        (complete_system_io_P.LookUpTable_XData, 4,
         complete_system_io_DW.breakAlgLoop_DSTATE,
         complete_system_io_P.LookUpTable_YData);

      /* Lookup: '<S103>/Look-Up Table' incorporates:
       *  UnitDelay: '<S103>/break  Alg.Loop'
       */
      complete_system_io_B.Current_i = rt_Lookup
        (complete_system_io_P.LookUpTable_XData_k, 4,
         complete_system_io_DW.breakAlgLoop_DSTATE_e,
         complete_system_io_P.LookUpTable_YData_l);

      /* Lookup: '<S104>/Look-Up Table' incorporates:
       *  UnitDelay: '<S104>/break  Alg.Loop'
       */
      complete_system_io_B.Current_d = rt_Lookup
        (complete_system_io_P.LookUpTable_XData_h, 4,
         complete_system_io_DW.breakAlgLoop_DSTATE_b,
         complete_system_io_P.LookUpTable_YData_i);

      /* Sin: '<S10>/Sine Wave A' */
      if (complete_system_io_DW.systemEnable != 0) {
        complete_system_io_DW.lastSin = sin(complete_system_io_P.SineWaveA_Freq *
          (((complete_system_io_M->Timing.clockTick1+
             complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.lastCos = cos(complete_system_io_P.SineWaveA_Freq *
          (((complete_system_io_M->Timing.clockTick1+
             complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.systemEnable = 0;
      }

      complete_system_io_B.SineWaveA = ((complete_system_io_DW.lastSin *
        complete_system_io_P.SineWaveA_PCos + complete_system_io_DW.lastCos *
        complete_system_io_P.SineWaveA_PSin) *
        complete_system_io_P.SineWaveA_HCos + (complete_system_io_DW.lastCos *
        complete_system_io_P.SineWaveA_PCos - complete_system_io_DW.lastSin *
        complete_system_io_P.SineWaveA_PSin) *
        complete_system_io_P.SineWaveA_Hsin) *
        complete_system_io_P.SineWaveA_Amp + complete_system_io_P.SineWaveA_Bias;

      /* End of Sin: '<S10>/Sine Wave A' */

      /* Sin: '<S10>/Sine Wave B' */
      if (complete_system_io_DW.systemEnable_c != 0) {
        complete_system_io_DW.lastSin_n = sin
          (complete_system_io_P.SineWaveB_Freq *
           (((complete_system_io_M->Timing.clockTick1+
              complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.lastCos_h = cos
          (complete_system_io_P.SineWaveB_Freq *
           (((complete_system_io_M->Timing.clockTick1+
              complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.systemEnable_c = 0;
      }

      complete_system_io_B.SineWaveB = ((complete_system_io_DW.lastSin_n *
        complete_system_io_P.SineWaveB_PCos + complete_system_io_DW.lastCos_h *
        complete_system_io_P.SineWaveB_PSin) *
        complete_system_io_P.SineWaveB_HCos + (complete_system_io_DW.lastCos_h *
        complete_system_io_P.SineWaveB_PCos - complete_system_io_DW.lastSin_n *
        complete_system_io_P.SineWaveB_PSin) *
        complete_system_io_P.SineWaveB_Hsin) *
        complete_system_io_P.SineWaveB_Amp + complete_system_io_P.SineWaveB_Bias;

      /* End of Sin: '<S10>/Sine Wave B' */

      /* Sin: '<S10>/Sine Wave C' */
      if (complete_system_io_DW.systemEnable_p != 0) {
        complete_system_io_DW.lastSin_m = sin
          (complete_system_io_P.SineWaveC_Freq *
           (((complete_system_io_M->Timing.clockTick1+
              complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.lastCos_f = cos
          (complete_system_io_P.SineWaveC_Freq *
           (((complete_system_io_M->Timing.clockTick1+
              complete_system_io_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-5));
        complete_system_io_DW.systemEnable_p = 0;
      }

      complete_system_io_B.SineWaveC = ((complete_system_io_DW.lastSin_m *
        complete_system_io_P.SineWaveC_PCos + complete_system_io_DW.lastCos_f *
        complete_system_io_P.SineWaveC_PSin) *
        complete_system_io_P.SineWaveC_HCos + (complete_system_io_DW.lastCos_f *
        complete_system_io_P.SineWaveC_PCos - complete_system_io_DW.lastSin_m *
        complete_system_io_P.SineWaveC_PSin) *
        complete_system_io_P.SineWaveC_Hsin) *
        complete_system_io_P.SineWaveC_Amp + complete_system_io_P.SineWaveC_Bias;

      /* End of Sin: '<S10>/Sine Wave C' */

      /* S-Function block: <S107>/State-Space */
      {
        real_T accum;

        /*
         * Compute outputs:
         * ---------------
         */

        /*
         * Chopper parameter will force zero current (y[i])
         * for an open switch.
         */
        real_T *Cs = (real_T*)complete_system_io_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)complete_system_io_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &complete_system_io_B.StateSpace[0];
          for (i1=0; i1 < 8; i1++) {
            accum = 0.0;

            {
              int_T i2;
              real_T *xd = &complete_system_io_DW.StateSpace_DSTATE[0];
              for (i2=0; i2 < 9; i2++) {
                accum += *(Cs++) * xd[i2];
              }
            }

            accum += *(Ds++) * complete_system_io_B.RateTransition2[0];
            accum += *(Ds++) * complete_system_io_B.RateTransition2[1];
            accum += *(Ds++) * complete_system_io_B.ib[2];
            accum += *(Ds++) * complete_system_io_B.ib[3];
            accum += *(Ds++) * complete_system_io_B.Current;
            accum += *(Ds++) * complete_system_io_B.Current_i;
            accum += *(Ds++) * complete_system_io_B.Current_d;
            accum += *(Ds++) * complete_system_io_B.SineWaveA;
            accum += *(Ds++) * complete_system_io_B.SineWaveB;
            accum += *(Ds++) * complete_system_io_B.SineWaveC;
            y0[i1] = accum;
          }
        }
      }

      /* Outport: '<Root>/Out1' incorporates:
       *  Gain: '<S7>/do not delete this gain'
       */
      complete_system_io_Y.Out1 = complete_system_io_P.donotdeletethisgain_Gain *
        complete_system_io_B.StateSpace[7];

      /* Sum: '<S17>/Sum2' */
      rtb_Sum_b = (0.0 - rtb_Ll_q_idx) - rtb_Ll_q_idx_0;

      /* Gain: '<S16>/1_Vb' incorporates:
       *  Constant: '<S30>/Constant6'
       */
      rtb_Switch = complete_system_io_P._Vb_Gain *
        complete_system_io_P.Constant6_Value_c[0];
      rtb_phimd = complete_system_io_P._Vb_Gain *
        complete_system_io_P.Constant6_Value_c[1];
      rtb_Phisat = complete_system_io_P._Vb_Gain *
        complete_system_io_B.StateSpace[2];
      rtb_Ll_q_idx_0 = complete_system_io_P._Vb_Gain *
        complete_system_io_B.StateSpace[3];

      /* Outputs for Enabled SubSystem: '<S16>/Rotor reference frame' incorporates:
       *  EnablePort: '<S27>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S16>/Constant' */
        if (complete_system_io_P.Constant_Value_d) {
          if (!complete_system_io_DW.Rotorreferenceframe_MODE_f) {
            complete_system_io_DW.Rotorreferenceframe_MODE_f = TRUE;
          }
        } else {
          if (complete_system_io_DW.Rotorreferenceframe_MODE_f) {
            /* Disable for Outport: '<S27>/vqr,vdr' */
            complete_system_io_B.vqr_a = complete_system_io_P.vqrvdr_Y0;
            complete_system_io_B.vdr_ob = complete_system_io_P.vqrvdr_Y0;

            /* Disable for Outport: '<S27>/vqs,vds' */
            complete_system_io_B.vqs_d = complete_system_io_P.vqsvds_Y0;
            complete_system_io_B.vds_n = complete_system_io_P.vqsvds_Y0;
            complete_system_io_DW.Rotorreferenceframe_MODE_f = FALSE;
          }
        }

        /* End of Constant: '<S16>/Constant' */
      }

      if (complete_system_io_DW.Rotorreferenceframe_MODE_f) {
        /* Fcn: '<S27>/vdr' */
        complete_system_io_B.vdr_ob = -0.57735026918962573 * rtb_phimd;

        /* Fcn: '<S27>/vds' */
        complete_system_io_B.vds_n = ((rtb_MultiportSwitch_idx -
          1.7320508075688772 * rtb_MultiportSwitch_idx_0) * rtb_Ll_q_idx_0 + 2.0
          * rtb_MultiportSwitch_idx * rtb_Phisat) * 0.33333333333333331;

        /* Fcn: '<S27>/vqr' */
        complete_system_io_B.vqr_a = (2.0 * rtb_Switch + rtb_phimd) *
          0.33333333333333331;

        /* Fcn: '<S27>/vqs' */
        complete_system_io_B.vqs_d = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx + rtb_MultiportSwitch_idx_0) * rtb_Ll_q_idx_0
          + 2.0 * rtb_MultiportSwitch_idx_0 * rtb_Phisat) * 0.33333333333333331;
      }

      /* End of Outputs for SubSystem: '<S16>/Rotor reference frame' */

      /* Outputs for Enabled SubSystem: '<S16>/Stationary reference frame' incorporates:
       *  EnablePort: '<S28>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S16>/Constant1' */
        if (complete_system_io_P.Constant1_Value_k4) {
          if (!complete_system_io_DW.Stationaryreferenceframe_MODE_o) {
            complete_system_io_DW.Stationaryreferenceframe_MODE_o = TRUE;
          }
        } else {
          if (complete_system_io_DW.Stationaryreferenceframe_MODE_o) {
            /* Disable for Outport: '<S28>/vqr,vdr' */
            complete_system_io_B.vqr_l = complete_system_io_P.vqrvdr_Y0_f;
            complete_system_io_B.vdr_o = complete_system_io_P.vqrvdr_Y0_f;

            /* Disable for Outport: '<S28>/vqs,vds' */
            complete_system_io_B.vqs_b = complete_system_io_P.vqsvds_Y0_g;
            complete_system_io_B.vds_p = complete_system_io_P.vqsvds_Y0_g;
            complete_system_io_DW.Stationaryreferenceframe_MODE_o = FALSE;
          }
        }

        /* End of Constant: '<S16>/Constant1' */
      }

      if (complete_system_io_DW.Stationaryreferenceframe_MODE_o) {
        /* Fcn: '<S28>/vdr' */
        complete_system_io_B.vdr_o = ((-rtb_MultiportSwitch_idx -
          1.7320508075688772 * rtb_MultiportSwitch_idx_0) * rtb_phimd + -2.0 *
          rtb_MultiportSwitch_idx * rtb_Switch) * 0.33333333333333331;

        /* Fcn: '<S28>/vds' */
        complete_system_io_B.vds_p = -0.57735026918962573 * rtb_Ll_q_idx_0;

        /* Fcn: '<S28>/vqr' */
        complete_system_io_B.vqr_l = ((rtb_MultiportSwitch_idx_0 -
          1.7320508075688772 * rtb_MultiportSwitch_idx) * rtb_phimd + 2.0 *
          rtb_MultiportSwitch_idx_0 * rtb_Switch) * 0.33333333333333331;

        /* Fcn: '<S28>/vqs' */
        complete_system_io_B.vqs_b = (2.0 * rtb_Phisat + rtb_Ll_q_idx_0) *
          0.33333333333333331;
      }

      /* End of Outputs for SubSystem: '<S16>/Stationary reference frame' */

      /* Outputs for Enabled SubSystem: '<S16>/Synchronous reference frame' incorporates:
       *  EnablePort: '<S29>/Enable'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        /* Constant: '<S16>/Constant2' */
        if (complete_system_io_P.Constant2_Value_f) {
          if (!complete_system_io_DW.Synchronousreferenceframe_MODE_c) {
            complete_system_io_DW.Synchronousreferenceframe_MODE_c = TRUE;
          }
        } else {
          if (complete_system_io_DW.Synchronousreferenceframe_MODE_c) {
            /* Disable for Outport: '<S29>/vqr,vdr' */
            complete_system_io_B.vqr = complete_system_io_P.vqrvdr_Y0_c;
            complete_system_io_B.vdr = complete_system_io_P.vqrvdr_Y0_c;

            /* Disable for Outport: '<S29>/vqs,vds' */
            complete_system_io_B.vqs = complete_system_io_P.vqsvds_Y0_e;
            complete_system_io_B.vds = complete_system_io_P.vqsvds_Y0_e;
            complete_system_io_DW.Synchronousreferenceframe_MODE_c = FALSE;
          }
        }

        /* End of Constant: '<S16>/Constant2' */
      }

      if (complete_system_io_DW.Synchronousreferenceframe_MODE_c) {
        /* Fcn: '<S29>/vdr' */
        complete_system_io_B.vdr = ((rtb_MultiportSwitch_idx -
          1.7320508075688772 * rtb_MultiportSwitch_idx_0) * rtb_phimd + 2.0 *
          rtb_MultiportSwitch_idx * rtb_Switch) / 3.0;

        /* Fcn: '<S29>/vds' */
        complete_system_io_B.vds = ((rtb_MultiportSwitch_idx_1 -
          1.7320508075688772 * rtb_MultiportSwitch_idx_2) * rtb_Ll_q_idx_0 + 2.0
          * rtb_MultiportSwitch_idx_1 * rtb_Phisat) / 3.0;

        /* Fcn: '<S29>/vqr' */
        complete_system_io_B.vqr = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx + rtb_MultiportSwitch_idx_0) * rtb_phimd + 2.0
          * rtb_MultiportSwitch_idx_0 * rtb_Switch) / 3.0;

        /* Fcn: '<S29>/vqs' */
        complete_system_io_B.vqs = ((1.7320508075688772 *
          rtb_MultiportSwitch_idx_1 + rtb_MultiportSwitch_idx_2) *
          rtb_Ll_q_idx_0 + 2.0 * rtb_MultiportSwitch_idx_2 * rtb_Phisat) / 3.0;
      }

      /* End of Outputs for SubSystem: '<S16>/Synchronous reference frame' */

      /* MultiPortSwitch: '<S16>/Multiport Switch' incorporates:
       *  Constant: '<S16>/Constant3'
       */
      switch ((int32_T)complete_system_io_P.Constant3_Value_a) {
       case 1:
        rtb_MultiportSwitch_g[0] = complete_system_io_B.vqr_a;
        rtb_MultiportSwitch_g[1] = complete_system_io_B.vdr_ob;
        break;

       case 2:
        rtb_MultiportSwitch_g[0] = complete_system_io_B.vqr_l;
        rtb_MultiportSwitch_g[1] = complete_system_io_B.vdr_o;
        break;

       default:
        rtb_MultiportSwitch_g[0] = complete_system_io_B.vqr;
        rtb_MultiportSwitch_g[1] = complete_system_io_B.vdr;
        break;
      }

      /* End of MultiPortSwitch: '<S16>/Multiport Switch' */

      /* MultiPortSwitch: '<S16>/Multiport Switch1' incorporates:
       *  Constant: '<S16>/Constant4'
       */
      switch ((int32_T)complete_system_io_P.Constant4_Value_e) {
       case 1:
        rtb_MultiportSwitch1[0] = complete_system_io_B.vqs_d;
        rtb_MultiportSwitch1[1] = complete_system_io_B.vds_n;
        break;

       case 2:
        rtb_MultiportSwitch1[0] = complete_system_io_B.vqs_b;
        rtb_MultiportSwitch1[1] = complete_system_io_B.vds_p;
        break;

       default:
        rtb_MultiportSwitch1[0] = complete_system_io_B.vqs;
        rtb_MultiportSwitch1[1] = complete_system_io_B.vds;
        break;
      }

      /* End of MultiPortSwitch: '<S16>/Multiport Switch1' */

      /* Outport: '<Root>/Out2' incorporates:
       *  Gain: '<S14>/unit conversion'
       *  Sum: '<S17>/Sum3'
       */
      complete_system_io_Y.Out2[0] = complete_system_io_P.unitconversion_Gain[9]
        * rtb_Product_n_idx;
      complete_system_io_Y.Out2[1] = complete_system_io_P.unitconversion_Gain[10]
        * rtb_Product_n_idx_0;
      complete_system_io_Y.Out2[2] = ((0.0 - rtb_Product_n_idx) -
        rtb_Product_n_idx_0) * complete_system_io_P.unitconversion_Gain[11];

      /* Sum: '<S19>/Sum2' incorporates:
       *  Gain: '<S19>/1-1'
       *  Product: '<S19>/Mult1'
       */
      rtb_MultiportSwitch_idx = complete_system_io_P.u_Gain[0] * tmpForInput[0] *
        rtb_IC_p[1] + complete_system_io_P.u_Gain[1] * tmpForInput[1] *
        rtb_IC_p[0];

      /* Outport: '<Root>/Out3' incorporates:
       *  Gain: '<Root>/RPM'
       *  Gain: '<S38>/1\p1'
       */
      complete_system_io_Y.Out3 = complete_system_io_P.p1_Gain[0] * rtb_Ifsatd *
        complete_system_io_P.RPM_Gain;

      /* Gain: '<S38>/1_2H' incorporates:
       *  Constant: '<Root>/Torque (N.m)'
       *  Gain: '<S38>/1_Tb2'
       *  Gain: '<S38>/F'
       *  Sum: '<S38>/Sum'
       */
      rtb__2H = ((rtb_MultiportSwitch_idx - complete_system_io_P._Tb2_Gain *
                  complete_system_io_P.TorqueNm_Value) -
                 complete_system_io_P.F_Gain * rtb_Ifsatd) *
        complete_system_io_P._2H_Gain;

      /* Gain: '<S38>/web_psb' */
      rtb_web_psb = complete_system_io_P.web_psb_Gain_d * rtb_Ifsatd;
    }

    /* TransportDelay: '<S3>/ENGINE Td' */
    {
      real_T **uBuffer = (real_T**)
        &complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[1];
      real_T simTime = complete_system_io_M->Timing.t[0];
      real_T tMinusDelay = simTime - complete_system_io_P.ENGINETd_Delay;
      rtb_CONTROLSYSTEM = rt_TDelayInterpolate(
        tMinusDelay,
        0.0,
        *tBuffer,
        *uBuffer,
        complete_system_io_DW.ENGINETd_IWORK.CircularBufSize,
        &complete_system_io_DW.ENGINETd_IWORK.Last,
        complete_system_io_DW.ENGINETd_IWORK.Tail,
        complete_system_io_DW.ENGINETd_IWORK.Head,
        complete_system_io_P.ENGINETd_InitOutput,
        0,
        0);
    }

    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* Sum: '<S86>/Sum2' incorporates:
       *  Gain: '<S86>/1-1'
       *  Product: '<S86>/Mult1'
       */
      rtb_MultiportSwitch_idx = complete_system_io_P.u_Gain_a[0] *
        rtb_changeIqIdcurrentsigns[0] * rtb_IC[1] +
        complete_system_io_P.u_Gain_a[1] * rtb_changeIqIdcurrentsigns[1] *
        rtb_IC[0];

      /* RateTransition: '<S99>/Rate Transition2' incorporates:
       *  DiscreteIntegrator: '<S99>/Discrete-Time Integrator2'
       *  Fcn: '<S99>/Fcn'
       *  Gain: '<S99>/theta'
       *  Gain: '<S99>/units'
       *  Gain: '<S99>/units1'
       *  Gain: '<S99>/units2'
       *  Product: '<S99>/Product'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        complete_system_io_B.RateTransition2_p[0] = rtb_d_thetarad;
        complete_system_io_B.RateTransition2_p[1] =
          complete_system_io_P.units_Gain * rtb_n;
        complete_system_io_B.RateTransition2_p[2] = rtb_n *
          rtb_MultiportSwitch_idx * complete_system_io_P.units1_Gain;
        complete_system_io_B.RateTransition2_p[3] = rtb_dw;
        complete_system_io_B.RateTransition2_p[4] =
          complete_system_io_P.theta_Gain * fmod
          (complete_system_io_DW.DiscreteTimeIntegrator2_DSTATE,
           6.2831853071795862);
        complete_system_io_B.RateTransition2_p[5] =
          complete_system_io_P.units2_Gain * rtb_MultiportSwitch_idx;
      }

      /* End of RateTransition: '<S99>/Rate Transition2' */
    }

    /* Product: '<S3>/Product' */
    complete_system_io_B.Product = rtb_CONTROLSYSTEM *
      complete_system_io_B.RateTransition2_p[1];

    /* Outport: '<Root>/Out4' */
    complete_system_io_Y.Out4 = complete_system_io_B.Product;
    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* UnitDelay: '<S48>/Unit Delay' */
      rtb_UnitDelay = complete_system_io_DW.UnitDelay_DSTATE;

      /* Outport: '<Root>/Out5' incorporates:
       *  UnitDelay: '<S48>/Unit Delay'
       */
      complete_system_io_Y.Out5 = complete_system_io_DW.UnitDelay_DSTATE;

      /* Sum: '<S88>/sum' incorporates:
       *  Gain: '<S88>/Laq//Ll_q'
       */
      rtb_Sum_b = complete_system_io_P.LaqLl_q_Gain[0] * rtb_IC[0] +
        complete_system_io_P.LaqLl_q_Gain[1] * rtb_IC[4];

      /* RateTransition: '<S77>/Rate Transition1' */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        rtb_RateTransition1[0] = complete_system_io_B.StateSpace[0];
        rtb_RateTransition1[1] = complete_system_io_B.StateSpace[1];
      }

      /* End of RateTransition: '<S77>/Rate Transition1' */

      /* Gain: '<S80>/1_Vb' */
      rtb_Product_n_idx = complete_system_io_P._Vb_Gain_a * rtb_RateTransition1
        [0];
      rtb_Product_n_idx_0 = complete_system_io_P._Vb_Gain_a *
        rtb_RateTransition1[1];

      /* Fcn: '<S80>/Fcn2' */
      rtb_Fcn2 = ((2.0 * rtb_Product_n_idx + rtb_Product_n_idx_0) * rtb_Gain_o +
                  1.7320508075688772 * rtb_Product_n_idx_0 * rtb_Gain_l4) *
        0.33333333333333331;

      /* Fcn: '<S80>/Fcn3' */
      rtb_Fcn3 = ((2.0 * rtb_Product_n_idx + rtb_Product_n_idx_0) * rtb_Gain_l4
                  + -1.7320508075688772 * rtb_Product_n_idx_0 * rtb_Gain_o) *
        0.33333333333333331;

      /* Gain: '<S83>/Gain' incorporates:
       *  Product: '<S83>/Product2'
       *  Product: '<S83>/Product3'
       *  Sum: '<S83>/Sum'
       */
      rtb_Gain_o = (rtb_Fcn2 * rtb_changeIqIdcurrentsigns[0] + rtb_Fcn3 *
                    rtb_changeIqIdcurrentsigns[1]) *
        complete_system_io_P.Gain_Gain_hn;

      /* Gain: '<S78>/output formatting' */
      rtb_outputformatting[0] = complete_system_io_P.outputformatting_Gain[0] *
        rtb_Fcn_p;
      rtb_outputformatting[1] = complete_system_io_P.outputformatting_Gain[1] *
        rtb_phimq;
      rtb_outputformatting[2] = complete_system_io_P.outputformatting_Gain[2] *
        rtb_Switch_m;
      rtb_outputformatting[3] = complete_system_io_P.outputformatting_Gain[3] *
        rtb_changeIqIdcurrentsigns[0];
      rtb_outputformatting[4] = complete_system_io_P.outputformatting_Gain[4] *
        rtb_changeIqIdcurrentsigns[1];
      rtb_outputformatting[5] = complete_system_io_P.outputformatting_Gain[5] *
        rtb_changeIqIdcurrentsigns[2];
      rtb_outputformatting[6] = complete_system_io_P.outputformatting_Gain[6] *
        rtb_changeIqIdcurrentsigns[4];

      /* Switch: '<S78>/Switch' incorporates:
       *  Constant: '<S78>/Constant1'
       *  Constant: '<S78>/Constant2'
       */
      if (complete_system_io_P.Constant1_Value_ke) {
        rtb_Switch = rtb_changeIqIdcurrentsigns[0];
      } else {
        rtb_Switch = complete_system_io_P.Constant2_Value_h;
      }

      /* End of Switch: '<S78>/Switch' */

      /* Gain: '<S78>/output formatting' incorporates:
       *  Gain: '<S88>/Lad//Ll_d'
       *  Sum: '<S88>/sum1'
       */
      rtb_outputformatting[7] = complete_system_io_P.outputformatting_Gain[7] *
        rtb_Switch;
      rtb_outputformatting[8] = complete_system_io_P.outputformatting_Gain[8] *
        rtb_changeIqIdcurrentsigns[3];
      rtb_outputformatting[9] = complete_system_io_P.outputformatting_Gain[9] *
        rtb_Sum_b;
      rtb_outputformatting[10] = ((complete_system_io_P.LadLl_d_Gain[0] *
        rtb_IC[1] + complete_system_io_P.LadLl_d_Gain[1] * rtb_IC[2]) +
        complete_system_io_P.LadLl_d_Gain[2] * rtb_IC[3]) *
        complete_system_io_P.outputformatting_Gain[10];
      rtb_outputformatting[11] = complete_system_io_P.outputformatting_Gain[11] *
        rtb_Fcn2;
      rtb_outputformatting[12] = complete_system_io_P.outputformatting_Gain[12] *
        rtb_Fcn3;

      /* Switch: '<S79>/Switch2' incorporates:
       *  Constant: '<S79>/Constant5'
       *  Constant: '<S79>/Lmqd_nosat'
       */
      if (complete_system_io_P.Constant5_Value_e >=
          complete_system_io_P.Switch2_Threshold_e) {
        rtb_Switch = complete_system_io_B.Switch1;
      } else {
        rtb_Switch = complete_system_io_P.Lmqd_nosat_Value[0];
      }

      /* Gain: '<S78>/output formatting' */
      rtb_outputformatting[13] = complete_system_io_P.outputformatting_Gain[13] *
        rtb_Switch;

      /* Switch: '<S79>/Switch2' incorporates:
       *  Constant: '<S79>/Constant5'
       *  Constant: '<S79>/Lmqd_nosat'
       */
      if (complete_system_io_P.Constant5_Value_e >=
          complete_system_io_P.Switch2_Threshold_e) {
        rtb_Switch = complete_system_io_B.Lmsatd;
      } else {
        rtb_Switch = complete_system_io_P.Lmqd_nosat_Value[1];
      }

      /* Gain: '<S78>/output formatting' incorporates:
       *  Fcn: '<S84>/x->theta'
       *  Gain: '<S83>/Gain1'
       *  Gain: '<S85>/Gain'
       *  Product: '<S83>/Product4'
       *  Product: '<S83>/Product5'
       *  Sum: '<S83>/Sum1'
       */
      rtb_outputformatting[14] = complete_system_io_P.outputformatting_Gain[14] *
        rtb_Switch;
      rtb_outputformatting[15] = complete_system_io_P.Gain_Gain_kf *
        rt_atan2d_snf(rtb_Fcn3, rtb_Fcn2) *
        complete_system_io_P.outputformatting_Gain[15];
      rtb_outputformatting[16] = complete_system_io_P.outputformatting_Gain[16] *
        rtb_Gain_o;
      rtb_outputformatting[17] = (rtb_Fcn2 * rtb_changeIqIdcurrentsigns[1] -
        rtb_Fcn3 * rtb_changeIqIdcurrentsigns[0]) *
        complete_system_io_P.Gain1_Gain_p *
        complete_system_io_P.outputformatting_Gain[17];

      /* RateTransition: '<S77>/Rate Transition3' */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        memcpy(&rtb_RateTransition3[0], &rtb_outputformatting[0], 18U * sizeof
               (real_T));
      }

      /* End of RateTransition: '<S77>/Rate Transition3' */

      /* Fcn: '<Root>/Fcn1' */
      rtb_phimd = rt_powd_snf(rtb_RateTransition3[12], 2.0) + rt_powd_snf
        (rtb_RateTransition3[11], 2.0);
      if (rtb_phimd < 0.0) {
        rtb_Vt = -sqrt(-rtb_phimd);
      } else {
        rtb_Vt = sqrt(rtb_phimd);
      }

      /* End of Fcn: '<Root>/Fcn1' */

      /* Outport: '<Root>/Out6' */
      complete_system_io_Y.Out6 = rtb_Vt;

      /* Outport: '<Root>/Out7' */
      complete_system_io_Y.Out7 = complete_system_io_B.RateTransition2_p[1];
    }

    /* TransferFcn: '<S3>/CONTROL SYSTEM' */
    rtb_CONTROLSYSTEM = 0.0;
    rtb_CONTROLSYSTEM += complete_system_io_P.CONTROLSYSTEM_C[0] *
      complete_system_io_X.CONTROLSYSTEM_CSTATE[0];
    rtb_CONTROLSYSTEM += complete_system_io_P.CONTROLSYSTEM_C[1] *
      complete_system_io_X.CONTROLSYSTEM_CSTATE[1];

    /* Gain: '<S3>/Gain K' */
    complete_system_io_B.GainK = complete_system_io_P.GainK_Gain *
      rtb_CONTROLSYSTEM;

    /* Integrator: '<S3>/Integrator'
     *
     * Regarding '<S3>/Integrator':
     *  Limited Integrator
     */
    if (complete_system_io_X.Integrator_CSTATE >=
        complete_system_io_P.Integrator_UpperSat ) {
      complete_system_io_X.Integrator_CSTATE =
        complete_system_io_P.Integrator_UpperSat;
    } else if (complete_system_io_X.Integrator_CSTATE <=
               complete_system_io_P.Integrator_LowerSat ) {
      complete_system_io_X.Integrator_CSTATE =
        complete_system_io_P.Integrator_LowerSat;
    }

    rtb_Torque = complete_system_io_X.Integrator_CSTATE;
    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* Sum: '<S3>/Sum' incorporates:
       *  Constant: '<Root>/wref (pu)'
       */
      complete_system_io_B.Sum = complete_system_io_P.wrefpu_Value -
        complete_system_io_B.RateTransition2_p[1];
    }

    /* TransferFcn: '<S3>/TF1' */
    complete_system_io_B.TF1 = 0.0;
    complete_system_io_B.TF1 += complete_system_io_P.TF1_C *
      complete_system_io_X.TF1_CSTATE;
    complete_system_io_B.TF1 += complete_system_io_P.TF1_D *
      complete_system_io_B.GainK;

    /* TransferFcn: '<S3>/TF2' */
    complete_system_io_B.TF2 = 0.0;
    complete_system_io_B.TF2 += complete_system_io_P.TF2_C *
      complete_system_io_X.TF2_CSTATE;
    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* DiscreteIntegrator: '<S48>/Discrete-Time Integrator' */
      rtb_phimq = complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h;

      /* DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
      rtb_Ll_q_idx_0 = complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq;

      /* Sum: '<S48>/Sum1' incorporates:
       *  DiscreteIntegrator: '<S48>/Discrete-Time Integrator'
       *  Gain: '<S48>/Gain1'
       *  Gain: '<S48>/Gain3'
       *  Lookup: '<S51>/Saturation'
       *  Product: '<S51>/Product'
       *  Sum: '<S48>/Sum2'
       */
      rtb_Ll_q_idx = (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h *
                      rt_Lookup(complete_system_io_P.Saturation_XData, 3,
        complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h,
        complete_system_io_P.Saturation_YData) +
                      complete_system_io_P.Gain3_Gain_l *
                      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h) +
        complete_system_io_P.Gain1_Gain_c * rtb_RateTransition3[5];

      /* Saturate: '<S48>/VRmin' incorporates:
       *  DiscreteIntegrator: '<S53>/Discrete-Time Integrator'
       */
      if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq >=
          complete_system_io_P.VRmin_UpperSat) {
        rtb_Switch = complete_system_io_P.VRmin_UpperSat;
      } else if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq <=
                 complete_system_io_P.VRmin_LowerSat) {
        rtb_Switch = complete_system_io_P.VRmin_LowerSat;
      } else {
        rtb_Switch = complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq;
      }

      /* Gain: '<S48>/Gain' incorporates:
       *  Saturate: '<S48>/VRmin'
       *  Sum: '<S48>/Sum4'
       */
      rtb_Gain_n = (rtb_Switch - rtb_Ll_q_idx) *
        complete_system_io_P.Gain_Gain_i;

      /* DiscreteStateSpace: '<S49>/Discrete State-Space' */
      {
        rtb_Sum_b = complete_system_io_P.DiscreteStateSpace_C*
          complete_system_io_DW.DiscreteStateSpace_DSTATE;
        rtb_Sum_b += complete_system_io_P.DiscreteStateSpace_D*rtb_Vt;
      }

      /* Gain: '<S50>/Gain' incorporates:
       *  DiscreteIntegrator: '<S48>/Discrete-Time Integrator'
       *  Fcn: '<S50>/Fcn'
       *  Product: '<S50>/Product'
       */
      rtb_Phisat = rtb_RateTransition3[5] / ((real_T)
        (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h == 0.0) *
        2.2204460492503131e-16 +
        complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h) *
        complete_system_io_P.Gain_Gain_o;

      /* RelationalOperator: '<S50>/Relational Operator' incorporates:
       *  Constant: '<S50>/input'
       */
      rtb_phimd = (rtb_Phisat <= complete_system_io_P.input_Value);

      /* RelationalOperator: '<S50>/Relational Operator1' incorporates:
       *  Constant: '<S50>/input1'
       */
      rtb_Switch = (rtb_Phisat < complete_system_io_P.input1_Value);

      /* RelationalOperator: '<S50>/Relational Operator2' incorporates:
       *  Constant: '<S50>/input2'
       */
      rtb_Ifsatd = (rtb_Phisat <= complete_system_io_P.input2_Value_nw);

      /* SwitchCase: '<S50>/Switch Case' incorporates:
       *  Constant: '<S58>/input2'
       *  Sum: '<S50>/Sum'
       */
      if (rtmIsMajorTimeStep(complete_system_io_M)) {
        switch ((int32_T)fmod((int32_T)trunc((rtb_phimd + rtb_Switch) +
                  rtb_Ifsatd), 4.294967296E+9)) {
         case 1:
          rtAction = 0;
          break;

         case 2:
          rtAction = 1;
          break;

         case 3:
          rtAction = 2;
          break;

         default:
          rtAction = 3;
          break;
        }

        complete_system_io_DW.SwitchCase_ActiveSubsystem = rtAction;
      } else {
        rtAction = complete_system_io_DW.SwitchCase_ActiveSubsystem;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S50>/0.75<=In<=1.0' incorporates:
         *  ActionPort: '<S56>/Action Port'
         */
        /* Gain: '<S56>/Gain' incorporates:
         *  Constant: '<S56>/input2'
         *  Sum: '<S56>/Sum'
         */
        rtb_Merge = (complete_system_io_P.input2_Value - rtb_Phisat) *
          complete_system_io_P.Gain_Gain;

        /* End of Outputs for SubSystem: '<S50>/0.75<=In<=1.0' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S50>/0.433<In<0.75' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* Sum: '<S55>/Sum' incorporates:
         *  Constant: '<S55>/input2'
         *  Math: '<S55>/Math Function'
         */
        rtb_Phisat = complete_system_io_P.input2_Value_o - rtb_Phisat *
          rtb_Phisat;

        /* Math: '<S55>/Math Function1'
         *
         * About '<S55>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Phisat < 0.0) {
          rtb_Merge = -sqrt(fabs(rtb_Phisat));
        } else {
          rtb_Merge = sqrt(rtb_Phisat);
        }

        /* End of Math: '<S55>/Math Function1' */
        /* End of Outputs for SubSystem: '<S50>/0.433<In<0.75' */
        break;

       case 2:
        /* Outputs for IfAction SubSystem: '<S50>/In<=0.433' incorporates:
         *  ActionPort: '<S57>/Action Port'
         */
        /* Sum: '<S57>/Sum' incorporates:
         *  Constant: '<S57>/input2'
         *  Gain: '<S57>/Gain'
         */
        rtb_Merge = complete_system_io_P.input2_Value_e -
          complete_system_io_P.Gain_Gain_k * rtb_Phisat;

        /* End of Outputs for SubSystem: '<S50>/In<=0.433' */
        break;

       case 3:
        /* Outputs for IfAction SubSystem: '<S50>/In>1.0' incorporates:
         *  ActionPort: '<S58>/Action Port'
         */
        rtb_Merge = complete_system_io_P.input2_Value_n;

        /* End of Outputs for SubSystem: '<S50>/In>1.0' */
        break;
      }

      /* End of SwitchCase: '<S50>/Switch Case' */

      /* Product: '<S48>/Product' */
      rtb_Efd = rtb_phimq * rtb_Merge;

      /* Gain: '<S54>/Gain2' */
      rtb_Ll_q_idx *= complete_system_io_P.Gain2_Gain_g;

      /* Sum: '<S48>/Sum' incorporates:
       *  Constant: '<Root>/Vtref (pu) '
       *  Constant: '<S48>/Vfe0//Ka'
       *  Gain: '<S63>/C'
       *  Gain: '<S63>/D'
       *  Sum: '<S63>/sum1'
       *  UnitDelay: '<S63>/Delay_x'
       */
      rtb_Sum_b = (((complete_system_io_P.Vtrefpu_Value +
                     complete_system_io_P.Vfe0Ka_Value) - rtb_Sum_b) + 0.0) -
        (complete_system_io_P.D_Gain * rtb_Ll_q_idx +
         complete_system_io_P.C_Gain * complete_system_io_DW.Delay_x_DSTATE);

      /* Sum: '<S60>/A*x(k) + B*u(k)' incorporates:
       *  Gain: '<S60>/A'
       *  Gain: '<S60>/B'
       *  UnitDelay: '<S60>/Delay_x'
       */
      rtb_xk1_jd = complete_system_io_P.A_Gain *
        complete_system_io_DW.Delay_x_DSTATE_h + complete_system_io_P.B_Gain *
        rtb_Sum_b;

      /* Gain: '<S53>/Gain1' incorporates:
       *  Gain: '<S53>/Gain2'
       *  Gain: '<S60>/C'
       *  Gain: '<S60>/D'
       *  Sum: '<S53>/Sum'
       *  Sum: '<S60>/sum1'
       *  UnitDelay: '<S60>/Delay_x'
       */
      rtb_Gain1_l = ((complete_system_io_P.D_Gain_f * rtb_Sum_b +
                      complete_system_io_P.C_Gain_j *
                      complete_system_io_DW.Delay_x_DSTATE_h) *
                     complete_system_io_P.Gain2_Gain_k - rtb_Ll_q_idx_0) *
        complete_system_io_P.Gain1_Gain_ls;

      /* Sum: '<S63>/A*x(k) + B*u(k)' incorporates:
       *  Gain: '<S63>/A'
       *  Gain: '<S63>/B'
       *  UnitDelay: '<S63>/Delay_x'
       */
      rtb_xk1_o = complete_system_io_P.A_Gain_i *
        complete_system_io_DW.Delay_x_DSTATE + complete_system_io_P.B_Gain_k *
        rtb_Ll_q_idx;

      /* Fcn: '<Root>/Fcn2' */
      rtb_phimd = rt_powd_snf(rtb_RateTransition3[4], 2.0) + rt_powd_snf
        (rtb_RateTransition3[3], 2.0);
      if (rtb_phimd < 0.0) {
        rtb_Fcn2_d = -sqrt(-rtb_phimd);
      } else {
        rtb_Fcn2_d = sqrt(rtb_phimd);
      }

      /* End of Fcn: '<Root>/Fcn2' */

      /* Fcn: '<S84>/x->r' */
      rtb_xr = hypot(rtb_Fcn2, rtb_Fcn3);

      /* Gain: '<S77>/N' */
      rtb_Vfd = complete_system_io_P.N_Gain * rtb_UnitDelay;

      /* Gain: '<S99>/1_(2H)' incorporates:
       *  Fcn: '<S99>/div'
       *  Gain: '<S99>/1_Pb'
       *  Gain: '<S99>/F1'
       *  RateTransition: '<S99>/Rate Transition1'
       *  Sum: '<S99>/Sum2'
       */
      rtb__2H_n = ((complete_system_io_P._Pb_Gain * complete_system_io_B.Product
                    / (rtb_n + 2.2204460492503131e-16) - rtb_MultiportSwitch_idx)
                   - complete_system_io_P.F1_Gain * rtb_n) *
        complete_system_io_P._2H_Gain_h;

      /* Gain: '<S99>/web1' */
      rtb_web1 = complete_system_io_P.web1_Gain * rtb_dw;

      /* Gain: '<S99>/web3' */
      rtb_web3 = complete_system_io_P.web3_Gain * rtb_n;

      /* DiscreteIntegrator: '<S102>/Discrete-Time Integrator' */
      if (complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE != 0) {
        complete_system_io_B.Flux =
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_c;
      } else {
        complete_system_io_B.Flux =
          complete_system_io_P.DiscreteTimeIntegrator_gainval_m *
          complete_system_io_B.StateSpace[4] +
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_c;
      }

      /* End of DiscreteIntegrator: '<S102>/Discrete-Time Integrator' */

      /* Sum: '<S102>/Sum' incorporates:
       *  Gain: '<S102>/Gain'
       *  UnitDelay: '<S102>/Prediction'
       */
      rtb_Sum_f = complete_system_io_P.Gain_Gain_d * complete_system_io_B.Flux -
        complete_system_io_DW.Prediction_DSTATE;

      /* DiscreteIntegrator: '<S103>/Discrete-Time Integrator' */
      if (complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_c != 0) {
        complete_system_io_B.Flux_o =
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_e;
      } else {
        complete_system_io_B.Flux_o =
          complete_system_io_P.DiscreteTimeIntegrator_gainval_mg *
          complete_system_io_B.StateSpace[5] +
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_e;
      }

      /* End of DiscreteIntegrator: '<S103>/Discrete-Time Integrator' */

      /* Sum: '<S103>/Sum' incorporates:
       *  Gain: '<S103>/Gain'
       *  UnitDelay: '<S103>/Prediction'
       */
      rtb_Sum_p = complete_system_io_P.Gain_Gain_h1 *
        complete_system_io_B.Flux_o - complete_system_io_DW.Prediction_DSTATE_n;

      /* DiscreteIntegrator: '<S104>/Discrete-Time Integrator' */
      if (complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_n != 0) {
        complete_system_io_B.Flux_o0 =
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_ct;
      } else {
        complete_system_io_B.Flux_o0 =
          complete_system_io_P.DiscreteTimeIntegrator_gainval_n *
          complete_system_io_B.StateSpace[6] +
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_ct;
      }

      /* End of DiscreteIntegrator: '<S104>/Discrete-Time Integrator' */

      /* Sum: '<S104>/Sum' incorporates:
       *  Gain: '<S104>/Gain'
       *  UnitDelay: '<S104>/Prediction'
       */
      rtb_Sum_c = complete_system_io_P.Gain_Gain_p *
        complete_system_io_B.Flux_o0 - complete_system_io_DW.Prediction_DSTATE_p;
    }
  }

  if (rtmIsMajorTimeStep(complete_system_io_M)) {
    real_T HoldSine;
    int32_T i;
    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* Update for DiscreteIntegrator: '<S99>/Discrete-Time Integrator1' */
      complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE +=
        complete_system_io_P.DiscreteTimeIntegrator1_gainval * rtb_web1;

      /* Update for UnitDelay: '<S90>/fluxes' */
      for (i = 0; i < 5; i++) {
        complete_system_io_DW.fluxes_DSTATE[i] = rtb_IC[i];
      }

      /* End of Update for UnitDelay: '<S90>/fluxes' */

      /* Update for Enabled SubSystem: '<S79>/Saturation' incorporates:
       *  Update for EnablePort: '<S89>/Enable'
       */
      /* Constant: '<S79>/Constant1' */
      if (complete_system_io_P.Constant1_Value_g > 0.0) {
        /* Update for UnitDelay: '<S91>/Lmd_sat' */
        complete_system_io_DW.Lmd_sat_DSTATE = complete_system_io_B.Lmsatd;

        /* Update for Enabled SubSystem: '<S89>/Lmq_sat' incorporates:
         *  Update for EnablePort: '<S92>/Enable'
         */
        /* Constant: '<S89>/Constant1' */
        if (complete_system_io_P.Constant1_Value_lv) {
          /* Update for UnitDelay: '<S92>/Lmq_sat' */
          complete_system_io_DW.Lmq_sat_DSTATE = complete_system_io_B.Lmsatq;
        }

        /* End of Constant: '<S89>/Constant1' */
        /* End of Update for SubSystem: '<S89>/Lmq_sat' */
      }

      /* End of Constant: '<S79>/Constant1' */
      /* End of Update for SubSystem: '<S79>/Saturation' */

      /* Update for DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE +=
        complete_system_io_P.DiscreteTimeIntegrator_gainval * rtb__2H_n;

      /* Update for UnitDelay: '<S90>/voltages' incorporates:
       *  Constant: '<S77>/[ Vkd =0 Vkq1=0  Vkq2=0 ]'
       */
      complete_system_io_DW.voltages_DSTATE[0] = rtb_Fcn2;
      complete_system_io_DW.voltages_DSTATE[1] = rtb_Fcn3;
      complete_system_io_DW.voltages_DSTATE[2] = rtb_Vfd;
      complete_system_io_DW.voltages_DSTATE[3] =
        complete_system_io_P.Vkd0Vkq10Vkq20_Value[0];
      complete_system_io_DW.voltages_DSTATE[4] =
        complete_system_io_P.Vkd0Vkq10Vkq20_Value[1];

      /* Update for UnitDelay: '<S22>/fluxes' */
      complete_system_io_DW.fluxes_DSTATE_m[0] = rtb_IC_p[0];
      complete_system_io_DW.fluxes_DSTATE_m[1] = rtb_IC_p[1];
      complete_system_io_DW.fluxes_DSTATE_m[2] = rtb_IC_p[2];
      complete_system_io_DW.fluxes_DSTATE_m[3] = rtb_IC_p[3];

      /* Update for UnitDelay: '<S20>/fluxes' */
      complete_system_io_DW.fluxes_DSTATE_e[0] = rtb_xk1_j[0];
      complete_system_io_DW.fluxes_DSTATE_e[1] = rtb_xk1_j[1];
      complete_system_io_DW.fluxes_DSTATE_e[2] = rtb_xk1_j[2];
      complete_system_io_DW.fluxes_DSTATE_e[3] = rtb_xk1_j[3];

      /* Update for Enabled SubSystem: '<S15>/Saturation' incorporates:
       *  Update for EnablePort: '<S21>/Enable'
       */
      /* Constant: '<S15>/Constant' */
      if (complete_system_io_P.Constant_Value_j > 0.0) {
        /* Update for UnitDelay: '<S21>/Delay' */
        complete_system_io_DW.Delay_DSTATE = complete_system_io_B.Switch;
      }

      /* End of Constant: '<S15>/Constant' */
      /* End of Update for SubSystem: '<S15>/Saturation' */

      /* Update for DiscreteIntegrator: '<S38>/Discrete-Time Integrator1' */
      complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE_k +=
        complete_system_io_P.DiscreteTimeIntegrator1_gainval_o * rtb_web_psb;

      /* Update for DiscreteIntegrator: '<S38>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_i +=
        complete_system_io_P.DiscreteTimeIntegrator_gainval_h * rtb__2H;

      /* Update for UnitDelay: '<S22>/voltages' */
      complete_system_io_DW.voltages_DSTATE_k[0] = rtb_MultiportSwitch1[0];
      complete_system_io_DW.voltages_DSTATE_k[1] = rtb_MultiportSwitch1[1];
      complete_system_io_DW.voltages_DSTATE_k[2] = rtb_MultiportSwitch_g[0];
      complete_system_io_DW.voltages_DSTATE_k[3] = rtb_MultiportSwitch_g[1];

      /* Update for UnitDelay: '<S102>/break  Alg.Loop' */
      complete_system_io_DW.breakAlgLoop_DSTATE = rtb_Sum_f;

      /* Update for UnitDelay: '<S103>/break  Alg.Loop' */
      complete_system_io_DW.breakAlgLoop_DSTATE_e = rtb_Sum_p;

      /* Update for UnitDelay: '<S104>/break  Alg.Loop' */
      complete_system_io_DW.breakAlgLoop_DSTATE_b = rtb_Sum_c;

      /* Update for Sin: '<S10>/Sine Wave A' */
      HoldSine = complete_system_io_DW.lastSin;
      complete_system_io_DW.lastSin = complete_system_io_DW.lastSin *
        complete_system_io_P.SineWaveA_HCos + complete_system_io_DW.lastCos *
        complete_system_io_P.SineWaveA_Hsin;
      complete_system_io_DW.lastCos = complete_system_io_DW.lastCos *
        complete_system_io_P.SineWaveA_HCos - HoldSine *
        complete_system_io_P.SineWaveA_Hsin;

      /* Update for Sin: '<S10>/Sine Wave B' */
      HoldSine = complete_system_io_DW.lastSin_n;
      complete_system_io_DW.lastSin_n = complete_system_io_DW.lastSin_n *
        complete_system_io_P.SineWaveB_HCos + complete_system_io_DW.lastCos_h *
        complete_system_io_P.SineWaveB_Hsin;
      complete_system_io_DW.lastCos_h = complete_system_io_DW.lastCos_h *
        complete_system_io_P.SineWaveB_HCos - HoldSine *
        complete_system_io_P.SineWaveB_Hsin;

      /* Update for Sin: '<S10>/Sine Wave C' */
      HoldSine = complete_system_io_DW.lastSin_m;
      complete_system_io_DW.lastSin_m = complete_system_io_DW.lastSin_m *
        complete_system_io_P.SineWaveC_HCos + complete_system_io_DW.lastCos_f *
        complete_system_io_P.SineWaveC_Hsin;
      complete_system_io_DW.lastCos_f = complete_system_io_DW.lastCos_f *
        complete_system_io_P.SineWaveC_HCos - HoldSine *
        complete_system_io_P.SineWaveC_Hsin;

      /* S-Function block: <S107>/State-Space */
      {
        const real_T *As = (real_T*)complete_system_io_DW.StateSpace_PWORK.AS;
        const real_T *Bs = (real_T*)complete_system_io_DW.StateSpace_PWORK.BS;
        real_T *xtmp = (real_T*)complete_system_io_DW.StateSpace_PWORK.XTMP;
        real_T accum;

        /* Calculate new states... */
        {
          int_T i1;
		  // Unused
          //real_T *xd = &complete_system_io_DW.StateSpace_DSTATE[0];
          for (i1=0; i1 < 9; i1++) {
            accum = 0.0;

            {
              int_T i2;
              real_T *xd = &complete_system_io_DW.StateSpace_DSTATE[0];
              for (i2=0; i2 < 9; i2++) {
                accum += *(As++) * xd[i2];
              }
            }

            accum += *(Bs++) * complete_system_io_B.RateTransition2[0];
            accum += *(Bs++) * complete_system_io_B.RateTransition2[1];
            accum += *(Bs++) * complete_system_io_B.ib[2];
            accum += *(Bs++) * complete_system_io_B.ib[3];
            accum += *(Bs++) * complete_system_io_B.Current;
            accum += *(Bs++) * complete_system_io_B.Current_i;
            accum += *(Bs++) * complete_system_io_B.Current_d;
            accum += *(Bs++) * complete_system_io_B.SineWaveA;
            accum += *(Bs++) * complete_system_io_B.SineWaveB;
            accum += *(Bs++) * complete_system_io_B.SineWaveC;
            xtmp[i1] = accum;
          }
        }

        {
          int_T i1;
          real_T *xd = &complete_system_io_DW.StateSpace_DSTATE[0];
          for (i1=0; i1 < 9; i1++) {
            xd[i1] = xtmp[i1];
          }
        }
      }
    }

    /* Update for TransportDelay: '<S3>/ENGINE Td' */
    {
      real_T **uBuffer = (real_T**)
        &complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[1];
      real_T simTime = complete_system_io_M->Timing.t[0];
      complete_system_io_DW.ENGINETd_IWORK.Head =
        ((complete_system_io_DW.ENGINETd_IWORK.Head <
          (complete_system_io_DW.ENGINETd_IWORK.CircularBufSize-1)) ?
         (complete_system_io_DW.ENGINETd_IWORK.Head+1) : 0);
      if (complete_system_io_DW.ENGINETd_IWORK.Head ==
          complete_system_io_DW.ENGINETd_IWORK.Tail) {
        complete_system_io_DW.ENGINETd_IWORK.Tail =
          ((complete_system_io_DW.ENGINETd_IWORK.Tail <
            (complete_system_io_DW.ENGINETd_IWORK.CircularBufSize-1)) ?
           (complete_system_io_DW.ENGINETd_IWORK.Tail+1) : 0);
      }

      (*tBuffer)[complete_system_io_DW.ENGINETd_IWORK.Head] = simTime;
      (*uBuffer)[complete_system_io_DW.ENGINETd_IWORK.Head] = rtb_Torque;
    }

    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* Update for DiscreteIntegrator: '<S99>/Discrete-Time Integrator2' */
      complete_system_io_DW.DiscreteTimeIntegrator2_DSTATE +=
        complete_system_io_P.DiscreteTimeIntegrator2_gainval * rtb_web3;

      /* Update for UnitDelay: '<S48>/Unit Delay' */
      complete_system_io_DW.UnitDelay_DSTATE = rtb_Efd;
    }

    if (rtmIsMajorTimeStep(complete_system_io_M)) {
      /* Update for DiscreteIntegrator: '<S48>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h +=
        complete_system_io_P.DiscreteTimeIntegrator_gainval_g * rtb_Gain_n;
      if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h >=
          complete_system_io_P.DiscreteTimeIntegrator_UpperSat) {
        complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h =
          complete_system_io_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h <=
            complete_system_io_P.DiscreteTimeIntegrator_LowerSat) {
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h =
            complete_system_io_P.DiscreteTimeIntegrator_LowerSat;
        }
      }

      /* End of Update for DiscreteIntegrator: '<S48>/Discrete-Time Integrator' */

      /* Update for DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq +=
        complete_system_io_P.DiscreteTimeIntegrator_gainval_i * rtb_Gain1_l;
      if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq >=
          complete_system_io_P.DiscreteTimeIntegrator_UpperSat_l) {
        complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq =
          complete_system_io_P.DiscreteTimeIntegrator_UpperSat_l;
      } else {
        if (complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq <=
            complete_system_io_P.DiscreteTimeIntegrator_LowerSat_k) {
          complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq =
            complete_system_io_P.DiscreteTimeIntegrator_LowerSat_k;
        }
      }

      /* End of Update for DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
      /* Update for DiscreteStateSpace: '<S49>/Discrete State-Space' */
      {
        real_T xnew[1];
        xnew[0] = complete_system_io_P.DiscreteStateSpace_A*
          complete_system_io_DW.DiscreteStateSpace_DSTATE;
        xnew[0] += complete_system_io_P.DiscreteStateSpace_B*rtb_Vt;
        (void) memcpy(&complete_system_io_DW.DiscreteStateSpace_DSTATE, xnew,
                      sizeof(real_T)*1);
      }

      /* Update for UnitDelay: '<S63>/Delay_x' */
      complete_system_io_DW.Delay_x_DSTATE = rtb_xk1_o;

      /* Update for UnitDelay: '<S60>/Delay_x' */
      complete_system_io_DW.Delay_x_DSTATE_h = rtb_xk1_jd;

      /* Update for DiscreteIntegrator: '<S102>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE = 0U;
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_c =
        complete_system_io_P.DiscreteTimeIntegrator_gainval_m *
        complete_system_io_B.StateSpace[4] + complete_system_io_B.Flux;

      /* Update for UnitDelay: '<S102>/Prediction' */
      complete_system_io_DW.Prediction_DSTATE = complete_system_io_B.Flux;

      /* Update for DiscreteIntegrator: '<S103>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_c = 0U;
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_e =
        complete_system_io_P.DiscreteTimeIntegrator_gainval_mg *
        complete_system_io_B.StateSpace[5] + complete_system_io_B.Flux_o;

      /* Update for UnitDelay: '<S103>/Prediction' */
      complete_system_io_DW.Prediction_DSTATE_n = complete_system_io_B.Flux_o;

      /* Update for DiscreteIntegrator: '<S104>/Discrete-Time Integrator' */
      complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_n = 0U;
      complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_ct =
        complete_system_io_P.DiscreteTimeIntegrator_gainval_n *
        complete_system_io_B.StateSpace[6] + complete_system_io_B.Flux_o0;

      /* Update for UnitDelay: '<S104>/Prediction' */
      complete_system_io_DW.Prediction_DSTATE_p = complete_system_io_B.Flux_o0;
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(complete_system_io_M)) {
    rt_ertODEUpdateContinuousStates(&complete_system_io_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++complete_system_io_M->Timing.clockTick0)) {
      ++complete_system_io_M->Timing.clockTickH0;
    }

    complete_system_io_M->Timing.t[0] = rtsiGetSolverStopTime
      (&complete_system_io_M->solverInfo);

    {
      /* Update absolute timer for sample time: [5.0E-5s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 5.0E-5, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      complete_system_io_M->Timing.clockTick1++;
      if (!complete_system_io_M->Timing.clockTick1) {
        complete_system_io_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void complete_system_io_derivatives(void)
{
  XDot_complete_system_io_T *_rtXdot;
  _rtXdot = ((XDot_complete_system_io_T *)
             complete_system_io_M->ModelData.derivs);

  /* Derivatives for TransferFcn: '<S3>/CONTROL SYSTEM' */
  _rtXdot->CONTROLSYSTEM_CSTATE[0] = 0.0;
  _rtXdot->CONTROLSYSTEM_CSTATE[1] = 0.0;
  _rtXdot->CONTROLSYSTEM_CSTATE[0U] += complete_system_io_P.CONTROLSYSTEM_A[0] *
    complete_system_io_X.CONTROLSYSTEM_CSTATE[0];
  _rtXdot->CONTROLSYSTEM_CSTATE[0U] += complete_system_io_P.CONTROLSYSTEM_A[1] *
    complete_system_io_X.CONTROLSYSTEM_CSTATE[1];
  _rtXdot->CONTROLSYSTEM_CSTATE[1] += complete_system_io_X.CONTROLSYSTEM_CSTATE
    [0];
  _rtXdot->CONTROLSYSTEM_CSTATE[0U] += complete_system_io_B.Sum;

  /* Derivatives for Integrator: '<S3>/Integrator' */
  {
    boolean_T lsat;
    boolean_T usat;
    lsat = ( complete_system_io_X.Integrator_CSTATE <=
            complete_system_io_P.Integrator_LowerSat );
    usat = ( complete_system_io_X.Integrator_CSTATE >=
            complete_system_io_P.Integrator_UpperSat );
    if ((!lsat && !usat) ||
        (lsat && (complete_system_io_B.TF2 > 0)) ||
        (usat && (complete_system_io_B.TF2 < 0)) ) {
      ((XDot_complete_system_io_T *) complete_system_io_M->ModelData.derivs)
        ->Integrator_CSTATE = complete_system_io_B.TF2;
    } else {
      /* in saturation */
      ((XDot_complete_system_io_T *) complete_system_io_M->ModelData.derivs)
        ->Integrator_CSTATE = 0.0;
    }
  }

  /* Derivatives for TransferFcn: '<S3>/TF1' */
  _rtXdot->TF1_CSTATE = 0.0;
  _rtXdot->TF1_CSTATE += complete_system_io_P.TF1_A *
    complete_system_io_X.TF1_CSTATE;
  _rtXdot->TF1_CSTATE += complete_system_io_B.GainK;

  /* Derivatives for TransferFcn: '<S3>/TF2' */
  _rtXdot->TF2_CSTATE = 0.0;
  _rtXdot->TF2_CSTATE += complete_system_io_P.TF2_A *
    complete_system_io_X.TF2_CSTATE;
  _rtXdot->TF2_CSTATE += complete_system_io_B.TF1;
}

/* Model initialize function */
void complete_system_io_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  complete_system_io_P.DiscreteTimeIntegrator_UpperSat = rtInf;

  /* initialize real-time model */
  (void) memset((void *)complete_system_io_M, 0,
                sizeof(RT_MODEL_complete_system_io_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&complete_system_io_M->solverInfo,
                          &complete_system_io_M->Timing.simTimeStep);
    rtsiSetTPtr(&complete_system_io_M->solverInfo, &rtmGetTPtr
                (complete_system_io_M));
    rtsiSetStepSizePtr(&complete_system_io_M->solverInfo,
                       &complete_system_io_M->Timing.stepSize0);
    rtsiSetdXPtr(&complete_system_io_M->solverInfo,
                 &complete_system_io_M->ModelData.derivs);
    rtsiSetContStatesPtr(&complete_system_io_M->solverInfo, (real_T **)
                         &complete_system_io_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&complete_system_io_M->solverInfo,
      &complete_system_io_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&complete_system_io_M->solverInfo, (&rtmGetErrorStatus
                           (complete_system_io_M)));
    rtsiSetRTModelPtr(&complete_system_io_M->solverInfo, complete_system_io_M);
  }

  rtsiSetSimTimeStep(&complete_system_io_M->solverInfo, MAJOR_TIME_STEP);
  complete_system_io_M->ModelData.intgData.y =
    complete_system_io_M->ModelData.odeY;
  complete_system_io_M->ModelData.intgData.f[0] =
    complete_system_io_M->ModelData.odeF[0];
  complete_system_io_M->ModelData.intgData.f[1] =
    complete_system_io_M->ModelData.odeF[1];
  complete_system_io_M->ModelData.intgData.f[2] =
    complete_system_io_M->ModelData.odeF[2];
  complete_system_io_M->ModelData.contStates = ((X_complete_system_io_T *)
    &complete_system_io_X);
  rtsiSetSolverData(&complete_system_io_M->solverInfo, (void *)
                    &complete_system_io_M->ModelData.intgData);
  rtsiSetSolverName(&complete_system_io_M->solverInfo,"ode3");
  rtmSetTPtr(complete_system_io_M, &complete_system_io_M->Timing.tArray[0]);
  complete_system_io_M->Timing.stepSize0 = 5.0E-5;

  /* block I/O */
  {
    int_T i;
    for (i = 0; i < 8; i++) {
      complete_system_io_B.StateSpace[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      complete_system_io_B.RateTransition2_p[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      complete_system_io_B.Linv[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      complete_system_io_B.RLinv[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      complete_system_io_B.W43wr[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      complete_system_io_B.W21wr[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      complete_system_io_B.W43wr1[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      complete_system_io_B.Linv_o[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      complete_system_io_B.RLinv_g[i] = 0.0;
    }

    complete_system_io_B.RateTransition2[0] = 0.0;
    complete_system_io_B.RateTransition2[1] = 0.0;
    complete_system_io_B.ib[0] = 0.0;
    complete_system_io_B.ib[1] = 0.0;
    complete_system_io_B.ib[2] = 0.0;
    complete_system_io_B.ib[3] = 0.0;
    complete_system_io_B.Current = 0.0;
    complete_system_io_B.Current_i = 0.0;
    complete_system_io_B.Current_d = 0.0;
    complete_system_io_B.SineWaveA = 0.0;
    complete_system_io_B.SineWaveB = 0.0;
    complete_system_io_B.SineWaveC = 0.0;
    complete_system_io_B.Product = 0.0;
    complete_system_io_B.GainK = 0.0;
    complete_system_io_B.Sum = 0.0;
    complete_system_io_B.TF1 = 0.0;
    complete_system_io_B.TF2 = 0.0;
    complete_system_io_B.Flux = 0.0;
    complete_system_io_B.Flux_o = 0.0;
    complete_system_io_B.Flux_o0 = 0.0;
    complete_system_io_B.Lmsatd = 0.0;
    complete_system_io_B.Switch1 = 0.0;
    complete_system_io_B.Lmsatq = 0.0;
    complete_system_io_B.Constant[0] = 0.0;
    complete_system_io_B.Constant[1] = 0.0;
    complete_system_io_B.TrigonometricFunction = 0.0;
    complete_system_io_B.TrigonometricFunction1 = 0.0;
    complete_system_io_B.Constant_j[0] = 0.0;
    complete_system_io_B.Constant_j[1] = 0.0;
    complete_system_io_B.TrigonometricFunction_p = 0.0;
    complete_system_io_B.TrigonometricFunction1_b = 0.0;
    complete_system_io_B.TrigonometricFunction_o = 0.0;
    complete_system_io_B.TrigonometricFunction1_c = 0.0;
    complete_system_io_B.TrigonometricFunction2 = 0.0;
    complete_system_io_B.TrigonometricFunction3 = 0.0;
    complete_system_io_B.ira = 0.0;
    complete_system_io_B.irb = 0.0;
    complete_system_io_B.isa = 0.0;
    complete_system_io_B.isb = 0.0;
    complete_system_io_B.ira_i = 0.0;
    complete_system_io_B.irb_h = 0.0;
    complete_system_io_B.isa_a = 0.0;
    complete_system_io_B.isb_b = 0.0;
    complete_system_io_B.ira_p = 0.0;
    complete_system_io_B.irb_a = 0.0;
    complete_system_io_B.isa_n = 0.0;
    complete_system_io_B.isb_j = 0.0;
    complete_system_io_B.vdr = 0.0;
    complete_system_io_B.vds = 0.0;
    complete_system_io_B.vqr = 0.0;
    complete_system_io_B.vqs = 0.0;
    complete_system_io_B.vdr_o = 0.0;
    complete_system_io_B.vds_p = 0.0;
    complete_system_io_B.vqr_l = 0.0;
    complete_system_io_B.vqs_b = 0.0;
    complete_system_io_B.vdr_ob = 0.0;
    complete_system_io_B.vds_n = 0.0;
    complete_system_io_B.vqr_a = 0.0;
    complete_system_io_B.vqs_d = 0.0;
    complete_system_io_B.Switch = 0.0;
  }

  /* states (continuous) */
  {
    (void) memset((void *)&complete_system_io_X, 0,
                  sizeof(X_complete_system_io_T));
  }

  /* states (dwork) */
  (void) memset((void *)&complete_system_io_DW, 0,
                sizeof(DW_complete_system_io_T));
  complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 5; i++) {
      complete_system_io_DW.fluxes_DSTATE[i] = 0.0;
    }
  }

  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 5; i++) {
      complete_system_io_DW.voltages_DSTATE[i] = 0.0;
    }
  }

  complete_system_io_DW.fluxes_DSTATE_m[0] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_m[1] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_m[2] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_m[3] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_e[0] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_e[1] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_e[2] = 0.0;
  complete_system_io_DW.fluxes_DSTATE_e[3] = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE_k = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_i = 0.0;
  complete_system_io_DW.voltages_DSTATE_k[0] = 0.0;
  complete_system_io_DW.voltages_DSTATE_k[1] = 0.0;
  complete_system_io_DW.voltages_DSTATE_k[2] = 0.0;
  complete_system_io_DW.voltages_DSTATE_k[3] = 0.0;
  complete_system_io_DW.breakAlgLoop_DSTATE = 0.0;
  complete_system_io_DW.breakAlgLoop_DSTATE_e = 0.0;
  complete_system_io_DW.breakAlgLoop_DSTATE_b = 0.0;

  {
    int_T i;
    for (i = 0; i < 9; i++) {
      complete_system_io_DW.StateSpace_DSTATE[i] = 0.0;
    }
  }

  complete_system_io_DW.DiscreteTimeIntegrator2_DSTATE = 0.0;
  complete_system_io_DW.UnitDelay_DSTATE = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq = 0.0;
  complete_system_io_DW.DiscreteStateSpace_DSTATE = 0.0;
  complete_system_io_DW.Delay_x_DSTATE = 0.0;
  complete_system_io_DW.Delay_x_DSTATE_h = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_c = 0.0;
  complete_system_io_DW.Prediction_DSTATE = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_e = 0.0;
  complete_system_io_DW.Prediction_DSTATE_n = 0.0;
  complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_ct = 0.0;
  complete_system_io_DW.Prediction_DSTATE_p = 0.0;
  complete_system_io_DW.Lmd_sat_DSTATE = 0.0;
  complete_system_io_DW.Lmq_sat_DSTATE = 0.0;
  complete_system_io_DW.Delay_DSTATE = 0.0;
  complete_system_io_DW.lastSin = 0.0;
  complete_system_io_DW.lastCos = 0.0;
  complete_system_io_DW.lastSin_n = 0.0;
  complete_system_io_DW.lastCos_h = 0.0;
  complete_system_io_DW.lastSin_m = 0.0;
  complete_system_io_DW.lastCos_f = 0.0;

  {
    int_T i;
    for (i = 0; i < 25; i++) {
      complete_system_io_DW.inversion_DWORK4[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 16; i++) {
      complete_system_io_DW.inversion_DWORK4_d[i] = 0.0;
    }
  }

  complete_system_io_DW.ENGINETd_RWORK.modelTStart = 0.0;

  {
    int_T i;
    for (i = 0; i < 2048; i++) {
      complete_system_io_DW.ENGINETd_RWORK.TUbufferArea[i] = 0.0;
    }
  }

  /* external outputs */
  complete_system_io_Y.Out1 = 0.0;
  complete_system_io_Y.Out2[0] = 0.0;
  complete_system_io_Y.Out2[1] = 0.0;
  complete_system_io_Y.Out2[2] = 0.0;
  complete_system_io_Y.Out3 = 0.0;
  complete_system_io_Y.Out4 = 0.0;
  complete_system_io_Y.Out5 = 0.0;
  complete_system_io_Y.Out6 = 0.0;
  complete_system_io_Y.Out7 = 0.0;

  {
    int32_T i;

    /* Start for Enabled SubSystem: '<S79>/Saturation' */
    /* InitializeConditions for Enabled SubSystem: '<S89>/Lmq_sat' */
    /* InitializeConditions for UnitDelay: '<S92>/Lmq_sat' */
    complete_system_io_DW.Lmq_sat_DSTATE =
      complete_system_io_P.Lmq_sat_InitialCondition;

    /* End of InitializeConditions for SubSystem: '<S89>/Lmq_sat' */
    /* End of Start for SubSystem: '<S79>/Saturation' */

    /* InitializeConditions for Enabled SubSystem: '<S79>/Saturation' */
    /* InitializeConditions for UnitDelay: '<S91>/Lmd_sat' */
    complete_system_io_DW.Lmd_sat_DSTATE =
      complete_system_io_P.Lmd_sat_InitialCondition;

    /* End of InitializeConditions for SubSystem: '<S79>/Saturation' */

    /* InitializeConditions for Enabled SubSystem: '<S15>/Saturation' */
    /* InitializeConditions for UnitDelay: '<S21>/Delay' */
    complete_system_io_DW.Delay_DSTATE =
      complete_system_io_P.Delay_InitialCondition;

    /* End of InitializeConditions for SubSystem: '<S15>/Saturation' */

    /* Start for Enabled SubSystem: '<S18>/sin(thr),cos(thr)' */
    /* VirtualOutportStart for Outport: '<S35>/sin(thr),cos(thr)' */
    complete_system_io_B.TrigonometricFunction_p =
      complete_system_io_P.sinthrcosthr_Y0;
    complete_system_io_B.TrigonometricFunction1_b =
      complete_system_io_P.sinthrcosthr_Y0;
    complete_system_io_B.Constant_j[0] = complete_system_io_P.sinthrcosthr_Y0;
    complete_system_io_B.Constant_j[1] = complete_system_io_P.sinthrcosthr_Y0;

    /* End of Start for SubSystem: '<S18>/sin(thr),cos(thr)' */

    /* Start for Enabled SubSystem: '<S18>/sin(thr),cos(thr)1' */
    /* VirtualOutportStart for Outport: '<S36>/sin(thr),cos(thr)' */
    complete_system_io_B.TrigonometricFunction =
      complete_system_io_P.sinthrcosthr_Y0_f;
    complete_system_io_B.TrigonometricFunction1 =
      complete_system_io_P.sinthrcosthr_Y0_f;
    complete_system_io_B.Constant[0] = complete_system_io_P.sinthrcosthr_Y0_f;
    complete_system_io_B.Constant[1] = complete_system_io_P.sinthrcosthr_Y0_f;

    /* End of Start for SubSystem: '<S18>/sin(thr),cos(thr)1' */

    /* Start for Enabled SubSystem: '<S18>/sin(beta),cos(beta),sin(th),cos(th)' */
    /* VirtualOutportStart for Outport: '<S34>/sin(beta),cos(beta), sin(th),cos(th)' */
    complete_system_io_B.TrigonometricFunction1_c =
      complete_system_io_P.sinbetacosbetasinthcosth_Y0;
    complete_system_io_B.TrigonometricFunction2 =
      complete_system_io_P.sinbetacosbetasinthcosth_Y0;
    complete_system_io_B.TrigonometricFunction_o =
      complete_system_io_P.sinbetacosbetasinthcosth_Y0;
    complete_system_io_B.TrigonometricFunction3 =
      complete_system_io_P.sinbetacosbetasinthcosth_Y0;

    /* Start for Enabled SubSystem: '<S18>/sin(thr),cos(thr)' */
    for (i = 0; i < 16; i++) {
      /* VirtualOutportStart for Outport: '<S35>/W' */
      complete_system_io_B.W21wr[i] = complete_system_io_P.W_Y0_e;

      /* VirtualOutportStart for Outport: '<S34>/W' */
      complete_system_io_B.W43wr1[i] = complete_system_io_P.W_Y0;
    }

    /* End of Start for SubSystem: '<S18>/sin(thr),cos(thr)' */
    /* End of Start for SubSystem: '<S18>/sin(beta),cos(beta),sin(th),cos(th)' */

    /* Start for Enabled SubSystem: '<S17>/Rotor reference frame' */
    /* VirtualOutportStart for Outport: '<S31>/ira,irb' */
    complete_system_io_B.ira_p = complete_system_io_P.irairb_Y0;
    complete_system_io_B.irb_a = complete_system_io_P.irairb_Y0;

    /* VirtualOutportStart for Outport: '<S31>/isa,isb' */
    complete_system_io_B.isa_n = complete_system_io_P.isaisb_Y0;
    complete_system_io_B.isb_j = complete_system_io_P.isaisb_Y0;

    /* End of Start for SubSystem: '<S17>/Rotor reference frame' */

    /* Start for Enabled SubSystem: '<S17>/Stationary reference frame' */
    /* VirtualOutportStart for Outport: '<S32>/ira,irb' */
    complete_system_io_B.ira_i = complete_system_io_P.irairb_Y0_i;
    complete_system_io_B.irb_h = complete_system_io_P.irairb_Y0_i;

    /* VirtualOutportStart for Outport: '<S32>/isa,isb' */
    complete_system_io_B.isa_a = complete_system_io_P.isaisb_Y0_l;
    complete_system_io_B.isb_b = complete_system_io_P.isaisb_Y0_l;

    /* End of Start for SubSystem: '<S17>/Stationary reference frame' */

    /* Start for Enabled SubSystem: '<S17>/Synchronous reference frame' */
    /* VirtualOutportStart for Outport: '<S33>/ira,irb' */
    complete_system_io_B.ira = complete_system_io_P.irairb_Y0_n;
    complete_system_io_B.irb = complete_system_io_P.irairb_Y0_n;

    /* VirtualOutportStart for Outport: '<S33>/isa,isb' */
    complete_system_io_B.isa = complete_system_io_P.isaisb_Y0_c;
    complete_system_io_B.isb = complete_system_io_P.isaisb_Y0_c;

    /* End of Start for SubSystem: '<S17>/Synchronous reference frame' */

    /* S-Function block: <S107>/State-Space */
    {
      complete_system_io_DW.StateSpace_PWORK.AS = (real_T*)calloc(9 * 9, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(10, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.BS = (real_T*)calloc(9 * 10, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.CS = (real_T*)calloc(8 * 9, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(9, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(9, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(9, sizeof
        (real_T));
      complete_system_io_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(8, sizeof
        (real_T));
      complete_system_io_DW.STRUCT_TEST_PTR = (real_T*)calloc(1, sizeof(real_T));
      complete_system_io_DW.StateSpace_PWORK.DS = (real_T*)calloc(8 * 10, sizeof
        (real_T));
      GLOBAL_TEST_PTR = (int*)calloc(1, sizeof(int));

    }

    /* Start for Enabled SubSystem: '<S16>/Rotor reference frame' */
    /* VirtualOutportStart for Outport: '<S27>/vqr,vdr' */
    complete_system_io_B.vqr_a = complete_system_io_P.vqrvdr_Y0;
    complete_system_io_B.vdr_ob = complete_system_io_P.vqrvdr_Y0;

    /* VirtualOutportStart for Outport: '<S27>/vqs,vds' */
    complete_system_io_B.vqs_d = complete_system_io_P.vqsvds_Y0;
    complete_system_io_B.vds_n = complete_system_io_P.vqsvds_Y0;

    /* End of Start for SubSystem: '<S16>/Rotor reference frame' */

    /* Start for Enabled SubSystem: '<S16>/Stationary reference frame' */
    /* VirtualOutportStart for Outport: '<S28>/vqr,vdr' */
    complete_system_io_B.vqr_l = complete_system_io_P.vqrvdr_Y0_f;
    complete_system_io_B.vdr_o = complete_system_io_P.vqrvdr_Y0_f;

    /* VirtualOutportStart for Outport: '<S28>/vqs,vds' */
    complete_system_io_B.vqs_b = complete_system_io_P.vqsvds_Y0_g;
    complete_system_io_B.vds_p = complete_system_io_P.vqsvds_Y0_g;

    /* End of Start for SubSystem: '<S16>/Stationary reference frame' */

    /* Start for Enabled SubSystem: '<S16>/Synchronous reference frame' */
    /* VirtualOutportStart for Outport: '<S29>/vqr,vdr' */
    complete_system_io_B.vqr = complete_system_io_P.vqrvdr_Y0_c;
    complete_system_io_B.vdr = complete_system_io_P.vqrvdr_Y0_c;

    /* VirtualOutportStart for Outport: '<S29>/vqs,vds' */
    complete_system_io_B.vqs = complete_system_io_P.vqsvds_Y0_e;
    complete_system_io_B.vds = complete_system_io_P.vqsvds_Y0_e;

    /* End of Start for SubSystem: '<S16>/Synchronous reference frame' */
    /* Start for TransportDelay: '<S3>/ENGINE Td' */
    {
      real_T *pBuffer = &complete_system_io_DW.ENGINETd_RWORK.TUbufferArea[0];
      complete_system_io_DW.ENGINETd_IWORK.Tail = 0;
      complete_system_io_DW.ENGINETd_IWORK.Head = 0;
      complete_system_io_DW.ENGINETd_IWORK.Last = 0;
      complete_system_io_DW.ENGINETd_IWORK.CircularBufSize = 1024;
      pBuffer[0] = complete_system_io_P.ENGINETd_InitOutput;
      pBuffer[1024] = complete_system_io_M->Timing.t[0];
      complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[0] = (void *) &pBuffer[0];
      complete_system_io_DW.ENGINETd_PWORK.TUbufferPtrs[1] = (void *) &pBuffer
        [1024];
    }

    /* Start for SwitchCase: '<S50>/Switch Case' */
    complete_system_io_DW.SwitchCase_ActiveSubsystem = -1;
  }

  {
    int32_T i;

    /* InitializeConditions for DiscreteIntegrator: '<S99>/Discrete-Time Integrator1' */
    complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE =
      complete_system_io_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE =
      complete_system_io_P.DiscreteTimeIntegrator_IC;
    for (i = 0; i < 5; i++) {
      /* InitializeConditions for UnitDelay: '<S90>/fluxes' */
      complete_system_io_DW.fluxes_DSTATE[i] =
        complete_system_io_P.fluxes_InitialCondition[i];

      /* InitializeConditions for UnitDelay: '<S90>/voltages' */
      complete_system_io_DW.voltages_DSTATE[i] =
        complete_system_io_P.voltages_InitialCondition;
    }

    /* InitializeConditions for UnitDelay: '<S22>/fluxes' */
    complete_system_io_DW.fluxes_DSTATE_m[0] =
      complete_system_io_P.fluxes_InitialCondition_c[0];
    complete_system_io_DW.fluxes_DSTATE_m[1] =
      complete_system_io_P.fluxes_InitialCondition_c[1];
    complete_system_io_DW.fluxes_DSTATE_m[2] =
      complete_system_io_P.fluxes_InitialCondition_c[2];
    complete_system_io_DW.fluxes_DSTATE_m[3] =
      complete_system_io_P.fluxes_InitialCondition_c[3];

    /* InitializeConditions for UnitDelay: '<S20>/fluxes' */
    complete_system_io_DW.fluxes_DSTATE_e[0] =
      complete_system_io_P.fluxes_InitialCondition_h[0];
    complete_system_io_DW.fluxes_DSTATE_e[1] =
      complete_system_io_P.fluxes_InitialCondition_h[1];
    complete_system_io_DW.fluxes_DSTATE_e[2] =
      complete_system_io_P.fluxes_InitialCondition_h[2];
    complete_system_io_DW.fluxes_DSTATE_e[3] =
      complete_system_io_P.fluxes_InitialCondition_h[3];

    /* InitializeConditions for DiscreteIntegrator: '<S38>/Discrete-Time Integrator1' */
    complete_system_io_DW.DiscreteTimeIntegrator1_DSTATE_k =
      complete_system_io_P.DiscreteTimeIntegrator1_IC_i;

    /* InitializeConditions for DiscreteIntegrator: '<S38>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_i =
      complete_system_io_P.DiscreteTimeIntegrator_IC_f;

    /* InitializeConditions for UnitDelay: '<S22>/voltages' */
    complete_system_io_DW.voltages_DSTATE_k[0] =
      complete_system_io_P.voltages_InitialCondition_f;
    complete_system_io_DW.voltages_DSTATE_k[1] =
      complete_system_io_P.voltages_InitialCondition_f;
    complete_system_io_DW.voltages_DSTATE_k[2] =
      complete_system_io_P.voltages_InitialCondition_f;
    complete_system_io_DW.voltages_DSTATE_k[3] =
      complete_system_io_P.voltages_InitialCondition_f;

    /* InitializeConditions for UnitDelay: '<S102>/break  Alg.Loop' */
    complete_system_io_DW.breakAlgLoop_DSTATE =
      complete_system_io_P.breakAlgLoop_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S103>/break  Alg.Loop' */
    complete_system_io_DW.breakAlgLoop_DSTATE_e =
      complete_system_io_P.breakAlgLoop_InitialCondition_k;

    /* InitializeConditions for UnitDelay: '<S104>/break  Alg.Loop' */
    complete_system_io_DW.breakAlgLoop_DSTATE_b =
      complete_system_io_P.breakAlgLoop_InitialCondition_d;

    /* InitializeConditions for S-Function (sfun_spssw_discc): '<S107>/State-Space' */
    {
      real_T *As = (real_T*)complete_system_io_DW.StateSpace_PWORK.AS;
      real_T *Bs = (real_T*)complete_system_io_DW.StateSpace_PWORK.BS;
      real_T *Cs = (real_T*)complete_system_io_DW.StateSpace_PWORK.CS;
      real_T *Ds = (real_T*)complete_system_io_DW.StateSpace_PWORK.DS;
      real_T *X0 = (real_T*)&complete_system_io_DW.StateSpace_DSTATE[0];
      X0[0] = -17099.705355557784;
      X0[1] = 100413.96140137408;
      X0[2] = -573255.26615398168;
      X0[3] = 3.3468565695587066E+6;
      X0[4] = 590354.97151034744;
      X0[5] = -3.4472705309588015E+6;
      X0[6] = -67523.378309490829;
      X0[7] = -3.3744740616978304E+6;
      X0[8] = 3.4419974400075944E+6;

      /* Copy and transpose A and B */
      As[0] = -0.34218026765179665;
      As[1] = -0.1060567381992762;
      As[2] = 0.1436761402200615;
      As[3] = -0.024320136590428219;
      As[4] = 0.14367614022005851;
      As[5] = -0.024320136590428754;
      As[6] = 0.085932417089174623;
      As[7] = 0.018768725533788513;
      As[8] = 0.018768725533787223;
      As[9] = -3.8359641999159062;
      As[10] = -0.35068430182591664;
      As[11] = -0.87963456996626554;
      As[12] = 0.14889621100953776;
      As[13] = -0.8796345699662661;
      As[14] = 0.14889621100953754;
      As[15] = -0.50110031571967428;
      As[16] = -0.11490856998553015;
      As[17] = -0.11490856998552712;
      As[18] = 0.14367614022006253;
      As[19] = -0.024320136590427987;
      As[20] = -0.34218026765180043;
      As[21] = -0.10605673819927683;
      As[22] = 0.14367614022008751;
      As[23] = -0.024320136590423758;
      As[24] = 0.018768725533787712;
      As[25] = 0.085932417089174484;
      As[26] = 0.018768725533787826;
      As[27] = -0.87963456996630474;
      As[28] = 0.14889621100954281;
      As[29] = -3.8359641999159386;
      As[30] = -0.35068430182591093;
      As[31] = -0.87963456996629019;
      As[32] = 0.14889621100954464;
      As[33] = -0.11490856998553778;
      As[34] = -0.50110031571967817;
      As[35] = -0.11490856998554513;
      As[36] = 0.14367614022006064;
      As[37] = -0.024320136590427841;
      As[38] = 0.14367614022006334;
      As[39] = -0.024320136590427754;
      As[40] = -0.34218026765179721;
      As[41] = -0.10605673819927608;
      As[42] = 0.018768725533787594;
      As[43] = 0.018768725533787649;
      As[44] = 0.0859324170891741;
      As[45] = -0.87963456996628109;
      As[46] = 0.14889621100954015;
      As[47] = -0.8796345699662742;
      As[48] = 0.14889621100954098;
      As[49] = -3.8359641999159346;
      As[50] = -0.3506843018259147;
      As[51] = -0.11490856998553538;
      As[52] = -0.1149085699855357;
      As[53] = -0.50110031571967417;
      As[54] = 0.4296620854458697;
      As[55] = -0.069272107645088135;
      As[56] = 0.093843627668932034;
      As[57] = -0.01588496071480143;
      As[58] = 0.093843627668941;
      As[59] = -0.015884960714799834;
      As[60] = -0.25084714091200333;
      As[61] = 0.012258996435424645;
      As[62] = 0.012258996435423792;
      As[63] = 0.093843627668939542;
      As[64] = -0.015884960714800993;
      As[65] = 0.42966208544587525;
      As[66] = -0.069272107645088329;
      As[67] = 0.093843627668941068;
      As[68] = -0.015884960714800722;
      As[69] = 0.012258996435424607;
      As[70] = -0.25084714091200305;
      As[71] = 0.012258996435425749;
      As[72] = 0.09384362766893739;
      As[73] = -0.015884960714800389;
      As[74] = 0.09384362766893739;
      As[75] = -0.015884960714800334;
      As[76] = 0.42966208544587126;
      As[77] = -0.069272107645087733;
      As[78] = 0.01225899643542424;
      As[79] = 0.012258996435424274;
      As[80] = -0.25084714091200361;
      Bs[0] = -1027.1324285750409;
      Bs[1] = 1027.1324285749788;
      Bs[2] = 1027.1324285750409;
      Bs[3] = -1027.1324285749788;
      Bs[4] = 25117.137418435537;
      Bs[5] = -3250.6052129382442;
      Bs[6] = -3250.6052129383024;
      Bs[7] = 25.91660642232624;
      Bs[8] = 5.6605142644025426;
      Bs[9] = 5.6605142644021509;
      Bs[10] = 6288.4567383574085;
      Bs[11] = -6288.4567383572648;
      Bs[12] = -6288.4567383574085;
      Bs[13] = 6288.4567383572648;
      Bs[14] = 86786.888941984624;
      Bs[15] = 19901.319135060767;
      Bs[16] = 19901.319135061;
      Bs[17] = -151.12829477533961;
      Bs[18] = -34.655608252900805;
      Bs[19] = -34.655608252899881;
      Bs[20] = -1027.1324285750025;
      Bs[21] = -2054.2648571500154;
      Bs[22] = 1027.1324285750025;
      Bs[23] = 2054.2648571500154;
      Bs[24] = -3250.6052129383606;
      Bs[25] = 25117.137418435537;
      Bs[26] = -3250.60521293935;
      Bs[27] = 5.6605142644023019;
      Bs[28] = 25.916606422326186;
      Bs[29] = 5.6605142644023356;
      Bs[30] = 6288.4567383570247;
      Bs[31] = 12576.913476714391;
      Bs[32] = -6288.4567383570247;
      Bs[33] = -12576.913476714391;
      Bs[34] = 19901.319135061;
      Bs[35] = 86786.888941985555;
      Bs[36] = 19901.319135059603;
      Bs[37] = -34.655608252903143;
      Bs[38] = -151.12829477534081;
      Bs[39] = -34.655608252905317;
      Bs[40] = 2054.2648571500104;
      Bs[41] = 1027.1324285750038;
      Bs[42] = -2054.2648571500104;
      Bs[43] = -1027.1324285750038;
      Bs[44] = -3250.6052129383315;
      Bs[45] = -3250.6052129383897;
      Bs[46] = 25117.137418435421;
      Bs[47] = 5.6605142644022646;
      Bs[48] = 5.66051426440228;
      Bs[49] = 25.916606422326073;
      Bs[50] = -12576.913476714455;
      Bs[51] = -6288.4567383572212;
      Bs[52] = 12576.913476714455;
      Bs[53] = 6288.4567383572212;
      Bs[54] = 19901.319135060767;
      Bs[55] = 19901.3191350603;
      Bs[56] = 86786.888941985555;
      Bs[57] = -34.655608252902383;
      Bs[58] = -34.655608252902475;
      Bs[59] = -151.12829477533958;
      Bs[60] = -670.88267436926276;
      Bs[61] = 670.882674369224;
      Bs[62] = 670.88267436926276;
      Bs[63] = -670.882674369224;
      Bs[64] = 16405.5304408581;
      Bs[65] = -2123.1680140796234;
      Bs[66] = -2123.1680140800745;
      Bs[67] = 225.93917937855738;
      Bs[68] = 3.6972262216236982;
      Bs[69] = 3.6972262216234397;
      Bs[70] = -670.88267436920523;
      Bs[71] = -1341.7653487384648;
      Bs[72] = 670.88267436920523;
      Bs[73] = 1341.7653487384648;
      Bs[74] = -2123.168014079929;
      Bs[75] = 16405.530440857925;
      Bs[76] = -2123.1680140798271;
      Bs[77] = 3.6972262216236866;
      Bs[78] = 225.93917937855747;
      Bs[79] = 3.6972262216240304;
      Bs[80] = 1341.7653487384766;
      Bs[81] = 670.88267436923752;
      Bs[82] = -1341.7653487384766;
      Bs[83] = -670.88267436923752;
      Bs[84] = -2123.1680140799;
      Bs[85] = -2123.1680140799;
      Bs[86] = 16405.530440857925;
      Bs[87] = 3.6972262216235747;
      Bs[88] = 3.6972262216235849;
      Bs[89] = 225.9391793785573;
      Cs[0] = 0.00085142293342549392;
      Cs[1] = -0.00014412081230338861;
      Cs[2] = -0.00042571146671276447;
      Cs[3] = 7.2060406151697247E-5;
      Cs[4] = -0.00042571146671277715;
      Cs[5] = 7.206040615169932E-5;
      Cs[6] = 0.00011122322277143165;
      Cs[7] = -5.5611611385718135E-5;
      Cs[8] = -5.5611611385719774E-5;
      Cs[9] = -0.00042571146671274295;
      Cs[10] = 7.2060406151693615E-5;
      Cs[11] = 0.00085142293342551061;
      Cs[12] = -0.00014412081230339143;
      Cs[13] = -0.00042571146671271763;
      Cs[14] = 7.20604061516895E-5;
      Cs[15] = -5.5611611385715289E-5;
      Cs[16] = 0.00011122322277143387;
      Cs[17] = -5.5611611385711982E-5;
      Cs[18] = 0.00085142293342549392;
      Cs[19] = -0.00014412081230338861;
      Cs[20] = -0.00042571146671276447;
      Cs[21] = 7.2060406151697247E-5;
      Cs[22] = -0.00042571146671277715;
      Cs[23] = 7.206040615169932E-5;
      Cs[24] = 0.00011122322277143165;
      Cs[25] = -5.5611611385718135E-5;
      Cs[26] = -5.5611611385719774E-5;
      Cs[27] = -0.00042571146671274295;
      Cs[28] = 7.2060406151693615E-5;
      Cs[29] = 0.00085142293342551061;
      Cs[30] = -0.00014412081230339143;
      Cs[31] = -0.00042571146671271763;
      Cs[32] = 7.20604061516895E-5;
      Cs[33] = -5.5611611385715289E-5;
      Cs[34] = 0.00011122322277143387;
      Cs[35] = -5.5611611385711982E-5;
      Cs[36] = 0.010410199417872992;
      Cs[37] = 0.00099450449068891659;
      Cs[38] = -0.0013472653324913381;
      Cs[39] = 0.00022805231863520277;
      Cs[40] = -0.0013472653324944873;
      Cs[41] = 0.00022805231863572858;
      Cs[42] = 0.0013599069081810682;
      Cs[43] = -0.00017599618981959964;
      Cs[44] = -0.00017599618982000893;
      Cs[45] = -0.0013472653324996145;
      Cs[46] = 0.00022805231863657556;
      Cs[47] = 0.010410199417869763;
      Cs[48] = 0.00099450449068946237;
      Cs[49] = -0.0013472653325040142;
      Cs[50] = 0.00022805231863722215;
      Cs[51] = -0.00017599618982068536;
      Cs[52] = 0.0013599069081806307;
      Cs[53] = -0.00017599618982125094;
      Cs[54] = -0.0013472653324984776;
      Cs[55] = 0.00022805231863638371;
      Cs[56] = -0.0013472653324984776;
      Cs[57] = 0.00022805231863637517;
      Cs[58] = 0.0104101994178709;
      Cs[59] = 0.000994504490689269;
      Cs[60] = -0.00017599618982053187;
      Cs[61] = -0.00017599618982053187;
      Cs[62] = 0.0013599069081807955;
      Cs[63] = 0.00042571146671274826;
      Cs[64] = -7.2060406151694523E-5;
      Cs[65] = -6.1284310959308648E-18;
      Cs[66] = 1.0130785099704555E-18;
      Cs[67] = -0.00042571146671275737;
      Cs[68] = 7.206040615169604E-5;
      Cs[69] = 5.5611611385716014E-5;
      Cs[70] = -7.9658502016854981E-19;
      Cs[71] = -5.5611611385717179E-5;
      Ds[0] = 3.0433866890295969;
      Ds[1] = -3.0433866890296759;
      Ds[2] = -3.0433866890295969;
      Ds[3] = 3.0433866890296759;
      Ds[4] = -19.26304410439413;
      Ds[5] = 9.6315220521972513;
      Ds[6] = 9.6315220521969724;
      Ds[7] = 0.033544133718461822;
      Ds[8] = -0.016772066859231608;
      Ds[9] = -0.016772066859232104;
      Ds[10] = 3.0433866890297629;
      Ds[11] = 6.0867733780593705;
      Ds[12] = -3.0433866890297629;
      Ds[13] = -6.0867733780593705;
      Ds[14] = 9.63152205219688;
      Ds[15] = -19.263044104394318;
      Ds[16] = 9.631522052197532;
      Ds[17] = -0.016772066859230751;
      Ds[18] = 0.033544133718462495;
      Ds[19] = -0.016772066859229752;
      Ds[20] = 3.0433866890295969;
      Ds[21] = -3.0433866890296759;
      Ds[22] = -3.0433866890295969;
      Ds[23] = 3.0433866890296759;
      Ds[24] = -19.26304410439413;
      Ds[25] = 9.6315220521972513;
      Ds[26] = 9.6315220521969724;
      Ds[27] = 0.033544133718461822;
      Ds[28] = -0.016772066859231608;
      Ds[29] = -0.016772066859232104;
      Ds[30] = 3.0433866890297629;
      Ds[31] = 6.0867733780593705;
      Ds[32] = -3.0433866890297629;
      Ds[33] = -6.0867733780593705;
      Ds[34] = 9.63152205219688;
      Ds[35] = -19.263044104394318;
      Ds[36] = 9.631522052197532;
      Ds[37] = -0.016772066859230751;
      Ds[38] = 0.033544133718462495;
      Ds[39] = -0.016772066859229752;
      Ds[40] = 9.6315220521943363;
      Ds[41] = -9.6315220522141587;
      Ds[42] = -9.6315220521943363;
      Ds[43] = 9.6315220522141587;
      Ds[44] = -235.52587398039395;
      Ds[45] = 30.481245573059471;
      Ds[46] = 30.481245573075864;
      Ds[47] = 0.41013826102153472;
      Ds[48] = -0.053079200351716704;
      Ds[49] = -0.053079200351840133;
      Ds[50] = 9.63152205218091;
      Ds[51] = 19.263044104386193;
      Ds[52] = -9.63152205218091;
      Ds[53] = -19.263044104386193;
      Ds[54] = 30.481245573033394;
      Ds[55] = -235.52587398032847;
      Ds[56] = 30.481245572391526;
      Ds[57] = -0.053079200352044144;
      Ds[58] = 0.41013826102140277;
      Ds[59] = -0.053079200352214723;
      Ds[60] = -19.263044104394389;
      Ds[61] = -9.6315220521973561;
      Ds[62] = 19.263044104394389;
      Ds[63] = 9.6315220521973561;
      Ds[64] = 30.48124557301216;
      Ds[65] = 30.481245572947714;
      Ds[66] = -235.52587398035757;
      Ds[67] = -0.053079200351997854;
      Ds[68] = -0.053079200351997854;
      Ds[69] = 0.4101382610214524;
      Ds[70] = 3.0433866890296524;
      Ds[71] = 6.3664629124104978E-15;
      Ds[72] = -3.0433866890296524;
      Ds[73] = -6.3664629124104978E-15;
      Ds[74] = -9.6315220521970648;
      Ds[75] = -4.4875488170723414E-14;
      Ds[76] = 9.631522052197159;
      Ds[77] = 0.016772066859230966;
      Ds[78] = -2.4024438214283453E-16;
      Ds[79] = -0.01677206685923132;
    }

    /* InitializeConditions for DiscreteIntegrator: '<S99>/Discrete-Time Integrator2' */
    complete_system_io_DW.DiscreteTimeIntegrator2_DSTATE =
      complete_system_io_P.DiscreteTimeIntegrator2_IC;

    /* InitializeConditions for UnitDelay: '<S48>/Unit Delay' */
    complete_system_io_DW.UnitDelay_DSTATE =
      complete_system_io_P.UnitDelay_InitialCondition;

    /* InitializeConditions for TransferFcn: '<S3>/CONTROL SYSTEM' */
    complete_system_io_X.CONTROLSYSTEM_CSTATE[0] = 0.0;
    complete_system_io_X.CONTROLSYSTEM_CSTATE[1] = 0.0;

    /* InitializeConditions for Integrator: '<S3>/Integrator' */
    complete_system_io_X.Integrator_CSTATE = complete_system_io_P.Integrator_IC;

    /* InitializeConditions for TransferFcn: '<S3>/TF1' */
    complete_system_io_X.TF1_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S3>/TF2' */
    complete_system_io_X.TF2_CSTATE = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S48>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_h =
      complete_system_io_P.DiscreteTimeIntegrator_IC_p;

    /* InitializeConditions for DiscreteIntegrator: '<S53>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_iq =
      complete_system_io_P.DiscreteTimeIntegrator_IC_g;

    /* InitializeConditions for DiscreteStateSpace: '<S49>/Discrete State-Space' */
    complete_system_io_DW.DiscreteStateSpace_DSTATE =
      complete_system_io_P.DiscreteStateSpace_X0;

    /* InitializeConditions for UnitDelay: '<S63>/Delay_x' */
    complete_system_io_DW.Delay_x_DSTATE =
      complete_system_io_P.Delay_x_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S60>/Delay_x' */
    complete_system_io_DW.Delay_x_DSTATE_h =
      complete_system_io_P.Delay_x_InitialCondition_i;

    /* InitializeConditions for DiscreteIntegrator: '<S102>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_c =
      complete_system_io_P.DiscreteTimeIntegrator_IC_c;

    /* InitializeConditions for UnitDelay: '<S102>/Prediction' */
    complete_system_io_DW.Prediction_DSTATE =
      complete_system_io_P.Prediction_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S103>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_e =
      complete_system_io_P.DiscreteTimeIntegrator_IC_b;

    /* InitializeConditions for UnitDelay: '<S103>/Prediction' */
    complete_system_io_DW.Prediction_DSTATE_n =
      complete_system_io_P.Prediction_InitialCondition_n;

    /* InitializeConditions for DiscreteIntegrator: '<S104>/Discrete-Time Integrator' */
    complete_system_io_DW.DiscreteTimeIntegrator_DSTATE_ct =
      complete_system_io_P.DiscreteTimeIntegrator_IC_ba;

    /* InitializeConditions for UnitDelay: '<S104>/Prediction' */
    complete_system_io_DW.Prediction_DSTATE_p =
      complete_system_io_P.Prediction_InitialCondition_np;
  }

  /* Enable for Sin: '<S10>/Sine Wave A' */
  complete_system_io_DW.systemEnable = 1;

  /* Enable for Sin: '<S10>/Sine Wave B' */
  complete_system_io_DW.systemEnable_c = 1;

  /* Enable for Sin: '<S10>/Sine Wave C' */
  complete_system_io_DW.systemEnable_p = 1;

  /* Enable for DiscreteIntegrator: '<S102>/Discrete-Time Integrator' */
  complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE = 1U;

  /* Enable for DiscreteIntegrator: '<S103>/Discrete-Time Integrator' */
  complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_c = 1U;

  /* Enable for DiscreteIntegrator: '<S104>/Discrete-Time Integrator' */
  complete_system_io_DW.DiscreteTimeIntegrator_SYSTEM_ENABLE_n = 1U;
}

/* Model terminate function */
void complete_system_io_terminate(void)
{
  /* S-Function block: <S107>/State-Space */
  {
    /* Free memory */
    free(complete_system_io_DW.StateSpace_PWORK.AS);
    free(complete_system_io_DW.StateSpace_PWORK.BS);
    free(complete_system_io_DW.StateSpace_PWORK.CS);
    free(complete_system_io_DW.StateSpace_PWORK.DS);
    free(complete_system_io_DW.StateSpace_PWORK.DX_COL);
    free(complete_system_io_DW.StateSpace_PWORK.TMP2);
    free(complete_system_io_DW.StateSpace_PWORK.BD_COL);
    free(complete_system_io_DW.StateSpace_PWORK.TMP1);
    free(complete_system_io_DW.StateSpace_PWORK.XTMP);
	free(complete_system_io_DW.STRUCT_TEST_PTR);
	free(GLOBAL_TEST_PTR);
  }
  int out, free = 5;
  out = free + free*2;
  free = 100;
}
