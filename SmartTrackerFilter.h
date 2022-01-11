/*
 * File: SmartTrackerFilter.h
 *
 * Code generated for Simulink model 'SmartTrackerFilter'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Jan 10 21:56:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Custom Processor->Custom
 * Emulation hardware selection:
 *    Differs from embedded hardware (Custom Processor->MATLAB Host Computer)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Passed (11), Warnings (2), Error (0)
 */

#ifndef RTW_HEADER_SmartTrackerFilter_h_
#define RTW_HEADER_SmartTrackerFilter_h_
#ifndef SmartTrackerFilter_COMMON_INCLUDES_
# define SmartTrackerFilter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SmartTrackerFilter_COMMON_INCLUDES_ */

#include "SmartTrackerFilter_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  dsp_simulink_IIRHalfbandDecimat obj; /* '<Root>/Decimator25' */
  dsp_simulink_IIRHalfbandDecim_b obj_d;/* '<Root>/Decimator50' */
  dsp_simulink_IIRHalfbandDeci_bg obj_m;/* '<Root>/Decimator100' */
  real32_T Buffer_CircBuf[4];          /* '<Root>/Buffer' */
  real32_T Buffer1_CircBuf[4];         /* '<Root>/Buffer1' */
  real32_T Buffer2_CircBuf[4];         /* '<Root>/Buffer2' */
  real32_T DigitalFilter_FILT_STATES[4];/* '<S1>/Digital Filter' */
  real32_T SpeedIntegrator_DSTATE;     /* '<Root>/SpeedIntegrator' */
  int32_T Buffer_inBufPtrIdx;          /* '<Root>/Buffer' */
  int32_T Buffer_outBufPtrIdx;         /* '<Root>/Buffer' */
  int32_T Buffer_bufferLength;         /* '<Root>/Buffer' */
  int32_T Buffer1_inBufPtrIdx;         /* '<Root>/Buffer1' */
  int32_T Buffer1_outBufPtrIdx;        /* '<Root>/Buffer1' */
  int32_T Buffer1_bufferLength;        /* '<Root>/Buffer1' */
  int32_T Buffer2_inBufPtrIdx;         /* '<Root>/Buffer2' */
  int32_T Buffer2_outBufPtrIdx;        /* '<Root>/Buffer2' */
  int32_T Buffer2_bufferLength;        /* '<Root>/Buffer2' */
  uint8_T Counter_Count;               /* '<Root>/Counter' */
  boolean_T Memory_PreviousInput;      /* '<S2>/Memory' */
  boolean_T Memory_PreviousInput_c;    /* '<S3>/Memory' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
   * Referenced by:
   *   '<S2>/Logic'
   *   '<S3>/Logic'
   */
  boolean_T pooled3[16];
} ConstP;

/* Real-time Model Data Structure */
struct tag_RTM {
  DW *dwork;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[4];
    } TaskCounters;
  } Timing;
};

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void SmartTrackerFilter_initialize(RT_MODEL *const rtM);
extern void SmartTrackerFilter_step(RT_MODEL *const rtM, real32_T rtU_rawAccelIn,
  boolean_T rtU_valueRead, real32_T *rtY_speedOut, real32_T *rtY_gravOut,
  boolean_T *rtY_newValOut, boolean_T *rtY_overflowOut);

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
 * '<Root>' : 'SmartTrackerFilter'
 * '<S1>'   : 'SmartTrackerFilter/GravFilter'
 * '<S2>'   : 'SmartTrackerFilter/newVal'
 * '<S3>'   : 'SmartTrackerFilter/overflow'
 * '<S4>'   : 'SmartTrackerFilter/GravFilter/Check Signal Attributes'
 */
#endif                                 /* RTW_HEADER_SmartTrackerFilter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
