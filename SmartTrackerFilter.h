//
// File: SmartTrackerFilter.h
//
// Code generated for Simulink model 'SmartTrackerFilter'.
//
// Model version                  : 1.11
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Tue Jan 11 10:05:40 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Custom Processor->Custom
// Emulation hardware selection:
//    Differs from embedded hardware (Custom Processor->MATLAB Host Computer)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Passed (11), Warnings (2), Error (0)
//
#ifndef RTW_HEADER_SmartTrackerFilter_h_
#define RTW_HEADER_SmartTrackerFilter_h_
#ifndef SmartTrackerFilter_COMMON_INCLUDES_
# define SmartTrackerFilter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // SmartTrackerFilter_COMMON_INCLUDES_

#include "SmartTrackerFilter_types.h"

// Macros for accessing real-time model data structure

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  dsp_simulink_IIRHalfbandDecimat obj; // '<Root>/Decimator25'
  dsp_simulink_IIRHalfbandDecim_b obj_d;// '<Root>/Decimator50'
  dsp_simulink_IIRHalfbandDeci_bg obj_m;// '<Root>/Decimator100'
  real32_T Buffer1_CircBuf[4];         // '<Root>/Buffer1'
  real32_T Buffer2_CircBuf[4];         // '<Root>/Buffer2'
  real32_T DigitalFilter_FILT_STATES[4];// '<S1>/Digital Filter'
  real32_T SpeedIntegrator_DSTATE;     // '<Root>/SpeedIntegrator'
  int32_T Buffer_inBufPtrIdx;          // '<Root>/Buffer'
  int32_T Buffer_outBufPtrIdx;         // '<Root>/Buffer'
  int32_T Buffer_bufferLength;         // '<Root>/Buffer'
  int32_T Buffer1_inBufPtrIdx;         // '<Root>/Buffer1'
  int32_T Buffer1_outBufPtrIdx;        // '<Root>/Buffer1'
  int32_T Buffer1_bufferLength;        // '<Root>/Buffer1'
  int32_T Buffer2_inBufPtrIdx;         // '<Root>/Buffer2'
  int32_T Buffer2_outBufPtrIdx;        // '<Root>/Buffer2'
  int32_T Buffer2_bufferLength;        // '<Root>/Buffer2'
  int16_T Buffer_CircBuf[4];           // '<Root>/Buffer'
  uint8_T Counter_Count;               // '<Root>/Counter'
  boolean_T Memory_PreviousInput;      // '<S2>/Memory'
  boolean_T Memory_PreviousInput_c;    // '<S3>/Memory'
} DW;

// Constant parameters (default storage)
typedef struct {
  // Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
  //  Referenced by:
  //    '<S2>/Logic'
  //    '<S3>/Logic'

  boolean_T pooled3[16];
} ConstP;

// External inputs (root inport signals with default storage)
typedef struct {
  int16_T rawAccelIn;                  // '<Root>/rawAccelIn'
  boolean_T valueRead;                 // '<Root>/valueRead'
} ExtU;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real32_T speedOut;                   // '<Root>/speedOut'
  real32_T gravOut;                    // '<Root>/gravOut'
  boolean_T newValOut;                 // '<Root>/newValOut'
  boolean_T overflowOut;               // '<Root>/overflowOut'
} ExtY;

// Real-time Model Data Structure
struct tag_RTM {
  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[4];
    } TaskCounters;
  } Timing;
};

// Constant parameters (default storage)
extern const ConstP rtConstP;

// Class declaration for model SmartTrackerFilter
class SmartTrackerFilterModelClass {
  // public data and function members
 public:
  // External inputs
  ExtU rtU;

  // External outputs
  ExtY rtY;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  SmartTrackerFilterModelClass();

  // Destructor
  ~SmartTrackerFilterModelClass();

  // Real-Time Model get method
  RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;

  // Real-Time Model
  RT_MODEL rtM;

  // private member function(s) for subsystem '<Root>'
  void AllpassMinMult_stepMinMultCasca(real32_T u, const real32_T Z[2], real32_T
    branchCoef_FirstOrderSectionCoe, real32_T *y, real32_T b_Z[2]);
  void SystemProp_matlabCodegenSetA_bg(dsp_simulink_IIRHalfbandDeci_bg *obj,
    boolean_T value);
  void SystemCore_release_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
  void SystemCore_delete_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
  void matlabCodegenHandle_matlabCo_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
  void SystemProp_matlabCodegenSetAn_b(dsp_simulink_IIRHalfbandDecim_b *obj,
    boolean_T value);
  void SystemCore_release_b(dsp_simulink_IIRHalfbandDecim_b *obj);
  void SystemCore_delete_b(dsp_simulink_IIRHalfbandDecim_b *obj);
  void matlabCodegenHandle_matlabCod_b(dsp_simulink_IIRHalfbandDecim_b *obj);
  void SystemProp_matlabCodegenSetAnyP(dsp_simulink_IIRHalfbandDecimat *obj,
    boolean_T value);
  void SystemCore_release(dsp_simulink_IIRHalfbandDecimat *obj);
  void SystemCore_delete(dsp_simulink_IIRHalfbandDecimat *obj);
  void matlabCodegenHandle_matlabCodeg(dsp_simulink_IIRHalfbandDecimat *obj);
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'SmartTrackerFilter'
//  '<S1>'   : 'SmartTrackerFilter/GravFilter'
//  '<S2>'   : 'SmartTrackerFilter/newVal'
//  '<S3>'   : 'SmartTrackerFilter/overflow'
//  '<S4>'   : 'SmartTrackerFilter/GravFilter/Check Signal Attributes'

#endif                                 // RTW_HEADER_SmartTrackerFilter_h_

//
// File trailer for generated code.
//
// [EOF]
//
