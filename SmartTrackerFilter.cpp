//
// File: SmartTrackerFilter.cpp
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
#include "SmartTrackerFilter.h"
#include "SmartTrackerFilter_private.h"

static void rate_scheduler(RT_MODEL *const rtM);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(RT_MODEL *const rtM)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 1) {// Sample time: [0.01s, 0.0s]
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 3) {// Sample time: [0.02s, 0.0s]
    rtM->Timing.TaskCounters.TID[2] = 0;
  }

  (rtM->Timing.TaskCounters.TID[3])++;
  if ((rtM->Timing.TaskCounters.TID[3]) > 7) {// Sample time: [0.04s, 0.0s]
    rtM->Timing.TaskCounters.TID[3] = 0;
  }
}

void SmartTrackerFilterModelClass::AllpassMinMult_stepMinMultCasca(real32_T u,
  const real32_T Z[2], real32_T branchCoef_FirstOrderSectionCoe, real32_T *y,
  real32_T b_Z[2])
{
  // Start for MATLABSystem: '<Root>/Decimator50'
  *y = (u - Z[1]) * branchCoef_FirstOrderSectionCoe + Z[0];
  b_Z[0] = u;
  b_Z[1] = *y;
}

void SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetA_bg
  (dsp_simulink_IIRHalfbandDeci_bg *obj, boolean_T value)
{
  // Start for MATLABSystem: '<Root>/Decimator100'
  obj->matlabCodegenIsDeleted = value;
}

void SmartTrackerFilterModelClass::SystemCore_release_bg
  (dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator100'
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  // End of Start for MATLABSystem: '<Root>/Decimator100'
}

void SmartTrackerFilterModelClass::SystemCore_delete_bg
  (dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator100'
  SystemCore_release_bg(obj);
}

void SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCo_bg
  (dsp_simulink_IIRHalfbandDeci_bg *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator100'
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetA_bg(obj, true);
    SystemCore_delete_bg(obj);
  }

  // End of Start for MATLABSystem: '<Root>/Decimator100'
}

void SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetAn_b
  (dsp_simulink_IIRHalfbandDecim_b *obj, boolean_T value)
{
  // Start for MATLABSystem: '<Root>/Decimator50'
  obj->matlabCodegenIsDeleted = value;
}

void SmartTrackerFilterModelClass::SystemCore_release_b
  (dsp_simulink_IIRHalfbandDecim_b *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator50'
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  // End of Start for MATLABSystem: '<Root>/Decimator50'
}

void SmartTrackerFilterModelClass::SystemCore_delete_b
  (dsp_simulink_IIRHalfbandDecim_b *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator50'
  SystemCore_release_b(obj);
}

void SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCod_b
  (dsp_simulink_IIRHalfbandDecim_b *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator50'
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_b(obj, true);
    SystemCore_delete_b(obj);
  }

  // End of Start for MATLABSystem: '<Root>/Decimator50'
}

void SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetAnyP
  (dsp_simulink_IIRHalfbandDecimat *obj, boolean_T value)
{
  // Start for MATLABSystem: '<Root>/Decimator25'
  obj->matlabCodegenIsDeleted = value;
}

void SmartTrackerFilterModelClass::SystemCore_release
  (dsp_simulink_IIRHalfbandDecimat *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator25'
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->pNumChannels = -1;
  }

  // End of Start for MATLABSystem: '<Root>/Decimator25'
}

void SmartTrackerFilterModelClass::SystemCore_delete
  (dsp_simulink_IIRHalfbandDecimat *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator25'
  SystemCore_release(obj);
}

void SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCodeg
  (dsp_simulink_IIRHalfbandDecimat *obj)
{
  // Start for MATLABSystem: '<Root>/Decimator25'
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    SystemCore_delete(obj);
  }

  // End of Start for MATLABSystem: '<Root>/Decimator25'
}

// Model step function
void SmartTrackerFilterModelClass::step()
{
  int32_T uyIdx;
  int32_T currentOffset;
  int32_T nSampsAtBot;
  int32_T nSamps;
  real32_T branch2Carry;
  real32_T c_x;
  real32_T y2;
  int32_T b_kS;
  boolean_T rtb_Memory;
  real32_T rtb_Buffer2[2];
  real32_T rtb_Buffer1[2];
  int16_T rtb_Buffer[2];
  real32_T rtb_CastToSingle[2];
  real32_T rtb_DigitalFilter;
  real32_T rtb_gToMperS;
  real32_T tmp[2];

  // Buffer: '<Root>/Buffer' incorporates:
  //   Inport: '<Root>/rawAccelIn'

  nSamps = 4;
  uyIdx = rtDW.Buffer_inBufPtrIdx;
  if (4 - rtDW.Buffer_inBufPtrIdx <= 1) {
    for (b_kS = 0; b_kS < 4 - rtDW.Buffer_inBufPtrIdx; b_kS++) {
      rtDW.Buffer_CircBuf[rtDW.Buffer_inBufPtrIdx + b_kS] = rtU.rawAccelIn;
    }

    uyIdx = 0;
    nSamps = rtDW.Buffer_inBufPtrIdx;
  }

  for (b_kS = 0; b_kS < nSamps - 3; b_kS++) {
    rtDW.Buffer_CircBuf[uyIdx + b_kS] = rtU.rawAccelIn;
  }

  rtDW.Buffer_inBufPtrIdx++;
  if (rtDW.Buffer_inBufPtrIdx >= 4) {
    rtDW.Buffer_inBufPtrIdx -= 4;
  }

  rtDW.Buffer_bufferLength++;
  if (rtDW.Buffer_bufferLength > 4) {
    rtDW.Buffer_outBufPtrIdx = (rtDW.Buffer_outBufPtrIdx +
      rtDW.Buffer_bufferLength) - 4;
    if (rtDW.Buffer_outBufPtrIdx > 4) {
      rtDW.Buffer_outBufPtrIdx -= 4;
    }

    rtDW.Buffer_bufferLength = 4;
  }

  if ((&rtM)->Timing.TaskCounters.TID[1] == 0) {
    rtDW.Buffer_bufferLength -= 2;
    if (rtDW.Buffer_bufferLength < 0) {
      rtDW.Buffer_outBufPtrIdx += rtDW.Buffer_bufferLength;
      if (rtDW.Buffer_outBufPtrIdx < 0) {
        rtDW.Buffer_outBufPtrIdx += 4;
      }

      rtDW.Buffer_bufferLength = 0;
    }

    uyIdx = 0;
    currentOffset = rtDW.Buffer_outBufPtrIdx;
    if (rtDW.Buffer_outBufPtrIdx < 0) {
      currentOffset = rtDW.Buffer_outBufPtrIdx + 4;
    }

    nSampsAtBot = 4 - currentOffset;
    nSamps = 2;
    if (4 - currentOffset <= 2) {
      for (b_kS = 0; b_kS < 4 - currentOffset; b_kS++) {
        rtb_Buffer[b_kS] = rtDW.Buffer_CircBuf[currentOffset + b_kS];
      }

      uyIdx = 4 - currentOffset;
      currentOffset = 0;
      nSamps = 2 - nSampsAtBot;
    }

    for (b_kS = 0; b_kS < nSamps; b_kS++) {
      rtb_Buffer[uyIdx + b_kS] = rtDW.Buffer_CircBuf[currentOffset + b_kS];
    }

    rtDW.Buffer_outBufPtrIdx = currentOffset + nSamps;

    // DataTypeConversion: '<Root>/Cast To Single'
    rtb_CastToSingle[0] = (real32_T)rtb_Buffer[0] * 6.10351562E-5F;

    // Start for MATLABSystem: '<Root>/Decimator100' incorporates:
    //   DataTypeConversion: '<Root>/Cast To Single'

    if (rtDW.obj_m.TunablePropsChanged) {
      rtDW.obj_m.TunablePropsChanged = false;
    }

    c_x = (rtb_CastToSingle[0] - rtDW.obj_m.pStates.Branch1[1]) *
      rtDW.obj_m.pBranchCoef1.FirstOrderSectionCoeffs +
      rtDW.obj_m.pStates.Branch1[0];
    rtDW.obj_m.pStates.Branch1[0] = rtb_CastToSingle[0];
    rtDW.obj_m.pStates.Branch1[1] = c_x;
    branch2Carry = rtDW.obj_m.pBranch2Carry;
    rtDW.obj_m.pBranch2Carry = (real32_T)rtb_Buffer[1] * 6.10351562E-5F;

    // MATLABSystem: '<Root>/Decimator100'
    branch2Carry = (c_x + branch2Carry) * 0.5F;

    // Buffer: '<Root>/Buffer1'
    nSamps = 4;
    uyIdx = rtDW.Buffer1_inBufPtrIdx;
    if (4 - rtDW.Buffer1_inBufPtrIdx <= 1) {
      for (b_kS = 0; b_kS < 4 - rtDW.Buffer1_inBufPtrIdx; b_kS++) {
        rtDW.Buffer1_CircBuf[rtDW.Buffer1_inBufPtrIdx + b_kS] = branch2Carry;
      }

      uyIdx = 0;
      nSamps = rtDW.Buffer1_inBufPtrIdx;
    }

    for (b_kS = 0; b_kS < nSamps - 3; b_kS++) {
      rtDW.Buffer1_CircBuf[uyIdx + b_kS] = branch2Carry;
    }

    rtDW.Buffer1_inBufPtrIdx++;
    if (rtDW.Buffer1_inBufPtrIdx >= 4) {
      rtDW.Buffer1_inBufPtrIdx -= 4;
    }

    rtDW.Buffer1_bufferLength++;
    if (rtDW.Buffer1_bufferLength > 4) {
      rtDW.Buffer1_outBufPtrIdx = (rtDW.Buffer1_outBufPtrIdx +
        rtDW.Buffer1_bufferLength) - 4;
      if (rtDW.Buffer1_outBufPtrIdx > 4) {
        rtDW.Buffer1_outBufPtrIdx -= 4;
      }

      rtDW.Buffer1_bufferLength = 4;
    }
  }

  // End of Buffer: '<Root>/Buffer'

  // Buffer: '<Root>/Buffer1'
  if ((&rtM)->Timing.TaskCounters.TID[2] == 0) {
    rtDW.Buffer1_bufferLength -= 2;
    if (rtDW.Buffer1_bufferLength < 0) {
      rtDW.Buffer1_outBufPtrIdx += rtDW.Buffer1_bufferLength;
      if (rtDW.Buffer1_outBufPtrIdx < 0) {
        rtDW.Buffer1_outBufPtrIdx += 4;
      }

      rtDW.Buffer1_bufferLength = 0;
    }

    uyIdx = 0;
    currentOffset = rtDW.Buffer1_outBufPtrIdx;
    if (rtDW.Buffer1_outBufPtrIdx < 0) {
      currentOffset = rtDW.Buffer1_outBufPtrIdx + 4;
    }

    nSampsAtBot = 4 - currentOffset;
    nSamps = 2;
    if (4 - currentOffset <= 2) {
      for (b_kS = 0; b_kS < 4 - currentOffset; b_kS++) {
        rtb_Buffer1[b_kS] = rtDW.Buffer1_CircBuf[currentOffset + b_kS];
      }

      uyIdx = 4 - currentOffset;
      currentOffset = 0;
      nSamps = 2 - nSampsAtBot;
    }

    for (b_kS = 0; b_kS < nSamps; b_kS++) {
      rtb_Buffer1[uyIdx + b_kS] = rtDW.Buffer1_CircBuf[currentOffset + b_kS];
    }

    rtDW.Buffer1_outBufPtrIdx = currentOffset + nSamps;

    // Start for MATLABSystem: '<Root>/Decimator50'
    if (rtDW.obj_d.TunablePropsChanged) {
      rtDW.obj_d.TunablePropsChanged = false;
    }

    AllpassMinMult_stepMinMultCasca(rtb_Buffer1[0], rtDW.obj_d.pStates.Branch1,
      rtDW.obj_d.pBranchCoef1.FirstOrderSectionCoeffs, &c_x, rtb_CastToSingle);
    tmp[0] = rtDW.obj_d.pStates.Branch2[0];
    rtDW.obj_d.pStates.Branch1[0] = rtb_CastToSingle[0];
    tmp[1] = rtDW.obj_d.pStates.Branch2[1];
    rtDW.obj_d.pStates.Branch1[1] = rtb_CastToSingle[1];
    AllpassMinMult_stepMinMultCasca(rtb_Buffer1[1], tmp,
      rtDW.obj_d.pBranchCoef2.FirstOrderSectionCoeffs, &y2,
      rtDW.obj_d.pStates.Branch2);
    branch2Carry = rtDW.obj_d.pBranch2Carry;
    rtDW.obj_d.pBranch2Carry = y2;

    // MATLABSystem: '<Root>/Decimator50'
    branch2Carry = (c_x + branch2Carry) * 0.5F;

    // Buffer: '<Root>/Buffer2'
    nSamps = 4;
    uyIdx = rtDW.Buffer2_inBufPtrIdx;
    if (4 - rtDW.Buffer2_inBufPtrIdx <= 1) {
      for (b_kS = 0; b_kS < 4 - rtDW.Buffer2_inBufPtrIdx; b_kS++) {
        rtDW.Buffer2_CircBuf[rtDW.Buffer2_inBufPtrIdx + b_kS] = branch2Carry;
      }

      uyIdx = 0;
      nSamps = rtDW.Buffer2_inBufPtrIdx;
    }

    for (b_kS = 0; b_kS < nSamps - 3; b_kS++) {
      rtDW.Buffer2_CircBuf[uyIdx + b_kS] = branch2Carry;
    }

    rtDW.Buffer2_inBufPtrIdx++;
    if (rtDW.Buffer2_inBufPtrIdx >= 4) {
      rtDW.Buffer2_inBufPtrIdx -= 4;
    }

    rtDW.Buffer2_bufferLength++;
    if (rtDW.Buffer2_bufferLength > 4) {
      rtDW.Buffer2_outBufPtrIdx = (rtDW.Buffer2_outBufPtrIdx +
        rtDW.Buffer2_bufferLength) - 4;
      if (rtDW.Buffer2_outBufPtrIdx > 4) {
        rtDW.Buffer2_outBufPtrIdx -= 4;
      }

      rtDW.Buffer2_bufferLength = 4;
    }
  }

  // Buffer: '<Root>/Buffer2'
  if ((&rtM)->Timing.TaskCounters.TID[3] == 0) {
    rtDW.Buffer2_bufferLength -= 2;
    if (rtDW.Buffer2_bufferLength < 0) {
      rtDW.Buffer2_outBufPtrIdx += rtDW.Buffer2_bufferLength;
      if (rtDW.Buffer2_outBufPtrIdx < 0) {
        rtDW.Buffer2_outBufPtrIdx += 4;
      }

      rtDW.Buffer2_bufferLength = 0;
    }

    uyIdx = 0;
    currentOffset = rtDW.Buffer2_outBufPtrIdx;
    if (rtDW.Buffer2_outBufPtrIdx < 0) {
      currentOffset = rtDW.Buffer2_outBufPtrIdx + 4;
    }

    nSampsAtBot = 4 - currentOffset;
    nSamps = 2;
    if (4 - currentOffset <= 2) {
      for (b_kS = 0; b_kS < 4 - currentOffset; b_kS++) {
        rtb_Buffer2[b_kS] = rtDW.Buffer2_CircBuf[currentOffset + b_kS];
      }

      uyIdx = 4 - currentOffset;
      currentOffset = 0;
      nSamps = 2 - nSampsAtBot;
    }

    for (b_kS = 0; b_kS < nSamps; b_kS++) {
      rtb_Buffer2[uyIdx + b_kS] = rtDW.Buffer2_CircBuf[currentOffset + b_kS];
    }

    rtDW.Buffer2_outBufPtrIdx = currentOffset + nSamps;

    // Start for MATLABSystem: '<Root>/Decimator25'
    if (rtDW.obj.TunablePropsChanged) {
      rtDW.obj.TunablePropsChanged = false;
    }

    rtb_gToMperS = (rtb_Buffer2[0] - rtDW.obj.pStates.Branch1[1]) *
      rtDW.obj.pBranchCoef1.FirstOrderSectionCoeffs[0] +
      rtDW.obj.pStates.Branch1[0];
    branch2Carry = rtb_gToMperS;
    rtb_gToMperS = (rtb_gToMperS - rtDW.obj.pStates.Branch1[3]) *
      rtDW.obj.pBranchCoef1.FirstOrderSectionCoeffs[1] +
      rtDW.obj.pStates.Branch1[2];
    c_x = (rtb_Buffer2[1] - rtDW.obj.pStates.Branch2[1]) *
      rtDW.obj.pBranchCoef2.FirstOrderSectionCoeffs + rtDW.obj.pStates.Branch2[0];
    rtDW.obj.pStates.Branch2[0] = rtb_Buffer2[1];
    rtDW.obj.pStates.Branch2[1] = c_x;
    rtDW.obj.pStates.Branch1[0] = rtb_Buffer2[0];
    rtDW.obj.pStates.Branch1[1] = branch2Carry;
    rtDW.obj.pStates.Branch1[2] = branch2Carry;
    rtDW.obj.pStates.Branch1[3] = rtb_gToMperS;
    branch2Carry = rtDW.obj.pBranch2Carry;
    rtDW.obj.pBranch2Carry = c_x;

    // Gain: '<Root>/gToMperS' incorporates:
    //   MATLABSystem: '<Root>/Decimator25'
    //   MATLABSystem: '<Root>/Decimator25'

    rtb_gToMperS = (rtb_gToMperS + branch2Carry) * 0.5F * 9.81F;

    // S-Function (sdspbiquad): '<S1>/Digital Filter'
    rtb_DigitalFilter = 0.0445333347F * rtb_gToMperS;
    branch2Carry = 1.00001109F * rtb_DigitalFilter +
      rtDW.DigitalFilter_FILT_STATES[0];
    rtDW.DigitalFilter_FILT_STATES[0] = (-2.0F * rtb_DigitalFilter +
      rtDW.DigitalFilter_FILT_STATES[1]) - -1.7073499F * branch2Carry;
    rtDW.DigitalFilter_FILT_STATES[1] = 1.00000763F * rtb_DigitalFilter -
      0.753310323F * branch2Carry;
    branch2Carry = 2.0F * branch2Carry + rtDW.DigitalFilter_FILT_STATES[2];
    rtDW.DigitalFilter_FILT_STATES[2] = rtDW.DigitalFilter_FILT_STATES[3] -
      0.0131777413F * branch2Carry;
    rtDW.DigitalFilter_FILT_STATES[3] = 0.0F - 0.00781916268F * branch2Carry;
    rtb_DigitalFilter = 9.62967587F * branch2Carry;
  }

  // S-Function (sdspcount2): '<Root>/Counter'
  rtb_Memory = false;
  if (rtDW.Counter_Count < 7) {
    rtDW.Counter_Count++;
  } else {
    rtDW.Counter_Count = 0U;
  }

  if (rtDW.Counter_Count == 0) {
    rtb_Memory = true;
  }

  // End of S-Function (sdspcount2): '<Root>/Counter'

  // CombinatorialLogic: '<S2>/Logic' incorporates:
  //   Inport: '<Root>/valueRead'
  //   Memory: '<S2>/Memory'

  nSamps = (int32_T)(((((uint32_T)rtb_Memory << 1) + rtU.valueRead) << 1) +
                     rtDW.Memory_PreviousInput);

  // Update for Memory: '<S2>/Memory' incorporates:
  //   CombinatorialLogic: '<S2>/Logic'

  rtDW.Memory_PreviousInput = rtConstP.pooled3[(uint32_T)nSamps];

  // Outport: '<Root>/newValOut' incorporates:
  //   CombinatorialLogic: '<S2>/Logic'

  rtY.newValOut = rtConstP.pooled3[(uint32_T)nSamps];

  // CombinatorialLogic: '<S3>/Logic' incorporates:
  //   CombinatorialLogic: '<S2>/Logic'
  //   Inport: '<Root>/valueRead'
  //   Logic: '<Root>/Logical Operator'
  //   Memory: '<S3>/Memory'

  nSamps = (int32_T)(((uint32_T)(rtConstP.pooled3[(uint32_T)nSamps] &&
    rtU.valueRead) << 2) + rtDW.Memory_PreviousInput_c);

  // Outport: '<Root>/overflowOut' incorporates:
  //   CombinatorialLogic: '<S3>/Logic'

  rtY.overflowOut = rtConstP.pooled3[(uint32_T)nSamps];
  if ((&rtM)->Timing.TaskCounters.TID[3] == 0) {
    // Outport: '<Root>/gravOut' incorporates:
    //   Sum: '<Root>/gravExtractor'

    rtY.gravOut = rtb_gToMperS - rtb_DigitalFilter;

    // Outport: '<Root>/speedOut' incorporates:
    //   DiscreteIntegrator: '<Root>/SpeedIntegrator'

    rtY.speedOut = rtDW.SpeedIntegrator_DSTATE;

    // Update for DiscreteIntegrator: '<Root>/SpeedIntegrator'
    rtDW.SpeedIntegrator_DSTATE += 0.04F * rtb_DigitalFilter;
  }

  // Update for Memory: '<S3>/Memory' incorporates:
  //   CombinatorialLogic: '<S3>/Logic'

  rtDW.Memory_PreviousInput_c = rtConstP.pooled3[(uint32_T)nSamps];
  rate_scheduler((&rtM));
}

// Model initialize function
void SmartTrackerFilterModelClass::initialize()
{
  {
    static const shcLhZeMq0dzE7rrne4jMSC tmp = { 0.268888593F// FirstOrderSectionCoeffs 
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_0 = { 0.552805185F// FirstOrderSectionCoeffs 
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_1 = { 0.119140156F// FirstOrderSectionCoeffs 
    };

    static const shcLhZeMq0dzE7rrne4jMSC tmp_2 = { 0.335145384F// FirstOrderSectionCoeffs 
    };

    // Start for MATLABSystem: '<Root>/Decimator100'
    rtDW.obj_m.matlabCodegenIsDeleted = true;
    rtDW.obj_m.pNumChannels = -1;
    rtDW.obj_m.isInitialized = 0;
    rtDW.obj_m.matlabCodegenIsDeleted = false;
    rtDW.obj_m.isSetupComplete = false;
    rtDW.obj_m.isInitialized = 1;
    rtDW.obj_m.pNumChannels = 1;
    rtDW.obj_m.pBranchCoef1 = tmp_2;
    rtDW.obj_m.pBranch2Carry = 0.0F;
    rtDW.obj_m.isSetupComplete = true;
    rtDW.obj_m.TunablePropsChanged = false;

    // Start for MATLABSystem: '<Root>/Decimator50'
    rtDW.obj_d.matlabCodegenIsDeleted = true;
    rtDW.obj_d.pNumChannels = -1;
    rtDW.obj_d.isInitialized = 0;
    rtDW.obj_d.matlabCodegenIsDeleted = false;
    rtDW.obj_d.isSetupComplete = false;
    rtDW.obj_d.isInitialized = 1;
    rtDW.obj_d.pNumChannels = 1;
    rtDW.obj_d.pBranchCoef1 = tmp_1;
    rtDW.obj_d.pBranchCoef2 = tmp_0;
    rtDW.obj_d.pBranch2Carry = 0.0F;
    rtDW.obj_d.isSetupComplete = true;
    rtDW.obj_d.TunablePropsChanged = false;

    // Start for MATLABSystem: '<Root>/Decimator25'
    rtDW.obj.matlabCodegenIsDeleted = true;
    rtDW.obj.pNumChannels = -1;
    rtDW.obj.isInitialized = 0;
    rtDW.obj.matlabCodegenIsDeleted = false;
    rtDW.obj.isSetupComplete = false;
    rtDW.obj.isInitialized = 1;
    rtDW.obj.pNumChannels = 1;

    // Start for MATLABSystem: '<Root>/Decimator100'
    rtDW.obj_m.pStates.Branch1[0] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator50'
    rtDW.obj_d.pStates.Branch1[0] = 0.0F;
    rtDW.obj_d.pStates.Branch2[0] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator25'
    rtDW.obj.pBranchCoef1.FirstOrderSectionCoeffs[0] = 0.0645185F;

    // Start for MATLABSystem: '<Root>/Decimator100'
    rtDW.obj_m.pStates.Branch1[1] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator50'
    rtDW.obj_d.pStates.Branch1[1] = 0.0F;
    rtDW.obj_d.pStates.Branch2[1] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator25'
    rtDW.obj.pBranchCoef1.FirstOrderSectionCoeffs[1] = 0.670426667F;
    rtDW.obj.pBranchCoef2 = tmp;
    rtDW.obj.pStates.Branch1[0] = 0.0F;
    rtDW.obj.pStates.Branch1[1] = 0.0F;
    rtDW.obj.pStates.Branch1[2] = 0.0F;
    rtDW.obj.pStates.Branch1[3] = 0.0F;
    rtDW.obj.pStates.Branch2[0] = 0.0F;
    rtDW.obj.pStates.Branch2[1] = 0.0F;
    rtDW.obj.pBranch2Carry = 0.0F;
    rtDW.obj.isSetupComplete = true;
    rtDW.obj.TunablePropsChanged = false;

    // InitializeConditions for Buffer: '<Root>/Buffer'
    rtDW.Buffer_inBufPtrIdx = 2;
    rtDW.Buffer_bufferLength = 2;

    // InitializeConditions for Buffer: '<Root>/Buffer1'
    rtDW.Buffer1_inBufPtrIdx = 2;
    rtDW.Buffer1_bufferLength = 2;

    // InitializeConditions for Buffer: '<Root>/Buffer2'
    rtDW.Buffer2_inBufPtrIdx = 2;
    rtDW.Buffer2_bufferLength = 2;

    // Start for MATLABSystem: '<Root>/Decimator100'
    rtDW.obj_m.pBranch2Carry = 0.0F;
    rtDW.obj_m.pStates.Branch1[0] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator50'
    rtDW.obj_d.pStates.Branch1[0] = 0.0F;
    rtDW.obj_d.pStates.Branch2[0] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator100'
    rtDW.obj_m.pStates.Branch1[1] = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator50'
    rtDW.obj_d.pStates.Branch1[1] = 0.0F;
    rtDW.obj_d.pStates.Branch2[1] = 0.0F;
    rtDW.obj_d.pBranch2Carry = 0.0F;

    // Start for MATLABSystem: '<Root>/Decimator25'
    rtDW.obj.pStates.Branch1[0] = 0.0F;
    rtDW.obj.pStates.Branch1[1] = 0.0F;
    rtDW.obj.pStates.Branch1[2] = 0.0F;
    rtDW.obj.pStates.Branch1[3] = 0.0F;
    rtDW.obj.pStates.Branch2[0] = 0.0F;
    rtDW.obj.pStates.Branch2[1] = 0.0F;
    rtDW.obj.pBranch2Carry = 0.0F;
  }
}

// Constructor
SmartTrackerFilterModelClass::SmartTrackerFilterModelClass()
{
}

// Destructor
SmartTrackerFilterModelClass::~SmartTrackerFilterModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL * SmartTrackerFilterModelClass::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
