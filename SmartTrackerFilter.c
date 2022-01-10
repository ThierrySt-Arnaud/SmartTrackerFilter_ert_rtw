/*
 * File: SmartTrackerFilter.c
 *
 * Code generated for Simulink model 'SmartTrackerFilter'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Jan 10 16:35:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Custom Processor->Custom
 * Emulation hardware selection:
 *    Differs from embedded hardware (Custom Processor->MATLAB Host Computer)
 * Code generation objective: Execution efficiency
 * Validation result: Passed (10), Warnings (2), Error (0)
 */

#include "SmartTrackerFilter.h"

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
void SmartTrackerFilter_step(RT_MODEL *const rtM, real32_T rtU_rawAccelIn[8],
  real32_T *rtY_speedOut, real32_T *rtY_gravOut)
{
  DW *rtDW = ((DW *) rtM->dwork);
  real32_T b_y1[2];
  real32_T b_Z1[2];
  real32_T y2[2];
  real32_T branch2Carry;
  real32_T rtb_gToMperS;
  real32_T tmp[2];
  real32_T rtb_Decimator100_0[2];
  real32_T tmp_0;
  real32_T c_x_idx_0;
  real32_T c_x_idx_2;

  /* Start for MATLABSystem: '<Root>/Decimator100' incorporates:
   *  Inport: '<Root>/rawAccelIn'
   *  Inport: '<Root>/rawAccelIn'
   */
  if (rtDW->obj_m.TunablePropsChanged) {
    rtDW->obj_m.TunablePropsChanged = false;
  }

  rtb_gToMperS = (rtU_rawAccelIn[0] - rtDW->obj_m.pStates.Branch1[1]) *
    rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs +
    rtDW->obj_m.pStates.Branch1[0];
  c_x_idx_0 = rtb_gToMperS;
  rtb_gToMperS = (rtU_rawAccelIn[2] - rtb_gToMperS) *
    rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtU_rawAccelIn[0];
  branch2Carry = rtb_gToMperS;
  rtb_gToMperS = (rtU_rawAccelIn[4] - rtb_gToMperS) *
    rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtU_rawAccelIn[2];
  c_x_idx_2 = rtb_gToMperS;
  rtb_gToMperS = (rtU_rawAccelIn[6] - rtb_gToMperS) *
    rtDW->obj_m.pBranchCoef1.FirstOrderSectionCoeffs + rtU_rawAccelIn[4];
  rtDW->obj_m.pStates.Branch1[0] = rtU_rawAccelIn[6];
  rtDW->obj_m.pStates.Branch1[1] = rtb_gToMperS;
  tmp_0 = rtDW->obj_m.pBranch2Carry;
  rtDW->obj_m.pBranch2Carry = rtU_rawAccelIn[7];

  /* Start for MATLABSystem: '<Root>/Decimator50' incorporates:
   *  Inport: '<Root>/rawAccelIn'
   *  Inport: '<Root>/rawAccelIn'
   *  MATLABSystem: '<Root>/Decimator100'
   *  MATLABSystem: '<Root>/Decimator100'
   */
  if (rtDW->obj_d.TunablePropsChanged) {
    rtDW->obj_d.TunablePropsChanged = false;
  }

  rtb_Decimator100_0[0] = (c_x_idx_0 + tmp_0) * 0.5F;
  rtb_Decimator100_0[1] = (c_x_idx_2 + rtU_rawAccelIn[3]) * 0.5F;
  AllpassMinMult_stepMinMultCasca(rtb_Decimator100_0,
    rtDW->obj_d.pStates.Branch1,
    rtDW->obj_d.pBranchCoef1.FirstOrderSectionCoeffs, b_y1, b_Z1);
  rtb_Decimator100_0[0] = (branch2Carry + rtU_rawAccelIn[1]) * 0.5F;
  tmp[0] = rtDW->obj_d.pStates.Branch2[0];
  rtDW->obj_d.pStates.Branch1[0] = b_Z1[0];
  rtb_Decimator100_0[1] = (rtb_gToMperS + rtU_rawAccelIn[5]) * 0.5F;
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
    rtDW->obj.pBranchCoef2.FirstOrderSectionCoeffs + rtDW->obj.pStates.Branch2[0];
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
  rtDW->DigitalFilter_FILT_STATES[1] = 1.00000763F * branch2Carry - 0.753310323F
    * c_x_idx_0;
  c_x_idx_0 = 2.0F * c_x_idx_0 + rtDW->DigitalFilter_FILT_STATES[2];
  rtDW->DigitalFilter_FILT_STATES[2] = rtDW->DigitalFilter_FILT_STATES[3] -
    0.0131777413F * c_x_idx_0;
  rtDW->DigitalFilter_FILT_STATES[3] = 0.0F - 0.00781916268F * c_x_idx_0;
  branch2Carry = 9.62967587F * c_x_idx_0;

  /* Outport: '<Root>/gravOut' incorporates:
   *  Sum: '<Root>/gravExtractor'
   */
  *rtY_gravOut = rtb_gToMperS - branch2Carry;

  /* Outport: '<Root>/speedOut' incorporates:
   *  DiscreteIntegrator: '<Root>/SpeedIntegrator'
   */
  *rtY_speedOut = rtDW->SpeedIntegrator_DSTATE;

  /* Update for DiscreteIntegrator: '<Root>/SpeedIntegrator' */
  rtDW->SpeedIntegrator_DSTATE += 0.005F * branch2Carry;
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
