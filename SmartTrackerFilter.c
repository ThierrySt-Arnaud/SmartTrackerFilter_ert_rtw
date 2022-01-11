/*
 * File: SmartTrackerFilter.c
 *
 * Code generated for Simulink model 'SmartTrackerFilter'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Jan 10 19:20:52 2022
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

#include "SmartTrackerFilter.h"
#include "SmartTrackerFilter_private.h"

/* Forward declaration for local functions */
static void AllpassMinMult_stepMinMultCasca(const real32_T u[2], const real32_T
  Z[2], real32_T branchCoef_FirstOrderSectionCoe, real32_T y[2], real32_T b_Z[2]);
static void SystemProp_matlabCodegenSetA_bg(dsp_simulink_IIRHalfbandDeci_bg *obj,
  boolean_T value);
static void SystemCore_release_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
static void SystemCore_delete_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
static void matlabCodegenHandle_matlabCo_bg(dsp_simulink_IIRHalfbandDeci_bg *obj);
static void SystemProp_matlabCodegenSetAn_b(dsp_simulink_IIRHalfbandDecim_b *obj,
  boolean_T value);
static void SystemCore_release_b(dsp_simulink_IIRHalfbandDecim_b *obj);
static void SystemCore_delete_b(dsp_simulink_IIRHalfbandDecim_b *obj);
static void matlabCodegenHandle_matlabCod_b(dsp_simulink_IIRHalfbandDecim_b *obj);
static void SystemProp_matlabCodegenSetAnyP(dsp_simulink_IIRHalfbandDecimat *obj,
  boolean_T value);
static void SystemCore_release(dsp_simulink_IIRHalfbandDecimat *obj);
static void SystemCore_delete(dsp_simulink_IIRHalfbandDecimat *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_IIRHalfbandDecimat *obj);
static void rate_scheduler(RT_MODEL *const rtM);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(RT_MODEL *const rtM)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 7) {/* Sample time: [0.04s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

static void AllpassMinMult_stepMinMultCasca(const real32_T u[2], const real32_T
  Z[2], real32_T branchCoef_FirstOrderSectionCoe, real32_T y[2], real32_T b_Z[2])
{
  real32_T y_0;

  /* Start for MATLABSystem: '<Root>/Decimator50' */
  y_0 = (u[0] - Z[1]) * branchCoef_FirstOrderSectionCoe + Z[0];
  y[0] = y_0;
  y_0 = (u[1] - y_0) * branchCoef_FirstOrderSectionCoe + u[0];
  y[1] = y_0;
  b_Z[0] = u[1];
  b_Z[1] = y_0;
}

static void SystemProp_matlabCodegenSetA_bg(dsp_simulink_IIRHalfbandDeci_bg *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Decimator100' */
  obj->matlabCodegenIsDeleted = value;
}

static void SystemCore_release_bg(dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator100' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator100' */
}

static void SystemCore_delete_bg(dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator100' */
  SystemCore_release_bg(obj);
}

static void matlabCodegenHandle_matlabCo_bg(dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator100' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetA_bg(obj, true);
    SystemCore_delete_bg(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator100' */
}

static void SystemProp_matlabCodegenSetAn_b(dsp_simulink_IIRHalfbandDecim_b *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Decimator50' */
  obj->matlabCodegenIsDeleted = value;
}

static void SystemCore_release_b(dsp_simulink_IIRHalfbandDecim_b *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator50' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator50' */
}

static void SystemCore_delete_b(dsp_simulink_IIRHalfbandDecim_b *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator50' */
  SystemCore_release_b(obj);
}

static void matlabCodegenHandle_matlabCod_b(dsp_simulink_IIRHalfbandDecim_b *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator50' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_b(obj, true);
    SystemCore_delete_b(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator50' */
}

static void SystemProp_matlabCodegenSetAnyP(dsp_simulink_IIRHalfbandDecimat *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Decimator25' */
  obj->matlabCodegenIsDeleted = value;
}

static void SystemCore_release(dsp_simulink_IIRHalfbandDecimat *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator25' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator25' */
}

static void SystemCore_delete(dsp_simulink_IIRHalfbandDecimat *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator25' */
  SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_IIRHalfbandDecimat *obj)
{
  /* Start for MATLABSystem: '<Root>/Decimator25' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    SystemCore_delete(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Decimator25' */
}

/* Model step function */
void SmartTrackerFilter_step(RT_MODEL *const rtM, real32_T rtU_rawAccelIn,
  boolean_T rtU_valueRead, real32_T *rtY_speedOut, real32_T *rtY_gravOut,
  boolean_T *rtY_newValOut, boolean_T *rtY_overflowOut)
{
  DW *rtDW = ((DW *) rtM->dwork);
  int32_T uyIdx;
  int32_T currentOffset;
  int32_T nSampsAtBot;
  int32_T nSamps;
  int32_T b_t;
  real32_T b_y1[2];
  real32_T b_Z1[2];
  real32_T y2[2];
  real32_T branch2Carry;
  boolean_T rtb_Memory;
  real32_T rtb_Buffer[8];
  real32_T rtb_gToMperS;
  real32_T tmp[2];
  real32_T rtb_Decimator100_0[2];
  real32_T tmp_0;
  real32_T c_x_idx_0;
  real32_T c_x_idx_2;

  /* Buffer: '<Root>/Buffer' incorporates:
   *  Inport: '<Root>/rawAccelIn'
   *  MATLABSystem: '<Root>/Decimator100'
   *  MATLABSystem: '<Root>/Decimator100'
   */
  nSamps = 16;
  uyIdx = rtDW->Buffer_inBufPtrIdx;
  if (16 - rtDW->Buffer_inBufPtrIdx <= 1) {
    for (b_t = 0; b_t < 16 - rtDW->Buffer_inBufPtrIdx; b_t++) {
      rtDW->Buffer_CircBuf[rtDW->Buffer_inBufPtrIdx + b_t] = rtU_rawAccelIn;
    }

    uyIdx = 0;
    nSamps = rtDW->Buffer_inBufPtrIdx;
  }

  for (b_t = 0; b_t < nSamps - 15; b_t++) {
    rtDW->Buffer_CircBuf[uyIdx + b_t] = rtU_rawAccelIn;
  }

  rtDW->Buffer_inBufPtrIdx++;
  if (rtDW->Buffer_inBufPtrIdx >= 16) {
    rtDW->Buffer_inBufPtrIdx -= 16;
  }

  rtDW->Buffer_bufferLength++;
  if (rtDW->Buffer_bufferLength > 16) {
    rtDW->Buffer_outBufPtrIdx = (rtDW->Buffer_outBufPtrIdx +
      rtDW->Buffer_bufferLength) - 16;
    if (rtDW->Buffer_outBufPtrIdx > 16) {
      rtDW->Buffer_outBufPtrIdx -= 16;
    }

    rtDW->Buffer_bufferLength = 16;
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    rtDW->Buffer_bufferLength -= 8;
    if (rtDW->Buffer_bufferLength < 0) {
      rtDW->Buffer_outBufPtrIdx += rtDW->Buffer_bufferLength;
      if (rtDW->Buffer_outBufPtrIdx < 0) {
        rtDW->Buffer_outBufPtrIdx += 16;
      }

      rtDW->Buffer_bufferLength = 0;
    }

    uyIdx = 0;
    currentOffset = rtDW->Buffer_outBufPtrIdx;
    if (rtDW->Buffer_outBufPtrIdx < 0) {
      currentOffset = rtDW->Buffer_outBufPtrIdx + 16;
    }

    nSampsAtBot = 16 - currentOffset;
    nSamps = 8;
    if (16 - currentOffset <= 8) {
      for (b_t = 0; b_t < 16 - currentOffset; b_t++) {
        rtb_Buffer[b_t] = rtDW->Buffer_CircBuf[currentOffset + b_t];
      }

      uyIdx = 16 - currentOffset;
      currentOffset = 0;
      nSamps = 8 - nSampsAtBot;
    }

    for (b_t = 0; b_t < nSamps; b_t++) {
      rtb_Buffer[uyIdx + b_t] = rtDW->Buffer_CircBuf[currentOffset + b_t];
    }

    rtDW->Buffer_outBufPtrIdx = currentOffset + nSamps;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    if (rtDW->obj_m.TunablePropsChanged) {
      rtDW->obj_m.TunablePropsChanged = false;
    }

    rtb_gToMperS = (rtb_Buffer[0] - rtDW->obj_m.pStates.Branch1[1]) *
      rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs +
      rtDW->obj_m.pStates.Branch1[0];
    c_x_idx_0 = rtb_gToMperS;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtb_gToMperS = (rtb_Buffer[2] - rtb_gToMperS) *
      rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtb_Buffer[0];
    branch2Carry = rtb_gToMperS;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtb_gToMperS = (rtb_Buffer[4] - rtb_gToMperS) *
      rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtb_Buffer[2];
    c_x_idx_2 = rtb_gToMperS;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtb_gToMperS = (rtb_Buffer[6] - rtb_gToMperS) *
      rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtb_Buffer[4];
    rtDW->obj_m.pStates.Branch1[0] = rtb_Buffer[6];
    rtDW->obj_m.pStates.Branch1[1] = rtb_gToMperS;
    tmp_0 = rtDW->obj_m.pBranch2Carry;
    rtDW->obj_m.pBranch2Carry = rtb_Buffer[7];

    /* Start for MATLABSystem: '<Root>/Decimator50' incorporates:
     *  MATLABSystem: '<Root>/Decimator100'
     *  MATLABSystem: '<Root>/Decimator100'
     */
    if (rtDW->obj_d.TunablePropsChanged) {
      rtDW->obj_d.TunablePropsChanged = false;
    }

    rtb_Decimator100_0[0] = (c_x_idx_0 + tmp_0) * 0.5F;
    rtb_Decimator100_0[1] = (c_x_idx_2 + rtb_Buffer[3]) * 0.5F;
    AllpassMinMult_stepMinMultCasca(rtb_Decimator100_0,
      rtDW->obj_d.pStates.Branch1,
      rtDW->obj_d.pBranchCoef1.FirstOrderSectionCoeffs, b_y1, b_Z1);
    rtb_Decimator100_0[0] = (branch2Carry + rtb_Buffer[1]) * 0.5F;
    tmp[0] = rtDW->obj_d.pStates.Branch2[0];
    rtDW->obj_d.pStates.Branch1[0] = b_Z1[0];
    rtb_Decimator100_0[1] = (rtb_gToMperS + rtb_Buffer[5]) * 0.5F;
    tmp[1] = rtDW->obj_d.pStates.Branch2[1];
    rtDW->obj_d.pStates.Branch1[1] = b_Z1[1];
    AllpassMinMult_stepMinMultCasca(rtb_Decimator100_0, tmp,
      rtDW->obj_d.pBranchCoef2.FirstOrderSectionCoeffs, y2,
      rtDW->obj_d.pStates.Branch2);

    /* MATLABSystem: '<Root>/Decimator50' */
    b_Z1[0] = (b_y1[0] + rtDW->obj_d.pBranch2Carry) * 0.5F;
    b_Z1[1] = (b_y1[1] + y2[0]) * 0.5F;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.pBranch2Carry = y2[1];

    /* Start for MATLABSystem: '<Root>/Decimator25' incorporates:
     *  MATLABSystem: '<Root>/Decimator50'
     */
    if (rtDW->obj.TunablePropsChanged) {
      rtDW->obj.TunablePropsChanged = false;
    }

    rtb_gToMperS = (b_Z1[0] - rtDW->obj.pStates.Branch1[1]) *
      rtDW->obj.pBranchCoef1.FirstOrderSectionCoeffs[0] +
      rtDW->obj.pStates.Branch1[0];
    branch2Carry = rtb_gToMperS;
    c_x_idx_2 = rtb_gToMperS;
    rtb_gToMperS = (rtb_gToMperS - rtDW->obj.pStates.Branch1[3]) *
      rtDW->obj.pBranchCoef1.FirstOrderSectionCoeffs[1] +
      rtDW->obj.pStates.Branch1[2];
    c_x_idx_0 = (b_Z1[1] - rtDW->obj.pStates.Branch2[1]) *
      rtDW->obj.pBranchCoef2.FirstOrderSectionCoeffs + rtDW->
      obj.pStates.Branch2[0];
    rtDW->obj.pStates.Branch2[0] = b_Z1[1];
    rtDW->obj.pStates.Branch2[1] = c_x_idx_0;
    rtDW->obj.pStates.Branch1[0] = b_Z1[0];
    rtDW->obj.pStates.Branch1[1] = branch2Carry;
    rtDW->obj.pStates.Branch1[2] = c_x_idx_2;
    rtDW->obj.pStates.Branch1[3] = rtb_gToMperS;
    branch2Carry = rtDW->obj.pBranch2Carry;
    rtDW->obj.pBranch2Carry = c_x_idx_0;

    /* Gain: '<Root>/gToMperS' incorporates:
     *  MATLABSystem: '<Root>/Decimator25'
     *  MATLABSystem: '<Root>/Decimator25'
     */
    rtb_gToMperS = (rtb_gToMperS + branch2Carry) * 0.5F * 9.81F;

    /* S-Function (sdspbiquad): '<S1>/Digital Filter' */
    branch2Carry = 0.0445333347F * rtb_gToMperS;
    c_x_idx_0 = 1.00001109F * branch2Carry + rtDW->DigitalFilter_FILT_STATES[0];
    rtDW->DigitalFilter_FILT_STATES[0] = (-2.0F * branch2Carry +
      rtDW->DigitalFilter_FILT_STATES[1]) - -1.7073499F * c_x_idx_0;
    rtDW->DigitalFilter_FILT_STATES[1] = 1.00000763F * branch2Carry -
      0.753310323F * c_x_idx_0;
    c_x_idx_0 = 2.0F * c_x_idx_0 + rtDW->DigitalFilter_FILT_STATES[2];
    rtDW->DigitalFilter_FILT_STATES[2] = rtDW->DigitalFilter_FILT_STATES[3] -
      0.0131777413F * c_x_idx_0;
    rtDW->DigitalFilter_FILT_STATES[3] = 0.0F - 0.00781916268F * c_x_idx_0;
    branch2Carry = 9.62967587F * c_x_idx_0;
  }

  /* End of Buffer: '<Root>/Buffer' */

  /* S-Function (sdspcount2): '<Root>/Counter' */
  rtb_Memory = false;
  if (rtDW->Counter_Count < 7) {
    rtDW->Counter_Count++;
  } else {
    rtDW->Counter_Count = 0U;
  }

  if (rtDW->Counter_Count == 0) {
    rtb_Memory = true;
  }

  /* End of S-Function (sdspcount2): '<Root>/Counter' */

  /* CombinatorialLogic: '<S2>/Logic' incorporates:
   *  Inport: '<Root>/valueRead'
   *  Memory: '<S2>/Memory'
   */
  nSamps = (int32_T)(((((uint32_T)rtb_Memory << 1) + rtU_valueRead) << 1) +
                     rtDW->Memory_PreviousInput);

  /* Update for Memory: '<S2>/Memory' incorporates:
   *  CombinatorialLogic: '<S2>/Logic'
   */
  rtDW->Memory_PreviousInput = rtConstP.pooled3[(uint32_T)nSamps];

  /* Outport: '<Root>/newValOut' incorporates:
   *  CombinatorialLogic: '<S2>/Logic'
   */
  *rtY_newValOut = rtConstP.pooled3[(uint32_T)nSamps];

  /* CombinatorialLogic: '<S3>/Logic' incorporates:
   *  CombinatorialLogic: '<S2>/Logic'
   *  Inport: '<Root>/valueRead'
   *  Logic: '<Root>/Logical Operator'
   *  Memory: '<S3>/Memory'
   */
  nSamps = (int32_T)(((uint32_T)(rtConstP.pooled3[(uint32_T)nSamps] &&
    rtU_valueRead) << 2) + rtDW->Memory_PreviousInput_c);

  /* Outport: '<Root>/overflowOut' incorporates:
   *  CombinatorialLogic: '<S3>/Logic'
   */
  *rtY_overflowOut = rtConstP.pooled3[(uint32_T)nSamps];
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Outport: '<Root>/gravOut' incorporates:
     *  Sum: '<Root>/gravExtractor'
     */
    *rtY_gravOut = rtb_gToMperS - branch2Carry;

    /* Outport: '<Root>/speedOut' incorporates:
     *  DiscreteIntegrator: '<Root>/SpeedIntegrator'
     */
    *rtY_speedOut = rtDW->SpeedIntegrator_DSTATE;

    /* Update for DiscreteIntegrator: '<Root>/SpeedIntegrator' */
    rtDW->SpeedIntegrator_DSTATE += 0.04F * branch2Carry;
  }

  /* Update for Memory: '<S3>/Memory' incorporates:
   *  CombinatorialLogic: '<S3>/Logic'
   */
  rtDW->Memory_PreviousInput_c = rtConstP.pooled3[(uint32_T)nSamps];
  rate_scheduler(rtM);
}

/* Model initialize function */
void SmartTrackerFilter_initialize(RT_MODEL *const rtM)
{
  DW *rtDW = ((DW *) rtM->dwork);

  {
    static const shcLhZeMq0dzE7rrne4jMSC tmp = { 0.268888593F/* FirstOrderSectionCoeffs */
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_0 = { 0.552805185F/* FirstOrderSectionCoeffs */
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_1 = { 0.119140156F/* FirstOrderSectionCoeffs */
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_2 = { 0.335145384F/* FirstOrderSectionCoeffs */
    };

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtDW->obj_m.matlabCodegenIsDeleted = true;
    rtDW->obj_m.pNumChannels = -1;
    rtDW->obj_m.isInitialized = 0;
    rtDW->obj_m.matlabCodegenIsDeleted = false;
    rtDW->obj_m.isSetupComplete = false;
    rtDW->obj_m.isInitialized = 1;
    rtDW->obj_m.pNumChannels = 1;
    rtDW->obj_m.pBranchCoef1 = tmp_2;
    rtDW->obj_m.pBranch2Carry = 0.0F;
    rtDW->obj_m.isSetupComplete = true;
    rtDW->obj_m.TunablePropsChanged = false;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.matlabCodegenIsDeleted = true;
    rtDW->obj_d.pNumChannels = -1;
    rtDW->obj_d.isInitialized = 0;
    rtDW->obj_d.matlabCodegenIsDeleted = false;
    rtDW->obj_d.isSetupComplete = false;
    rtDW->obj_d.isInitialized = 1;
    rtDW->obj_d.pNumChannels = 1;
    rtDW->obj_d.pBranchCoef1 = tmp_1;
    rtDW->obj_d.pBranchCoef2 = tmp_0;
    rtDW->obj_d.pBranch2Carry = 0.0F;
    rtDW->obj_d.isSetupComplete = true;
    rtDW->obj_d.TunablePropsChanged = false;

    /* Start for MATLABSystem: '<Root>/Decimator25' */
    rtDW->obj.matlabCodegenIsDeleted = true;
    rtDW->obj.pNumChannels = -1;
    rtDW->obj.isInitialized = 0;
    rtDW->obj.matlabCodegenIsDeleted = false;
    rtDW->obj.isSetupComplete = false;
    rtDW->obj.isInitialized = 1;
    rtDW->obj.pNumChannels = 1;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtDW->obj_m.pStates.Branch1[0] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.pStates.Branch1[0] = 0.0F;
    rtDW->obj_d.pStates.Branch2[0] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator25' */
    rtDW->obj.pBranchCoef1.FirstOrderSectionCoeffs[0] = 0.0645185F;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtDW->obj_m.pStates.Branch1[1] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.pStates.Branch1[1] = 0.0F;
    rtDW->obj_d.pStates.Branch2[1] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator25' */
    rtDW->obj.pBranchCoef1.FirstOrderSectionCoeffs[1] = 0.670426667F;
    rtDW->obj.pBranchCoef2 = tmp;
    rtDW->obj.pStates.Branch1[0] = 0.0F;
    rtDW->obj.pStates.Branch1[1] = 0.0F;
    rtDW->obj.pStates.Branch1[2] = 0.0F;
    rtDW->obj.pStates.Branch1[3] = 0.0F;
    rtDW->obj.pStates.Branch2[0] = 0.0F;
    rtDW->obj.pStates.Branch2[1] = 0.0F;
    rtDW->obj.pBranch2Carry = 0.0F;
    rtDW->obj.isSetupComplete = true;
    rtDW->obj.TunablePropsChanged = false;

    /* InitializeConditions for Buffer: '<Root>/Buffer' */
    rtDW->Buffer_inBufPtrIdx = 8;
    rtDW->Buffer_bufferLength = 8;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtDW->obj_m.pBranch2Carry = 0.0F;
    rtDW->obj_m.pStates.Branch1[0] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.pStates.Branch1[0] = 0.0F;
    rtDW->obj_d.pStates.Branch2[0] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator100' */
    rtDW->obj_m.pStates.Branch1[1] = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator50' */
    rtDW->obj_d.pStates.Branch1[1] = 0.0F;
    rtDW->obj_d.pStates.Branch2[1] = 0.0F;
    rtDW->obj_d.pBranch2Carry = 0.0F;

    /* Start for MATLABSystem: '<Root>/Decimator25' */
    rtDW->obj.pStates.Branch1[0] = 0.0F;
    rtDW->obj.pStates.Branch1[1] = 0.0F;
    rtDW->obj.pStates.Branch1[2] = 0.0F;
    rtDW->obj.pStates.Branch1[3] = 0.0F;
    rtDW->obj.pStates.Branch2[0] = 0.0F;
    rtDW->obj.pStates.Branch2[1] = 0.0F;
    rtDW->obj.pBranch2Carry = 0.0F;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
