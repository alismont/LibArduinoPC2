/*
 * File: Ali1.c
 *
 * Code generated for Simulink model 'Ali1'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Fri Oct 28 05:38:17 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Ali1.h"
#include "Ali1_private.h"

/* Block signals (auto storage) */
B_Ali1_T Ali1_B;

/* Block states (auto storage) */
DW_Ali1_T Ali1_DW;

/* Real-time model */
RT_MODEL_Ali1_T Ali1_M_;
RT_MODEL_Ali1_T *const Ali1_M = &Ali1_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Ali1_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(Ali1_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Ali1_M->Timing.TaskCounters.TID[1])++;
  if ((Ali1_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [1.0s, 0.0s] */
    Ali1_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void Ali1_step0(void)                  /* Sample time: [0.5s, 0.0s] */
{
  uint16_T rtb_AnalogInput_0;
  real_T rtb_PulseGenerator;

  {                                    /* Sample time: [0.5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  rtb_AnalogInput_0 = MW_analogRead(Ali1_P.AnalogInput_p1);

  /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
  rtb_PulseGenerator = (Ali1_DW.clockTickCounter_e <
                        Ali1_P.PulseGenerator_Duty_h) &&
    (Ali1_DW.clockTickCounter_e >= 0L) ? Ali1_P.PulseGenerator_Amp_o : 0.0;
  if (Ali1_DW.clockTickCounter_e >= Ali1_P.PulseGenerator_Period_n - 1.0) {
    Ali1_DW.clockTickCounter_e = 0L;
  } else {
    Ali1_DW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S2>/Pulse Generator' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Logic: '<Root>/Logical Operator'
   *  Logic: '<S1>/Logical Operator'
   *  Logic: '<S2>/Logical Operator'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input'
   */
  MW_digitalWrite(Ali1_P.DigitalOutput_pinNumber, (uint8_T)(((rtb_AnalogInput_0 <=
    Ali1_P.CompareToConstant_const) || (Ali1_B.PulseGenerator != 0.0)) &&
    ((rtb_AnalogInput_0 > Ali1_P.CompareToConstant_const_n) ||
     (rtb_PulseGenerator != 0.0))));
}

/* Model step function for TID1 */
void Ali1_step1(void)                  /* Sample time: [1.0s, 0.0s] */
{
  /* DiscretePulseGenerator: '<S1>/Pulse Generator' */
  Ali1_B.PulseGenerator = (Ali1_DW.clockTickCounter < Ali1_P.PulseGenerator_Duty)
    && (Ali1_DW.clockTickCounter >= 0L) ? Ali1_P.PulseGenerator_Amp : 0.0;
  if (Ali1_DW.clockTickCounter >= Ali1_P.PulseGenerator_Period - 1.0) {
    Ali1_DW.clockTickCounter = 0L;
  } else {
    Ali1_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator' */
}

/* Model step wrapper function for compatibility with a static main program */
void Ali1_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Ali1_step0();
    break;

   case 1 :
    Ali1_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Ali1_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Ali1_M, 0,
                sizeof(RT_MODEL_Ali1_T));

  /* block I/O */
  (void) memset(((void *) &Ali1_B), 0,
                sizeof(B_Ali1_T));

  /* states (dwork) */
  (void) memset((void *)&Ali1_DW, 0,
                sizeof(DW_Ali1_T));

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  MW_pinModeAnalogInput(Ali1_P.AnalogInput_p1);

  /* Start for DiscretePulseGenerator: '<S1>/Pulse Generator' */
  Ali1_DW.clockTickCounter = -1L;

  /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
  Ali1_DW.clockTickCounter_e = -2L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S3>/Digital Output' */
  MW_pinModeOutput(Ali1_P.DigitalOutput_pinNumber);
}

/* Model terminate function */
void Ali1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
