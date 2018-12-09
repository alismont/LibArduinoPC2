/*
 * File: Ali1_data.c
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

/* Block parameters (auto storage) */
P_Ali1_T Ali1_P = {
  13U,                                 /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S3>/Digital Output'
                                        */
  500U,                                /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S4>/Constant'
                                        */
  500U,                                /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S5>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  2.0,                                 /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  1.0,                                 /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Pulse Generator'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  10.0,                                /* Computed Parameter: PulseGenerator_Period_n
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  5.0,                                 /* Computed Parameter: PulseGenerator_Duty_h
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  0U                                   /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
