/*
 * File: Ali1.h
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

#ifndef RTW_HEADER_Ali1_h_
#define RTW_HEADER_Ali1_h_
#include <string.h>
#include <stddef.h>
#ifndef Ali1_COMMON_INCLUDES_
# define Ali1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_analoginput_lct.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* Ali1_COMMON_INCLUDES_ */

#include "Ali1_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T PulseGenerator;               /* '<S1>/Pulse Generator' */
} B_Ali1_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator' */
  int32_T clockTickCounter_e;          /* '<S2>/Pulse Generator' */
} DW_Ali1_T;

/* Parameters (auto storage) */
struct P_Ali1_T_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S3>/Digital Output'
                                        */
  uint16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S4>/Constant'
                                        */
  uint16_T CompareToConstant_const_n;  /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 1
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  real_T PulseGenerator_Amp_o;         /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_n;      /* Computed Parameter: PulseGenerator_Period_n
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_h;        /* Computed Parameter: PulseGenerator_Duty_h
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_g;  /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  uint32_T AnalogInput_p1;             /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Ali1_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Ali1_T Ali1_P;

/* Block signals (auto storage) */
extern B_Ali1_T Ali1_B;

/* Block states (auto storage) */
extern DW_Ali1_T Ali1_DW;

/* External function called from main */
extern void Ali1_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Ali1_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Ali1_initialize(void);
extern void Ali1_step(int_T tid);
extern void Ali1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Ali1_T *const Ali1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Ali1'
 * '<S1>'   : 'Ali1/<=500'
 * '<S2>'   : 'Ali1/>500'
 * '<S3>'   : 'Ali1/Digital Output'
 * '<S4>'   : 'Ali1/<=500/Compare To Constant'
 * '<S5>'   : 'Ali1/>500/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_Ali1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
