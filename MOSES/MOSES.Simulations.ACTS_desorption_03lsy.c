/* Linear Systems */
#include "MOSES.Simulations.ACTS_desorption_model.h"
#include "MOSES.Simulations.ACTS_desorption_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 5659
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[20] = 0.120272355042726 * reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[20] * reactor.T_b[20] - reactor.pvap[20] * der(reactor.T_b[20])) / reactor.T_b[20] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5659};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */;
  data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[348] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */) - ((data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */) * (data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[20] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5660
type: SIMPLE_ASSIGN
$DER.reactor.psat[20] = 611.21 * $cse45 * der(reactor.T_b[20]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[20]) * 257.14 / (-16.00999999999999 + reactor.T_b[20]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[20]) / (-16.00999999999999 + reactor.T_b[20]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5660};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */;
  data->localData[0]->realVars[279] /* der(reactor.psat[20]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[446] /* $cse45 variable */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[20]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"-16.00999999999999 + reactor.T_b[20]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5661
type: SIMPLE_ASSIGN
$DER.reactor.particle[20].particle_Radu2017_085.sorbent.A = if reactor.pvap[20] >= reactor.psat[20] then 0.0 else (-8.31446261815324) * (reactor.T_b[20] * ($DER.reactor.pvap[20] * reactor.psat[20] - reactor.pvap[20] * $DER.reactor.psat[20]) / reactor.psat[20] ^ 2.0 * reactor.psat[20] / reactor.pvap[20] + der(reactor.T_b[20]) * log(reactor.pvap[20] / reactor.psat[20]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5661};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */, data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */, 0, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */,"reactor.psat[20]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[20] / reactor.psat[20]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */) * (data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */) - ((data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */) * (data->localData[0]->realVars[279] /* der(reactor.psat[20]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[20] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */),data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,"reactor.pvap[20]",equationIndexes)) + (data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[259] /* der(reactor.particle[20].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5662
type: SIMPLE_ASSIGN
reactor.qh3[20] = 1996.0 * reactor.M_v[20] * der(reactor.T_b[20]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5662};
  data->localData[0]->realVars[2346] /* reactor.qh3[20] variable */ = (1996.0) * ((data->localData[0]->realVars[754] /* reactor.M_v[20] DUMMY_STATE */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5663
type: SIMPLE_ASSIGN
reactor.qm2[20] = reactor.V_v[20] * der(reactor.gama_i[20]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5663};
  data->localData[0]->realVars[2506] /* reactor.qm2[20] variable */ = (data->localData[0]->realVars[952] /* reactor.V_v[20] DUMMY_STATE */) * ((data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5664
type: SIMPLE_ASSIGN
$DER.reactor.w[20] = reactor.w[20] * (-reactor.particle[20].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[20].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5664};
  data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */ = (data->localData[0]->realVars[2653] /* reactor.w[20] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[768] /* reactor.particle[20].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[259] /* der(reactor.particle[20].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5665
type: SIMPLE_ASSIGN
reactor.qm3[20] = reactor.gama_i[20] * reactor.V_b[20] * reactor.particle[20].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[20] * reactor.dN / reactor.particle[20].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5665};
  data->localData[0]->realVars[2526] /* reactor.qm3[20] variable */ = (data->localData[0]->realVars[59] /* reactor.gama_i[20] STATE(1) */) * ((data->localData[0]->realVars[927] /* reactor.V_b[20] variable */) * ((data->simulationInfo->realParameter[968] /* reactor.particle[20].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[568] /* reactor.particle[20].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[20].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5666
type: SIMPLE_ASSIGN
reactor.qm1[20] = reactor.M_a[20] * $DER.reactor.w[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5666};
  data->localData[0]->realVars[2486] /* reactor.qm1[20] variable */ = (data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5667
type: SIMPLE_ASSIGN
reactor.qh4[20] = (-reactor.M_a[20]) * $DER.reactor.w[20] * reactor.particle[20].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5667};
  data->localData[0]->realVars[2366] /* reactor.qh4[20] variable */ = ((-data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */)) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * ((data->simulationInfo->realParameter[708] /* reactor.particle[20].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5668
type: SIMPLE_ASSIGN
$DER.reactor.V_v[20] = reactor.V_b[20] * (-reactor.particle[20].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[20] / reactor.particle[20].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5668};
  data->localData[0]->realVars[219] /* der(reactor.V_v[20]) DUMMY_DER */ = (data->localData[0]->realVars[927] /* reactor.V_b[20] variable */) * (((-data->simulationInfo->realParameter[968] /* reactor.particle[20].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */,data->simulationInfo->realParameter[568] /* reactor.particle[20].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[20].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5669
type: SIMPLE_ASSIGN
$DER.reactor.M_v[20] = reactor.V_v[20] * der(reactor.gama_i[20]) + $DER.reactor.V_v[20] * reactor.gama_i[20]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5669};
  data->localData[0]->realVars[199] /* der(reactor.M_v[20]) DUMMY_DER */ = (data->localData[0]->realVars[952] /* reactor.V_v[20] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */) + (data->localData[0]->realVars[219] /* der(reactor.V_v[20]) DUMMY_DER */) * (data->localData[0]->realVars[59] /* reactor.gama_i[20] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5670
type: SIMPLE_ASSIGN
reactor.qh5[20] = reactor.h_vi[20] * $DER.reactor.M_v[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5670};
  data->localData[0]->realVars[2386] /* reactor.qh5[20] variable */ = (data->localData[0]->realVars[1141] /* reactor.h_vi[20] variable */) * ((data->localData[0]->realVars[199] /* der(reactor.M_v[20]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5671
type: SIMPLE_ASSIGN
reactor.qh2[20] = reactor.particle[20].particle_Radu2017_085.M_l * reactor.c_l[20] * der(reactor.T_b[20]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5671};
  data->localData[0]->realVars[2326] /* reactor.qh2[20] variable */ = (data->localData[0]->realVars[1486] /* reactor.particle[20].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1012] /* reactor.c_l[20] variable */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5672
type: SIMPLE_ASSIGN
reactor.qh1[20] = reactor.M_a[20] * reactor.particle[20].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[20]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5672};
  data->localData[0]->realVars[2246] /* reactor.qh1[20] variable */ = (data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */) * ((data->simulationInfo->realParameter[788] /* reactor.particle[20].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5691(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5691};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5659(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5660(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5661(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5662(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5663(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5664(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5665(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5666(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5667(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5668(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5669(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5670(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5671(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5672(data, threadData);
  res[0] = data->localData[0]->realVars[2586] /* reactor.qm6[20] variable */ + data->localData[0]->realVars[2566] /* reactor.qm5[20] variable */ + data->localData[0]->realVars[2546] /* reactor.qm4[20] variable */ + (-data->localData[0]->realVars[2506] /* reactor.qm2[20] variable */) - data->localData[0]->realVars[2486] /* reactor.qm1[20] variable */ - data->localData[0]->realVars[2526] /* reactor.qm3[20] variable */;

  res[1] = data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ + data->localData[0]->realVars[2286] /* reactor.qh11[20] variable */ + data->localData[0]->realVars[2266] /* reactor.qh10[20] variable */ + data->localData[0]->realVars[2466] /* reactor.qh9[20] variable */ + data->localData[0]->realVars[2446] /* reactor.qh8[20] variable */ + data->localData[0]->realVars[2426] /* reactor.qh7[20] variable */ + data->localData[0]->realVars[2406] /* reactor.qh6[20] variable */ + (-data->localData[0]->realVars[2326] /* reactor.qh2[20] variable */) - data->localData[0]->realVars[2246] /* reactor.qh1[20] variable */ - data->localData[0]->realVars[2346] /* reactor.qh3[20] variable */ - data->localData[0]->realVars[2366] /* reactor.qh4[20] variable */ - data->localData[0]->realVars[2386] /* reactor.qh5[20] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5691(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[20]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.max;
  /* static ls data for der(reactor.pvap[20]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.max;
}


/*
equation index: 5620
type: SIMPLE_ASSIGN
reactor.heatBoundary[20].Q = (reactor.T_b[20] - reactor.T_c[20]) / reactor.particle[20].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5620};
  data->localData[0]->realVars[1161] /* reactor.heatBoundary[20].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */ - data->localData[0]->realVars[900] /* reactor.T_c[20] variable */,data->localData[0]->realVars[1366] /* reactor.particle[20].contactResistance_SiuLee.Rss variable */,"reactor.particle[20].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5621
type: SIMPLE_ASSIGN
reactor.qh12[20] = reactor.U_t * reactor.dA * (reactor.T_h[20] - reactor.T_c[20])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5621};
  data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[39] /* reactor.T_h[20] STATE(1) */ - data->localData[0]->realVars[900] /* reactor.T_c[20] variable */));
  TRACE_POP
}

void residualFunc5626(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5626};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[900] /* reactor.T_c[20] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5620(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5621(data, threadData);
  res[0] = data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ + (data->localData[0]->realVars[1161] /* reactor.heatBoundary[20].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5626(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[20] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.max;
}


/*
equation index: 5553
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[19] = 0.120272355042726 * reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[19] * reactor.T_b[19] - reactor.pvap[19] * der(reactor.T_b[19])) / reactor.T_b[19] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5553};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */;
  data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[347] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */) - ((data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */) * (data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[19] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5554
type: SIMPLE_ASSIGN
$DER.reactor.psat[19] = 611.21 * $cse49 * der(reactor.T_b[19]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[19]) * 257.14 / (-16.00999999999999 + reactor.T_b[19]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[19]) / (-16.00999999999999 + reactor.T_b[19]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5554};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */;
  data->localData[0]->realVars[278] /* der(reactor.psat[19]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[462] /* $cse49 variable */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[19]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"-16.00999999999999 + reactor.T_b[19]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5555
type: SIMPLE_ASSIGN
$DER.reactor.particle[19].particle_Radu2017_085.sorbent.A = if reactor.pvap[19] >= reactor.psat[19] then 0.0 else (-8.31446261815324) * (reactor.T_b[19] * ($DER.reactor.pvap[19] * reactor.psat[19] - reactor.pvap[19] * $DER.reactor.psat[19]) / reactor.psat[19] ^ 2.0 * reactor.psat[19] / reactor.pvap[19] + der(reactor.T_b[19]) * log(reactor.pvap[19] / reactor.psat[19]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5555};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */, data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */, 1, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */,"reactor.psat[19]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[19] / reactor.psat[19]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */) * (data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */) - ((data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */) * (data->localData[0]->realVars[278] /* der(reactor.psat[19]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[19] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */),data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,"reactor.pvap[19]",equationIndexes)) + (data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[258] /* der(reactor.particle[19].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5556
type: SIMPLE_ASSIGN
reactor.qh3[19] = 1996.0 * reactor.M_v[19] * der(reactor.T_b[19]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5556};
  data->localData[0]->realVars[2345] /* reactor.qh3[19] variable */ = (1996.0) * ((data->localData[0]->realVars[753] /* reactor.M_v[19] DUMMY_STATE */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5557
type: SIMPLE_ASSIGN
reactor.qm2[19] = reactor.V_v[19] * der(reactor.gama_i[19]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5557};
  data->localData[0]->realVars[2505] /* reactor.qm2[19] variable */ = (data->localData[0]->realVars[951] /* reactor.V_v[19] DUMMY_STATE */) * ((data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5558
type: SIMPLE_ASSIGN
$DER.reactor.w[19] = reactor.w[19] * (-reactor.particle[19].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[19].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5558};
  data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */ = (data->localData[0]->realVars[2652] /* reactor.w[19] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[767] /* reactor.particle[19].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[258] /* der(reactor.particle[19].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5559
type: SIMPLE_ASSIGN
reactor.qm3[19] = reactor.gama_i[19] * reactor.V_b[19] * reactor.particle[19].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[19] * reactor.dN / reactor.particle[19].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5559};
  data->localData[0]->realVars[2525] /* reactor.qm3[19] variable */ = (data->localData[0]->realVars[58] /* reactor.gama_i[19] STATE(1) */) * ((data->localData[0]->realVars[926] /* reactor.V_b[19] variable */) * ((data->simulationInfo->realParameter[967] /* reactor.particle[19].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[567] /* reactor.particle[19].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[19].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5560
type: SIMPLE_ASSIGN
reactor.qm1[19] = reactor.M_a[19] * $DER.reactor.w[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5560};
  data->localData[0]->realVars[2485] /* reactor.qm1[19] variable */ = (data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5561
type: SIMPLE_ASSIGN
reactor.qh4[19] = (-reactor.M_a[19]) * $DER.reactor.w[19] * reactor.particle[19].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5561};
  data->localData[0]->realVars[2365] /* reactor.qh4[19] variable */ = ((-data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */)) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * ((data->simulationInfo->realParameter[707] /* reactor.particle[19].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5562
type: SIMPLE_ASSIGN
$DER.reactor.V_v[19] = reactor.V_b[19] * (-reactor.particle[19].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[19] / reactor.particle[19].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5562};
  data->localData[0]->realVars[218] /* der(reactor.V_v[19]) DUMMY_DER */ = (data->localData[0]->realVars[926] /* reactor.V_b[19] variable */) * (((-data->simulationInfo->realParameter[967] /* reactor.particle[19].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */,data->simulationInfo->realParameter[567] /* reactor.particle[19].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[19].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5563
type: SIMPLE_ASSIGN
$DER.reactor.M_v[19] = reactor.V_v[19] * der(reactor.gama_i[19]) + $DER.reactor.V_v[19] * reactor.gama_i[19]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5563};
  data->localData[0]->realVars[198] /* der(reactor.M_v[19]) DUMMY_DER */ = (data->localData[0]->realVars[951] /* reactor.V_v[19] DUMMY_STATE */) * (data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */) + (data->localData[0]->realVars[218] /* der(reactor.V_v[19]) DUMMY_DER */) * (data->localData[0]->realVars[58] /* reactor.gama_i[19] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5564
type: SIMPLE_ASSIGN
reactor.qh5[19] = reactor.h_vi[19] * $DER.reactor.M_v[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5564};
  data->localData[0]->realVars[2385] /* reactor.qh5[19] variable */ = (data->localData[0]->realVars[1140] /* reactor.h_vi[19] variable */) * ((data->localData[0]->realVars[198] /* der(reactor.M_v[19]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5565
type: SIMPLE_ASSIGN
reactor.qh2[19] = reactor.particle[19].particle_Radu2017_085.M_l * reactor.c_l[19] * der(reactor.T_b[19]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5565};
  data->localData[0]->realVars[2325] /* reactor.qh2[19] variable */ = (data->localData[0]->realVars[1485] /* reactor.particle[19].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1011] /* reactor.c_l[19] variable */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5566
type: SIMPLE_ASSIGN
reactor.qh1[19] = reactor.M_a[19] * reactor.particle[19].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[19]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5566};
  data->localData[0]->realVars[2245] /* reactor.qh1[19] variable */ = (data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */) * ((data->simulationInfo->realParameter[787] /* reactor.particle[19].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5585(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5585};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5553(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5554(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5555(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5556(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5557(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5558(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5559(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5560(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5561(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5562(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5563(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5564(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5565(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5566(data, threadData);
  res[0] = data->localData[0]->realVars[2585] /* reactor.qm6[19] variable */ + data->localData[0]->realVars[2565] /* reactor.qm5[19] variable */ + data->localData[0]->realVars[2545] /* reactor.qm4[19] variable */ + (-data->localData[0]->realVars[2505] /* reactor.qm2[19] variable */) - data->localData[0]->realVars[2485] /* reactor.qm1[19] variable */ - data->localData[0]->realVars[2525] /* reactor.qm3[19] variable */;

  res[1] = data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ + data->localData[0]->realVars[2285] /* reactor.qh11[19] variable */ + data->localData[0]->realVars[2265] /* reactor.qh10[19] variable */ + data->localData[0]->realVars[2465] /* reactor.qh9[19] variable */ + data->localData[0]->realVars[2445] /* reactor.qh8[19] variable */ + data->localData[0]->realVars[2425] /* reactor.qh7[19] variable */ + data->localData[0]->realVars[2405] /* reactor.qh6[19] variable */ + (-data->localData[0]->realVars[2325] /* reactor.qh2[19] variable */) - data->localData[0]->realVars[2245] /* reactor.qh1[19] variable */ - data->localData[0]->realVars[2345] /* reactor.qh3[19] variable */ - data->localData[0]->realVars[2365] /* reactor.qh4[19] variable */ - data->localData[0]->realVars[2385] /* reactor.qh5[19] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5585(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[19]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.max;
  /* static ls data for der(reactor.pvap[19]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.max;
}


/*
equation index: 5526
type: SIMPLE_ASSIGN
reactor.heatBoundary[19].Q = (reactor.T_b[19] - reactor.T_c[19]) / reactor.particle[19].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5526};
  data->localData[0]->realVars[1160] /* reactor.heatBoundary[19].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */ - data->localData[0]->realVars[899] /* reactor.T_c[19] variable */,data->localData[0]->realVars[1365] /* reactor.particle[19].contactResistance_SiuLee.Rss variable */,"reactor.particle[19].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5527
type: SIMPLE_ASSIGN
reactor.qh12[19] = reactor.U_t * reactor.dA * (reactor.T_h[19] - reactor.T_c[19])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5527};
  data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[38] /* reactor.T_h[19] STATE(1) */ - data->localData[0]->realVars[899] /* reactor.T_c[19] variable */));
  TRACE_POP
}

void residualFunc5532(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5532};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[899] /* reactor.T_c[19] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5526(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5527(data, threadData);
  res[0] = data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ + (data->localData[0]->realVars[1160] /* reactor.heatBoundary[19].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5532(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[19] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.max;
}


/*
equation index: 5464
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[18] = 0.120272355042726 * reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[18] * reactor.T_b[18] - reactor.pvap[18] * der(reactor.T_b[18])) / reactor.T_b[18] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5464};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */;
  data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[346] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */) - ((data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */) * (data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[18] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5465
type: SIMPLE_ASSIGN
$DER.reactor.psat[18] = 611.21 * $cse53 * der(reactor.T_b[18]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[18]) * 257.14 / (-16.00999999999999 + reactor.T_b[18]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[18]) / (-16.00999999999999 + reactor.T_b[18]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5465};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */;
  data->localData[0]->realVars[277] /* der(reactor.psat[18]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[478] /* $cse53 variable */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[18]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"-16.00999999999999 + reactor.T_b[18]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5466
type: SIMPLE_ASSIGN
$DER.reactor.particle[18].particle_Radu2017_085.sorbent.A = if reactor.pvap[18] >= reactor.psat[18] then 0.0 else (-8.31446261815324) * (reactor.T_b[18] * ($DER.reactor.pvap[18] * reactor.psat[18] - reactor.pvap[18] * $DER.reactor.psat[18]) / reactor.psat[18] ^ 2.0 * reactor.psat[18] / reactor.pvap[18] + der(reactor.T_b[18]) * log(reactor.pvap[18] / reactor.psat[18]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5466};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */, data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */, 2, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */,"reactor.psat[18]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[18] / reactor.psat[18]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */) * (data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */) - ((data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */) * (data->localData[0]->realVars[277] /* der(reactor.psat[18]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[18] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */),data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,"reactor.pvap[18]",equationIndexes)) + (data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[257] /* der(reactor.particle[18].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5467
type: SIMPLE_ASSIGN
reactor.qh3[18] = 1996.0 * reactor.M_v[18] * der(reactor.T_b[18]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5467};
  data->localData[0]->realVars[2344] /* reactor.qh3[18] variable */ = (1996.0) * ((data->localData[0]->realVars[752] /* reactor.M_v[18] DUMMY_STATE */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5468
type: SIMPLE_ASSIGN
reactor.qm2[18] = reactor.V_v[18] * der(reactor.gama_i[18]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5468};
  data->localData[0]->realVars[2504] /* reactor.qm2[18] variable */ = (data->localData[0]->realVars[950] /* reactor.V_v[18] DUMMY_STATE */) * ((data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5469
type: SIMPLE_ASSIGN
$DER.reactor.w[18] = reactor.w[18] * (-reactor.particle[18].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[18].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5469};
  data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */ = (data->localData[0]->realVars[2651] /* reactor.w[18] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[766] /* reactor.particle[18].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[257] /* der(reactor.particle[18].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5470
type: SIMPLE_ASSIGN
reactor.qm3[18] = reactor.gama_i[18] * reactor.V_b[18] * reactor.particle[18].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[18] * reactor.dN / reactor.particle[18].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5470};
  data->localData[0]->realVars[2524] /* reactor.qm3[18] variable */ = (data->localData[0]->realVars[57] /* reactor.gama_i[18] STATE(1) */) * ((data->localData[0]->realVars[925] /* reactor.V_b[18] variable */) * ((data->simulationInfo->realParameter[966] /* reactor.particle[18].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[566] /* reactor.particle[18].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[18].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5471
type: SIMPLE_ASSIGN
reactor.qh4[18] = (-reactor.M_a[18]) * $DER.reactor.w[18] * reactor.particle[18].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5471};
  data->localData[0]->realVars[2364] /* reactor.qh4[18] variable */ = ((-data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */)) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * ((data->simulationInfo->realParameter[706] /* reactor.particle[18].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5472
type: SIMPLE_ASSIGN
reactor.qm1[18] = reactor.M_a[18] * $DER.reactor.w[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5472};
  data->localData[0]->realVars[2484] /* reactor.qm1[18] variable */ = (data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5473
type: SIMPLE_ASSIGN
$DER.reactor.V_v[18] = reactor.V_b[18] * (-reactor.particle[18].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[18] / reactor.particle[18].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5473};
  data->localData[0]->realVars[217] /* der(reactor.V_v[18]) DUMMY_DER */ = (data->localData[0]->realVars[925] /* reactor.V_b[18] variable */) * (((-data->simulationInfo->realParameter[966] /* reactor.particle[18].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */,data->simulationInfo->realParameter[566] /* reactor.particle[18].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[18].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5474
type: SIMPLE_ASSIGN
$DER.reactor.M_v[18] = reactor.V_v[18] * der(reactor.gama_i[18]) + $DER.reactor.V_v[18] * reactor.gama_i[18]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5474};
  data->localData[0]->realVars[197] /* der(reactor.M_v[18]) DUMMY_DER */ = (data->localData[0]->realVars[950] /* reactor.V_v[18] DUMMY_STATE */) * (data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */) + (data->localData[0]->realVars[217] /* der(reactor.V_v[18]) DUMMY_DER */) * (data->localData[0]->realVars[57] /* reactor.gama_i[18] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5475
type: SIMPLE_ASSIGN
reactor.qh5[18] = reactor.h_vi[18] * $DER.reactor.M_v[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5475};
  data->localData[0]->realVars[2384] /* reactor.qh5[18] variable */ = (data->localData[0]->realVars[1139] /* reactor.h_vi[18] variable */) * ((data->localData[0]->realVars[197] /* der(reactor.M_v[18]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5476
type: SIMPLE_ASSIGN
reactor.qh2[18] = reactor.particle[18].particle_Radu2017_085.M_l * reactor.c_l[18] * der(reactor.T_b[18]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5476};
  data->localData[0]->realVars[2324] /* reactor.qh2[18] variable */ = (data->localData[0]->realVars[1484] /* reactor.particle[18].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1010] /* reactor.c_l[18] variable */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5477
type: SIMPLE_ASSIGN
reactor.qh1[18] = reactor.M_a[18] * reactor.particle[18].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[18]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5477};
  data->localData[0]->realVars[2244] /* reactor.qh1[18] variable */ = (data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */) * ((data->simulationInfo->realParameter[786] /* reactor.particle[18].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5496(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5496};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5464(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5465(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5466(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5467(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5468(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5469(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5470(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5471(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5472(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5473(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5474(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5475(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5476(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5477(data, threadData);
  res[0] = data->localData[0]->realVars[2584] /* reactor.qm6[18] variable */ + data->localData[0]->realVars[2564] /* reactor.qm5[18] variable */ + data->localData[0]->realVars[2544] /* reactor.qm4[18] variable */ + (-data->localData[0]->realVars[2504] /* reactor.qm2[18] variable */) - data->localData[0]->realVars[2484] /* reactor.qm1[18] variable */ - data->localData[0]->realVars[2524] /* reactor.qm3[18] variable */;

  res[1] = data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ + data->localData[0]->realVars[2284] /* reactor.qh11[18] variable */ + data->localData[0]->realVars[2264] /* reactor.qh10[18] variable */ + data->localData[0]->realVars[2464] /* reactor.qh9[18] variable */ + data->localData[0]->realVars[2444] /* reactor.qh8[18] variable */ + data->localData[0]->realVars[2424] /* reactor.qh7[18] variable */ + data->localData[0]->realVars[2404] /* reactor.qh6[18] variable */ + (-data->localData[0]->realVars[2324] /* reactor.qh2[18] variable */) - data->localData[0]->realVars[2244] /* reactor.qh1[18] variable */ - data->localData[0]->realVars[2344] /* reactor.qh3[18] variable */ - data->localData[0]->realVars[2364] /* reactor.qh4[18] variable */ - data->localData[0]->realVars[2384] /* reactor.qh5[18] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5496(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[18]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.max;
  /* static ls data for der(reactor.pvap[18]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.max;
}


/*
equation index: 5437
type: SIMPLE_ASSIGN
reactor.heatBoundary[18].Q = (reactor.T_b[18] - reactor.T_c[18]) / reactor.particle[18].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5437};
  data->localData[0]->realVars[1159] /* reactor.heatBoundary[18].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */ - data->localData[0]->realVars[898] /* reactor.T_c[18] variable */,data->localData[0]->realVars[1364] /* reactor.particle[18].contactResistance_SiuLee.Rss variable */,"reactor.particle[18].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5438
type: SIMPLE_ASSIGN
reactor.qh12[18] = reactor.U_t * reactor.dA * (reactor.T_h[18] - reactor.T_c[18])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5438};
  data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[37] /* reactor.T_h[18] STATE(1) */ - data->localData[0]->realVars[898] /* reactor.T_c[18] variable */));
  TRACE_POP
}

void residualFunc5443(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5443};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[898] /* reactor.T_c[18] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5437(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5438(data, threadData);
  res[0] = data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ + (data->localData[0]->realVars[1159] /* reactor.heatBoundary[18].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5443(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[18] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.max;
}


/*
equation index: 5375
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[17] = 0.120272355042726 * reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[17] * reactor.T_b[17] - reactor.pvap[17] * der(reactor.T_b[17])) / reactor.T_b[17] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5375};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */;
  data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[345] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */) - ((data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */) * (data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[17] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5376
type: SIMPLE_ASSIGN
$DER.reactor.psat[17] = 611.21 * $cse57 * der(reactor.T_b[17]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[17]) * 257.14 / (-16.00999999999999 + reactor.T_b[17]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[17]) / (-16.00999999999999 + reactor.T_b[17]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5376};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */;
  data->localData[0]->realVars[276] /* der(reactor.psat[17]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[494] /* $cse57 variable */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[17]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"-16.00999999999999 + reactor.T_b[17]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5377
type: SIMPLE_ASSIGN
$DER.reactor.particle[17].particle_Radu2017_085.sorbent.A = if reactor.pvap[17] >= reactor.psat[17] then 0.0 else (-8.31446261815324) * (reactor.T_b[17] * ($DER.reactor.pvap[17] * reactor.psat[17] - reactor.pvap[17] * $DER.reactor.psat[17]) / reactor.psat[17] ^ 2.0 * reactor.psat[17] / reactor.pvap[17] + der(reactor.T_b[17]) * log(reactor.pvap[17] / reactor.psat[17]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5377};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */, data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */, 3, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */,"reactor.psat[17]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[17] / reactor.psat[17]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */) * (data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */) - ((data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */) * (data->localData[0]->realVars[276] /* der(reactor.psat[17]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[17] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */),data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,"reactor.pvap[17]",equationIndexes)) + (data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[256] /* der(reactor.particle[17].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5378
type: SIMPLE_ASSIGN
reactor.qh3[17] = 1996.0 * reactor.M_v[17] * der(reactor.T_b[17]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5378};
  data->localData[0]->realVars[2343] /* reactor.qh3[17] variable */ = (1996.0) * ((data->localData[0]->realVars[751] /* reactor.M_v[17] DUMMY_STATE */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5379
type: SIMPLE_ASSIGN
reactor.qm2[17] = reactor.V_v[17] * der(reactor.gama_i[17]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5379};
  data->localData[0]->realVars[2503] /* reactor.qm2[17] variable */ = (data->localData[0]->realVars[949] /* reactor.V_v[17] DUMMY_STATE */) * ((data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5380
type: SIMPLE_ASSIGN
$DER.reactor.w[17] = reactor.w[17] * (-reactor.particle[17].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[17].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5380};
  data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */ = (data->localData[0]->realVars[2650] /* reactor.w[17] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[765] /* reactor.particle[17].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[256] /* der(reactor.particle[17].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5381
type: SIMPLE_ASSIGN
reactor.qm3[17] = reactor.gama_i[17] * reactor.V_b[17] * reactor.particle[17].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[17] * reactor.dN / reactor.particle[17].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5381};
  data->localData[0]->realVars[2523] /* reactor.qm3[17] variable */ = (data->localData[0]->realVars[56] /* reactor.gama_i[17] STATE(1) */) * ((data->localData[0]->realVars[924] /* reactor.V_b[17] variable */) * ((data->simulationInfo->realParameter[965] /* reactor.particle[17].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[565] /* reactor.particle[17].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[17].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5382
type: SIMPLE_ASSIGN
reactor.qm1[17] = reactor.M_a[17] * $DER.reactor.w[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5382};
  data->localData[0]->realVars[2483] /* reactor.qm1[17] variable */ = (data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5383
type: SIMPLE_ASSIGN
reactor.qh4[17] = (-reactor.M_a[17]) * $DER.reactor.w[17] * reactor.particle[17].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5383};
  data->localData[0]->realVars[2363] /* reactor.qh4[17] variable */ = ((-data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */)) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * ((data->simulationInfo->realParameter[705] /* reactor.particle[17].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5384
type: SIMPLE_ASSIGN
$DER.reactor.V_v[17] = reactor.V_b[17] * (-reactor.particle[17].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[17] / reactor.particle[17].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5384};
  data->localData[0]->realVars[216] /* der(reactor.V_v[17]) DUMMY_DER */ = (data->localData[0]->realVars[924] /* reactor.V_b[17] variable */) * (((-data->simulationInfo->realParameter[965] /* reactor.particle[17].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */,data->simulationInfo->realParameter[565] /* reactor.particle[17].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[17].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5385
type: SIMPLE_ASSIGN
$DER.reactor.M_v[17] = reactor.V_v[17] * der(reactor.gama_i[17]) + $DER.reactor.V_v[17] * reactor.gama_i[17]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5385};
  data->localData[0]->realVars[196] /* der(reactor.M_v[17]) DUMMY_DER */ = (data->localData[0]->realVars[949] /* reactor.V_v[17] DUMMY_STATE */) * (data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */) + (data->localData[0]->realVars[216] /* der(reactor.V_v[17]) DUMMY_DER */) * (data->localData[0]->realVars[56] /* reactor.gama_i[17] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5386
type: SIMPLE_ASSIGN
reactor.qh5[17] = reactor.h_vi[17] * $DER.reactor.M_v[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5386};
  data->localData[0]->realVars[2383] /* reactor.qh5[17] variable */ = (data->localData[0]->realVars[1138] /* reactor.h_vi[17] variable */) * ((data->localData[0]->realVars[196] /* der(reactor.M_v[17]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5387
type: SIMPLE_ASSIGN
reactor.qh2[17] = reactor.particle[17].particle_Radu2017_085.M_l * reactor.c_l[17] * der(reactor.T_b[17]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5387};
  data->localData[0]->realVars[2323] /* reactor.qh2[17] variable */ = (data->localData[0]->realVars[1483] /* reactor.particle[17].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1009] /* reactor.c_l[17] variable */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5388
type: SIMPLE_ASSIGN
reactor.qh1[17] = reactor.M_a[17] * reactor.particle[17].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[17]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5388};
  data->localData[0]->realVars[2243] /* reactor.qh1[17] variable */ = (data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */) * ((data->simulationInfo->realParameter[785] /* reactor.particle[17].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5407(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5407};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5375(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5376(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5377(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5378(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5379(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5380(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5381(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5382(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5383(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5384(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5385(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5386(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5387(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5388(data, threadData);
  res[0] = data->localData[0]->realVars[2583] /* reactor.qm6[17] variable */ + data->localData[0]->realVars[2563] /* reactor.qm5[17] variable */ + data->localData[0]->realVars[2543] /* reactor.qm4[17] variable */ + (-data->localData[0]->realVars[2503] /* reactor.qm2[17] variable */) - data->localData[0]->realVars[2483] /* reactor.qm1[17] variable */ - data->localData[0]->realVars[2523] /* reactor.qm3[17] variable */;

  res[1] = data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ + data->localData[0]->realVars[2283] /* reactor.qh11[17] variable */ + data->localData[0]->realVars[2263] /* reactor.qh10[17] variable */ + data->localData[0]->realVars[2463] /* reactor.qh9[17] variable */ + data->localData[0]->realVars[2443] /* reactor.qh8[17] variable */ + data->localData[0]->realVars[2423] /* reactor.qh7[17] variable */ + data->localData[0]->realVars[2403] /* reactor.qh6[17] variable */ + (-data->localData[0]->realVars[2323] /* reactor.qh2[17] variable */) - data->localData[0]->realVars[2243] /* reactor.qh1[17] variable */ - data->localData[0]->realVars[2343] /* reactor.qh3[17] variable */ - data->localData[0]->realVars[2363] /* reactor.qh4[17] variable */ - data->localData[0]->realVars[2383] /* reactor.qh5[17] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5407(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[17]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.max;
  /* static ls data for der(reactor.pvap[17]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.max;
}


/*
equation index: 5348
type: SIMPLE_ASSIGN
reactor.heatBoundary[17].Q = (reactor.T_b[17] - reactor.T_c[17]) / reactor.particle[17].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5348};
  data->localData[0]->realVars[1158] /* reactor.heatBoundary[17].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */ - data->localData[0]->realVars[897] /* reactor.T_c[17] variable */,data->localData[0]->realVars[1363] /* reactor.particle[17].contactResistance_SiuLee.Rss variable */,"reactor.particle[17].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5349
type: SIMPLE_ASSIGN
reactor.qh12[17] = reactor.U_t * reactor.dA * (reactor.T_h[17] - reactor.T_c[17])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5349};
  data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[36] /* reactor.T_h[17] STATE(1) */ - data->localData[0]->realVars[897] /* reactor.T_c[17] variable */));
  TRACE_POP
}

void residualFunc5354(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5354};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[897] /* reactor.T_c[17] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5348(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5349(data, threadData);
  res[0] = data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ + (data->localData[0]->realVars[1158] /* reactor.heatBoundary[17].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5354(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[17] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.max;
}


/*
equation index: 5286
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[16] = 0.120272355042726 * reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[16] * reactor.T_b[16] - reactor.pvap[16] * der(reactor.T_b[16])) / reactor.T_b[16] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5286};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */;
  data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[344] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */) - ((data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */) * (data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[16] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5287
type: SIMPLE_ASSIGN
$DER.reactor.psat[16] = 611.21 * $cse61 * der(reactor.T_b[16]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[16]) * 257.14 / (-16.00999999999999 + reactor.T_b[16]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[16]) / (-16.00999999999999 + reactor.T_b[16]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5287};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */;
  data->localData[0]->realVars[275] /* der(reactor.psat[16]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[510] /* $cse61 variable */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[16]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"-16.00999999999999 + reactor.T_b[16]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5288
type: SIMPLE_ASSIGN
$DER.reactor.particle[16].particle_Radu2017_085.sorbent.A = if reactor.pvap[16] >= reactor.psat[16] then 0.0 else (-8.31446261815324) * (reactor.T_b[16] * ($DER.reactor.pvap[16] * reactor.psat[16] - reactor.pvap[16] * $DER.reactor.psat[16]) / reactor.psat[16] ^ 2.0 * reactor.psat[16] / reactor.pvap[16] + der(reactor.T_b[16]) * log(reactor.pvap[16] / reactor.psat[16]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5288};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */, data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */, 4, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */,"reactor.psat[16]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[16] / reactor.psat[16]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */) * (data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */) - ((data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */) * (data->localData[0]->realVars[275] /* der(reactor.psat[16]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[16] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */),data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,"reactor.pvap[16]",equationIndexes)) + (data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[255] /* der(reactor.particle[16].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5289
type: SIMPLE_ASSIGN
reactor.qh3[16] = 1996.0 * reactor.M_v[16] * der(reactor.T_b[16]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5289};
  data->localData[0]->realVars[2342] /* reactor.qh3[16] variable */ = (1996.0) * ((data->localData[0]->realVars[750] /* reactor.M_v[16] DUMMY_STATE */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5290
type: SIMPLE_ASSIGN
reactor.qm2[16] = reactor.V_v[16] * der(reactor.gama_i[16]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5290};
  data->localData[0]->realVars[2502] /* reactor.qm2[16] variable */ = (data->localData[0]->realVars[948] /* reactor.V_v[16] DUMMY_STATE */) * ((data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5291
type: SIMPLE_ASSIGN
$DER.reactor.w[16] = reactor.w[16] * (-reactor.particle[16].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[16].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5291};
  data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */ = (data->localData[0]->realVars[2649] /* reactor.w[16] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[764] /* reactor.particle[16].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[255] /* der(reactor.particle[16].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5292
type: SIMPLE_ASSIGN
reactor.qm3[16] = reactor.gama_i[16] * reactor.V_b[16] * reactor.particle[16].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[16] * reactor.dN / reactor.particle[16].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5292};
  data->localData[0]->realVars[2522] /* reactor.qm3[16] variable */ = (data->localData[0]->realVars[55] /* reactor.gama_i[16] STATE(1) */) * ((data->localData[0]->realVars[923] /* reactor.V_b[16] variable */) * ((data->simulationInfo->realParameter[964] /* reactor.particle[16].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[564] /* reactor.particle[16].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[16].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5293
type: SIMPLE_ASSIGN
reactor.qh4[16] = (-reactor.M_a[16]) * $DER.reactor.w[16] * reactor.particle[16].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5293};
  data->localData[0]->realVars[2362] /* reactor.qh4[16] variable */ = ((-data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */)) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * ((data->simulationInfo->realParameter[704] /* reactor.particle[16].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5294
type: SIMPLE_ASSIGN
$DER.reactor.V_v[16] = reactor.V_b[16] * (-reactor.particle[16].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[16] / reactor.particle[16].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5294};
  data->localData[0]->realVars[215] /* der(reactor.V_v[16]) DUMMY_DER */ = (data->localData[0]->realVars[923] /* reactor.V_b[16] variable */) * (((-data->simulationInfo->realParameter[964] /* reactor.particle[16].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */,data->simulationInfo->realParameter[564] /* reactor.particle[16].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[16].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5295
type: SIMPLE_ASSIGN
$DER.reactor.M_v[16] = reactor.V_v[16] * der(reactor.gama_i[16]) + $DER.reactor.V_v[16] * reactor.gama_i[16]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5295};
  data->localData[0]->realVars[195] /* der(reactor.M_v[16]) DUMMY_DER */ = (data->localData[0]->realVars[948] /* reactor.V_v[16] DUMMY_STATE */) * (data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */) + (data->localData[0]->realVars[215] /* der(reactor.V_v[16]) DUMMY_DER */) * (data->localData[0]->realVars[55] /* reactor.gama_i[16] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5296
type: SIMPLE_ASSIGN
reactor.qh5[16] = reactor.h_vi[16] * $DER.reactor.M_v[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5296};
  data->localData[0]->realVars[2382] /* reactor.qh5[16] variable */ = (data->localData[0]->realVars[1137] /* reactor.h_vi[16] variable */) * ((data->localData[0]->realVars[195] /* der(reactor.M_v[16]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5297
type: SIMPLE_ASSIGN
reactor.qm1[16] = reactor.M_a[16] * $DER.reactor.w[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5297};
  data->localData[0]->realVars[2482] /* reactor.qm1[16] variable */ = (data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5298
type: SIMPLE_ASSIGN
reactor.qh2[16] = reactor.particle[16].particle_Radu2017_085.M_l * reactor.c_l[16] * der(reactor.T_b[16]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5298};
  data->localData[0]->realVars[2322] /* reactor.qh2[16] variable */ = (data->localData[0]->realVars[1482] /* reactor.particle[16].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1008] /* reactor.c_l[16] variable */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5299
type: SIMPLE_ASSIGN
reactor.qh1[16] = reactor.M_a[16] * reactor.particle[16].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[16]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5299};
  data->localData[0]->realVars[2242] /* reactor.qh1[16] variable */ = (data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */) * ((data->simulationInfo->realParameter[784] /* reactor.particle[16].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5318(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5318};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5286(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5287(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5288(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5289(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5290(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5291(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5292(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5293(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5294(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5295(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5296(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5297(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5298(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5299(data, threadData);
  res[0] = data->localData[0]->realVars[2582] /* reactor.qm6[16] variable */ + data->localData[0]->realVars[2562] /* reactor.qm5[16] variable */ + data->localData[0]->realVars[2542] /* reactor.qm4[16] variable */ + (-data->localData[0]->realVars[2502] /* reactor.qm2[16] variable */) - data->localData[0]->realVars[2482] /* reactor.qm1[16] variable */ - data->localData[0]->realVars[2522] /* reactor.qm3[16] variable */;

  res[1] = data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ + data->localData[0]->realVars[2282] /* reactor.qh11[16] variable */ + data->localData[0]->realVars[2262] /* reactor.qh10[16] variable */ + data->localData[0]->realVars[2462] /* reactor.qh9[16] variable */ + data->localData[0]->realVars[2442] /* reactor.qh8[16] variable */ + data->localData[0]->realVars[2422] /* reactor.qh7[16] variable */ + data->localData[0]->realVars[2402] /* reactor.qh6[16] variable */ + (-data->localData[0]->realVars[2322] /* reactor.qh2[16] variable */) - data->localData[0]->realVars[2242] /* reactor.qh1[16] variable */ - data->localData[0]->realVars[2342] /* reactor.qh3[16] variable */ - data->localData[0]->realVars[2362] /* reactor.qh4[16] variable */ - data->localData[0]->realVars[2382] /* reactor.qh5[16] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5318(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[16]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.max;
  /* static ls data for der(reactor.pvap[16]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.max;
}


/*
equation index: 5259
type: SIMPLE_ASSIGN
reactor.heatBoundary[16].Q = (reactor.T_b[16] - reactor.T_c[16]) / reactor.particle[16].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5259};
  data->localData[0]->realVars[1157] /* reactor.heatBoundary[16].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */ - data->localData[0]->realVars[896] /* reactor.T_c[16] variable */,data->localData[0]->realVars[1362] /* reactor.particle[16].contactResistance_SiuLee.Rss variable */,"reactor.particle[16].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5260
type: SIMPLE_ASSIGN
reactor.qh12[16] = reactor.U_t * reactor.dA * (reactor.T_h[16] - reactor.T_c[16])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5260};
  data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[35] /* reactor.T_h[16] STATE(1) */ - data->localData[0]->realVars[896] /* reactor.T_c[16] variable */));
  TRACE_POP
}

void residualFunc5265(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5265};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[896] /* reactor.T_c[16] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5259(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5260(data, threadData);
  res[0] = data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ + (data->localData[0]->realVars[1157] /* reactor.heatBoundary[16].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5265(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[16] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.max;
}


/*
equation index: 5197
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[15] = 0.120272355042726 * reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[15] * reactor.T_b[15] - reactor.pvap[15] * der(reactor.T_b[15])) / reactor.T_b[15] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5197};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */;
  data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[343] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */) - ((data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */) * (data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[15] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5198
type: SIMPLE_ASSIGN
$DER.reactor.psat[15] = 611.21 * $cse65 * der(reactor.T_b[15]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[15]) * 257.14 / (-16.00999999999999 + reactor.T_b[15]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[15]) / (-16.00999999999999 + reactor.T_b[15]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5198};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */;
  data->localData[0]->realVars[274] /* der(reactor.psat[15]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[526] /* $cse65 variable */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[15]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"-16.00999999999999 + reactor.T_b[15]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5199
type: SIMPLE_ASSIGN
$DER.reactor.particle[15].particle_Radu2017_085.sorbent.A = if reactor.pvap[15] >= reactor.psat[15] then 0.0 else (-8.31446261815324) * (reactor.T_b[15] * ($DER.reactor.pvap[15] * reactor.psat[15] - reactor.pvap[15] * $DER.reactor.psat[15]) / reactor.psat[15] ^ 2.0 * reactor.psat[15] / reactor.pvap[15] + der(reactor.T_b[15]) * log(reactor.pvap[15] / reactor.psat[15]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5199};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */, data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */, 5, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */,"reactor.psat[15]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[15] / reactor.psat[15]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */) * (data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */) - ((data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */) * (data->localData[0]->realVars[274] /* der(reactor.psat[15]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[15] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */),data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,"reactor.pvap[15]",equationIndexes)) + (data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[254] /* der(reactor.particle[15].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5200
type: SIMPLE_ASSIGN
$DER.reactor.w[15] = reactor.w[15] * (-reactor.particle[15].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[15].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5200};
  data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */ = (data->localData[0]->realVars[2648] /* reactor.w[15] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[763] /* reactor.particle[15].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[254] /* der(reactor.particle[15].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5201
type: SIMPLE_ASSIGN
reactor.qm3[15] = reactor.gama_i[15] * reactor.V_b[15] * reactor.particle[15].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[15] * reactor.dN / reactor.particle[15].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5201};
  data->localData[0]->realVars[2521] /* reactor.qm3[15] variable */ = (data->localData[0]->realVars[54] /* reactor.gama_i[15] STATE(1) */) * ((data->localData[0]->realVars[922] /* reactor.V_b[15] variable */) * ((data->simulationInfo->realParameter[963] /* reactor.particle[15].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[563] /* reactor.particle[15].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[15].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5202
type: SIMPLE_ASSIGN
reactor.qm2[15] = reactor.V_v[15] * der(reactor.gama_i[15]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5202};
  data->localData[0]->realVars[2501] /* reactor.qm2[15] variable */ = (data->localData[0]->realVars[947] /* reactor.V_v[15] DUMMY_STATE */) * ((data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5203
type: SIMPLE_ASSIGN
reactor.qh1[15] = reactor.M_a[15] * reactor.particle[15].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[15]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5203};
  data->localData[0]->realVars[2241] /* reactor.qh1[15] variable */ = (data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */) * ((data->simulationInfo->realParameter[783] /* reactor.particle[15].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5204
type: SIMPLE_ASSIGN
reactor.qh3[15] = 1996.0 * reactor.M_v[15] * der(reactor.T_b[15]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5204};
  data->localData[0]->realVars[2341] /* reactor.qh3[15] variable */ = (1996.0) * ((data->localData[0]->realVars[749] /* reactor.M_v[15] DUMMY_STATE */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5205
type: SIMPLE_ASSIGN
reactor.qh2[15] = reactor.particle[15].particle_Radu2017_085.M_l * reactor.c_l[15] * der(reactor.T_b[15]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5205};
  data->localData[0]->realVars[2321] /* reactor.qh2[15] variable */ = (data->localData[0]->realVars[1481] /* reactor.particle[15].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1007] /* reactor.c_l[15] variable */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5206
type: SIMPLE_ASSIGN
reactor.qh4[15] = (-reactor.M_a[15]) * $DER.reactor.w[15] * reactor.particle[15].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5206};
  data->localData[0]->realVars[2361] /* reactor.qh4[15] variable */ = ((-data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */)) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * ((data->simulationInfo->realParameter[703] /* reactor.particle[15].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5207
type: SIMPLE_ASSIGN
$DER.reactor.V_v[15] = reactor.V_b[15] * (-reactor.particle[15].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[15] / reactor.particle[15].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5207};
  data->localData[0]->realVars[214] /* der(reactor.V_v[15]) DUMMY_DER */ = (data->localData[0]->realVars[922] /* reactor.V_b[15] variable */) * (((-data->simulationInfo->realParameter[963] /* reactor.particle[15].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */,data->simulationInfo->realParameter[563] /* reactor.particle[15].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[15].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5208
type: SIMPLE_ASSIGN
$DER.reactor.M_v[15] = reactor.V_v[15] * der(reactor.gama_i[15]) + $DER.reactor.V_v[15] * reactor.gama_i[15]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5208};
  data->localData[0]->realVars[194] /* der(reactor.M_v[15]) DUMMY_DER */ = (data->localData[0]->realVars[947] /* reactor.V_v[15] DUMMY_STATE */) * (data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */) + (data->localData[0]->realVars[214] /* der(reactor.V_v[15]) DUMMY_DER */) * (data->localData[0]->realVars[54] /* reactor.gama_i[15] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5209
type: SIMPLE_ASSIGN
reactor.qh5[15] = reactor.h_vi[15] * $DER.reactor.M_v[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5209};
  data->localData[0]->realVars[2381] /* reactor.qh5[15] variable */ = (data->localData[0]->realVars[1136] /* reactor.h_vi[15] variable */) * ((data->localData[0]->realVars[194] /* der(reactor.M_v[15]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5210
type: SIMPLE_ASSIGN
reactor.qm1[15] = reactor.M_a[15] * $DER.reactor.w[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5210};
  data->localData[0]->realVars[2481] /* reactor.qm1[15] variable */ = (data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc5229(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5229};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5197(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5198(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5199(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5200(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5201(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5202(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5203(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5204(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5205(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5206(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5207(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5208(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5209(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5210(data, threadData);
  res[0] = data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ + data->localData[0]->realVars[2281] /* reactor.qh11[15] variable */ + data->localData[0]->realVars[2261] /* reactor.qh10[15] variable */ + data->localData[0]->realVars[2461] /* reactor.qh9[15] variable */ + data->localData[0]->realVars[2441] /* reactor.qh8[15] variable */ + data->localData[0]->realVars[2421] /* reactor.qh7[15] variable */ + data->localData[0]->realVars[2401] /* reactor.qh6[15] variable */ + (-data->localData[0]->realVars[2321] /* reactor.qh2[15] variable */) - data->localData[0]->realVars[2241] /* reactor.qh1[15] variable */ - data->localData[0]->realVars[2341] /* reactor.qh3[15] variable */ - data->localData[0]->realVars[2361] /* reactor.qh4[15] variable */ - data->localData[0]->realVars[2381] /* reactor.qh5[15] variable */;

  res[1] = data->localData[0]->realVars[2581] /* reactor.qm6[15] variable */ + data->localData[0]->realVars[2561] /* reactor.qm5[15] variable */ + data->localData[0]->realVars[2541] /* reactor.qm4[15] variable */ + (-data->localData[0]->realVars[2501] /* reactor.qm2[15] variable */) - data->localData[0]->realVars[2481] /* reactor.qm1[15] variable */ - data->localData[0]->realVars[2521] /* reactor.qm3[15] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5229(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[15]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.max;
  /* static ls data for der(reactor.T_b[15]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.max;
}


/*
equation index: 5170
type: SIMPLE_ASSIGN
reactor.heatBoundary[15].Q = (reactor.T_b[15] - reactor.T_c[15]) / reactor.particle[15].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5170};
  data->localData[0]->realVars[1156] /* reactor.heatBoundary[15].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */ - data->localData[0]->realVars[895] /* reactor.T_c[15] variable */,data->localData[0]->realVars[1361] /* reactor.particle[15].contactResistance_SiuLee.Rss variable */,"reactor.particle[15].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5171
type: SIMPLE_ASSIGN
reactor.qh12[15] = reactor.U_t * reactor.dA * (reactor.T_h[15] - reactor.T_c[15])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5171};
  data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[34] /* reactor.T_h[15] STATE(1) */ - data->localData[0]->realVars[895] /* reactor.T_c[15] variable */));
  TRACE_POP
}

void residualFunc5176(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5176};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[895] /* reactor.T_c[15] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5170(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5171(data, threadData);
  res[0] = data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ + (data->localData[0]->realVars[1156] /* reactor.heatBoundary[15].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5176(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[15] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.max;
}


/*
equation index: 5108
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[14] = 0.120272355042726 * reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[14] * reactor.T_b[14] - reactor.pvap[14] * der(reactor.T_b[14])) / reactor.T_b[14] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5108};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */;
  data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[342] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */) - ((data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */) * (data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[14] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5109
type: SIMPLE_ASSIGN
$DER.reactor.psat[14] = 611.21 * $cse69 * der(reactor.T_b[14]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[14]) * 257.14 / (-16.00999999999999 + reactor.T_b[14]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[14]) / (-16.00999999999999 + reactor.T_b[14]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5109};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */;
  data->localData[0]->realVars[273] /* der(reactor.psat[14]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[542] /* $cse69 variable */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[14]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"-16.00999999999999 + reactor.T_b[14]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5110
type: SIMPLE_ASSIGN
$DER.reactor.particle[14].particle_Radu2017_085.sorbent.A = if reactor.pvap[14] >= reactor.psat[14] then 0.0 else (-8.31446261815324) * (reactor.T_b[14] * ($DER.reactor.pvap[14] * reactor.psat[14] - reactor.pvap[14] * $DER.reactor.psat[14]) / reactor.psat[14] ^ 2.0 * reactor.psat[14] / reactor.pvap[14] + der(reactor.T_b[14]) * log(reactor.pvap[14] / reactor.psat[14]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5110};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */, data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */, 6, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */,"reactor.psat[14]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[14] / reactor.psat[14]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */) * (data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */) - ((data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */) * (data->localData[0]->realVars[273] /* der(reactor.psat[14]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[14] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */),data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,"reactor.pvap[14]",equationIndexes)) + (data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[253] /* der(reactor.particle[14].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5111
type: SIMPLE_ASSIGN
$DER.reactor.w[14] = reactor.w[14] * (-reactor.particle[14].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[14].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5111};
  data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */ = (data->localData[0]->realVars[2647] /* reactor.w[14] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[762] /* reactor.particle[14].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[253] /* der(reactor.particle[14].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5112
type: SIMPLE_ASSIGN
reactor.qm3[14] = reactor.gama_i[14] * reactor.V_b[14] * reactor.particle[14].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[14] * reactor.dN / reactor.particle[14].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5112};
  data->localData[0]->realVars[2520] /* reactor.qm3[14] variable */ = (data->localData[0]->realVars[53] /* reactor.gama_i[14] STATE(1) */) * ((data->localData[0]->realVars[921] /* reactor.V_b[14] variable */) * ((data->simulationInfo->realParameter[962] /* reactor.particle[14].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[562] /* reactor.particle[14].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[14].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5113
type: SIMPLE_ASSIGN
reactor.qm2[14] = reactor.V_v[14] * der(reactor.gama_i[14]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5113};
  data->localData[0]->realVars[2500] /* reactor.qm2[14] variable */ = (data->localData[0]->realVars[946] /* reactor.V_v[14] DUMMY_STATE */) * ((data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5114
type: SIMPLE_ASSIGN
reactor.qh1[14] = reactor.M_a[14] * reactor.particle[14].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[14]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5114};
  data->localData[0]->realVars[2240] /* reactor.qh1[14] variable */ = (data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */) * ((data->simulationInfo->realParameter[782] /* reactor.particle[14].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5115
type: SIMPLE_ASSIGN
reactor.qh3[14] = 1996.0 * reactor.M_v[14] * der(reactor.T_b[14]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5115};
  data->localData[0]->realVars[2340] /* reactor.qh3[14] variable */ = (1996.0) * ((data->localData[0]->realVars[748] /* reactor.M_v[14] DUMMY_STATE */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5116
type: SIMPLE_ASSIGN
reactor.qh2[14] = reactor.particle[14].particle_Radu2017_085.M_l * reactor.c_l[14] * der(reactor.T_b[14]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5116};
  data->localData[0]->realVars[2320] /* reactor.qh2[14] variable */ = (data->localData[0]->realVars[1480] /* reactor.particle[14].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1006] /* reactor.c_l[14] variable */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5117
type: SIMPLE_ASSIGN
reactor.qm1[14] = reactor.M_a[14] * $DER.reactor.w[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5117};
  data->localData[0]->realVars[2480] /* reactor.qm1[14] variable */ = (data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5118
type: SIMPLE_ASSIGN
reactor.qh4[14] = (-reactor.M_a[14]) * $DER.reactor.w[14] * reactor.particle[14].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5118};
  data->localData[0]->realVars[2360] /* reactor.qh4[14] variable */ = ((-data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */)) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * ((data->simulationInfo->realParameter[702] /* reactor.particle[14].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5119
type: SIMPLE_ASSIGN
$DER.reactor.V_v[14] = reactor.V_b[14] * (-reactor.particle[14].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[14] / reactor.particle[14].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5119};
  data->localData[0]->realVars[213] /* der(reactor.V_v[14]) DUMMY_DER */ = (data->localData[0]->realVars[921] /* reactor.V_b[14] variable */) * (((-data->simulationInfo->realParameter[962] /* reactor.particle[14].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */,data->simulationInfo->realParameter[562] /* reactor.particle[14].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[14].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5120
type: SIMPLE_ASSIGN
$DER.reactor.M_v[14] = reactor.V_v[14] * der(reactor.gama_i[14]) + $DER.reactor.V_v[14] * reactor.gama_i[14]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5120};
  data->localData[0]->realVars[193] /* der(reactor.M_v[14]) DUMMY_DER */ = (data->localData[0]->realVars[946] /* reactor.V_v[14] DUMMY_STATE */) * (data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */) + (data->localData[0]->realVars[213] /* der(reactor.V_v[14]) DUMMY_DER */) * (data->localData[0]->realVars[53] /* reactor.gama_i[14] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5121
type: SIMPLE_ASSIGN
reactor.qh5[14] = reactor.h_vi[14] * $DER.reactor.M_v[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5121};
  data->localData[0]->realVars[2380] /* reactor.qh5[14] variable */ = (data->localData[0]->realVars[1135] /* reactor.h_vi[14] variable */) * ((data->localData[0]->realVars[193] /* der(reactor.M_v[14]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc5140(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5140};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5108(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5109(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5110(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5111(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5112(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5113(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5114(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5115(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5116(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5117(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5118(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5119(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5120(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5121(data, threadData);
  res[0] = data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ + data->localData[0]->realVars[2280] /* reactor.qh11[14] variable */ + data->localData[0]->realVars[2260] /* reactor.qh10[14] variable */ + data->localData[0]->realVars[2460] /* reactor.qh9[14] variable */ + data->localData[0]->realVars[2440] /* reactor.qh8[14] variable */ + data->localData[0]->realVars[2420] /* reactor.qh7[14] variable */ + data->localData[0]->realVars[2400] /* reactor.qh6[14] variable */ + (-data->localData[0]->realVars[2320] /* reactor.qh2[14] variable */) - data->localData[0]->realVars[2240] /* reactor.qh1[14] variable */ - data->localData[0]->realVars[2340] /* reactor.qh3[14] variable */ - data->localData[0]->realVars[2360] /* reactor.qh4[14] variable */ - data->localData[0]->realVars[2380] /* reactor.qh5[14] variable */;

  res[1] = data->localData[0]->realVars[2580] /* reactor.qm6[14] variable */ + data->localData[0]->realVars[2560] /* reactor.qm5[14] variable */ + data->localData[0]->realVars[2540] /* reactor.qm4[14] variable */ + (-data->localData[0]->realVars[2500] /* reactor.qm2[14] variable */) - data->localData[0]->realVars[2480] /* reactor.qm1[14] variable */ - data->localData[0]->realVars[2520] /* reactor.qm3[14] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5140(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[14]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.max;
  /* static ls data for der(reactor.T_b[14]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.max;
}


/*
equation index: 5081
type: SIMPLE_ASSIGN
reactor.heatBoundary[14].Q = (reactor.T_b[14] - reactor.T_c[14]) / reactor.particle[14].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5081};
  data->localData[0]->realVars[1155] /* reactor.heatBoundary[14].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */ - data->localData[0]->realVars[894] /* reactor.T_c[14] variable */,data->localData[0]->realVars[1360] /* reactor.particle[14].contactResistance_SiuLee.Rss variable */,"reactor.particle[14].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 5082
type: SIMPLE_ASSIGN
reactor.qh12[14] = reactor.U_t * reactor.dA * (reactor.T_h[14] - reactor.T_c[14])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5082};
  data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[33] /* reactor.T_h[14] STATE(1) */ - data->localData[0]->realVars[894] /* reactor.T_c[14] variable */));
  TRACE_POP
}

void residualFunc5087(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5087};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[894] /* reactor.T_c[14] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5081(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5082(data, threadData);
  res[0] = data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ + (data->localData[0]->realVars[1155] /* reactor.heatBoundary[14].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5087(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[14] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.max;
}


/*
equation index: 5019
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[13] = 0.120272355042726 * reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[13] * reactor.T_b[13] - reactor.pvap[13] * der(reactor.T_b[13])) / reactor.T_b[13] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5019};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */;
  data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[341] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */) - ((data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */) * (data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[13] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5020
type: SIMPLE_ASSIGN
$DER.reactor.psat[13] = 611.21 * $cse73 * der(reactor.T_b[13]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[13]) * 257.14 / (-16.00999999999999 + reactor.T_b[13]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[13]) / (-16.00999999999999 + reactor.T_b[13]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5020};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */;
  data->localData[0]->realVars[272] /* der(reactor.psat[13]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[558] /* $cse73 variable */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[13]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"-16.00999999999999 + reactor.T_b[13]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5021
type: SIMPLE_ASSIGN
$DER.reactor.particle[13].particle_Radu2017_085.sorbent.A = if reactor.pvap[13] >= reactor.psat[13] then 0.0 else (-8.31446261815324) * (reactor.T_b[13] * ($DER.reactor.pvap[13] * reactor.psat[13] - reactor.pvap[13] * $DER.reactor.psat[13]) / reactor.psat[13] ^ 2.0 * reactor.psat[13] / reactor.pvap[13] + der(reactor.T_b[13]) * log(reactor.pvap[13] / reactor.psat[13]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5021};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */, data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */, 7, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */,"reactor.psat[13]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[13] / reactor.psat[13]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */) * (data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */) - ((data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */) * (data->localData[0]->realVars[272] /* der(reactor.psat[13]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[13] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */),data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,"reactor.pvap[13]",equationIndexes)) + (data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[252] /* der(reactor.particle[13].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 5022
type: SIMPLE_ASSIGN
reactor.qh3[13] = 1996.0 * reactor.M_v[13] * der(reactor.T_b[13]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5022};
  data->localData[0]->realVars[2339] /* reactor.qh3[13] variable */ = (1996.0) * ((data->localData[0]->realVars[747] /* reactor.M_v[13] DUMMY_STATE */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5023
type: SIMPLE_ASSIGN
reactor.qm2[13] = reactor.V_v[13] * der(reactor.gama_i[13]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5023};
  data->localData[0]->realVars[2499] /* reactor.qm2[13] variable */ = (data->localData[0]->realVars[945] /* reactor.V_v[13] DUMMY_STATE */) * ((data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5024
type: SIMPLE_ASSIGN
$DER.reactor.w[13] = reactor.w[13] * (-reactor.particle[13].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[13].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5024};
  data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */ = (data->localData[0]->realVars[2646] /* reactor.w[13] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[761] /* reactor.particle[13].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[252] /* der(reactor.particle[13].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 5025
type: SIMPLE_ASSIGN
reactor.qm3[13] = reactor.gama_i[13] * reactor.V_b[13] * reactor.particle[13].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[13] * reactor.dN / reactor.particle[13].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5025};
  data->localData[0]->realVars[2519] /* reactor.qm3[13] variable */ = (data->localData[0]->realVars[52] /* reactor.gama_i[13] STATE(1) */) * ((data->localData[0]->realVars[920] /* reactor.V_b[13] variable */) * ((data->simulationInfo->realParameter[961] /* reactor.particle[13].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[561] /* reactor.particle[13].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[13].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 5026
type: SIMPLE_ASSIGN
reactor.qh4[13] = (-reactor.M_a[13]) * $DER.reactor.w[13] * reactor.particle[13].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5026};
  data->localData[0]->realVars[2359] /* reactor.qh4[13] variable */ = ((-data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */)) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * ((data->simulationInfo->realParameter[701] /* reactor.particle[13].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5027
type: SIMPLE_ASSIGN
$DER.reactor.V_v[13] = reactor.V_b[13] * (-reactor.particle[13].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[13] / reactor.particle[13].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5027};
  data->localData[0]->realVars[212] /* der(reactor.V_v[13]) DUMMY_DER */ = (data->localData[0]->realVars[920] /* reactor.V_b[13] variable */) * (((-data->simulationInfo->realParameter[961] /* reactor.particle[13].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */,data->simulationInfo->realParameter[561] /* reactor.particle[13].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[13].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 5028
type: SIMPLE_ASSIGN
$DER.reactor.M_v[13] = reactor.V_v[13] * der(reactor.gama_i[13]) + $DER.reactor.V_v[13] * reactor.gama_i[13]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5028};
  data->localData[0]->realVars[192] /* der(reactor.M_v[13]) DUMMY_DER */ = (data->localData[0]->realVars[945] /* reactor.V_v[13] DUMMY_STATE */) * (data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */) + (data->localData[0]->realVars[212] /* der(reactor.V_v[13]) DUMMY_DER */) * (data->localData[0]->realVars[52] /* reactor.gama_i[13] STATE(1) */);
  TRACE_POP
}
/*
equation index: 5029
type: SIMPLE_ASSIGN
reactor.qh5[13] = reactor.h_vi[13] * $DER.reactor.M_v[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5029};
  data->localData[0]->realVars[2379] /* reactor.qh5[13] variable */ = (data->localData[0]->realVars[1134] /* reactor.h_vi[13] variable */) * ((data->localData[0]->realVars[192] /* der(reactor.M_v[13]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5030
type: SIMPLE_ASSIGN
reactor.qm1[13] = reactor.M_a[13] * $DER.reactor.w[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5030};
  data->localData[0]->realVars[2479] /* reactor.qm1[13] variable */ = (data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 5031
type: SIMPLE_ASSIGN
reactor.qh2[13] = reactor.particle[13].particle_Radu2017_085.M_l * reactor.c_l[13] * der(reactor.T_b[13]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5031};
  data->localData[0]->realVars[2319] /* reactor.qh2[13] variable */ = (data->localData[0]->realVars[1479] /* reactor.particle[13].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1005] /* reactor.c_l[13] variable */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 5032
type: SIMPLE_ASSIGN
reactor.qh1[13] = reactor.M_a[13] * reactor.particle[13].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[13]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5032};
  data->localData[0]->realVars[2239] /* reactor.qh1[13] variable */ = (data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */) * ((data->simulationInfo->realParameter[781] /* reactor.particle[13].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc5051(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,5051};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5019(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5020(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5021(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5022(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5023(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5024(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5025(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5026(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5027(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5028(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5029(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5030(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5031(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_5032(data, threadData);
  res[0] = data->localData[0]->realVars[2579] /* reactor.qm6[13] variable */ + data->localData[0]->realVars[2559] /* reactor.qm5[13] variable */ + data->localData[0]->realVars[2539] /* reactor.qm4[13] variable */ + (-data->localData[0]->realVars[2499] /* reactor.qm2[13] variable */) - data->localData[0]->realVars[2479] /* reactor.qm1[13] variable */ - data->localData[0]->realVars[2519] /* reactor.qm3[13] variable */;

  res[1] = data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ + data->localData[0]->realVars[2279] /* reactor.qh11[13] variable */ + data->localData[0]->realVars[2259] /* reactor.qh10[13] variable */ + data->localData[0]->realVars[2459] /* reactor.qh9[13] variable */ + data->localData[0]->realVars[2439] /* reactor.qh8[13] variable */ + data->localData[0]->realVars[2419] /* reactor.qh7[13] variable */ + data->localData[0]->realVars[2399] /* reactor.qh6[13] variable */ + (-data->localData[0]->realVars[2319] /* reactor.qh2[13] variable */) - data->localData[0]->realVars[2239] /* reactor.qh1[13] variable */ - data->localData[0]->realVars[2339] /* reactor.qh3[13] variable */ - data->localData[0]->realVars[2359] /* reactor.qh4[13] variable */ - data->localData[0]->realVars[2379] /* reactor.qh5[13] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData5051(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[13]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.max;
  /* static ls data for der(reactor.T_b[13]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.max;
}


/*
equation index: 4992
type: SIMPLE_ASSIGN
reactor.heatBoundary[13].Q = (reactor.T_b[13] - reactor.T_c[13]) / reactor.particle[13].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4992};
  data->localData[0]->realVars[1154] /* reactor.heatBoundary[13].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */ - data->localData[0]->realVars[893] /* reactor.T_c[13] variable */,data->localData[0]->realVars[1359] /* reactor.particle[13].contactResistance_SiuLee.Rss variable */,"reactor.particle[13].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4993
type: SIMPLE_ASSIGN
reactor.qh12[13] = reactor.U_t * reactor.dA * (reactor.T_h[13] - reactor.T_c[13])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4993};
  data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[32] /* reactor.T_h[13] STATE(1) */ - data->localData[0]->realVars[893] /* reactor.T_c[13] variable */));
  TRACE_POP
}

void residualFunc4998(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4998};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[893] /* reactor.T_c[13] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4992(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4993(data, threadData);
  res[0] = data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ + (data->localData[0]->realVars[1154] /* reactor.heatBoundary[13].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4998(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[13] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.max;
}


/*
equation index: 4930
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[12] = 0.120272355042726 * reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[12] * reactor.T_b[12] - reactor.pvap[12] * der(reactor.T_b[12])) / reactor.T_b[12] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4930};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */;
  data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[340] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */) - ((data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */) * (data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[12] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4931
type: SIMPLE_ASSIGN
$DER.reactor.psat[12] = 611.21 * $cse77 * der(reactor.T_b[12]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[12]) * 257.14 / (-16.00999999999999 + reactor.T_b[12]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[12]) / (-16.00999999999999 + reactor.T_b[12]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4931};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */;
  data->localData[0]->realVars[271] /* der(reactor.psat[12]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[574] /* $cse77 variable */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[12]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"-16.00999999999999 + reactor.T_b[12]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4932
type: SIMPLE_ASSIGN
$DER.reactor.particle[12].particle_Radu2017_085.sorbent.A = if reactor.pvap[12] >= reactor.psat[12] then 0.0 else (-8.31446261815324) * (reactor.T_b[12] * ($DER.reactor.pvap[12] * reactor.psat[12] - reactor.pvap[12] * $DER.reactor.psat[12]) / reactor.psat[12] ^ 2.0 * reactor.psat[12] / reactor.pvap[12] + der(reactor.T_b[12]) * log(reactor.pvap[12] / reactor.psat[12]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4932};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */, data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */, 8, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */,"reactor.psat[12]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[12] / reactor.psat[12]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */) * (data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */) - ((data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */) * (data->localData[0]->realVars[271] /* der(reactor.psat[12]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[12] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */),data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,"reactor.pvap[12]",equationIndexes)) + (data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[251] /* der(reactor.particle[12].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4933
type: SIMPLE_ASSIGN
reactor.qh3[12] = 1996.0 * reactor.M_v[12] * der(reactor.T_b[12]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4933};
  data->localData[0]->realVars[2338] /* reactor.qh3[12] variable */ = (1996.0) * ((data->localData[0]->realVars[746] /* reactor.M_v[12] DUMMY_STATE */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4934
type: SIMPLE_ASSIGN
reactor.qm2[12] = reactor.V_v[12] * der(reactor.gama_i[12]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4934};
  data->localData[0]->realVars[2498] /* reactor.qm2[12] variable */ = (data->localData[0]->realVars[944] /* reactor.V_v[12] DUMMY_STATE */) * ((data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4935
type: SIMPLE_ASSIGN
$DER.reactor.w[12] = reactor.w[12] * (-reactor.particle[12].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[12].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4935};
  data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */ = (data->localData[0]->realVars[2645] /* reactor.w[12] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[760] /* reactor.particle[12].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[251] /* der(reactor.particle[12].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4936
type: SIMPLE_ASSIGN
reactor.qm3[12] = reactor.gama_i[12] * reactor.V_b[12] * reactor.particle[12].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[12] * reactor.dN / reactor.particle[12].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4936};
  data->localData[0]->realVars[2518] /* reactor.qm3[12] variable */ = (data->localData[0]->realVars[51] /* reactor.gama_i[12] STATE(1) */) * ((data->localData[0]->realVars[919] /* reactor.V_b[12] variable */) * ((data->simulationInfo->realParameter[960] /* reactor.particle[12].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[560] /* reactor.particle[12].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[12].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4937
type: SIMPLE_ASSIGN
reactor.qm1[12] = reactor.M_a[12] * $DER.reactor.w[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4937};
  data->localData[0]->realVars[2478] /* reactor.qm1[12] variable */ = (data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4938
type: SIMPLE_ASSIGN
reactor.qh4[12] = (-reactor.M_a[12]) * $DER.reactor.w[12] * reactor.particle[12].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4938};
  data->localData[0]->realVars[2358] /* reactor.qh4[12] variable */ = ((-data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */)) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * ((data->simulationInfo->realParameter[700] /* reactor.particle[12].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4939
type: SIMPLE_ASSIGN
$DER.reactor.V_v[12] = reactor.V_b[12] * (-reactor.particle[12].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[12] / reactor.particle[12].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4939};
  data->localData[0]->realVars[211] /* der(reactor.V_v[12]) DUMMY_DER */ = (data->localData[0]->realVars[919] /* reactor.V_b[12] variable */) * (((-data->simulationInfo->realParameter[960] /* reactor.particle[12].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */,data->simulationInfo->realParameter[560] /* reactor.particle[12].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[12].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4940
type: SIMPLE_ASSIGN
$DER.reactor.M_v[12] = reactor.V_v[12] * der(reactor.gama_i[12]) + $DER.reactor.V_v[12] * reactor.gama_i[12]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4940};
  data->localData[0]->realVars[191] /* der(reactor.M_v[12]) DUMMY_DER */ = (data->localData[0]->realVars[944] /* reactor.V_v[12] DUMMY_STATE */) * (data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */) + (data->localData[0]->realVars[211] /* der(reactor.V_v[12]) DUMMY_DER */) * (data->localData[0]->realVars[51] /* reactor.gama_i[12] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4941
type: SIMPLE_ASSIGN
reactor.qh5[12] = reactor.h_vi[12] * $DER.reactor.M_v[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4941};
  data->localData[0]->realVars[2378] /* reactor.qh5[12] variable */ = (data->localData[0]->realVars[1133] /* reactor.h_vi[12] variable */) * ((data->localData[0]->realVars[191] /* der(reactor.M_v[12]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4942
type: SIMPLE_ASSIGN
reactor.qh2[12] = reactor.particle[12].particle_Radu2017_085.M_l * reactor.c_l[12] * der(reactor.T_b[12]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4942};
  data->localData[0]->realVars[2318] /* reactor.qh2[12] variable */ = (data->localData[0]->realVars[1478] /* reactor.particle[12].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1004] /* reactor.c_l[12] variable */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4943
type: SIMPLE_ASSIGN
reactor.qh1[12] = reactor.M_a[12] * reactor.particle[12].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[12]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4943};
  data->localData[0]->realVars[2238] /* reactor.qh1[12] variable */ = (data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */) * ((data->simulationInfo->realParameter[780] /* reactor.particle[12].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4962(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4962};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4930(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4931(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4932(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4933(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4934(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4935(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4936(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4937(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4938(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4939(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4940(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4941(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4942(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4943(data, threadData);
  res[0] = data->localData[0]->realVars[2578] /* reactor.qm6[12] variable */ + data->localData[0]->realVars[2558] /* reactor.qm5[12] variable */ + data->localData[0]->realVars[2538] /* reactor.qm4[12] variable */ + (-data->localData[0]->realVars[2498] /* reactor.qm2[12] variable */) - data->localData[0]->realVars[2478] /* reactor.qm1[12] variable */ - data->localData[0]->realVars[2518] /* reactor.qm3[12] variable */;

  res[1] = data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ + data->localData[0]->realVars[2278] /* reactor.qh11[12] variable */ + data->localData[0]->realVars[2258] /* reactor.qh10[12] variable */ + data->localData[0]->realVars[2458] /* reactor.qh9[12] variable */ + data->localData[0]->realVars[2438] /* reactor.qh8[12] variable */ + data->localData[0]->realVars[2418] /* reactor.qh7[12] variable */ + data->localData[0]->realVars[2398] /* reactor.qh6[12] variable */ + (-data->localData[0]->realVars[2318] /* reactor.qh2[12] variable */) - data->localData[0]->realVars[2238] /* reactor.qh1[12] variable */ - data->localData[0]->realVars[2338] /* reactor.qh3[12] variable */ - data->localData[0]->realVars[2358] /* reactor.qh4[12] variable */ - data->localData[0]->realVars[2378] /* reactor.qh5[12] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4962(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[12]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.max;
  /* static ls data for der(reactor.pvap[12]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.max;
}


/*
equation index: 4903
type: SIMPLE_ASSIGN
reactor.heatBoundary[12].Q = (reactor.T_b[12] - reactor.T_c[12]) / reactor.particle[12].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4903};
  data->localData[0]->realVars[1153] /* reactor.heatBoundary[12].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */ - data->localData[0]->realVars[892] /* reactor.T_c[12] variable */,data->localData[0]->realVars[1358] /* reactor.particle[12].contactResistance_SiuLee.Rss variable */,"reactor.particle[12].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4904
type: SIMPLE_ASSIGN
reactor.qh12[12] = reactor.U_t * reactor.dA * (reactor.T_h[12] - reactor.T_c[12])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4904};
  data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[31] /* reactor.T_h[12] STATE(1) */ - data->localData[0]->realVars[892] /* reactor.T_c[12] variable */));
  TRACE_POP
}

void residualFunc4909(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4909};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[892] /* reactor.T_c[12] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4903(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4904(data, threadData);
  res[0] = data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ + (data->localData[0]->realVars[1153] /* reactor.heatBoundary[12].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4909(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[12] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.max;
}


/*
equation index: 4841
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[11] = 0.120272355042726 * reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[11] * reactor.T_b[11] - reactor.pvap[11] * der(reactor.T_b[11])) / reactor.T_b[11] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4841};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */;
  data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[339] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */) - ((data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */) * (data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[11] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4842
type: SIMPLE_ASSIGN
$DER.reactor.psat[11] = 611.21 * $cse81 * der(reactor.T_b[11]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[11]) * 257.14 / (-16.00999999999999 + reactor.T_b[11]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[11]) / (-16.00999999999999 + reactor.T_b[11]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4842};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */;
  data->localData[0]->realVars[270] /* der(reactor.psat[11]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[590] /* $cse81 variable */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[11]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"-16.00999999999999 + reactor.T_b[11]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4843
type: SIMPLE_ASSIGN
$DER.reactor.particle[11].particle_Radu2017_085.sorbent.A = if reactor.pvap[11] >= reactor.psat[11] then 0.0 else (-8.31446261815324) * (reactor.T_b[11] * ($DER.reactor.pvap[11] * reactor.psat[11] - reactor.pvap[11] * $DER.reactor.psat[11]) / reactor.psat[11] ^ 2.0 * reactor.psat[11] / reactor.pvap[11] + der(reactor.T_b[11]) * log(reactor.pvap[11] / reactor.psat[11]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4843};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */, data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */, 9, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */,"reactor.psat[11]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[11] / reactor.psat[11]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */) * (data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */) - ((data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */) * (data->localData[0]->realVars[270] /* der(reactor.psat[11]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[11] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */),data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,"reactor.pvap[11]",equationIndexes)) + (data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[250] /* der(reactor.particle[11].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4844
type: SIMPLE_ASSIGN
$DER.reactor.w[11] = reactor.w[11] * (-reactor.particle[11].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[11].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4844};
  data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */ = (data->localData[0]->realVars[2644] /* reactor.w[11] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[759] /* reactor.particle[11].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[250] /* der(reactor.particle[11].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4845
type: SIMPLE_ASSIGN
reactor.qm3[11] = reactor.gama_i[11] * reactor.V_b[11] * reactor.particle[11].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[11] * reactor.dN / reactor.particle[11].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4845};
  data->localData[0]->realVars[2517] /* reactor.qm3[11] variable */ = (data->localData[0]->realVars[50] /* reactor.gama_i[11] STATE(1) */) * ((data->localData[0]->realVars[918] /* reactor.V_b[11] variable */) * ((data->simulationInfo->realParameter[959] /* reactor.particle[11].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[559] /* reactor.particle[11].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[11].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4846
type: SIMPLE_ASSIGN
reactor.qm2[11] = reactor.V_v[11] * der(reactor.gama_i[11]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4846};
  data->localData[0]->realVars[2497] /* reactor.qm2[11] variable */ = (data->localData[0]->realVars[943] /* reactor.V_v[11] DUMMY_STATE */) * ((data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4847
type: SIMPLE_ASSIGN
reactor.qh1[11] = reactor.M_a[11] * reactor.particle[11].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[11]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4847};
  data->localData[0]->realVars[2237] /* reactor.qh1[11] variable */ = (data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */) * ((data->simulationInfo->realParameter[779] /* reactor.particle[11].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4848
type: SIMPLE_ASSIGN
reactor.qh3[11] = 1996.0 * reactor.M_v[11] * der(reactor.T_b[11]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4848};
  data->localData[0]->realVars[2337] /* reactor.qh3[11] variable */ = (1996.0) * ((data->localData[0]->realVars[745] /* reactor.M_v[11] DUMMY_STATE */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4849
type: SIMPLE_ASSIGN
reactor.qh2[11] = reactor.particle[11].particle_Radu2017_085.M_l * reactor.c_l[11] * der(reactor.T_b[11]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4849};
  data->localData[0]->realVars[2317] /* reactor.qh2[11] variable */ = (data->localData[0]->realVars[1477] /* reactor.particle[11].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1003] /* reactor.c_l[11] variable */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4850
type: SIMPLE_ASSIGN
reactor.qh4[11] = (-reactor.M_a[11]) * $DER.reactor.w[11] * reactor.particle[11].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4850};
  data->localData[0]->realVars[2357] /* reactor.qh4[11] variable */ = ((-data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */)) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * ((data->simulationInfo->realParameter[699] /* reactor.particle[11].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4851
type: SIMPLE_ASSIGN
$DER.reactor.V_v[11] = reactor.V_b[11] * (-reactor.particle[11].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[11] / reactor.particle[11].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4851};
  data->localData[0]->realVars[210] /* der(reactor.V_v[11]) DUMMY_DER */ = (data->localData[0]->realVars[918] /* reactor.V_b[11] variable */) * (((-data->simulationInfo->realParameter[959] /* reactor.particle[11].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */,data->simulationInfo->realParameter[559] /* reactor.particle[11].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[11].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4852
type: SIMPLE_ASSIGN
$DER.reactor.M_v[11] = reactor.V_v[11] * der(reactor.gama_i[11]) + $DER.reactor.V_v[11] * reactor.gama_i[11]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4852};
  data->localData[0]->realVars[190] /* der(reactor.M_v[11]) DUMMY_DER */ = (data->localData[0]->realVars[943] /* reactor.V_v[11] DUMMY_STATE */) * (data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */) + (data->localData[0]->realVars[210] /* der(reactor.V_v[11]) DUMMY_DER */) * (data->localData[0]->realVars[50] /* reactor.gama_i[11] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4853
type: SIMPLE_ASSIGN
reactor.qh5[11] = reactor.h_vi[11] * $DER.reactor.M_v[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4853};
  data->localData[0]->realVars[2377] /* reactor.qh5[11] variable */ = (data->localData[0]->realVars[1132] /* reactor.h_vi[11] variable */) * ((data->localData[0]->realVars[190] /* der(reactor.M_v[11]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4854
type: SIMPLE_ASSIGN
reactor.qm1[11] = reactor.M_a[11] * $DER.reactor.w[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4854};
  data->localData[0]->realVars[2477] /* reactor.qm1[11] variable */ = (data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc4873(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4873};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4841(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4842(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4843(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4844(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4845(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4846(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4847(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4848(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4849(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4850(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4851(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4852(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4853(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4854(data, threadData);
  res[0] = data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ + data->localData[0]->realVars[2277] /* reactor.qh11[11] variable */ + data->localData[0]->realVars[2257] /* reactor.qh10[11] variable */ + data->localData[0]->realVars[2457] /* reactor.qh9[11] variable */ + data->localData[0]->realVars[2437] /* reactor.qh8[11] variable */ + data->localData[0]->realVars[2417] /* reactor.qh7[11] variable */ + data->localData[0]->realVars[2397] /* reactor.qh6[11] variable */ + (-data->localData[0]->realVars[2317] /* reactor.qh2[11] variable */) - data->localData[0]->realVars[2237] /* reactor.qh1[11] variable */ - data->localData[0]->realVars[2337] /* reactor.qh3[11] variable */ - data->localData[0]->realVars[2357] /* reactor.qh4[11] variable */ - data->localData[0]->realVars[2377] /* reactor.qh5[11] variable */;

  res[1] = data->localData[0]->realVars[2577] /* reactor.qm6[11] variable */ + data->localData[0]->realVars[2557] /* reactor.qm5[11] variable */ + data->localData[0]->realVars[2537] /* reactor.qm4[11] variable */ + (-data->localData[0]->realVars[2497] /* reactor.qm2[11] variable */) - data->localData[0]->realVars[2477] /* reactor.qm1[11] variable */ - data->localData[0]->realVars[2517] /* reactor.qm3[11] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4873(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[11]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.max;
  /* static ls data for der(reactor.pvap[11]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.max;
}


/*
equation index: 4814
type: SIMPLE_ASSIGN
reactor.heatBoundary[11].Q = (reactor.T_b[11] - reactor.T_c[11]) / reactor.particle[11].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4814};
  data->localData[0]->realVars[1152] /* reactor.heatBoundary[11].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */ - data->localData[0]->realVars[891] /* reactor.T_c[11] variable */,data->localData[0]->realVars[1357] /* reactor.particle[11].contactResistance_SiuLee.Rss variable */,"reactor.particle[11].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4815
type: SIMPLE_ASSIGN
reactor.qh12[11] = reactor.U_t * reactor.dA * (reactor.T_h[11] - reactor.T_c[11])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4815};
  data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[30] /* reactor.T_h[11] STATE(1) */ - data->localData[0]->realVars[891] /* reactor.T_c[11] variable */));
  TRACE_POP
}

void residualFunc4820(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4820};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[891] /* reactor.T_c[11] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4814(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4815(data, threadData);
  res[0] = data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ + (data->localData[0]->realVars[1152] /* reactor.heatBoundary[11].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4820(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[11] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.max;
}


/*
equation index: 4752
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[10] = 0.120272355042726 * reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[10] * reactor.T_b[10] - reactor.pvap[10] * der(reactor.T_b[10])) / reactor.T_b[10] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4752};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */;
  data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[338] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */) - ((data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */) * (data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[10] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4753
type: SIMPLE_ASSIGN
$DER.reactor.psat[10] = 611.21 * $cse85 * der(reactor.T_b[10]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[10]) * 257.14 / (-16.00999999999999 + reactor.T_b[10]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[10]) / (-16.00999999999999 + reactor.T_b[10]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4753};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */;
  data->localData[0]->realVars[269] /* der(reactor.psat[10]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[606] /* $cse85 variable */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[10]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"-16.00999999999999 + reactor.T_b[10]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4754
type: SIMPLE_ASSIGN
$DER.reactor.particle[10].particle_Radu2017_085.sorbent.A = if reactor.pvap[10] >= reactor.psat[10] then 0.0 else (-8.31446261815324) * (reactor.T_b[10] * ($DER.reactor.pvap[10] * reactor.psat[10] - reactor.pvap[10] * $DER.reactor.psat[10]) / reactor.psat[10] ^ 2.0 * reactor.psat[10] / reactor.pvap[10] + der(reactor.T_b[10]) * log(reactor.pvap[10] / reactor.psat[10]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4754};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */, data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */, 10, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */,"reactor.psat[10]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[10] / reactor.psat[10]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */) * (data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */) - ((data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */) * (data->localData[0]->realVars[269] /* der(reactor.psat[10]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[10] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */),data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,"reactor.pvap[10]",equationIndexes)) + (data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[249] /* der(reactor.particle[10].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4755
type: SIMPLE_ASSIGN
reactor.qh3[10] = 1996.0 * reactor.M_v[10] * der(reactor.T_b[10]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4755};
  data->localData[0]->realVars[2336] /* reactor.qh3[10] variable */ = (1996.0) * ((data->localData[0]->realVars[744] /* reactor.M_v[10] DUMMY_STATE */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4756
type: SIMPLE_ASSIGN
reactor.qm2[10] = reactor.V_v[10] * der(reactor.gama_i[10]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4756};
  data->localData[0]->realVars[2496] /* reactor.qm2[10] variable */ = (data->localData[0]->realVars[942] /* reactor.V_v[10] DUMMY_STATE */) * ((data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4757
type: SIMPLE_ASSIGN
$DER.reactor.w[10] = reactor.w[10] * (-reactor.particle[10].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[10].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4757};
  data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */ = (data->localData[0]->realVars[2643] /* reactor.w[10] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[758] /* reactor.particle[10].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[249] /* der(reactor.particle[10].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4758
type: SIMPLE_ASSIGN
reactor.qm3[10] = reactor.gama_i[10] * reactor.V_b[10] * reactor.particle[10].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[10] * reactor.dN / reactor.particle[10].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4758};
  data->localData[0]->realVars[2516] /* reactor.qm3[10] variable */ = (data->localData[0]->realVars[49] /* reactor.gama_i[10] STATE(1) */) * ((data->localData[0]->realVars[917] /* reactor.V_b[10] variable */) * ((data->simulationInfo->realParameter[958] /* reactor.particle[10].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[558] /* reactor.particle[10].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[10].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4759
type: SIMPLE_ASSIGN
$DER.reactor.V_v[10] = reactor.V_b[10] * (-reactor.particle[10].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[10] / reactor.particle[10].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4759};
  data->localData[0]->realVars[209] /* der(reactor.V_v[10]) DUMMY_DER */ = (data->localData[0]->realVars[917] /* reactor.V_b[10] variable */) * (((-data->simulationInfo->realParameter[958] /* reactor.particle[10].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */,data->simulationInfo->realParameter[558] /* reactor.particle[10].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[10].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4760
type: SIMPLE_ASSIGN
$DER.reactor.M_v[10] = reactor.V_v[10] * der(reactor.gama_i[10]) + $DER.reactor.V_v[10] * reactor.gama_i[10]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4760};
  data->localData[0]->realVars[189] /* der(reactor.M_v[10]) DUMMY_DER */ = (data->localData[0]->realVars[942] /* reactor.V_v[10] DUMMY_STATE */) * (data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */) + (data->localData[0]->realVars[209] /* der(reactor.V_v[10]) DUMMY_DER */) * (data->localData[0]->realVars[49] /* reactor.gama_i[10] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4761
type: SIMPLE_ASSIGN
reactor.qh5[10] = reactor.h_vi[10] * $DER.reactor.M_v[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4761};
  data->localData[0]->realVars[2376] /* reactor.qh5[10] variable */ = (data->localData[0]->realVars[1131] /* reactor.h_vi[10] variable */) * ((data->localData[0]->realVars[189] /* der(reactor.M_v[10]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4762
type: SIMPLE_ASSIGN
reactor.qh4[10] = (-reactor.M_a[10]) * $DER.reactor.w[10] * reactor.particle[10].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4762};
  data->localData[0]->realVars[2356] /* reactor.qh4[10] variable */ = ((-data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */)) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * ((data->simulationInfo->realParameter[698] /* reactor.particle[10].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4763
type: SIMPLE_ASSIGN
reactor.qm1[10] = reactor.M_a[10] * $DER.reactor.w[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4763};
  data->localData[0]->realVars[2476] /* reactor.qm1[10] variable */ = (data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4764
type: SIMPLE_ASSIGN
reactor.qh2[10] = reactor.particle[10].particle_Radu2017_085.M_l * reactor.c_l[10] * der(reactor.T_b[10]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4764};
  data->localData[0]->realVars[2316] /* reactor.qh2[10] variable */ = (data->localData[0]->realVars[1476] /* reactor.particle[10].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1002] /* reactor.c_l[10] variable */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4765
type: SIMPLE_ASSIGN
reactor.qh1[10] = reactor.M_a[10] * reactor.particle[10].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[10]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4765};
  data->localData[0]->realVars[2236] /* reactor.qh1[10] variable */ = (data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */) * ((data->simulationInfo->realParameter[778] /* reactor.particle[10].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4784(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4784};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4752(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4753(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4754(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4755(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4756(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4757(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4758(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4759(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4760(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4761(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4762(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4763(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4764(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4765(data, threadData);
  res[0] = data->localData[0]->realVars[2576] /* reactor.qm6[10] variable */ + data->localData[0]->realVars[2556] /* reactor.qm5[10] variable */ + data->localData[0]->realVars[2536] /* reactor.qm4[10] variable */ + (-data->localData[0]->realVars[2496] /* reactor.qm2[10] variable */) - data->localData[0]->realVars[2476] /* reactor.qm1[10] variable */ - data->localData[0]->realVars[2516] /* reactor.qm3[10] variable */;

  res[1] = data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ + data->localData[0]->realVars[2276] /* reactor.qh11[10] variable */ + data->localData[0]->realVars[2256] /* reactor.qh10[10] variable */ + data->localData[0]->realVars[2456] /* reactor.qh9[10] variable */ + data->localData[0]->realVars[2436] /* reactor.qh8[10] variable */ + data->localData[0]->realVars[2416] /* reactor.qh7[10] variable */ + data->localData[0]->realVars[2396] /* reactor.qh6[10] variable */ + (-data->localData[0]->realVars[2316] /* reactor.qh2[10] variable */) - data->localData[0]->realVars[2236] /* reactor.qh1[10] variable */ - data->localData[0]->realVars[2336] /* reactor.qh3[10] variable */ - data->localData[0]->realVars[2356] /* reactor.qh4[10] variable */ - data->localData[0]->realVars[2376] /* reactor.qh5[10] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4784(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[10]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.max;
  /* static ls data for der(reactor.pvap[10]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.max;
}


/*
equation index: 4725
type: SIMPLE_ASSIGN
reactor.heatBoundary[10].Q = (reactor.T_b[10] - reactor.T_c[10]) / reactor.particle[10].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4725};
  data->localData[0]->realVars[1151] /* reactor.heatBoundary[10].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */ - data->localData[0]->realVars[890] /* reactor.T_c[10] variable */,data->localData[0]->realVars[1356] /* reactor.particle[10].contactResistance_SiuLee.Rss variable */,"reactor.particle[10].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4726
type: SIMPLE_ASSIGN
reactor.qh12[10] = reactor.U_t * reactor.dA * (reactor.T_h[10] - reactor.T_c[10])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4726};
  data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[29] /* reactor.T_h[10] STATE(1) */ - data->localData[0]->realVars[890] /* reactor.T_c[10] variable */));
  TRACE_POP
}

void residualFunc4731(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4731};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[890] /* reactor.T_c[10] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4725(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4726(data, threadData);
  res[0] = data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ + (data->localData[0]->realVars[1151] /* reactor.heatBoundary[10].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4731(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[10] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.max;
}


/*
equation index: 4663
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[9] = 0.120272355042726 * reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[9] * reactor.T_b[9] - reactor.pvap[9] * der(reactor.T_b[9])) / reactor.T_b[9] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4663};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */;
  data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[337] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */) - ((data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */) * (data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[9] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4664
type: SIMPLE_ASSIGN
$DER.reactor.psat[9] = 611.21 * $cse89 * der(reactor.T_b[9]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[9]) * 257.14 / (-16.00999999999999 + reactor.T_b[9]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[9]) / (-16.00999999999999 + reactor.T_b[9]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4664};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */;
  data->localData[0]->realVars[268] /* der(reactor.psat[9]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[622] /* $cse89 variable */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[9]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"-16.00999999999999 + reactor.T_b[9]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4665
type: SIMPLE_ASSIGN
$DER.reactor.particle[9].particle_Radu2017_085.sorbent.A = if reactor.pvap[9] >= reactor.psat[9] then 0.0 else (-8.31446261815324) * (reactor.T_b[9] * ($DER.reactor.pvap[9] * reactor.psat[9] - reactor.pvap[9] * $DER.reactor.psat[9]) / reactor.psat[9] ^ 2.0 * reactor.psat[9] / reactor.pvap[9] + der(reactor.T_b[9]) * log(reactor.pvap[9] / reactor.psat[9]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4665};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */, data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */, 11, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */,"reactor.psat[9]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[9] / reactor.psat[9]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */) * (data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */) - ((data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */) * (data->localData[0]->realVars[268] /* der(reactor.psat[9]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[9] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */),data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,"reactor.pvap[9]",equationIndexes)) + (data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[248] /* der(reactor.particle[9].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4666
type: SIMPLE_ASSIGN
$DER.reactor.w[9] = reactor.w[9] * (-reactor.particle[9].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[9].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4666};
  data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */ = (data->localData[0]->realVars[2642] /* reactor.w[9] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[757] /* reactor.particle[9].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[248] /* der(reactor.particle[9].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4667
type: SIMPLE_ASSIGN
reactor.qm3[9] = reactor.gama_i[9] * reactor.V_b[9] * reactor.particle[9].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[9] * reactor.dN / reactor.particle[9].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4667};
  data->localData[0]->realVars[2515] /* reactor.qm3[9] variable */ = (data->localData[0]->realVars[48] /* reactor.gama_i[9] STATE(1) */) * ((data->localData[0]->realVars[916] /* reactor.V_b[9] variable */) * ((data->simulationInfo->realParameter[957] /* reactor.particle[9].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[557] /* reactor.particle[9].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[9].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4668
type: SIMPLE_ASSIGN
reactor.qm2[9] = reactor.V_v[9] * der(reactor.gama_i[9]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4668};
  data->localData[0]->realVars[2495] /* reactor.qm2[9] variable */ = (data->localData[0]->realVars[941] /* reactor.V_v[9] DUMMY_STATE */) * ((data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4669
type: SIMPLE_ASSIGN
reactor.qh1[9] = reactor.M_a[9] * reactor.particle[9].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[9]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4669};
  data->localData[0]->realVars[2235] /* reactor.qh1[9] variable */ = (data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */) * ((data->simulationInfo->realParameter[777] /* reactor.particle[9].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4670
type: SIMPLE_ASSIGN
reactor.qh3[9] = 1996.0 * reactor.M_v[9] * der(reactor.T_b[9]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4670};
  data->localData[0]->realVars[2335] /* reactor.qh3[9] variable */ = (1996.0) * ((data->localData[0]->realVars[743] /* reactor.M_v[9] DUMMY_STATE */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4671
type: SIMPLE_ASSIGN
reactor.qh2[9] = reactor.particle[9].particle_Radu2017_085.M_l * reactor.c_l[9] * der(reactor.T_b[9]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4671};
  data->localData[0]->realVars[2315] /* reactor.qh2[9] variable */ = (data->localData[0]->realVars[1475] /* reactor.particle[9].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1001] /* reactor.c_l[9] variable */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4672
type: SIMPLE_ASSIGN
reactor.qh4[9] = (-reactor.M_a[9]) * $DER.reactor.w[9] * reactor.particle[9].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4672};
  data->localData[0]->realVars[2355] /* reactor.qh4[9] variable */ = ((-data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */)) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * ((data->simulationInfo->realParameter[697] /* reactor.particle[9].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4673
type: SIMPLE_ASSIGN
$DER.reactor.V_v[9] = reactor.V_b[9] * (-reactor.particle[9].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[9] / reactor.particle[9].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4673};
  data->localData[0]->realVars[208] /* der(reactor.V_v[9]) DUMMY_DER */ = (data->localData[0]->realVars[916] /* reactor.V_b[9] variable */) * (((-data->simulationInfo->realParameter[957] /* reactor.particle[9].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */,data->simulationInfo->realParameter[557] /* reactor.particle[9].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[9].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4674
type: SIMPLE_ASSIGN
$DER.reactor.M_v[9] = reactor.V_v[9] * der(reactor.gama_i[9]) + $DER.reactor.V_v[9] * reactor.gama_i[9]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4674};
  data->localData[0]->realVars[188] /* der(reactor.M_v[9]) DUMMY_DER */ = (data->localData[0]->realVars[941] /* reactor.V_v[9] DUMMY_STATE */) * (data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */) + (data->localData[0]->realVars[208] /* der(reactor.V_v[9]) DUMMY_DER */) * (data->localData[0]->realVars[48] /* reactor.gama_i[9] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4675
type: SIMPLE_ASSIGN
reactor.qh5[9] = reactor.h_vi[9] * $DER.reactor.M_v[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4675};
  data->localData[0]->realVars[2375] /* reactor.qh5[9] variable */ = (data->localData[0]->realVars[1130] /* reactor.h_vi[9] variable */) * ((data->localData[0]->realVars[188] /* der(reactor.M_v[9]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4676
type: SIMPLE_ASSIGN
reactor.qm1[9] = reactor.M_a[9] * $DER.reactor.w[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4676};
  data->localData[0]->realVars[2475] /* reactor.qm1[9] variable */ = (data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc4695(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4695};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4663(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4664(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4665(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4666(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4667(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4668(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4669(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4670(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4671(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4672(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4673(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4674(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4675(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4676(data, threadData);
  res[0] = data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ + data->localData[0]->realVars[2275] /* reactor.qh11[9] variable */ + data->localData[0]->realVars[2255] /* reactor.qh10[9] variable */ + data->localData[0]->realVars[2455] /* reactor.qh9[9] variable */ + data->localData[0]->realVars[2435] /* reactor.qh8[9] variable */ + data->localData[0]->realVars[2415] /* reactor.qh7[9] variable */ + data->localData[0]->realVars[2395] /* reactor.qh6[9] variable */ + (-data->localData[0]->realVars[2315] /* reactor.qh2[9] variable */) - data->localData[0]->realVars[2235] /* reactor.qh1[9] variable */ - data->localData[0]->realVars[2335] /* reactor.qh3[9] variable */ - data->localData[0]->realVars[2355] /* reactor.qh4[9] variable */ - data->localData[0]->realVars[2375] /* reactor.qh5[9] variable */;

  res[1] = data->localData[0]->realVars[2575] /* reactor.qm6[9] variable */ + data->localData[0]->realVars[2555] /* reactor.qm5[9] variable */ + data->localData[0]->realVars[2535] /* reactor.qm4[9] variable */ + (-data->localData[0]->realVars[2495] /* reactor.qm2[9] variable */) - data->localData[0]->realVars[2475] /* reactor.qm1[9] variable */ - data->localData[0]->realVars[2515] /* reactor.qm3[9] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4695(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[9]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.max;
  /* static ls data for der(reactor.T_b[9]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.max;
}


/*
equation index: 4636
type: SIMPLE_ASSIGN
reactor.heatBoundary[9].Q = (reactor.T_b[9] - reactor.T_c[9]) / reactor.particle[9].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4636};
  data->localData[0]->realVars[1150] /* reactor.heatBoundary[9].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */ - data->localData[0]->realVars[889] /* reactor.T_c[9] variable */,data->localData[0]->realVars[1355] /* reactor.particle[9].contactResistance_SiuLee.Rss variable */,"reactor.particle[9].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4637
type: SIMPLE_ASSIGN
reactor.qh12[9] = reactor.U_t * reactor.dA * (reactor.T_h[9] - reactor.T_c[9])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4637};
  data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[28] /* reactor.T_h[9] STATE(1) */ - data->localData[0]->realVars[889] /* reactor.T_c[9] variable */));
  TRACE_POP
}

void residualFunc4642(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4642};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[889] /* reactor.T_c[9] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4636(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4637(data, threadData);
  res[0] = data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ + (data->localData[0]->realVars[1150] /* reactor.heatBoundary[9].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4642(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[9] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.max;
}


/*
equation index: 4574
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[8] = 0.120272355042726 * reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[8] * reactor.T_b[8] - reactor.pvap[8] * der(reactor.T_b[8])) / reactor.T_b[8] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4574};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */;
  data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[336] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */) - ((data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */) * (data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[8] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4575
type: SIMPLE_ASSIGN
$DER.reactor.psat[8] = 611.21 * $cse93 * der(reactor.T_b[8]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[8]) * 257.14 / (-16.00999999999999 + reactor.T_b[8]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[8]) / (-16.00999999999999 + reactor.T_b[8]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4575};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */;
  data->localData[0]->realVars[267] /* der(reactor.psat[8]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[638] /* $cse93 variable */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[8]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"-16.00999999999999 + reactor.T_b[8]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4576
type: SIMPLE_ASSIGN
$DER.reactor.particle[8].particle_Radu2017_085.sorbent.A = if reactor.pvap[8] >= reactor.psat[8] then 0.0 else (-8.31446261815324) * (reactor.T_b[8] * ($DER.reactor.pvap[8] * reactor.psat[8] - reactor.pvap[8] * $DER.reactor.psat[8]) / reactor.psat[8] ^ 2.0 * reactor.psat[8] / reactor.pvap[8] + der(reactor.T_b[8]) * log(reactor.pvap[8] / reactor.psat[8]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4576};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */, data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */, 12, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */,"reactor.psat[8]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[8] / reactor.psat[8]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */) * (data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */) - ((data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */) * (data->localData[0]->realVars[267] /* der(reactor.psat[8]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[8] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */),data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,"reactor.pvap[8]",equationIndexes)) + (data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[247] /* der(reactor.particle[8].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4577
type: SIMPLE_ASSIGN
reactor.qh3[8] = 1996.0 * reactor.M_v[8] * der(reactor.T_b[8]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4577};
  data->localData[0]->realVars[2334] /* reactor.qh3[8] variable */ = (1996.0) * ((data->localData[0]->realVars[742] /* reactor.M_v[8] DUMMY_STATE */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4578
type: SIMPLE_ASSIGN
reactor.qm2[8] = reactor.V_v[8] * der(reactor.gama_i[8]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4578};
  data->localData[0]->realVars[2494] /* reactor.qm2[8] variable */ = (data->localData[0]->realVars[940] /* reactor.V_v[8] DUMMY_STATE */) * ((data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4579
type: SIMPLE_ASSIGN
$DER.reactor.w[8] = reactor.w[8] * (-reactor.particle[8].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[8].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4579};
  data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */ = (data->localData[0]->realVars[2641] /* reactor.w[8] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[756] /* reactor.particle[8].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[247] /* der(reactor.particle[8].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4580
type: SIMPLE_ASSIGN
reactor.qm3[8] = reactor.gama_i[8] * reactor.V_b[8] * reactor.particle[8].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[8] * reactor.dN / reactor.particle[8].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4580};
  data->localData[0]->realVars[2514] /* reactor.qm3[8] variable */ = (data->localData[0]->realVars[47] /* reactor.gama_i[8] STATE(1) */) * ((data->localData[0]->realVars[915] /* reactor.V_b[8] variable */) * ((data->simulationInfo->realParameter[956] /* reactor.particle[8].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[556] /* reactor.particle[8].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[8].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4581
type: SIMPLE_ASSIGN
reactor.qm1[8] = reactor.M_a[8] * $DER.reactor.w[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4581};
  data->localData[0]->realVars[2474] /* reactor.qm1[8] variable */ = (data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4582
type: SIMPLE_ASSIGN
reactor.qh4[8] = (-reactor.M_a[8]) * $DER.reactor.w[8] * reactor.particle[8].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4582};
  data->localData[0]->realVars[2354] /* reactor.qh4[8] variable */ = ((-data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */)) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * ((data->simulationInfo->realParameter[696] /* reactor.particle[8].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4583
type: SIMPLE_ASSIGN
$DER.reactor.V_v[8] = reactor.V_b[8] * (-reactor.particle[8].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[8] / reactor.particle[8].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4583};
  data->localData[0]->realVars[207] /* der(reactor.V_v[8]) DUMMY_DER */ = (data->localData[0]->realVars[915] /* reactor.V_b[8] variable */) * (((-data->simulationInfo->realParameter[956] /* reactor.particle[8].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */,data->simulationInfo->realParameter[556] /* reactor.particle[8].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[8].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4584
type: SIMPLE_ASSIGN
$DER.reactor.M_v[8] = reactor.V_v[8] * der(reactor.gama_i[8]) + $DER.reactor.V_v[8] * reactor.gama_i[8]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4584};
  data->localData[0]->realVars[187] /* der(reactor.M_v[8]) DUMMY_DER */ = (data->localData[0]->realVars[940] /* reactor.V_v[8] DUMMY_STATE */) * (data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */) + (data->localData[0]->realVars[207] /* der(reactor.V_v[8]) DUMMY_DER */) * (data->localData[0]->realVars[47] /* reactor.gama_i[8] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4585
type: SIMPLE_ASSIGN
reactor.qh5[8] = reactor.h_vi[8] * $DER.reactor.M_v[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4585};
  data->localData[0]->realVars[2374] /* reactor.qh5[8] variable */ = (data->localData[0]->realVars[1129] /* reactor.h_vi[8] variable */) * ((data->localData[0]->realVars[187] /* der(reactor.M_v[8]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4586
type: SIMPLE_ASSIGN
reactor.qh2[8] = reactor.particle[8].particle_Radu2017_085.M_l * reactor.c_l[8] * der(reactor.T_b[8]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4586};
  data->localData[0]->realVars[2314] /* reactor.qh2[8] variable */ = (data->localData[0]->realVars[1474] /* reactor.particle[8].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1000] /* reactor.c_l[8] variable */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4587
type: SIMPLE_ASSIGN
reactor.qh1[8] = reactor.M_a[8] * reactor.particle[8].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[8]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4587};
  data->localData[0]->realVars[2234] /* reactor.qh1[8] variable */ = (data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */) * ((data->simulationInfo->realParameter[776] /* reactor.particle[8].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4606(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4606};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4574(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4575(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4576(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4577(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4578(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4579(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4580(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4581(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4582(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4583(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4584(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4585(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4586(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4587(data, threadData);
  res[0] = data->localData[0]->realVars[2574] /* reactor.qm6[8] variable */ + data->localData[0]->realVars[2554] /* reactor.qm5[8] variable */ + data->localData[0]->realVars[2534] /* reactor.qm4[8] variable */ + (-data->localData[0]->realVars[2494] /* reactor.qm2[8] variable */) - data->localData[0]->realVars[2474] /* reactor.qm1[8] variable */ - data->localData[0]->realVars[2514] /* reactor.qm3[8] variable */;

  res[1] = data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ + data->localData[0]->realVars[2274] /* reactor.qh11[8] variable */ + data->localData[0]->realVars[2254] /* reactor.qh10[8] variable */ + data->localData[0]->realVars[2454] /* reactor.qh9[8] variable */ + data->localData[0]->realVars[2434] /* reactor.qh8[8] variable */ + data->localData[0]->realVars[2414] /* reactor.qh7[8] variable */ + data->localData[0]->realVars[2394] /* reactor.qh6[8] variable */ + (-data->localData[0]->realVars[2314] /* reactor.qh2[8] variable */) - data->localData[0]->realVars[2234] /* reactor.qh1[8] variable */ - data->localData[0]->realVars[2334] /* reactor.qh3[8] variable */ - data->localData[0]->realVars[2354] /* reactor.qh4[8] variable */ - data->localData[0]->realVars[2374] /* reactor.qh5[8] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4606(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[8]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.max;
  /* static ls data for der(reactor.pvap[8]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.max;
}


/*
equation index: 4547
type: SIMPLE_ASSIGN
reactor.heatBoundary[8].Q = (reactor.T_b[8] - reactor.T_c[8]) / reactor.particle[8].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4547};
  data->localData[0]->realVars[1149] /* reactor.heatBoundary[8].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */ - data->localData[0]->realVars[888] /* reactor.T_c[8] variable */,data->localData[0]->realVars[1354] /* reactor.particle[8].contactResistance_SiuLee.Rss variable */,"reactor.particle[8].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4548
type: SIMPLE_ASSIGN
reactor.qh12[8] = reactor.U_t * reactor.dA * (reactor.T_h[8] - reactor.T_c[8])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4548};
  data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[27] /* reactor.T_h[8] STATE(1) */ - data->localData[0]->realVars[888] /* reactor.T_c[8] variable */));
  TRACE_POP
}

void residualFunc4553(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4553};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[888] /* reactor.T_c[8] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4547(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4548(data, threadData);
  res[0] = data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ + (data->localData[0]->realVars[1149] /* reactor.heatBoundary[8].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4553(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[8] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.max;
}


/*
equation index: 4485
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[7] = 0.120272355042726 * reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[7] * reactor.T_b[7] - reactor.pvap[7] * der(reactor.T_b[7])) / reactor.T_b[7] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4485};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */;
  data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[335] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */) - ((data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */) * (data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[7] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4486
type: SIMPLE_ASSIGN
$DER.reactor.psat[7] = 611.21 * $cse97 * der(reactor.T_b[7]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[7]) * 257.14 / (-16.00999999999999 + reactor.T_b[7]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[7]) / (-16.00999999999999 + reactor.T_b[7]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4486};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */;
  data->localData[0]->realVars[266] /* der(reactor.psat[7]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[654] /* $cse97 variable */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[7]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"-16.00999999999999 + reactor.T_b[7]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4487
type: SIMPLE_ASSIGN
$DER.reactor.particle[7].particle_Radu2017_085.sorbent.A = if reactor.pvap[7] >= reactor.psat[7] then 0.0 else (-8.31446261815324) * (reactor.T_b[7] * ($DER.reactor.pvap[7] * reactor.psat[7] - reactor.pvap[7] * $DER.reactor.psat[7]) / reactor.psat[7] ^ 2.0 * reactor.psat[7] / reactor.pvap[7] + der(reactor.T_b[7]) * log(reactor.pvap[7] / reactor.psat[7]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4487};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */, data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */, 13, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */,"reactor.psat[7]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[7] / reactor.psat[7]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */) * (data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */) - ((data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */) * (data->localData[0]->realVars[266] /* der(reactor.psat[7]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[7] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */),data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,"reactor.pvap[7]",equationIndexes)) + (data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[246] /* der(reactor.particle[7].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4488
type: SIMPLE_ASSIGN
reactor.qh3[7] = 1996.0 * reactor.M_v[7] * der(reactor.T_b[7]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4488};
  data->localData[0]->realVars[2333] /* reactor.qh3[7] variable */ = (1996.0) * ((data->localData[0]->realVars[741] /* reactor.M_v[7] DUMMY_STATE */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4489
type: SIMPLE_ASSIGN
reactor.qm2[7] = reactor.V_v[7] * der(reactor.gama_i[7]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4489};
  data->localData[0]->realVars[2493] /* reactor.qm2[7] variable */ = (data->localData[0]->realVars[939] /* reactor.V_v[7] DUMMY_STATE */) * ((data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4490
type: SIMPLE_ASSIGN
$DER.reactor.w[7] = reactor.w[7] * (-reactor.particle[7].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[7].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4490};
  data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */ = (data->localData[0]->realVars[2640] /* reactor.w[7] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[755] /* reactor.particle[7].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[246] /* der(reactor.particle[7].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4491
type: SIMPLE_ASSIGN
reactor.qm3[7] = reactor.gama_i[7] * reactor.V_b[7] * reactor.particle[7].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[7] * reactor.dN / reactor.particle[7].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4491};
  data->localData[0]->realVars[2513] /* reactor.qm3[7] variable */ = (data->localData[0]->realVars[46] /* reactor.gama_i[7] STATE(1) */) * ((data->localData[0]->realVars[914] /* reactor.V_b[7] variable */) * ((data->simulationInfo->realParameter[955] /* reactor.particle[7].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[555] /* reactor.particle[7].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[7].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4492
type: SIMPLE_ASSIGN
reactor.qm1[7] = reactor.M_a[7] * $DER.reactor.w[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4492};
  data->localData[0]->realVars[2473] /* reactor.qm1[7] variable */ = (data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4493
type: SIMPLE_ASSIGN
reactor.qh4[7] = (-reactor.M_a[7]) * $DER.reactor.w[7] * reactor.particle[7].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4493};
  data->localData[0]->realVars[2353] /* reactor.qh4[7] variable */ = ((-data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */)) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * ((data->simulationInfo->realParameter[695] /* reactor.particle[7].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4494
type: SIMPLE_ASSIGN
$DER.reactor.V_v[7] = reactor.V_b[7] * (-reactor.particle[7].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[7] / reactor.particle[7].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4494};
  data->localData[0]->realVars[206] /* der(reactor.V_v[7]) DUMMY_DER */ = (data->localData[0]->realVars[914] /* reactor.V_b[7] variable */) * (((-data->simulationInfo->realParameter[955] /* reactor.particle[7].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */,data->simulationInfo->realParameter[555] /* reactor.particle[7].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[7].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4495
type: SIMPLE_ASSIGN
$DER.reactor.M_v[7] = reactor.V_v[7] * der(reactor.gama_i[7]) + $DER.reactor.V_v[7] * reactor.gama_i[7]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4495};
  data->localData[0]->realVars[186] /* der(reactor.M_v[7]) DUMMY_DER */ = (data->localData[0]->realVars[939] /* reactor.V_v[7] DUMMY_STATE */) * (data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */) + (data->localData[0]->realVars[206] /* der(reactor.V_v[7]) DUMMY_DER */) * (data->localData[0]->realVars[46] /* reactor.gama_i[7] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4496
type: SIMPLE_ASSIGN
reactor.qh5[7] = reactor.h_vi[7] * $DER.reactor.M_v[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4496};
  data->localData[0]->realVars[2373] /* reactor.qh5[7] variable */ = (data->localData[0]->realVars[1128] /* reactor.h_vi[7] variable */) * ((data->localData[0]->realVars[186] /* der(reactor.M_v[7]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4497
type: SIMPLE_ASSIGN
reactor.qh2[7] = reactor.particle[7].particle_Radu2017_085.M_l * reactor.c_l[7] * der(reactor.T_b[7]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4497};
  data->localData[0]->realVars[2313] /* reactor.qh2[7] variable */ = (data->localData[0]->realVars[1473] /* reactor.particle[7].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[999] /* reactor.c_l[7] variable */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4498
type: SIMPLE_ASSIGN
reactor.qh1[7] = reactor.M_a[7] * reactor.particle[7].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[7]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4498};
  data->localData[0]->realVars[2233] /* reactor.qh1[7] variable */ = (data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */) * ((data->simulationInfo->realParameter[775] /* reactor.particle[7].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4517(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4517};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4485(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4486(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4487(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4488(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4489(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4490(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4491(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4492(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4493(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4494(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4495(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4496(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4497(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4498(data, threadData);
  res[0] = data->localData[0]->realVars[2573] /* reactor.qm6[7] variable */ + data->localData[0]->realVars[2553] /* reactor.qm5[7] variable */ + data->localData[0]->realVars[2533] /* reactor.qm4[7] variable */ + (-data->localData[0]->realVars[2493] /* reactor.qm2[7] variable */) - data->localData[0]->realVars[2473] /* reactor.qm1[7] variable */ - data->localData[0]->realVars[2513] /* reactor.qm3[7] variable */;

  res[1] = data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ + data->localData[0]->realVars[2273] /* reactor.qh11[7] variable */ + data->localData[0]->realVars[2253] /* reactor.qh10[7] variable */ + data->localData[0]->realVars[2453] /* reactor.qh9[7] variable */ + data->localData[0]->realVars[2433] /* reactor.qh8[7] variable */ + data->localData[0]->realVars[2413] /* reactor.qh7[7] variable */ + data->localData[0]->realVars[2393] /* reactor.qh6[7] variable */ + (-data->localData[0]->realVars[2313] /* reactor.qh2[7] variable */) - data->localData[0]->realVars[2233] /* reactor.qh1[7] variable */ - data->localData[0]->realVars[2333] /* reactor.qh3[7] variable */ - data->localData[0]->realVars[2353] /* reactor.qh4[7] variable */ - data->localData[0]->realVars[2373] /* reactor.qh5[7] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4517(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[7]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.max;
  /* static ls data for der(reactor.pvap[7]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.max;
}


/*
equation index: 4458
type: SIMPLE_ASSIGN
reactor.heatBoundary[7].Q = (reactor.T_b[7] - reactor.T_c[7]) / reactor.particle[7].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4458};
  data->localData[0]->realVars[1148] /* reactor.heatBoundary[7].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */ - data->localData[0]->realVars[887] /* reactor.T_c[7] variable */,data->localData[0]->realVars[1353] /* reactor.particle[7].contactResistance_SiuLee.Rss variable */,"reactor.particle[7].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4459
type: SIMPLE_ASSIGN
reactor.qh12[7] = reactor.U_t * reactor.dA * (reactor.T_h[7] - reactor.T_c[7])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4459};
  data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[26] /* reactor.T_h[7] STATE(1) */ - data->localData[0]->realVars[887] /* reactor.T_c[7] variable */));
  TRACE_POP
}

void residualFunc4464(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4464};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[887] /* reactor.T_c[7] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4458(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4459(data, threadData);
  res[0] = data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ + (data->localData[0]->realVars[1148] /* reactor.heatBoundary[7].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4464(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[7] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.max;
}


/*
equation index: 4396
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[6] = 0.120272355042726 * reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[6] * reactor.T_b[6] - reactor.pvap[6] * der(reactor.T_b[6])) / reactor.T_b[6] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4396};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */;
  data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[334] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */) - ((data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */) * (data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[6] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4397
type: SIMPLE_ASSIGN
$DER.reactor.psat[6] = 611.21 * $cse101 * der(reactor.T_b[6]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[6]) * 257.14 / (-16.00999999999999 + reactor.T_b[6]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[6]) / (-16.00999999999999 + reactor.T_b[6]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4397};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */;
  data->localData[0]->realVars[265] /* der(reactor.psat[6]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[334] /* $cse101 variable */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[6]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"-16.00999999999999 + reactor.T_b[6]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4398
type: SIMPLE_ASSIGN
$DER.reactor.particle[6].particle_Radu2017_085.sorbent.A = if reactor.pvap[6] >= reactor.psat[6] then 0.0 else (-8.31446261815324) * (reactor.T_b[6] * ($DER.reactor.pvap[6] * reactor.psat[6] - reactor.pvap[6] * $DER.reactor.psat[6]) / reactor.psat[6] ^ 2.0 * reactor.psat[6] / reactor.pvap[6] + der(reactor.T_b[6]) * log(reactor.pvap[6] / reactor.psat[6]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4398};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */, data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */, 14, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */,"reactor.psat[6]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[6] / reactor.psat[6]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */) * (data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */) - ((data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */) * (data->localData[0]->realVars[265] /* der(reactor.psat[6]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[6] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */),data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,"reactor.pvap[6]",equationIndexes)) + (data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[245] /* der(reactor.particle[6].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4399
type: SIMPLE_ASSIGN
reactor.qh3[6] = 1996.0 * reactor.M_v[6] * der(reactor.T_b[6]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4399};
  data->localData[0]->realVars[2332] /* reactor.qh3[6] variable */ = (1996.0) * ((data->localData[0]->realVars[740] /* reactor.M_v[6] DUMMY_STATE */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4400
type: SIMPLE_ASSIGN
reactor.qm2[6] = reactor.V_v[6] * der(reactor.gama_i[6]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4400};
  data->localData[0]->realVars[2492] /* reactor.qm2[6] variable */ = (data->localData[0]->realVars[938] /* reactor.V_v[6] DUMMY_STATE */) * ((data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4401
type: SIMPLE_ASSIGN
$DER.reactor.w[6] = reactor.w[6] * (-reactor.particle[6].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[6].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4401};
  data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */ = (data->localData[0]->realVars[2639] /* reactor.w[6] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[754] /* reactor.particle[6].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[245] /* der(reactor.particle[6].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4402
type: SIMPLE_ASSIGN
reactor.qm3[6] = reactor.gama_i[6] * reactor.V_b[6] * reactor.particle[6].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[6] * reactor.dN / reactor.particle[6].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4402};
  data->localData[0]->realVars[2512] /* reactor.qm3[6] variable */ = (data->localData[0]->realVars[45] /* reactor.gama_i[6] STATE(1) */) * ((data->localData[0]->realVars[913] /* reactor.V_b[6] variable */) * ((data->simulationInfo->realParameter[954] /* reactor.particle[6].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[554] /* reactor.particle[6].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[6].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4403
type: SIMPLE_ASSIGN
reactor.qh4[6] = (-reactor.M_a[6]) * $DER.reactor.w[6] * reactor.particle[6].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4403};
  data->localData[0]->realVars[2352] /* reactor.qh4[6] variable */ = ((-data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */)) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * ((data->simulationInfo->realParameter[694] /* reactor.particle[6].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4404
type: SIMPLE_ASSIGN
$DER.reactor.V_v[6] = reactor.V_b[6] * (-reactor.particle[6].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[6] / reactor.particle[6].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4404};
  data->localData[0]->realVars[205] /* der(reactor.V_v[6]) DUMMY_DER */ = (data->localData[0]->realVars[913] /* reactor.V_b[6] variable */) * (((-data->simulationInfo->realParameter[954] /* reactor.particle[6].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */,data->simulationInfo->realParameter[554] /* reactor.particle[6].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[6].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4405
type: SIMPLE_ASSIGN
$DER.reactor.M_v[6] = reactor.V_v[6] * der(reactor.gama_i[6]) + $DER.reactor.V_v[6] * reactor.gama_i[6]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4405};
  data->localData[0]->realVars[185] /* der(reactor.M_v[6]) DUMMY_DER */ = (data->localData[0]->realVars[938] /* reactor.V_v[6] DUMMY_STATE */) * (data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */) + (data->localData[0]->realVars[205] /* der(reactor.V_v[6]) DUMMY_DER */) * (data->localData[0]->realVars[45] /* reactor.gama_i[6] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4406
type: SIMPLE_ASSIGN
reactor.qh5[6] = reactor.h_vi[6] * $DER.reactor.M_v[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4406};
  data->localData[0]->realVars[2372] /* reactor.qh5[6] variable */ = (data->localData[0]->realVars[1127] /* reactor.h_vi[6] variable */) * ((data->localData[0]->realVars[185] /* der(reactor.M_v[6]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4407
type: SIMPLE_ASSIGN
reactor.qm1[6] = reactor.M_a[6] * $DER.reactor.w[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4407};
  data->localData[0]->realVars[2472] /* reactor.qm1[6] variable */ = (data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4408
type: SIMPLE_ASSIGN
reactor.qh2[6] = reactor.particle[6].particle_Radu2017_085.M_l * reactor.c_l[6] * der(reactor.T_b[6]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4408};
  data->localData[0]->realVars[2312] /* reactor.qh2[6] variable */ = (data->localData[0]->realVars[1472] /* reactor.particle[6].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[998] /* reactor.c_l[6] variable */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4409
type: SIMPLE_ASSIGN
reactor.qh1[6] = reactor.M_a[6] * reactor.particle[6].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[6]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4409};
  data->localData[0]->realVars[2232] /* reactor.qh1[6] variable */ = (data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */) * ((data->simulationInfo->realParameter[774] /* reactor.particle[6].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4428(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4428};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4396(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4397(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4398(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4399(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4400(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4401(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4402(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4403(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4404(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4405(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4406(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4407(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4408(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4409(data, threadData);
  res[0] = data->localData[0]->realVars[2572] /* reactor.qm6[6] variable */ + data->localData[0]->realVars[2552] /* reactor.qm5[6] variable */ + data->localData[0]->realVars[2532] /* reactor.qm4[6] variable */ + (-data->localData[0]->realVars[2492] /* reactor.qm2[6] variable */) - data->localData[0]->realVars[2472] /* reactor.qm1[6] variable */ - data->localData[0]->realVars[2512] /* reactor.qm3[6] variable */;

  res[1] = data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ + data->localData[0]->realVars[2272] /* reactor.qh11[6] variable */ + data->localData[0]->realVars[2252] /* reactor.qh10[6] variable */ + data->localData[0]->realVars[2452] /* reactor.qh9[6] variable */ + data->localData[0]->realVars[2432] /* reactor.qh8[6] variable */ + data->localData[0]->realVars[2412] /* reactor.qh7[6] variable */ + data->localData[0]->realVars[2392] /* reactor.qh6[6] variable */ + (-data->localData[0]->realVars[2312] /* reactor.qh2[6] variable */) - data->localData[0]->realVars[2232] /* reactor.qh1[6] variable */ - data->localData[0]->realVars[2332] /* reactor.qh3[6] variable */ - data->localData[0]->realVars[2352] /* reactor.qh4[6] variable */ - data->localData[0]->realVars[2372] /* reactor.qh5[6] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4428(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[6]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.max;
  /* static ls data for der(reactor.pvap[6]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.max;
}


/*
equation index: 4369
type: SIMPLE_ASSIGN
reactor.heatBoundary[6].Q = (reactor.T_b[6] - reactor.T_c[6]) / reactor.particle[6].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4369};
  data->localData[0]->realVars[1147] /* reactor.heatBoundary[6].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */ - data->localData[0]->realVars[886] /* reactor.T_c[6] variable */,data->localData[0]->realVars[1352] /* reactor.particle[6].contactResistance_SiuLee.Rss variable */,"reactor.particle[6].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4370
type: SIMPLE_ASSIGN
reactor.qh12[6] = reactor.U_t * reactor.dA * (reactor.T_h[6] - reactor.T_c[6])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4370};
  data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[25] /* reactor.T_h[6] STATE(1) */ - data->localData[0]->realVars[886] /* reactor.T_c[6] variable */));
  TRACE_POP
}

void residualFunc4375(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4375};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[886] /* reactor.T_c[6] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4369(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4370(data, threadData);
  res[0] = data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ + (data->localData[0]->realVars[1147] /* reactor.heatBoundary[6].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4375(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[6] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.max;
}


/*
equation index: 4307
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[5] = 0.120272355042726 * reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[5] * reactor.T_b[5] - reactor.pvap[5] * der(reactor.T_b[5])) / reactor.T_b[5] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4307};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */;
  data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[333] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */) - ((data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */) * (data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[5] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4308
type: SIMPLE_ASSIGN
$DER.reactor.psat[5] = 611.21 * $cse105 * der(reactor.T_b[5]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[5]) * 257.14 / (-16.00999999999999 + reactor.T_b[5]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[5]) / (-16.00999999999999 + reactor.T_b[5]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4308};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */;
  data->localData[0]->realVars[264] /* der(reactor.psat[5]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[350] /* $cse105 variable */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[5]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"-16.00999999999999 + reactor.T_b[5]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4309
type: SIMPLE_ASSIGN
$DER.reactor.particle[5].particle_Radu2017_085.sorbent.A = if reactor.pvap[5] >= reactor.psat[5] then 0.0 else (-8.31446261815324) * (reactor.T_b[5] * ($DER.reactor.pvap[5] * reactor.psat[5] - reactor.pvap[5] * $DER.reactor.psat[5]) / reactor.psat[5] ^ 2.0 * reactor.psat[5] / reactor.pvap[5] + der(reactor.T_b[5]) * log(reactor.pvap[5] / reactor.psat[5]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4309};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */, data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */, 15, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */,"reactor.psat[5]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[5] / reactor.psat[5]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */) * (data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */) - ((data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */) * (data->localData[0]->realVars[264] /* der(reactor.psat[5]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[5] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */),data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,"reactor.pvap[5]",equationIndexes)) + (data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[244] /* der(reactor.particle[5].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4310
type: SIMPLE_ASSIGN
$DER.reactor.w[5] = reactor.w[5] * (-reactor.particle[5].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[5].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4310};
  data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */ = (data->localData[0]->realVars[2638] /* reactor.w[5] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[753] /* reactor.particle[5].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[244] /* der(reactor.particle[5].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4311
type: SIMPLE_ASSIGN
reactor.qm3[5] = reactor.gama_i[5] * reactor.V_b[5] * reactor.particle[5].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[5] * reactor.dN / reactor.particle[5].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4311};
  data->localData[0]->realVars[2511] /* reactor.qm3[5] variable */ = (data->localData[0]->realVars[44] /* reactor.gama_i[5] STATE(1) */) * ((data->localData[0]->realVars[912] /* reactor.V_b[5] variable */) * ((data->simulationInfo->realParameter[953] /* reactor.particle[5].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[553] /* reactor.particle[5].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[5].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4312
type: SIMPLE_ASSIGN
reactor.qm2[5] = reactor.V_v[5] * der(reactor.gama_i[5]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4312};
  data->localData[0]->realVars[2491] /* reactor.qm2[5] variable */ = (data->localData[0]->realVars[937] /* reactor.V_v[5] DUMMY_STATE */) * ((data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4313
type: SIMPLE_ASSIGN
reactor.qh1[5] = reactor.M_a[5] * reactor.particle[5].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[5]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4313};
  data->localData[0]->realVars[2231] /* reactor.qh1[5] variable */ = (data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */) * ((data->simulationInfo->realParameter[773] /* reactor.particle[5].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4314
type: SIMPLE_ASSIGN
reactor.qh3[5] = 1996.0 * reactor.M_v[5] * der(reactor.T_b[5]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4314};
  data->localData[0]->realVars[2331] /* reactor.qh3[5] variable */ = (1996.0) * ((data->localData[0]->realVars[739] /* reactor.M_v[5] DUMMY_STATE */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4315
type: SIMPLE_ASSIGN
reactor.qh2[5] = reactor.particle[5].particle_Radu2017_085.M_l * reactor.c_l[5] * der(reactor.T_b[5]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4315};
  data->localData[0]->realVars[2311] /* reactor.qh2[5] variable */ = (data->localData[0]->realVars[1471] /* reactor.particle[5].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[997] /* reactor.c_l[5] variable */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4316
type: SIMPLE_ASSIGN
reactor.qh4[5] = (-reactor.M_a[5]) * $DER.reactor.w[5] * reactor.particle[5].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4316};
  data->localData[0]->realVars[2351] /* reactor.qh4[5] variable */ = ((-data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */)) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * ((data->simulationInfo->realParameter[693] /* reactor.particle[5].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4317
type: SIMPLE_ASSIGN
$DER.reactor.V_v[5] = reactor.V_b[5] * (-reactor.particle[5].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[5] / reactor.particle[5].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4317};
  data->localData[0]->realVars[204] /* der(reactor.V_v[5]) DUMMY_DER */ = (data->localData[0]->realVars[912] /* reactor.V_b[5] variable */) * (((-data->simulationInfo->realParameter[953] /* reactor.particle[5].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */,data->simulationInfo->realParameter[553] /* reactor.particle[5].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[5].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4318
type: SIMPLE_ASSIGN
$DER.reactor.M_v[5] = reactor.V_v[5] * der(reactor.gama_i[5]) + $DER.reactor.V_v[5] * reactor.gama_i[5]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4318};
  data->localData[0]->realVars[184] /* der(reactor.M_v[5]) DUMMY_DER */ = (data->localData[0]->realVars[937] /* reactor.V_v[5] DUMMY_STATE */) * (data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */) + (data->localData[0]->realVars[204] /* der(reactor.V_v[5]) DUMMY_DER */) * (data->localData[0]->realVars[44] /* reactor.gama_i[5] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4319
type: SIMPLE_ASSIGN
reactor.qh5[5] = reactor.h_vi[5] * $DER.reactor.M_v[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4319};
  data->localData[0]->realVars[2371] /* reactor.qh5[5] variable */ = (data->localData[0]->realVars[1126] /* reactor.h_vi[5] variable */) * ((data->localData[0]->realVars[184] /* der(reactor.M_v[5]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4320
type: SIMPLE_ASSIGN
reactor.qm1[5] = reactor.M_a[5] * $DER.reactor.w[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4320};
  data->localData[0]->realVars[2471] /* reactor.qm1[5] variable */ = (data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc4339(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4339};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4307(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4308(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4309(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4310(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4311(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4312(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4313(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4314(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4315(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4316(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4317(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4318(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4319(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4320(data, threadData);
  res[0] = data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ + data->localData[0]->realVars[2271] /* reactor.qh11[5] variable */ + data->localData[0]->realVars[2251] /* reactor.qh10[5] variable */ + data->localData[0]->realVars[2451] /* reactor.qh9[5] variable */ + data->localData[0]->realVars[2431] /* reactor.qh8[5] variable */ + data->localData[0]->realVars[2411] /* reactor.qh7[5] variable */ + data->localData[0]->realVars[2391] /* reactor.qh6[5] variable */ + (-data->localData[0]->realVars[2311] /* reactor.qh2[5] variable */) - data->localData[0]->realVars[2231] /* reactor.qh1[5] variable */ - data->localData[0]->realVars[2331] /* reactor.qh3[5] variable */ - data->localData[0]->realVars[2351] /* reactor.qh4[5] variable */ - data->localData[0]->realVars[2371] /* reactor.qh5[5] variable */;

  res[1] = data->localData[0]->realVars[2571] /* reactor.qm6[5] variable */ + data->localData[0]->realVars[2551] /* reactor.qm5[5] variable */ + data->localData[0]->realVars[2531] /* reactor.qm4[5] variable */ + (-data->localData[0]->realVars[2491] /* reactor.qm2[5] variable */) - data->localData[0]->realVars[2471] /* reactor.qm1[5] variable */ - data->localData[0]->realVars[2511] /* reactor.qm3[5] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4339(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[5]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.max;
  /* static ls data for der(reactor.T_b[5]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.max;
}


/*
equation index: 4280
type: SIMPLE_ASSIGN
reactor.heatBoundary[5].Q = (reactor.T_b[5] - reactor.T_c[5]) / reactor.particle[5].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4280};
  data->localData[0]->realVars[1146] /* reactor.heatBoundary[5].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */ - data->localData[0]->realVars[885] /* reactor.T_c[5] variable */,data->localData[0]->realVars[1351] /* reactor.particle[5].contactResistance_SiuLee.Rss variable */,"reactor.particle[5].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4281
type: SIMPLE_ASSIGN
reactor.qh12[5] = reactor.U_t * reactor.dA * (reactor.T_h[5] - reactor.T_c[5])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4281};
  data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[24] /* reactor.T_h[5] STATE(1) */ - data->localData[0]->realVars[885] /* reactor.T_c[5] variable */));
  TRACE_POP
}

void residualFunc4286(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4286};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[885] /* reactor.T_c[5] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4280(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4281(data, threadData);
  res[0] = data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ + (data->localData[0]->realVars[1146] /* reactor.heatBoundary[5].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4286(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[5] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.max;
}


/*
equation index: 4217
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[4] = 0.120272355042726 * reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[4] * reactor.T_b[4] - reactor.pvap[4] * der(reactor.T_b[4])) / reactor.T_b[4] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4217};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */;
  data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[332] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */) - ((data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */) * (data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[4] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4218
type: SIMPLE_ASSIGN
$DER.reactor.psat[4] = 611.21 * $cse109 * der(reactor.T_b[4]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[4]) * 257.14 / (-16.00999999999999 + reactor.T_b[4]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[4]) / (-16.00999999999999 + reactor.T_b[4]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4218};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */;
  data->localData[0]->realVars[263] /* der(reactor.psat[4]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[366] /* $cse109 variable */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[4]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"-16.00999999999999 + reactor.T_b[4]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4219
type: SIMPLE_ASSIGN
$DER.reactor.particle[4].particle_Radu2017_085.sorbent.A = if reactor.pvap[4] >= reactor.psat[4] then 0.0 else (-8.31446261815324) * (reactor.T_b[4] * ($DER.reactor.pvap[4] * reactor.psat[4] - reactor.pvap[4] * $DER.reactor.psat[4]) / reactor.psat[4] ^ 2.0 * reactor.psat[4] / reactor.pvap[4] + der(reactor.T_b[4]) * log(reactor.pvap[4] / reactor.psat[4]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4219};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */, data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */, 16, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */,"reactor.psat[4]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[4] / reactor.psat[4]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */) * (data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */) - ((data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */) * (data->localData[0]->realVars[263] /* der(reactor.psat[4]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[4] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */),data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,"reactor.pvap[4]",equationIndexes)) + (data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[243] /* der(reactor.particle[4].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4220
type: SIMPLE_ASSIGN
reactor.qm2[4] = reactor.V_v[4] * der(reactor.gama_i[4]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4220};
  data->localData[0]->realVars[2490] /* reactor.qm2[4] variable */ = (data->localData[0]->realVars[936] /* reactor.V_v[4] DUMMY_STATE */) * ((data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4221
type: SIMPLE_ASSIGN
reactor.qh1[4] = reactor.M_a[4] * reactor.particle[4].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[4]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4221};
  data->localData[0]->realVars[2230] /* reactor.qh1[4] variable */ = (data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */) * ((data->simulationInfo->realParameter[772] /* reactor.particle[4].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4222
type: SIMPLE_ASSIGN
reactor.qh3[4] = 1996.0 * reactor.M_v[4] * der(reactor.T_b[4]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4222};
  data->localData[0]->realVars[2330] /* reactor.qh3[4] variable */ = (1996.0) * ((data->localData[0]->realVars[738] /* reactor.M_v[4] DUMMY_STATE */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4223
type: SIMPLE_ASSIGN
reactor.qh2[4] = reactor.particle[4].particle_Radu2017_085.M_l * reactor.c_l[4] * der(reactor.T_b[4]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4223};
  data->localData[0]->realVars[2310] /* reactor.qh2[4] variable */ = (data->localData[0]->realVars[1470] /* reactor.particle[4].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[996] /* reactor.c_l[4] variable */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4224
type: SIMPLE_ASSIGN
$DER.reactor.w[4] = reactor.w[4] * (-reactor.particle[4].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[4].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4224};
  data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */ = (data->localData[0]->realVars[2637] /* reactor.w[4] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[752] /* reactor.particle[4].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[243] /* der(reactor.particle[4].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4225
type: SIMPLE_ASSIGN
reactor.qm3[4] = reactor.gama_i[4] * reactor.V_b[4] * reactor.particle[4].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[4] * reactor.dN / reactor.particle[4].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4225};
  data->localData[0]->realVars[2510] /* reactor.qm3[4] variable */ = (data->localData[0]->realVars[43] /* reactor.gama_i[4] STATE(1) */) * ((data->localData[0]->realVars[911] /* reactor.V_b[4] variable */) * ((data->simulationInfo->realParameter[952] /* reactor.particle[4].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[552] /* reactor.particle[4].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[4].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4226
type: SIMPLE_ASSIGN
reactor.qm1[4] = reactor.M_a[4] * $DER.reactor.w[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4226};
  data->localData[0]->realVars[2470] /* reactor.qm1[4] variable */ = (data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4227
type: SIMPLE_ASSIGN
reactor.qh4[4] = (-reactor.M_a[4]) * $DER.reactor.w[4] * reactor.particle[4].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4227};
  data->localData[0]->realVars[2350] /* reactor.qh4[4] variable */ = ((-data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */)) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * ((data->simulationInfo->realParameter[692] /* reactor.particle[4].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4228
type: SIMPLE_ASSIGN
$DER.reactor.V_v[4] = reactor.V_b[4] * (-reactor.particle[4].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[4] / reactor.particle[4].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4228};
  data->localData[0]->realVars[203] /* der(reactor.V_v[4]) DUMMY_DER */ = (data->localData[0]->realVars[911] /* reactor.V_b[4] variable */) * (((-data->simulationInfo->realParameter[952] /* reactor.particle[4].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */,data->simulationInfo->realParameter[552] /* reactor.particle[4].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[4].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4229
type: SIMPLE_ASSIGN
$DER.reactor.M_v[4] = reactor.V_v[4] * der(reactor.gama_i[4]) + $DER.reactor.V_v[4] * reactor.gama_i[4]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4229};
  data->localData[0]->realVars[183] /* der(reactor.M_v[4]) DUMMY_DER */ = (data->localData[0]->realVars[936] /* reactor.V_v[4] DUMMY_STATE */) * (data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */) + (data->localData[0]->realVars[203] /* der(reactor.V_v[4]) DUMMY_DER */) * (data->localData[0]->realVars[43] /* reactor.gama_i[4] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4230
type: SIMPLE_ASSIGN
reactor.qh5[4] = reactor.h_vi[4] * $DER.reactor.M_v[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4230};
  data->localData[0]->realVars[2370] /* reactor.qh5[4] variable */ = (data->localData[0]->realVars[1125] /* reactor.h_vi[4] variable */) * ((data->localData[0]->realVars[183] /* der(reactor.M_v[4]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc4249(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4249};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4217(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4218(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4219(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4220(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4221(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4222(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4223(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4224(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4225(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4226(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4227(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4228(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4229(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4230(data, threadData);
  res[0] = data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ + data->localData[0]->realVars[2270] /* reactor.qh11[4] variable */ + data->localData[0]->realVars[2250] /* reactor.qh10[4] variable */ + data->localData[0]->realVars[2450] /* reactor.qh9[4] variable */ + data->localData[0]->realVars[2430] /* reactor.qh8[4] variable */ + data->localData[0]->realVars[2410] /* reactor.qh7[4] variable */ + data->localData[0]->realVars[2390] /* reactor.qh6[4] variable */ + (-data->localData[0]->realVars[2310] /* reactor.qh2[4] variable */) - data->localData[0]->realVars[2230] /* reactor.qh1[4] variable */ - data->localData[0]->realVars[2330] /* reactor.qh3[4] variable */ - data->localData[0]->realVars[2350] /* reactor.qh4[4] variable */ - data->localData[0]->realVars[2370] /* reactor.qh5[4] variable */;

  res[1] = data->localData[0]->realVars[2570] /* reactor.qm6[4] variable */ + data->localData[0]->realVars[2550] /* reactor.qm5[4] variable */ + data->localData[0]->realVars[2530] /* reactor.qm4[4] variable */ + (-data->localData[0]->realVars[2490] /* reactor.qm2[4] variable */) - data->localData[0]->realVars[2470] /* reactor.qm1[4] variable */ - data->localData[0]->realVars[2510] /* reactor.qm3[4] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4249(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.max;
  /* static ls data for der(reactor.T_b[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.max;
}


/*
equation index: 4190
type: SIMPLE_ASSIGN
reactor.heatBoundary[4].Q = (reactor.T_b[4] - reactor.T_c[4]) / reactor.particle[4].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4190};
  data->localData[0]->realVars[1145] /* reactor.heatBoundary[4].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */ - data->localData[0]->realVars[884] /* reactor.T_c[4] variable */,data->localData[0]->realVars[1350] /* reactor.particle[4].contactResistance_SiuLee.Rss variable */,"reactor.particle[4].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4191
type: SIMPLE_ASSIGN
reactor.qh12[4] = reactor.U_t * reactor.dA * (reactor.T_h[4] - reactor.T_c[4])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4191};
  data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[23] /* reactor.T_h[4] STATE(1) */ - data->localData[0]->realVars[884] /* reactor.T_c[4] variable */));
  TRACE_POP
}

void residualFunc4196(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4196};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[884] /* reactor.T_c[4] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4190(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4191(data, threadData);
  res[0] = data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ + (data->localData[0]->realVars[1145] /* reactor.heatBoundary[4].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4196(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[4] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.max;
}


/*
equation index: 4128
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[3] = 0.120272355042726 * reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[3] * reactor.T_b[3] - reactor.pvap[3] * der(reactor.T_b[3])) / reactor.T_b[3] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4128};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */;
  data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[331] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */) - ((data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */) * (data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[3] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4129
type: SIMPLE_ASSIGN
$DER.reactor.psat[3] = 611.21 * $cse113 * der(reactor.T_b[3]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[3]) * 257.14 / (-16.00999999999999 + reactor.T_b[3]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[3]) / (-16.00999999999999 + reactor.T_b[3]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4129};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */;
  data->localData[0]->realVars[262] /* der(reactor.psat[3]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[382] /* $cse113 variable */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[3]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"-16.00999999999999 + reactor.T_b[3]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4130
type: SIMPLE_ASSIGN
$DER.reactor.particle[3].particle_Radu2017_085.sorbent.A = if reactor.pvap[3] >= reactor.psat[3] then 0.0 else (-8.31446261815324) * (reactor.T_b[3] * ($DER.reactor.pvap[3] * reactor.psat[3] - reactor.pvap[3] * $DER.reactor.psat[3]) / reactor.psat[3] ^ 2.0 * reactor.psat[3] / reactor.pvap[3] + der(reactor.T_b[3]) * log(reactor.pvap[3] / reactor.psat[3]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4130};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */, data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */, 17, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */,"reactor.psat[3]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[3] / reactor.psat[3]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */) * (data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */) - ((data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */) * (data->localData[0]->realVars[262] /* der(reactor.psat[3]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[3] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */),data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,"reactor.pvap[3]",equationIndexes)) + (data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[242] /* der(reactor.particle[3].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4131
type: SIMPLE_ASSIGN
reactor.qh3[3] = 1996.0 * reactor.M_v[3] * der(reactor.T_b[3]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4131};
  data->localData[0]->realVars[2329] /* reactor.qh3[3] variable */ = (1996.0) * ((data->localData[0]->realVars[737] /* reactor.M_v[3] DUMMY_STATE */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4132
type: SIMPLE_ASSIGN
reactor.qm2[3] = reactor.V_v[3] * der(reactor.gama_i[3]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4132};
  data->localData[0]->realVars[2489] /* reactor.qm2[3] variable */ = (data->localData[0]->realVars[935] /* reactor.V_v[3] DUMMY_STATE */) * ((data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4133
type: SIMPLE_ASSIGN
$DER.reactor.w[3] = reactor.w[3] * (-reactor.particle[3].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[3].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4133};
  data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */ = (data->localData[0]->realVars[2636] /* reactor.w[3] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[751] /* reactor.particle[3].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[242] /* der(reactor.particle[3].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4134
type: SIMPLE_ASSIGN
reactor.qm3[3] = reactor.gama_i[3] * reactor.V_b[3] * reactor.particle[3].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[3] * reactor.dN / reactor.particle[3].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4134};
  data->localData[0]->realVars[2509] /* reactor.qm3[3] variable */ = (data->localData[0]->realVars[42] /* reactor.gama_i[3] STATE(1) */) * ((data->localData[0]->realVars[910] /* reactor.V_b[3] variable */) * ((data->simulationInfo->realParameter[951] /* reactor.particle[3].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[551] /* reactor.particle[3].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[3].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4135
type: SIMPLE_ASSIGN
reactor.qh4[3] = (-reactor.M_a[3]) * $DER.reactor.w[3] * reactor.particle[3].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4135};
  data->localData[0]->realVars[2349] /* reactor.qh4[3] variable */ = ((-data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * ((data->simulationInfo->realParameter[691] /* reactor.particle[3].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4136
type: SIMPLE_ASSIGN
$DER.reactor.V_v[3] = reactor.V_b[3] * (-reactor.particle[3].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[3] / reactor.particle[3].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4136};
  data->localData[0]->realVars[202] /* der(reactor.V_v[3]) DUMMY_DER */ = (data->localData[0]->realVars[910] /* reactor.V_b[3] variable */) * (((-data->simulationInfo->realParameter[951] /* reactor.particle[3].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */,data->simulationInfo->realParameter[551] /* reactor.particle[3].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[3].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4137
type: SIMPLE_ASSIGN
$DER.reactor.M_v[3] = reactor.V_v[3] * der(reactor.gama_i[3]) + $DER.reactor.V_v[3] * reactor.gama_i[3]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4137};
  data->localData[0]->realVars[182] /* der(reactor.M_v[3]) DUMMY_DER */ = (data->localData[0]->realVars[935] /* reactor.V_v[3] DUMMY_STATE */) * (data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */) + (data->localData[0]->realVars[202] /* der(reactor.V_v[3]) DUMMY_DER */) * (data->localData[0]->realVars[42] /* reactor.gama_i[3] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4138
type: SIMPLE_ASSIGN
reactor.qh5[3] = reactor.h_vi[3] * $DER.reactor.M_v[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4138};
  data->localData[0]->realVars[2369] /* reactor.qh5[3] variable */ = (data->localData[0]->realVars[1124] /* reactor.h_vi[3] variable */) * ((data->localData[0]->realVars[182] /* der(reactor.M_v[3]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4139
type: SIMPLE_ASSIGN
reactor.qm1[3] = reactor.M_a[3] * $DER.reactor.w[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4139};
  data->localData[0]->realVars[2469] /* reactor.qm1[3] variable */ = (data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4140
type: SIMPLE_ASSIGN
reactor.qh2[3] = reactor.particle[3].particle_Radu2017_085.M_l * reactor.c_l[3] * der(reactor.T_b[3]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4140};
  data->localData[0]->realVars[2309] /* reactor.qh2[3] variable */ = (data->localData[0]->realVars[1469] /* reactor.particle[3].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[995] /* reactor.c_l[3] variable */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4141
type: SIMPLE_ASSIGN
reactor.qh1[3] = reactor.M_a[3] * reactor.particle[3].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[3]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4141};
  data->localData[0]->realVars[2229] /* reactor.qh1[3] variable */ = (data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[771] /* reactor.particle[3].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4160(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4160};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4128(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4129(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4130(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4131(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4132(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4133(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4134(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4135(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4136(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4137(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4138(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4139(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4140(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4141(data, threadData);
  res[0] = data->localData[0]->realVars[2569] /* reactor.qm6[3] variable */ + data->localData[0]->realVars[2549] /* reactor.qm5[3] variable */ + data->localData[0]->realVars[2529] /* reactor.qm4[3] variable */ + (-data->localData[0]->realVars[2489] /* reactor.qm2[3] variable */) - data->localData[0]->realVars[2469] /* reactor.qm1[3] variable */ - data->localData[0]->realVars[2509] /* reactor.qm3[3] variable */;

  res[1] = data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ + data->localData[0]->realVars[2269] /* reactor.qh11[3] variable */ + data->localData[0]->realVars[2249] /* reactor.qh10[3] variable */ + data->localData[0]->realVars[2449] /* reactor.qh9[3] variable */ + data->localData[0]->realVars[2429] /* reactor.qh8[3] variable */ + data->localData[0]->realVars[2409] /* reactor.qh7[3] variable */ + data->localData[0]->realVars[2389] /* reactor.qh6[3] variable */ + (-data->localData[0]->realVars[2309] /* reactor.qh2[3] variable */) - data->localData[0]->realVars[2229] /* reactor.qh1[3] variable */ - data->localData[0]->realVars[2329] /* reactor.qh3[3] variable */ - data->localData[0]->realVars[2349] /* reactor.qh4[3] variable */ - data->localData[0]->realVars[2369] /* reactor.qh5[3] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4160(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.max;
  /* static ls data for der(reactor.pvap[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.max;
}


/*
equation index: 4101
type: SIMPLE_ASSIGN
reactor.heatBoundary[3].Q = (reactor.T_b[3] - reactor.T_c[3]) / reactor.particle[3].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4101};
  data->localData[0]->realVars[1144] /* reactor.heatBoundary[3].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */ - data->localData[0]->realVars[883] /* reactor.T_c[3] variable */,data->localData[0]->realVars[1349] /* reactor.particle[3].contactResistance_SiuLee.Rss variable */,"reactor.particle[3].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4102
type: SIMPLE_ASSIGN
reactor.qh12[3] = reactor.U_t * reactor.dA * (reactor.T_h[3] - reactor.T_c[3])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4102};
  data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[22] /* reactor.T_h[3] STATE(1) */ - data->localData[0]->realVars[883] /* reactor.T_c[3] variable */));
  TRACE_POP
}

void residualFunc4107(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4107};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[883] /* reactor.T_c[3] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4101(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4102(data, threadData);
  res[0] = data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ + (data->localData[0]->realVars[1144] /* reactor.heatBoundary[3].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4107(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.max;
}


/*
equation index: 4039
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[2] = 0.120272355042726 * reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[2] * reactor.T_b[2] - reactor.pvap[2] * der(reactor.T_b[2])) / reactor.T_b[2] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4039};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */;
  data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[330] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */) - ((data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */) * (data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[2] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4040
type: SIMPLE_ASSIGN
$DER.reactor.psat[2] = 611.21 * $cse117 * der(reactor.T_b[2]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[2]) * 257.14 / (-16.00999999999999 + reactor.T_b[2]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[2]) / (-16.00999999999999 + reactor.T_b[2]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4040};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */;
  data->localData[0]->realVars[261] /* der(reactor.psat[2]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[398] /* $cse117 variable */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[2]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"-16.00999999999999 + reactor.T_b[2]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4041
type: SIMPLE_ASSIGN
$DER.reactor.particle[2].particle_Radu2017_085.sorbent.A = if reactor.pvap[2] >= reactor.psat[2] then 0.0 else (-8.31446261815324) * (reactor.T_b[2] * ($DER.reactor.pvap[2] * reactor.psat[2] - reactor.pvap[2] * $DER.reactor.psat[2]) / reactor.psat[2] ^ 2.0 * reactor.psat[2] / reactor.pvap[2] + der(reactor.T_b[2]) * log(reactor.pvap[2] / reactor.psat[2]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4041};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */, data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */, 18, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */,"reactor.psat[2]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[2] / reactor.psat[2]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */) * (data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */) - ((data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */) * (data->localData[0]->realVars[261] /* der(reactor.psat[2]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[2] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */),data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,"reactor.pvap[2]",equationIndexes)) + (data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[241] /* der(reactor.particle[2].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 4042
type: SIMPLE_ASSIGN
reactor.qm2[2] = reactor.V_v[2] * der(reactor.gama_i[2]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4042};
  data->localData[0]->realVars[2488] /* reactor.qm2[2] variable */ = (data->localData[0]->realVars[934] /* reactor.V_v[2] DUMMY_STATE */) * ((data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4043
type: SIMPLE_ASSIGN
reactor.qh2[2] = reactor.particle[2].particle_Radu2017_085.M_l * reactor.c_l[2] * der(reactor.T_b[2]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4043};
  data->localData[0]->realVars[2308] /* reactor.qh2[2] variable */ = (data->localData[0]->realVars[1468] /* reactor.particle[2].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[994] /* reactor.c_l[2] variable */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4044
type: SIMPLE_ASSIGN
reactor.qh3[2] = 1996.0 * reactor.M_v[2] * der(reactor.T_b[2]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4044};
  data->localData[0]->realVars[2328] /* reactor.qh3[2] variable */ = (1996.0) * ((data->localData[0]->realVars[736] /* reactor.M_v[2] DUMMY_STATE */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4045
type: SIMPLE_ASSIGN
reactor.qh1[2] = reactor.M_a[2] * reactor.particle[2].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[2]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4045};
  data->localData[0]->realVars[2228] /* reactor.qh1[2] variable */ = (data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[770] /* reactor.particle[2].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 4046
type: SIMPLE_ASSIGN
$DER.reactor.w[2] = reactor.w[2] * (-reactor.particle[2].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[2].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4046};
  data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */ = (data->localData[0]->realVars[2635] /* reactor.w[2] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[750] /* reactor.particle[2].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[241] /* der(reactor.particle[2].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 4047
type: SIMPLE_ASSIGN
reactor.qm3[2] = reactor.gama_i[2] * reactor.V_b[2] * reactor.particle[2].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[2] * reactor.dN / reactor.particle[2].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4047};
  data->localData[0]->realVars[2508] /* reactor.qm3[2] variable */ = (data->localData[0]->realVars[41] /* reactor.gama_i[2] STATE(1) */) * ((data->localData[0]->realVars[909] /* reactor.V_b[2] variable */) * ((data->simulationInfo->realParameter[950] /* reactor.particle[2].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[550] /* reactor.particle[2].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[2].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 4048
type: SIMPLE_ASSIGN
reactor.qm1[2] = reactor.M_a[2] * $DER.reactor.w[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4048};
  data->localData[0]->realVars[2468] /* reactor.qm1[2] variable */ = (data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4049
type: SIMPLE_ASSIGN
$DER.reactor.V_v[2] = reactor.V_b[2] * (-reactor.particle[2].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[2] / reactor.particle[2].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4049};
  data->localData[0]->realVars[201] /* der(reactor.V_v[2]) DUMMY_DER */ = (data->localData[0]->realVars[909] /* reactor.V_b[2] variable */) * (((-data->simulationInfo->realParameter[950] /* reactor.particle[2].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */,data->simulationInfo->realParameter[550] /* reactor.particle[2].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[2].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 4050
type: SIMPLE_ASSIGN
$DER.reactor.M_v[2] = reactor.V_v[2] * der(reactor.gama_i[2]) + $DER.reactor.V_v[2] * reactor.gama_i[2]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4050};
  data->localData[0]->realVars[181] /* der(reactor.M_v[2]) DUMMY_DER */ = (data->localData[0]->realVars[934] /* reactor.V_v[2] DUMMY_STATE */) * (data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */) + (data->localData[0]->realVars[201] /* der(reactor.V_v[2]) DUMMY_DER */) * (data->localData[0]->realVars[41] /* reactor.gama_i[2] STATE(1) */);
  TRACE_POP
}
/*
equation index: 4051
type: SIMPLE_ASSIGN
reactor.qh5[2] = reactor.h_vi[2] * $DER.reactor.M_v[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4051};
  data->localData[0]->realVars[2368] /* reactor.qh5[2] variable */ = (data->localData[0]->realVars[1123] /* reactor.h_vi[2] variable */) * ((data->localData[0]->realVars[181] /* der(reactor.M_v[2]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 4052
type: SIMPLE_ASSIGN
reactor.qh4[2] = (-reactor.M_a[2]) * $DER.reactor.w[2] * reactor.particle[2].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4052};
  data->localData[0]->realVars[2348] /* reactor.qh4[2] variable */ = ((-data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * ((data->simulationInfo->realParameter[690] /* reactor.particle[2].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc4071(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4071};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4039(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4040(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4041(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4042(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4043(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4044(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4045(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4046(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4047(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4048(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4049(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4050(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4051(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4052(data, threadData);
  res[0] = data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ + data->localData[0]->realVars[2268] /* reactor.qh11[2] variable */ + data->localData[0]->realVars[2248] /* reactor.qh10[2] variable */ + data->localData[0]->realVars[2448] /* reactor.qh9[2] variable */ + data->localData[0]->realVars[2428] /* reactor.qh8[2] variable */ + data->localData[0]->realVars[2408] /* reactor.qh7[2] variable */ + data->localData[0]->realVars[2388] /* reactor.qh6[2] variable */ + (-data->localData[0]->realVars[2308] /* reactor.qh2[2] variable */) - data->localData[0]->realVars[2228] /* reactor.qh1[2] variable */ - data->localData[0]->realVars[2328] /* reactor.qh3[2] variable */ - data->localData[0]->realVars[2348] /* reactor.qh4[2] variable */ - data->localData[0]->realVars[2368] /* reactor.qh5[2] variable */;

  res[1] = data->localData[0]->realVars[2568] /* reactor.qm6[2] variable */ + data->localData[0]->realVars[2548] /* reactor.qm5[2] variable */ + data->localData[0]->realVars[2528] /* reactor.qm4[2] variable */ + (-data->localData[0]->realVars[2488] /* reactor.qm2[2] variable */) - data->localData[0]->realVars[2468] /* reactor.qm1[2] variable */ - data->localData[0]->realVars[2508] /* reactor.qm3[2] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4071(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.max;
  /* static ls data for der(reactor.T_b[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.max;
}


/*
equation index: 4012
type: SIMPLE_ASSIGN
reactor.heatBoundary[2].Q = (reactor.T_b[2] - reactor.T_c[2]) / reactor.particle[2].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4012};
  data->localData[0]->realVars[1143] /* reactor.heatBoundary[2].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */ - data->localData[0]->realVars[882] /* reactor.T_c[2] variable */,data->localData[0]->realVars[1348] /* reactor.particle[2].contactResistance_SiuLee.Rss variable */,"reactor.particle[2].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 4013
type: SIMPLE_ASSIGN
reactor.qh12[2] = reactor.U_t * reactor.dA * (reactor.T_h[2] - reactor.T_c[2])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4013};
  data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[21] /* reactor.T_h[2] STATE(1) */ - data->localData[0]->realVars[882] /* reactor.T_c[2] variable */));
  TRACE_POP
}

void residualFunc4018(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,4018};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[882] /* reactor.T_c[2] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4012(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_4013(data, threadData);
  res[0] = data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ + (data->localData[0]->realVars[1143] /* reactor.heatBoundary[2].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData4018(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.max;
}


/*
equation index: 3950
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[1] = 0.120272355042726 * reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[1] * reactor.T_b[1] - reactor.pvap[1] * der(reactor.T_b[1])) / reactor.T_b[1] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3950};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */;
  data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[329] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */) - ((data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */) * (data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[1] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 3951
type: SIMPLE_ASSIGN
$DER.reactor.psat[1] = 611.21 * $cse121 * der(reactor.T_b[1]) * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[1]) * 257.14 / (-16.00999999999999 + reactor.T_b[1]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[1]) / (-16.00999999999999 + reactor.T_b[1]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3951};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */;
  data->localData[0]->realVars[260] /* der(reactor.psat[1]) DUMMY_DER */ = (611.21) * ((data->localData[0]->realVars[414] /* $cse121 variable */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[1]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"-16.00999999999999 + reactor.T_b[1]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 3952
type: SIMPLE_ASSIGN
$DER.reactor.particle[1].particle_Radu2017_085.sorbent.A = if reactor.pvap[1] >= reactor.psat[1] then 0.0 else (-8.31446261815324) * (reactor.T_b[1] * ($DER.reactor.pvap[1] * reactor.psat[1] - reactor.pvap[1] * $DER.reactor.psat[1]) / reactor.psat[1] ^ 2.0 * reactor.psat[1] / reactor.pvap[1] + der(reactor.T_b[1]) * log(reactor.pvap[1] / reactor.psat[1]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3952};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */, data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */, 19, GreaterEq);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */,"reactor.psat[1]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[1] / reactor.psat[1]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */) * (data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */) - ((data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */) * (data->localData[0]->realVars[260] /* der(reactor.psat[1]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[1] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */),data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,"reactor.pvap[1]",equationIndexes)) + (data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[240] /* der(reactor.particle[1].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 3953
type: SIMPLE_ASSIGN
reactor.qh3[1] = 1996.0 * reactor.M_v[1] * der(reactor.T_b[1]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3953};
  data->localData[0]->realVars[2327] /* reactor.qh3[1] variable */ = (1996.0) * ((data->localData[0]->realVars[735] /* reactor.M_v[1] DUMMY_STATE */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 3954
type: SIMPLE_ASSIGN
reactor.qm2[1] = reactor.V_v[1] * der(reactor.gama_i[1]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3954};
  data->localData[0]->realVars[2487] /* reactor.qm2[1] variable */ = (data->localData[0]->realVars[933] /* reactor.V_v[1] DUMMY_STATE */) * ((data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 3955
type: SIMPLE_ASSIGN
$DER.reactor.w[1] = reactor.w[1] * (-reactor.particle[1].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[1].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3955};
  data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */ = (data->localData[0]->realVars[2634] /* reactor.w[1] DUMMY_STATE */) * (((-data->simulationInfo->realParameter[749] /* reactor.particle[1].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[240] /* der(reactor.particle[1].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 3956
type: SIMPLE_ASSIGN
reactor.qm3[1] = reactor.gama_i[1] * reactor.V_b[1] * reactor.particle[1].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[1] * reactor.dN / reactor.particle[1].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3956};
  data->localData[0]->realVars[2507] /* reactor.qm3[1] variable */ = (data->localData[0]->realVars[40] /* reactor.gama_i[1] STATE(1) */) * ((data->localData[0]->realVars[908] /* reactor.V_b[1] variable */) * ((data->simulationInfo->realParameter[949] /* reactor.particle[1].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[549] /* reactor.particle[1].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[1].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 3957
type: SIMPLE_ASSIGN
reactor.qh4[1] = (-reactor.M_a[1]) * $DER.reactor.w[1] * reactor.particle[1].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3957};
  data->localData[0]->realVars[2347] /* reactor.qh4[1] variable */ = ((-data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * ((data->simulationInfo->realParameter[689] /* reactor.particle[1].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 3958
type: SIMPLE_ASSIGN
reactor.qm1[1] = reactor.M_a[1] * $DER.reactor.w[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3958};
  data->localData[0]->realVars[2467] /* reactor.qm1[1] variable */ = (data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 3959
type: SIMPLE_ASSIGN
$DER.reactor.V_v[1] = reactor.V_b[1] * (-reactor.particle[1].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[1] / reactor.particle[1].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3959};
  data->localData[0]->realVars[200] /* der(reactor.V_v[1]) DUMMY_DER */ = (data->localData[0]->realVars[908] /* reactor.V_b[1] variable */) * (((-data->simulationInfo->realParameter[949] /* reactor.particle[1].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */,data->simulationInfo->realParameter[549] /* reactor.particle[1].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[1].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 3960
type: SIMPLE_ASSIGN
$DER.reactor.M_v[1] = reactor.V_v[1] * der(reactor.gama_i[1]) + $DER.reactor.V_v[1] * reactor.gama_i[1]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3960};
  data->localData[0]->realVars[180] /* der(reactor.M_v[1]) DUMMY_DER */ = (data->localData[0]->realVars[933] /* reactor.V_v[1] DUMMY_STATE */) * (data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */) + (data->localData[0]->realVars[200] /* der(reactor.V_v[1]) DUMMY_DER */) * (data->localData[0]->realVars[40] /* reactor.gama_i[1] STATE(1) */);
  TRACE_POP
}
/*
equation index: 3961
type: SIMPLE_ASSIGN
reactor.qh5[1] = reactor.h_vi[1] * $DER.reactor.M_v[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3961};
  data->localData[0]->realVars[2367] /* reactor.qh5[1] variable */ = (data->localData[0]->realVars[1122] /* reactor.h_vi[1] variable */) * ((data->localData[0]->realVars[180] /* der(reactor.M_v[1]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 3962
type: SIMPLE_ASSIGN
reactor.qh2[1] = reactor.particle[1].particle_Radu2017_085.M_l * reactor.c_l[1] * der(reactor.T_b[1]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3962};
  data->localData[0]->realVars[2307] /* reactor.qh2[1] variable */ = (data->localData[0]->realVars[1467] /* reactor.particle[1].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[993] /* reactor.c_l[1] variable */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 3963
type: SIMPLE_ASSIGN
reactor.qh1[1] = reactor.M_a[1] * reactor.particle[1].particle_Radu2017_085.sorbent.cpDry * der(reactor.T_b[1]) * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3963};
  data->localData[0]->realVars[2227] /* reactor.qh1[1] variable */ = (data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[769] /* reactor.particle[1].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc3982(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3982};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3950(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3951(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3952(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3953(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3954(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3955(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3956(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3957(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3958(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3959(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3960(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3961(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3962(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3963(data, threadData);
  res[0] = data->localData[0]->realVars[2567] /* reactor.qm6[1] variable */ + data->localData[0]->realVars[2547] /* reactor.qm5[1] variable */ + data->localData[0]->realVars[2527] /* reactor.qm4[1] variable */ + (-data->localData[0]->realVars[2487] /* reactor.qm2[1] variable */) - data->localData[0]->realVars[2467] /* reactor.qm1[1] variable */ - data->localData[0]->realVars[2507] /* reactor.qm3[1] variable */;

  res[1] = data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ + data->localData[0]->realVars[2267] /* reactor.qh11[1] variable */ + data->localData[0]->realVars[2247] /* reactor.qh10[1] variable */ + data->localData[0]->realVars[2447] /* reactor.qh9[1] variable */ + data->localData[0]->realVars[2427] /* reactor.qh8[1] variable */ + data->localData[0]->realVars[2407] /* reactor.qh7[1] variable */ + data->localData[0]->realVars[2387] /* reactor.qh6[1] variable */ + (-data->localData[0]->realVars[2307] /* reactor.qh2[1] variable */) - data->localData[0]->realVars[2227] /* reactor.qh1[1] variable */ - data->localData[0]->realVars[2327] /* reactor.qh3[1] variable */ - data->localData[0]->realVars[2347] /* reactor.qh4[1] variable */ - data->localData[0]->realVars[2367] /* reactor.qh5[1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData3982(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.max;
  /* static ls data for der(reactor.pvap[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.max;
}


/*
equation index: 3923
type: SIMPLE_ASSIGN
reactor.heatBoundary[1].Q = (reactor.T_b[1] - reactor.T_c[1]) / reactor.particle[1].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3923};
  data->localData[0]->realVars[1142] /* reactor.heatBoundary[1].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */ - data->localData[0]->realVars[881] /* reactor.T_c[1] variable */,data->localData[0]->realVars[1347] /* reactor.particle[1].contactResistance_SiuLee.Rss variable */,"reactor.particle[1].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 3924
type: SIMPLE_ASSIGN
reactor.qh12[1] = reactor.U_t * reactor.dA * (reactor.T_h[1] - reactor.T_c[1])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3924};
  data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[20] /* reactor.T_h[1] STATE(1) */ - data->localData[0]->realVars[881] /* reactor.T_c[1] variable */));
  TRACE_POP
}

void residualFunc3929(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3929};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[881] /* reactor.T_c[1] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3923(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_3924(data, threadData);
  res[0] = data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ + (data->localData[0]->realVars[1142] /* reactor.heatBoundary[1].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData3929(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.max;
}


/*
equation index: 2835
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[2] = 0.120272355042726 * reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[2] * reactor.T_b[2] - reactor.pvap[2] * $DER.reactor.T_b[2]) / reactor.T_b[2] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2835};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */;
  data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[330] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */) - ((data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */) * (data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[2] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2836
type: SIMPLE_ASSIGN
reactor.qm2[2] = reactor.V_v[2] * $DER.reactor.gama_i[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2836};
  data->localData[0]->realVars[2488] /* reactor.qm2[2] variable */ = (data->localData[0]->realVars[934] /* reactor.V_v[2] DUMMY_STATE */) * ((data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2837
type: SIMPLE_ASSIGN
reactor.qh3[2] = 1996.0 * reactor.M_v[2] * $DER.reactor.T_b[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2837};
  data->localData[0]->realVars[2328] /* reactor.qh3[2] variable */ = (1996.0) * ((data->localData[0]->realVars[736] /* reactor.M_v[2] DUMMY_STATE */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2838
type: SIMPLE_ASSIGN
reactor.qh2[2] = reactor.particle[2].particle_Radu2017_085.M_l * reactor.c_l[2] * $DER.reactor.T_b[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2838};
  data->localData[0]->realVars[2308] /* reactor.qh2[2] variable */ = (data->localData[0]->realVars[1468] /* reactor.particle[2].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[994] /* reactor.c_l[2] variable */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2839
type: SIMPLE_ASSIGN
reactor.qh1[2] = reactor.M_a[2] * reactor.particle[2].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2839};
  data->localData[0]->realVars[2228] /* reactor.qh1[2] variable */ = (data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */) * ((data->simulationInfo->realParameter[770] /* reactor.particle[2].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2840
type: SIMPLE_ASSIGN
$DER.reactor.psat[2] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[2]) * (-273.15 + reactor.T_b[2]) / (-16.00999999999999 + reactor.T_b[2])) * $DER.reactor.T_b[2] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[2]) * 257.14 / (-16.00999999999999 + reactor.T_b[2]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[2]) / (-16.00999999999999 + reactor.T_b[2]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2840};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */;
  data->localData[0]->realVars[261] /* der(reactor.psat[2]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"-16.00999999999999 + reactor.T_b[2]",equationIndexes)))) * ((data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[2]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"-16.00999999999999 + reactor.T_b[2]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2841
type: SIMPLE_ASSIGN
$DER.reactor.particle[2].particle_Radu2017_085.sorbent.A = if reactor.pvap[2] >= reactor.psat[2] then 0.0 else (-8.31446261815324) * (reactor.T_b[2] * ($DER.reactor.pvap[2] * reactor.psat[2] - reactor.pvap[2] * $DER.reactor.psat[2]) / reactor.psat[2] ^ 2.0 * reactor.psat[2] / reactor.pvap[2] + $DER.reactor.T_b[2] * log(reactor.pvap[2] / reactor.psat[2]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2841};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */,"reactor.psat[2]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[2] / reactor.psat[2]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */) * (data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */) - ((data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */) * (data->localData[0]->realVars[261] /* der(reactor.psat[2]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[2] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */),data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,"reactor.pvap[2]",equationIndexes)) + (data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[241] /* der(reactor.particle[2].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2842
type: SIMPLE_ASSIGN
$DER.reactor.w[2] = exp(reactor.particle[2].particle_Radu2017_085.sorbent.a - reactor.particle[2].particle_Radu2017_085.sorbent.b * reactor.particle[2].particle_Radu2017_085.sorbent.A) * (-reactor.particle[2].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[2].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2842};
  data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[730] /* reactor.particle[2].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[750] /* reactor.particle[2].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2068] /* reactor.particle[2].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[750] /* reactor.particle[2].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[241] /* der(reactor.particle[2].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2843
type: SIMPLE_ASSIGN
reactor.qh4[2] = (-reactor.M_a[2]) * $DER.reactor.w[2] * reactor.particle[2].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2843};
  data->localData[0]->realVars[2348] /* reactor.qh4[2] variable */ = ((-data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * ((data->simulationInfo->realParameter[690] /* reactor.particle[2].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2844
type: SIMPLE_ASSIGN
reactor.qm3[2] = reactor.gama_i[2] * reactor.V_b[2] * reactor.particle[2].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[2] * reactor.dN / reactor.particle[2].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2844};
  data->localData[0]->realVars[2508] /* reactor.qm3[2] variable */ = (data->localData[0]->realVars[41] /* reactor.gama_i[2] STATE(1) */) * ((data->localData[0]->realVars[909] /* reactor.V_b[2] variable */) * ((data->simulationInfo->realParameter[950] /* reactor.particle[2].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[550] /* reactor.particle[2].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[2].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2845
type: SIMPLE_ASSIGN
reactor.qm1[2] = reactor.M_a[2] * $DER.reactor.w[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2845};
  data->localData[0]->realVars[2468] /* reactor.qm1[2] variable */ = (data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */) * ((data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2846
type: SIMPLE_ASSIGN
$DER.reactor.V_v[2] = reactor.V_b[2] * (-reactor.particle[2].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[2] / reactor.particle[2].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2846};
  data->localData[0]->realVars[201] /* der(reactor.V_v[2]) DUMMY_DER */ = (data->localData[0]->realVars[909] /* reactor.V_b[2] variable */) * (((-data->simulationInfo->realParameter[950] /* reactor.particle[2].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */,data->simulationInfo->realParameter[550] /* reactor.particle[2].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[2].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2847
type: SIMPLE_ASSIGN
$DER.reactor.M_v[2] = reactor.V_v[2] * $DER.reactor.gama_i[2] + $DER.reactor.V_v[2] * reactor.gama_i[2]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2847};
  data->localData[0]->realVars[181] /* der(reactor.M_v[2]) DUMMY_DER */ = (data->localData[0]->realVars[934] /* reactor.V_v[2] DUMMY_STATE */) * (data->localData[0]->realVars[121] /* der(reactor.gama_i[2]) STATE_DER */) + (data->localData[0]->realVars[201] /* der(reactor.V_v[2]) DUMMY_DER */) * (data->localData[0]->realVars[41] /* reactor.gama_i[2] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2848
type: SIMPLE_ASSIGN
reactor.qh5[2] = reactor.h_vi[2] * $DER.reactor.M_v[2] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2848};
  data->localData[0]->realVars[2368] /* reactor.qh5[2] variable */ = (data->localData[0]->realVars[1123] /* reactor.h_vi[2] variable */) * ((data->localData[0]->realVars[181] /* der(reactor.M_v[2]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2869(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2869};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2835(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2836(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2837(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2838(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2839(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2840(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2841(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2842(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2843(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2844(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2845(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2846(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2847(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2848(data, threadData);
  res[0] = data->localData[0]->realVars[2568] /* reactor.qm6[2] variable */ + data->localData[0]->realVars[2548] /* reactor.qm5[2] variable */ + data->localData[0]->realVars[2528] /* reactor.qm4[2] variable */ + (-data->localData[0]->realVars[2488] /* reactor.qm2[2] variable */) - data->localData[0]->realVars[2468] /* reactor.qm1[2] variable */ - data->localData[0]->realVars[2508] /* reactor.qm3[2] variable */;

  res[1] = data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ + data->localData[0]->realVars[2268] /* reactor.qh11[2] variable */ + data->localData[0]->realVars[2248] /* reactor.qh10[2] variable */ + data->localData[0]->realVars[2448] /* reactor.qh9[2] variable */ + data->localData[0]->realVars[2428] /* reactor.qh8[2] variable */ + data->localData[0]->realVars[2408] /* reactor.qh7[2] variable */ + data->localData[0]->realVars[2388] /* reactor.qh6[2] variable */ + (-data->localData[0]->realVars[2308] /* reactor.qh2[2] variable */) - data->localData[0]->realVars[2228] /* reactor.qh1[2] variable */ - data->localData[0]->realVars[2328] /* reactor.qh3[2] variable */ - data->localData[0]->realVars[2348] /* reactor.qh4[2] variable */ - data->localData[0]->realVars[2368] /* reactor.qh5[2] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2869(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[81].attribute /* der(reactor.T_b[2]) */.max;
  /* static ls data for der(reactor.pvap[2]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[281].attribute /* der(reactor.pvap[2]) */.max;
}


/*
equation index: 2782
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[1] = 0.120272355042726 * reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[1] * reactor.T_b[1] - reactor.pvap[1] * $DER.reactor.T_b[1]) / reactor.T_b[1] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2782};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */;
  data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[329] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */) - ((data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */) * (data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[1] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2783
type: SIMPLE_ASSIGN
reactor.qm2[1] = reactor.V_v[1] * $DER.reactor.gama_i[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2783};
  data->localData[0]->realVars[2487] /* reactor.qm2[1] variable */ = (data->localData[0]->realVars[933] /* reactor.V_v[1] DUMMY_STATE */) * ((data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2784
type: SIMPLE_ASSIGN
$DER.reactor.psat[1] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[1]) * (-273.15 + reactor.T_b[1]) / (-16.00999999999999 + reactor.T_b[1])) * $DER.reactor.T_b[1] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[1]) * 257.14 / (-16.00999999999999 + reactor.T_b[1]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[1]) / (-16.00999999999999 + reactor.T_b[1]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2784};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */;
  data->localData[0]->realVars[260] /* der(reactor.psat[1]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"-16.00999999999999 + reactor.T_b[1]",equationIndexes)))) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[1]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"-16.00999999999999 + reactor.T_b[1]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2785
type: SIMPLE_ASSIGN
$DER.reactor.particle[1].particle_Radu2017_085.sorbent.A = if reactor.pvap[1] >= reactor.psat[1] then 0.0 else (-8.31446261815324) * (reactor.T_b[1] * ($DER.reactor.pvap[1] * reactor.psat[1] - reactor.pvap[1] * $DER.reactor.psat[1]) / reactor.psat[1] ^ 2.0 * reactor.psat[1] / reactor.pvap[1] + $DER.reactor.T_b[1] * log(reactor.pvap[1] / reactor.psat[1]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2785};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */,"reactor.psat[1]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[1] / reactor.psat[1]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */) * (data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */) - ((data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */) * (data->localData[0]->realVars[260] /* der(reactor.psat[1]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[1] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */),data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,"reactor.pvap[1]",equationIndexes)) + (data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[240] /* der(reactor.particle[1].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2786
type: SIMPLE_ASSIGN
reactor.qh3[1] = 1996.0 * reactor.M_v[1] * $DER.reactor.T_b[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2786};
  data->localData[0]->realVars[2327] /* reactor.qh3[1] variable */ = (1996.0) * ((data->localData[0]->realVars[735] /* reactor.M_v[1] DUMMY_STATE */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2787
type: SIMPLE_ASSIGN
reactor.qh2[1] = reactor.particle[1].particle_Radu2017_085.M_l * reactor.c_l[1] * $DER.reactor.T_b[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2787};
  data->localData[0]->realVars[2307] /* reactor.qh2[1] variable */ = (data->localData[0]->realVars[1467] /* reactor.particle[1].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[993] /* reactor.c_l[1] variable */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2788
type: SIMPLE_ASSIGN
reactor.qh1[1] = reactor.M_a[1] * reactor.particle[1].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2788};
  data->localData[0]->realVars[2227] /* reactor.qh1[1] variable */ = (data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */) * ((data->simulationInfo->realParameter[769] /* reactor.particle[1].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2789
type: SIMPLE_ASSIGN
$DER.reactor.w[1] = exp(reactor.particle[1].particle_Radu2017_085.sorbent.a - reactor.particle[1].particle_Radu2017_085.sorbent.b * reactor.particle[1].particle_Radu2017_085.sorbent.A) * (-reactor.particle[1].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[1].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2789};
  data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[729] /* reactor.particle[1].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[749] /* reactor.particle[1].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2067] /* reactor.particle[1].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[749] /* reactor.particle[1].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[240] /* der(reactor.particle[1].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2790
type: SIMPLE_ASSIGN
reactor.qh4[1] = (-reactor.M_a[1]) * $DER.reactor.w[1] * reactor.particle[1].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2790};
  data->localData[0]->realVars[2347] /* reactor.qh4[1] variable */ = ((-data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * ((data->simulationInfo->realParameter[689] /* reactor.particle[1].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2791
type: SIMPLE_ASSIGN
reactor.qm3[1] = reactor.gama_i[1] * reactor.V_b[1] * reactor.particle[1].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[1] * reactor.dN / reactor.particle[1].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2791};
  data->localData[0]->realVars[2507] /* reactor.qm3[1] variable */ = (data->localData[0]->realVars[40] /* reactor.gama_i[1] STATE(1) */) * ((data->localData[0]->realVars[908] /* reactor.V_b[1] variable */) * ((data->simulationInfo->realParameter[949] /* reactor.particle[1].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[549] /* reactor.particle[1].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[1].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2792
type: SIMPLE_ASSIGN
reactor.qm1[1] = reactor.M_a[1] * $DER.reactor.w[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2792};
  data->localData[0]->realVars[2467] /* reactor.qm1[1] variable */ = (data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */) * ((data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2793
type: SIMPLE_ASSIGN
$DER.reactor.V_v[1] = reactor.V_b[1] * (-reactor.particle[1].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[1] / reactor.particle[1].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2793};
  data->localData[0]->realVars[200] /* der(reactor.V_v[1]) DUMMY_DER */ = (data->localData[0]->realVars[908] /* reactor.V_b[1] variable */) * (((-data->simulationInfo->realParameter[949] /* reactor.particle[1].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */,data->simulationInfo->realParameter[549] /* reactor.particle[1].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[1].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2794
type: SIMPLE_ASSIGN
$DER.reactor.M_v[1] = reactor.V_v[1] * $DER.reactor.gama_i[1] + $DER.reactor.V_v[1] * reactor.gama_i[1]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2794};
  data->localData[0]->realVars[180] /* der(reactor.M_v[1]) DUMMY_DER */ = (data->localData[0]->realVars[933] /* reactor.V_v[1] DUMMY_STATE */) * (data->localData[0]->realVars[120] /* der(reactor.gama_i[1]) STATE_DER */) + (data->localData[0]->realVars[200] /* der(reactor.V_v[1]) DUMMY_DER */) * (data->localData[0]->realVars[40] /* reactor.gama_i[1] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2795
type: SIMPLE_ASSIGN
reactor.qh5[1] = reactor.h_vi[1] * $DER.reactor.M_v[1] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2795};
  data->localData[0]->realVars[2367] /* reactor.qh5[1] variable */ = (data->localData[0]->realVars[1122] /* reactor.h_vi[1] variable */) * ((data->localData[0]->realVars[180] /* der(reactor.M_v[1]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2816(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2816};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2782(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2783(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2784(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2785(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2786(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2787(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2788(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2789(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2790(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2791(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2792(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2793(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2794(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2795(data, threadData);
  res[0] = data->localData[0]->realVars[2567] /* reactor.qm6[1] variable */ + data->localData[0]->realVars[2547] /* reactor.qm5[1] variable */ + data->localData[0]->realVars[2527] /* reactor.qm4[1] variable */ + (-data->localData[0]->realVars[2487] /* reactor.qm2[1] variable */) - data->localData[0]->realVars[2467] /* reactor.qm1[1] variable */ - data->localData[0]->realVars[2507] /* reactor.qm3[1] variable */;

  res[1] = data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ + data->localData[0]->realVars[2267] /* reactor.qh11[1] variable */ + data->localData[0]->realVars[2247] /* reactor.qh10[1] variable */ + data->localData[0]->realVars[2447] /* reactor.qh9[1] variable */ + data->localData[0]->realVars[2427] /* reactor.qh8[1] variable */ + data->localData[0]->realVars[2407] /* reactor.qh7[1] variable */ + data->localData[0]->realVars[2387] /* reactor.qh6[1] variable */ + (-data->localData[0]->realVars[2307] /* reactor.qh2[1] variable */) - data->localData[0]->realVars[2227] /* reactor.qh1[1] variable */ - data->localData[0]->realVars[2327] /* reactor.qh3[1] variable */ - data->localData[0]->realVars[2347] /* reactor.qh4[1] variable */ - data->localData[0]->realVars[2367] /* reactor.qh5[1] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2816(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[280].attribute /* der(reactor.pvap[1]) */.max;
  /* static ls data for der(reactor.T_b[1]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[80].attribute /* der(reactor.T_b[1]) */.max;
}


/*
equation index: 2764
type: SIMPLE_ASSIGN
reactor.heatBoundary[1].Q = (reactor.T_b[1] - reactor.T_c[1]) / reactor.particle[1].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2764};
  data->localData[0]->realVars[1142] /* reactor.heatBoundary[1].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */ - data->localData[0]->realVars[881] /* reactor.T_c[1] variable */,data->localData[0]->realVars[1347] /* reactor.particle[1].contactResistance_SiuLee.Rss variable */,"reactor.particle[1].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2765
type: SIMPLE_ASSIGN
reactor.qh12[1] = reactor.U_t * reactor.dA * (reactor.T_h[1] - reactor.T_c[1])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2765};
  data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[20] /* reactor.T_h[1] STATE(1) */ - data->localData[0]->realVars[881] /* reactor.T_c[1] variable */));
  TRACE_POP
}

void residualFunc2770(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2770};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[881] /* reactor.T_c[1] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2764(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2765(data, threadData);
  res[0] = data->localData[0]->realVars[2287] /* reactor.qh12[1] variable */ + (data->localData[0]->realVars[1142] /* reactor.heatBoundary[1].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2770(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[1] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[881].attribute /* reactor.T_c[1] */.max;
}


/*
equation index: 2658
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[3] = 0.120272355042726 * reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[3] * reactor.T_b[3] - reactor.pvap[3] * $DER.reactor.T_b[3]) / reactor.T_b[3] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2658};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */;
  data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[331] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */) - ((data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */) * (data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[3] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2659
type: SIMPLE_ASSIGN
reactor.qm2[3] = reactor.V_v[3] * $DER.reactor.gama_i[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2659};
  data->localData[0]->realVars[2489] /* reactor.qm2[3] variable */ = (data->localData[0]->realVars[935] /* reactor.V_v[3] DUMMY_STATE */) * ((data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2660
type: SIMPLE_ASSIGN
reactor.qh3[3] = 1996.0 * reactor.M_v[3] * $DER.reactor.T_b[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2660};
  data->localData[0]->realVars[2329] /* reactor.qh3[3] variable */ = (1996.0) * ((data->localData[0]->realVars[737] /* reactor.M_v[3] DUMMY_STATE */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2661
type: SIMPLE_ASSIGN
reactor.qh2[3] = reactor.particle[3].particle_Radu2017_085.M_l * reactor.c_l[3] * $DER.reactor.T_b[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2661};
  data->localData[0]->realVars[2309] /* reactor.qh2[3] variable */ = (data->localData[0]->realVars[1469] /* reactor.particle[3].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[995] /* reactor.c_l[3] variable */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2662
type: SIMPLE_ASSIGN
reactor.qh1[3] = reactor.M_a[3] * reactor.particle[3].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2662};
  data->localData[0]->realVars[2229] /* reactor.qh1[3] variable */ = (data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */) * ((data->simulationInfo->realParameter[771] /* reactor.particle[3].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2663
type: SIMPLE_ASSIGN
$DER.reactor.psat[3] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[3]) * (-273.15 + reactor.T_b[3]) / (-16.00999999999999 + reactor.T_b[3])) * $DER.reactor.T_b[3] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[3]) * 257.14 / (-16.00999999999999 + reactor.T_b[3]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[3]) / (-16.00999999999999 + reactor.T_b[3]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2663};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */;
  data->localData[0]->realVars[262] /* der(reactor.psat[3]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"-16.00999999999999 + reactor.T_b[3]",equationIndexes)))) * ((data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[3]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"-16.00999999999999 + reactor.T_b[3]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2664
type: SIMPLE_ASSIGN
$DER.reactor.particle[3].particle_Radu2017_085.sorbent.A = if reactor.pvap[3] >= reactor.psat[3] then 0.0 else (-8.31446261815324) * (reactor.T_b[3] * ($DER.reactor.pvap[3] * reactor.psat[3] - reactor.pvap[3] * $DER.reactor.psat[3]) / reactor.psat[3] ^ 2.0 * reactor.psat[3] / reactor.pvap[3] + $DER.reactor.T_b[3] * log(reactor.pvap[3] / reactor.psat[3]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2664};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */,"reactor.psat[3]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[3] / reactor.psat[3]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */) * (data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */) - ((data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */) * (data->localData[0]->realVars[262] /* der(reactor.psat[3]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[3] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */),data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,"reactor.pvap[3]",equationIndexes)) + (data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[242] /* der(reactor.particle[3].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2665
type: SIMPLE_ASSIGN
$DER.reactor.w[3] = exp(reactor.particle[3].particle_Radu2017_085.sorbent.a - reactor.particle[3].particle_Radu2017_085.sorbent.b * reactor.particle[3].particle_Radu2017_085.sorbent.A) * (-reactor.particle[3].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[3].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2665};
  data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[731] /* reactor.particle[3].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[751] /* reactor.particle[3].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2069] /* reactor.particle[3].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[751] /* reactor.particle[3].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[242] /* der(reactor.particle[3].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2666
type: SIMPLE_ASSIGN
reactor.qh4[3] = (-reactor.M_a[3]) * $DER.reactor.w[3] * reactor.particle[3].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2666};
  data->localData[0]->realVars[2349] /* reactor.qh4[3] variable */ = ((-data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * ((data->simulationInfo->realParameter[691] /* reactor.particle[3].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2667
type: SIMPLE_ASSIGN
reactor.qm3[3] = reactor.gama_i[3] * reactor.V_b[3] * reactor.particle[3].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[3] * reactor.dN / reactor.particle[3].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2667};
  data->localData[0]->realVars[2509] /* reactor.qm3[3] variable */ = (data->localData[0]->realVars[42] /* reactor.gama_i[3] STATE(1) */) * ((data->localData[0]->realVars[910] /* reactor.V_b[3] variable */) * ((data->simulationInfo->realParameter[951] /* reactor.particle[3].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[551] /* reactor.particle[3].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[3].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2668
type: SIMPLE_ASSIGN
reactor.qm1[3] = reactor.M_a[3] * $DER.reactor.w[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2668};
  data->localData[0]->realVars[2469] /* reactor.qm1[3] variable */ = (data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */) * ((data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2669
type: SIMPLE_ASSIGN
$DER.reactor.V_v[3] = reactor.V_b[3] * (-reactor.particle[3].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[3] / reactor.particle[3].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2669};
  data->localData[0]->realVars[202] /* der(reactor.V_v[3]) DUMMY_DER */ = (data->localData[0]->realVars[910] /* reactor.V_b[3] variable */) * (((-data->simulationInfo->realParameter[951] /* reactor.particle[3].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */,data->simulationInfo->realParameter[551] /* reactor.particle[3].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[3].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2670
type: SIMPLE_ASSIGN
$DER.reactor.M_v[3] = reactor.V_v[3] * $DER.reactor.gama_i[3] + $DER.reactor.V_v[3] * reactor.gama_i[3]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2670};
  data->localData[0]->realVars[182] /* der(reactor.M_v[3]) DUMMY_DER */ = (data->localData[0]->realVars[935] /* reactor.V_v[3] DUMMY_STATE */) * (data->localData[0]->realVars[122] /* der(reactor.gama_i[3]) STATE_DER */) + (data->localData[0]->realVars[202] /* der(reactor.V_v[3]) DUMMY_DER */) * (data->localData[0]->realVars[42] /* reactor.gama_i[3] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2671
type: SIMPLE_ASSIGN
reactor.qh5[3] = reactor.h_vi[3] * $DER.reactor.M_v[3] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2671};
  data->localData[0]->realVars[2369] /* reactor.qh5[3] variable */ = (data->localData[0]->realVars[1124] /* reactor.h_vi[3] variable */) * ((data->localData[0]->realVars[182] /* der(reactor.M_v[3]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2692(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2692};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2658(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2659(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2660(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2661(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2662(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2663(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2664(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2665(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2666(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2667(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2668(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2669(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2670(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2671(data, threadData);
  res[0] = data->localData[0]->realVars[2569] /* reactor.qm6[3] variable */ + data->localData[0]->realVars[2549] /* reactor.qm5[3] variable */ + data->localData[0]->realVars[2529] /* reactor.qm4[3] variable */ + (-data->localData[0]->realVars[2489] /* reactor.qm2[3] variable */) - data->localData[0]->realVars[2469] /* reactor.qm1[3] variable */ - data->localData[0]->realVars[2509] /* reactor.qm3[3] variable */;

  res[1] = data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ + data->localData[0]->realVars[2269] /* reactor.qh11[3] variable */ + data->localData[0]->realVars[2249] /* reactor.qh10[3] variable */ + data->localData[0]->realVars[2449] /* reactor.qh9[3] variable */ + data->localData[0]->realVars[2429] /* reactor.qh8[3] variable */ + data->localData[0]->realVars[2409] /* reactor.qh7[3] variable */ + data->localData[0]->realVars[2389] /* reactor.qh6[3] variable */ + (-data->localData[0]->realVars[2309] /* reactor.qh2[3] variable */) - data->localData[0]->realVars[2229] /* reactor.qh1[3] variable */ - data->localData[0]->realVars[2329] /* reactor.qh3[3] variable */ - data->localData[0]->realVars[2349] /* reactor.qh4[3] variable */ - data->localData[0]->realVars[2369] /* reactor.qh5[3] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2692(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[282].attribute /* der(reactor.pvap[3]) */.max;
  /* static ls data for der(reactor.T_b[3]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[82].attribute /* der(reactor.T_b[3]) */.max;
}


/*
equation index: 2643
type: SIMPLE_ASSIGN
reactor.heatBoundary[2].Q = (reactor.T_b[2] - reactor.T_c[2]) / reactor.particle[2].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2643};
  data->localData[0]->realVars[1143] /* reactor.heatBoundary[2].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */ - data->localData[0]->realVars[882] /* reactor.T_c[2] variable */,data->localData[0]->realVars[1348] /* reactor.particle[2].contactResistance_SiuLee.Rss variable */,"reactor.particle[2].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2644
type: SIMPLE_ASSIGN
reactor.qh12[2] = reactor.U_t * reactor.dA * (reactor.T_h[2] - reactor.T_c[2])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2644};
  data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[21] /* reactor.T_h[2] STATE(1) */ - data->localData[0]->realVars[882] /* reactor.T_c[2] variable */));
  TRACE_POP
}

void residualFunc2649(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2649};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[882] /* reactor.T_c[2] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2643(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2644(data, threadData);
  res[0] = data->localData[0]->realVars[2288] /* reactor.qh12[2] variable */ + (data->localData[0]->realVars[1143] /* reactor.heatBoundary[2].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2649(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[882].attribute /* reactor.T_c[2] */.max;
}


/*
equation index: 2545
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[4] = 0.120272355042726 * reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[4] * reactor.T_b[4] - reactor.pvap[4] * $DER.reactor.T_b[4]) / reactor.T_b[4] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2545};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */;
  data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[332] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */) - ((data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */) * (data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[4] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2546
type: SIMPLE_ASSIGN
reactor.qm2[4] = reactor.V_v[4] * $DER.reactor.gama_i[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2546};
  data->localData[0]->realVars[2490] /* reactor.qm2[4] variable */ = (data->localData[0]->realVars[936] /* reactor.V_v[4] DUMMY_STATE */) * ((data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2547
type: SIMPLE_ASSIGN
reactor.qh3[4] = 1996.0 * reactor.M_v[4] * $DER.reactor.T_b[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2547};
  data->localData[0]->realVars[2330] /* reactor.qh3[4] variable */ = (1996.0) * ((data->localData[0]->realVars[738] /* reactor.M_v[4] DUMMY_STATE */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2548
type: SIMPLE_ASSIGN
reactor.qh2[4] = reactor.particle[4].particle_Radu2017_085.M_l * reactor.c_l[4] * $DER.reactor.T_b[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2548};
  data->localData[0]->realVars[2310] /* reactor.qh2[4] variable */ = (data->localData[0]->realVars[1470] /* reactor.particle[4].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[996] /* reactor.c_l[4] variable */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2549
type: SIMPLE_ASSIGN
reactor.qh1[4] = reactor.M_a[4] * reactor.particle[4].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2549};
  data->localData[0]->realVars[2230] /* reactor.qh1[4] variable */ = (data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */) * ((data->simulationInfo->realParameter[772] /* reactor.particle[4].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2550
type: SIMPLE_ASSIGN
$DER.reactor.psat[4] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[4]) * (-273.15 + reactor.T_b[4]) / (-16.00999999999999 + reactor.T_b[4])) * $DER.reactor.T_b[4] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[4]) * 257.14 / (-16.00999999999999 + reactor.T_b[4]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[4]) / (-16.00999999999999 + reactor.T_b[4]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2550};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */;
  data->localData[0]->realVars[263] /* der(reactor.psat[4]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"-16.00999999999999 + reactor.T_b[4]",equationIndexes)))) * ((data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[4]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"-16.00999999999999 + reactor.T_b[4]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2551
type: SIMPLE_ASSIGN
$DER.reactor.particle[4].particle_Radu2017_085.sorbent.A = if reactor.pvap[4] >= reactor.psat[4] then 0.0 else (-8.31446261815324) * (reactor.T_b[4] * ($DER.reactor.pvap[4] * reactor.psat[4] - reactor.pvap[4] * $DER.reactor.psat[4]) / reactor.psat[4] ^ 2.0 * reactor.psat[4] / reactor.pvap[4] + $DER.reactor.T_b[4] * log(reactor.pvap[4] / reactor.psat[4]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2551};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */,"reactor.psat[4]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[4] / reactor.psat[4]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */) * (data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */) - ((data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */) * (data->localData[0]->realVars[263] /* der(reactor.psat[4]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[4] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */),data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,"reactor.pvap[4]",equationIndexes)) + (data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[243] /* der(reactor.particle[4].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2552
type: SIMPLE_ASSIGN
$DER.reactor.w[4] = exp(reactor.particle[4].particle_Radu2017_085.sorbent.a - reactor.particle[4].particle_Radu2017_085.sorbent.b * reactor.particle[4].particle_Radu2017_085.sorbent.A) * (-reactor.particle[4].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[4].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2552};
  data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[732] /* reactor.particle[4].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[752] /* reactor.particle[4].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2070] /* reactor.particle[4].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[752] /* reactor.particle[4].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[243] /* der(reactor.particle[4].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2553
type: SIMPLE_ASSIGN
$DER.reactor.V_v[4] = reactor.V_b[4] * (-reactor.particle[4].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[4] / reactor.particle[4].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2553};
  data->localData[0]->realVars[203] /* der(reactor.V_v[4]) DUMMY_DER */ = (data->localData[0]->realVars[911] /* reactor.V_b[4] variable */) * (((-data->simulationInfo->realParameter[952] /* reactor.particle[4].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */,data->simulationInfo->realParameter[552] /* reactor.particle[4].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[4].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2554
type: SIMPLE_ASSIGN
$DER.reactor.M_v[4] = reactor.V_v[4] * $DER.reactor.gama_i[4] + $DER.reactor.V_v[4] * reactor.gama_i[4]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2554};
  data->localData[0]->realVars[183] /* der(reactor.M_v[4]) DUMMY_DER */ = (data->localData[0]->realVars[936] /* reactor.V_v[4] DUMMY_STATE */) * (data->localData[0]->realVars[123] /* der(reactor.gama_i[4]) STATE_DER */) + (data->localData[0]->realVars[203] /* der(reactor.V_v[4]) DUMMY_DER */) * (data->localData[0]->realVars[43] /* reactor.gama_i[4] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2555
type: SIMPLE_ASSIGN
reactor.qh5[4] = reactor.h_vi[4] * $DER.reactor.M_v[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2555};
  data->localData[0]->realVars[2370] /* reactor.qh5[4] variable */ = (data->localData[0]->realVars[1125] /* reactor.h_vi[4] variable */) * ((data->localData[0]->realVars[183] /* der(reactor.M_v[4]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2556
type: SIMPLE_ASSIGN
reactor.qm3[4] = reactor.gama_i[4] * reactor.V_b[4] * reactor.particle[4].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[4] * reactor.dN / reactor.particle[4].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2556};
  data->localData[0]->realVars[2510] /* reactor.qm3[4] variable */ = (data->localData[0]->realVars[43] /* reactor.gama_i[4] STATE(1) */) * ((data->localData[0]->realVars[911] /* reactor.V_b[4] variable */) * ((data->simulationInfo->realParameter[952] /* reactor.particle[4].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[552] /* reactor.particle[4].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[4].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2557
type: SIMPLE_ASSIGN
reactor.qm1[4] = reactor.M_a[4] * $DER.reactor.w[4] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2557};
  data->localData[0]->realVars[2470] /* reactor.qm1[4] variable */ = (data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2558
type: SIMPLE_ASSIGN
reactor.qh4[4] = (-reactor.M_a[4]) * $DER.reactor.w[4] * reactor.particle[4].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2558};
  data->localData[0]->realVars[2350] /* reactor.qh4[4] variable */ = ((-data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */)) * ((data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) * ((data->simulationInfo->realParameter[692] /* reactor.particle[4].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc2579(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2579};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2545(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2546(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2547(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2548(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2549(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2550(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2551(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2552(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2553(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2554(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2555(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2556(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2557(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2558(data, threadData);
  res[0] = data->localData[0]->realVars[2570] /* reactor.qm6[4] variable */ + data->localData[0]->realVars[2550] /* reactor.qm5[4] variable */ + data->localData[0]->realVars[2530] /* reactor.qm4[4] variable */ + (-data->localData[0]->realVars[2490] /* reactor.qm2[4] variable */) - data->localData[0]->realVars[2470] /* reactor.qm1[4] variable */ - data->localData[0]->realVars[2510] /* reactor.qm3[4] variable */;

  res[1] = data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ + data->localData[0]->realVars[2270] /* reactor.qh11[4] variable */ + data->localData[0]->realVars[2250] /* reactor.qh10[4] variable */ + data->localData[0]->realVars[2450] /* reactor.qh9[4] variable */ + data->localData[0]->realVars[2430] /* reactor.qh8[4] variable */ + data->localData[0]->realVars[2410] /* reactor.qh7[4] variable */ + data->localData[0]->realVars[2390] /* reactor.qh6[4] variable */ + (-data->localData[0]->realVars[2310] /* reactor.qh2[4] variable */) - data->localData[0]->realVars[2230] /* reactor.qh1[4] variable */ - data->localData[0]->realVars[2330] /* reactor.qh3[4] variable */ - data->localData[0]->realVars[2350] /* reactor.qh4[4] variable */ - data->localData[0]->realVars[2370] /* reactor.qh5[4] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2579(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[83].attribute /* der(reactor.T_b[4]) */.max;
  /* static ls data for der(reactor.pvap[4]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[283].attribute /* der(reactor.pvap[4]) */.max;
}


/*
equation index: 2530
type: SIMPLE_ASSIGN
reactor.heatBoundary[3].Q = (reactor.T_b[3] - reactor.T_c[3]) / reactor.particle[3].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2530};
  data->localData[0]->realVars[1144] /* reactor.heatBoundary[3].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */ - data->localData[0]->realVars[883] /* reactor.T_c[3] variable */,data->localData[0]->realVars[1349] /* reactor.particle[3].contactResistance_SiuLee.Rss variable */,"reactor.particle[3].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2531
type: SIMPLE_ASSIGN
reactor.qh12[3] = reactor.U_t * reactor.dA * (reactor.T_h[3] - reactor.T_c[3])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2531};
  data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[22] /* reactor.T_h[3] STATE(1) */ - data->localData[0]->realVars[883] /* reactor.T_c[3] variable */));
  TRACE_POP
}

void residualFunc2536(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2536};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[883] /* reactor.T_c[3] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2530(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2531(data, threadData);
  res[0] = data->localData[0]->realVars[2289] /* reactor.qh12[3] variable */ + (data->localData[0]->realVars[1144] /* reactor.heatBoundary[3].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2536(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[3] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[883].attribute /* reactor.T_c[3] */.max;
}


/*
equation index: 2432
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[5] = 0.120272355042726 * reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[5] * reactor.T_b[5] - reactor.pvap[5] * $DER.reactor.T_b[5]) / reactor.T_b[5] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2432};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */;
  data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[333] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */) - ((data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */) * (data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[5] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2433
type: SIMPLE_ASSIGN
reactor.qh2[5] = reactor.particle[5].particle_Radu2017_085.M_l * reactor.c_l[5] * $DER.reactor.T_b[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2433};
  data->localData[0]->realVars[2311] /* reactor.qh2[5] variable */ = (data->localData[0]->realVars[1471] /* reactor.particle[5].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[997] /* reactor.c_l[5] variable */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2434
type: SIMPLE_ASSIGN
reactor.qh3[5] = 1996.0 * reactor.M_v[5] * $DER.reactor.T_b[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2434};
  data->localData[0]->realVars[2331] /* reactor.qh3[5] variable */ = (1996.0) * ((data->localData[0]->realVars[739] /* reactor.M_v[5] DUMMY_STATE */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2435
type: SIMPLE_ASSIGN
reactor.qh1[5] = reactor.M_a[5] * reactor.particle[5].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2435};
  data->localData[0]->realVars[2231] /* reactor.qh1[5] variable */ = (data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */) * ((data->simulationInfo->realParameter[773] /* reactor.particle[5].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2436
type: SIMPLE_ASSIGN
reactor.qm2[5] = reactor.V_v[5] * $DER.reactor.gama_i[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2436};
  data->localData[0]->realVars[2491] /* reactor.qm2[5] variable */ = (data->localData[0]->realVars[937] /* reactor.V_v[5] DUMMY_STATE */) * ((data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2437
type: SIMPLE_ASSIGN
$DER.reactor.psat[5] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[5]) * (-273.15 + reactor.T_b[5]) / (-16.00999999999999 + reactor.T_b[5])) * $DER.reactor.T_b[5] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[5]) * 257.14 / (-16.00999999999999 + reactor.T_b[5]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[5]) / (-16.00999999999999 + reactor.T_b[5]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2437};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */;
  data->localData[0]->realVars[264] /* der(reactor.psat[5]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"-16.00999999999999 + reactor.T_b[5]",equationIndexes)))) * ((data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[5]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"-16.00999999999999 + reactor.T_b[5]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2438
type: SIMPLE_ASSIGN
$DER.reactor.particle[5].particle_Radu2017_085.sorbent.A = if reactor.pvap[5] >= reactor.psat[5] then 0.0 else (-8.31446261815324) * (reactor.T_b[5] * ($DER.reactor.pvap[5] * reactor.psat[5] - reactor.pvap[5] * $DER.reactor.psat[5]) / reactor.psat[5] ^ 2.0 * reactor.psat[5] / reactor.pvap[5] + $DER.reactor.T_b[5] * log(reactor.pvap[5] / reactor.psat[5]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2438};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */,"reactor.psat[5]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[5] / reactor.psat[5]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */) * (data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */) - ((data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */) * (data->localData[0]->realVars[264] /* der(reactor.psat[5]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[5] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */),data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,"reactor.pvap[5]",equationIndexes)) + (data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[244] /* der(reactor.particle[5].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2439
type: SIMPLE_ASSIGN
$DER.reactor.w[5] = exp(reactor.particle[5].particle_Radu2017_085.sorbent.a - reactor.particle[5].particle_Radu2017_085.sorbent.b * reactor.particle[5].particle_Radu2017_085.sorbent.A) * (-reactor.particle[5].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[5].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2439};
  data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[733] /* reactor.particle[5].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[753] /* reactor.particle[5].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2071] /* reactor.particle[5].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[753] /* reactor.particle[5].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[244] /* der(reactor.particle[5].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2440
type: SIMPLE_ASSIGN
reactor.qm3[5] = reactor.gama_i[5] * reactor.V_b[5] * reactor.particle[5].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[5] * reactor.dN / reactor.particle[5].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2440};
  data->localData[0]->realVars[2511] /* reactor.qm3[5] variable */ = (data->localData[0]->realVars[44] /* reactor.gama_i[5] STATE(1) */) * ((data->localData[0]->realVars[912] /* reactor.V_b[5] variable */) * ((data->simulationInfo->realParameter[953] /* reactor.particle[5].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[553] /* reactor.particle[5].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[5].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2441
type: SIMPLE_ASSIGN
reactor.qm1[5] = reactor.M_a[5] * $DER.reactor.w[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2441};
  data->localData[0]->realVars[2471] /* reactor.qm1[5] variable */ = (data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2442
type: SIMPLE_ASSIGN
reactor.qh4[5] = (-reactor.M_a[5]) * $DER.reactor.w[5] * reactor.particle[5].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2442};
  data->localData[0]->realVars[2351] /* reactor.qh4[5] variable */ = ((-data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */)) * ((data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) * ((data->simulationInfo->realParameter[693] /* reactor.particle[5].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2443
type: SIMPLE_ASSIGN
$DER.reactor.V_v[5] = reactor.V_b[5] * (-reactor.particle[5].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[5] / reactor.particle[5].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2443};
  data->localData[0]->realVars[204] /* der(reactor.V_v[5]) DUMMY_DER */ = (data->localData[0]->realVars[912] /* reactor.V_b[5] variable */) * (((-data->simulationInfo->realParameter[953] /* reactor.particle[5].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */,data->simulationInfo->realParameter[553] /* reactor.particle[5].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[5].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2444
type: SIMPLE_ASSIGN
$DER.reactor.M_v[5] = reactor.V_v[5] * $DER.reactor.gama_i[5] + $DER.reactor.V_v[5] * reactor.gama_i[5]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2444};
  data->localData[0]->realVars[184] /* der(reactor.M_v[5]) DUMMY_DER */ = (data->localData[0]->realVars[937] /* reactor.V_v[5] DUMMY_STATE */) * (data->localData[0]->realVars[124] /* der(reactor.gama_i[5]) STATE_DER */) + (data->localData[0]->realVars[204] /* der(reactor.V_v[5]) DUMMY_DER */) * (data->localData[0]->realVars[44] /* reactor.gama_i[5] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2445
type: SIMPLE_ASSIGN
reactor.qh5[5] = reactor.h_vi[5] * $DER.reactor.M_v[5] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2445};
  data->localData[0]->realVars[2371] /* reactor.qh5[5] variable */ = (data->localData[0]->realVars[1126] /* reactor.h_vi[5] variable */) * ((data->localData[0]->realVars[184] /* der(reactor.M_v[5]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2466(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2466};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2432(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2433(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2434(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2435(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2436(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2437(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2438(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2439(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2440(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2441(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2442(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2443(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2444(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2445(data, threadData);
  res[0] = data->localData[0]->realVars[2571] /* reactor.qm6[5] variable */ + data->localData[0]->realVars[2551] /* reactor.qm5[5] variable */ + data->localData[0]->realVars[2531] /* reactor.qm4[5] variable */ + (-data->localData[0]->realVars[2491] /* reactor.qm2[5] variable */) - data->localData[0]->realVars[2471] /* reactor.qm1[5] variable */ - data->localData[0]->realVars[2511] /* reactor.qm3[5] variable */;

  res[1] = data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ + data->localData[0]->realVars[2271] /* reactor.qh11[5] variable */ + data->localData[0]->realVars[2251] /* reactor.qh10[5] variable */ + data->localData[0]->realVars[2451] /* reactor.qh9[5] variable */ + data->localData[0]->realVars[2431] /* reactor.qh8[5] variable */ + data->localData[0]->realVars[2411] /* reactor.qh7[5] variable */ + data->localData[0]->realVars[2391] /* reactor.qh6[5] variable */ + (-data->localData[0]->realVars[2311] /* reactor.qh2[5] variable */) - data->localData[0]->realVars[2231] /* reactor.qh1[5] variable */ - data->localData[0]->realVars[2331] /* reactor.qh3[5] variable */ - data->localData[0]->realVars[2351] /* reactor.qh4[5] variable */ - data->localData[0]->realVars[2371] /* reactor.qh5[5] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2466(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[5]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[84].attribute /* der(reactor.T_b[5]) */.max;
  /* static ls data for der(reactor.pvap[5]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[284].attribute /* der(reactor.pvap[5]) */.max;
}


/*
equation index: 2417
type: SIMPLE_ASSIGN
reactor.heatBoundary[4].Q = (reactor.T_b[4] - reactor.T_c[4]) / reactor.particle[4].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2417};
  data->localData[0]->realVars[1145] /* reactor.heatBoundary[4].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */ - data->localData[0]->realVars[884] /* reactor.T_c[4] variable */,data->localData[0]->realVars[1350] /* reactor.particle[4].contactResistance_SiuLee.Rss variable */,"reactor.particle[4].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2418
type: SIMPLE_ASSIGN
reactor.qh12[4] = reactor.U_t * reactor.dA * (reactor.T_h[4] - reactor.T_c[4])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2418};
  data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[23] /* reactor.T_h[4] STATE(1) */ - data->localData[0]->realVars[884] /* reactor.T_c[4] variable */));
  TRACE_POP
}

void residualFunc2423(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2423};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[884] /* reactor.T_c[4] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2417(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2418(data, threadData);
  res[0] = data->localData[0]->realVars[2290] /* reactor.qh12[4] variable */ + (data->localData[0]->realVars[1145] /* reactor.heatBoundary[4].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2423(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[4] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[884].attribute /* reactor.T_c[4] */.max;
}


/*
equation index: 2319
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[6] = 0.120272355042726 * reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[6] * reactor.T_b[6] - reactor.pvap[6] * $DER.reactor.T_b[6]) / reactor.T_b[6] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */;
  data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[334] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */) - ((data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */) * (data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[6] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2320
type: SIMPLE_ASSIGN
reactor.qm2[6] = reactor.V_v[6] * $DER.reactor.gama_i[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  data->localData[0]->realVars[2492] /* reactor.qm2[6] variable */ = (data->localData[0]->realVars[938] /* reactor.V_v[6] DUMMY_STATE */) * ((data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2321
type: SIMPLE_ASSIGN
reactor.qh3[6] = 1996.0 * reactor.M_v[6] * $DER.reactor.T_b[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  data->localData[0]->realVars[2332] /* reactor.qh3[6] variable */ = (1996.0) * ((data->localData[0]->realVars[740] /* reactor.M_v[6] DUMMY_STATE */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2322
type: SIMPLE_ASSIGN
reactor.qh2[6] = reactor.particle[6].particle_Radu2017_085.M_l * reactor.c_l[6] * $DER.reactor.T_b[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  data->localData[0]->realVars[2312] /* reactor.qh2[6] variable */ = (data->localData[0]->realVars[1472] /* reactor.particle[6].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[998] /* reactor.c_l[6] variable */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2323
type: SIMPLE_ASSIGN
reactor.qh1[6] = reactor.M_a[6] * reactor.particle[6].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2323};
  data->localData[0]->realVars[2232] /* reactor.qh1[6] variable */ = (data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */) * ((data->simulationInfo->realParameter[774] /* reactor.particle[6].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2324
type: SIMPLE_ASSIGN
$DER.reactor.psat[6] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[6]) * (-273.15 + reactor.T_b[6]) / (-16.00999999999999 + reactor.T_b[6])) * $DER.reactor.T_b[6] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[6]) * 257.14 / (-16.00999999999999 + reactor.T_b[6]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[6]) / (-16.00999999999999 + reactor.T_b[6]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2324};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */;
  data->localData[0]->realVars[265] /* der(reactor.psat[6]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"-16.00999999999999 + reactor.T_b[6]",equationIndexes)))) * ((data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[6]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"-16.00999999999999 + reactor.T_b[6]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2325
type: SIMPLE_ASSIGN
$DER.reactor.particle[6].particle_Radu2017_085.sorbent.A = if reactor.pvap[6] >= reactor.psat[6] then 0.0 else (-8.31446261815324) * (reactor.T_b[6] * ($DER.reactor.pvap[6] * reactor.psat[6] - reactor.pvap[6] * $DER.reactor.psat[6]) / reactor.psat[6] ^ 2.0 * reactor.psat[6] / reactor.pvap[6] + $DER.reactor.T_b[6] * log(reactor.pvap[6] / reactor.psat[6]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2325};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */,"reactor.psat[6]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[6] / reactor.psat[6]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */) * (data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */) - ((data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */) * (data->localData[0]->realVars[265] /* der(reactor.psat[6]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[6] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */),data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,"reactor.pvap[6]",equationIndexes)) + (data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[245] /* der(reactor.particle[6].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2326
type: SIMPLE_ASSIGN
$DER.reactor.w[6] = exp(reactor.particle[6].particle_Radu2017_085.sorbent.a - reactor.particle[6].particle_Radu2017_085.sorbent.b * reactor.particle[6].particle_Radu2017_085.sorbent.A) * (-reactor.particle[6].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[6].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[734] /* reactor.particle[6].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[754] /* reactor.particle[6].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2072] /* reactor.particle[6].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[754] /* reactor.particle[6].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[245] /* der(reactor.particle[6].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2327
type: SIMPLE_ASSIGN
reactor.qm1[6] = reactor.M_a[6] * $DER.reactor.w[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  data->localData[0]->realVars[2472] /* reactor.qm1[6] variable */ = (data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2328
type: SIMPLE_ASSIGN
reactor.qm3[6] = reactor.gama_i[6] * reactor.V_b[6] * reactor.particle[6].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[6] * reactor.dN / reactor.particle[6].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2328};
  data->localData[0]->realVars[2512] /* reactor.qm3[6] variable */ = (data->localData[0]->realVars[45] /* reactor.gama_i[6] STATE(1) */) * ((data->localData[0]->realVars[913] /* reactor.V_b[6] variable */) * ((data->simulationInfo->realParameter[954] /* reactor.particle[6].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[554] /* reactor.particle[6].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[6].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2329
type: SIMPLE_ASSIGN
reactor.qh4[6] = (-reactor.M_a[6]) * $DER.reactor.w[6] * reactor.particle[6].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2329};
  data->localData[0]->realVars[2352] /* reactor.qh4[6] variable */ = ((-data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */)) * ((data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) * ((data->simulationInfo->realParameter[694] /* reactor.particle[6].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2330
type: SIMPLE_ASSIGN
$DER.reactor.V_v[6] = reactor.V_b[6] * (-reactor.particle[6].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[6] / reactor.particle[6].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2330};
  data->localData[0]->realVars[205] /* der(reactor.V_v[6]) DUMMY_DER */ = (data->localData[0]->realVars[913] /* reactor.V_b[6] variable */) * (((-data->simulationInfo->realParameter[954] /* reactor.particle[6].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */,data->simulationInfo->realParameter[554] /* reactor.particle[6].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[6].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2331
type: SIMPLE_ASSIGN
$DER.reactor.M_v[6] = reactor.V_v[6] * $DER.reactor.gama_i[6] + $DER.reactor.V_v[6] * reactor.gama_i[6]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2331};
  data->localData[0]->realVars[185] /* der(reactor.M_v[6]) DUMMY_DER */ = (data->localData[0]->realVars[938] /* reactor.V_v[6] DUMMY_STATE */) * (data->localData[0]->realVars[125] /* der(reactor.gama_i[6]) STATE_DER */) + (data->localData[0]->realVars[205] /* der(reactor.V_v[6]) DUMMY_DER */) * (data->localData[0]->realVars[45] /* reactor.gama_i[6] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2332
type: SIMPLE_ASSIGN
reactor.qh5[6] = reactor.h_vi[6] * $DER.reactor.M_v[6] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2332};
  data->localData[0]->realVars[2372] /* reactor.qh5[6] variable */ = (data->localData[0]->realVars[1127] /* reactor.h_vi[6] variable */) * ((data->localData[0]->realVars[185] /* der(reactor.M_v[6]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2353(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2353};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2319(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2320(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2321(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2322(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2323(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2324(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2325(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2326(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2327(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2328(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2329(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2330(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2331(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2332(data, threadData);
  res[0] = data->localData[0]->realVars[2572] /* reactor.qm6[6] variable */ + data->localData[0]->realVars[2552] /* reactor.qm5[6] variable */ + data->localData[0]->realVars[2532] /* reactor.qm4[6] variable */ + (-data->localData[0]->realVars[2492] /* reactor.qm2[6] variable */) - data->localData[0]->realVars[2472] /* reactor.qm1[6] variable */ - data->localData[0]->realVars[2512] /* reactor.qm3[6] variable */;

  res[1] = data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ + data->localData[0]->realVars[2272] /* reactor.qh11[6] variable */ + data->localData[0]->realVars[2252] /* reactor.qh10[6] variable */ + data->localData[0]->realVars[2452] /* reactor.qh9[6] variable */ + data->localData[0]->realVars[2432] /* reactor.qh8[6] variable */ + data->localData[0]->realVars[2412] /* reactor.qh7[6] variable */ + data->localData[0]->realVars[2392] /* reactor.qh6[6] variable */ + (-data->localData[0]->realVars[2312] /* reactor.qh2[6] variable */) - data->localData[0]->realVars[2232] /* reactor.qh1[6] variable */ - data->localData[0]->realVars[2332] /* reactor.qh3[6] variable */ - data->localData[0]->realVars[2352] /* reactor.qh4[6] variable */ - data->localData[0]->realVars[2372] /* reactor.qh5[6] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2353(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[6]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[285].attribute /* der(reactor.pvap[6]) */.max;
  /* static ls data for der(reactor.T_b[6]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[85].attribute /* der(reactor.T_b[6]) */.max;
}


/*
equation index: 2304
type: SIMPLE_ASSIGN
reactor.heatBoundary[5].Q = (reactor.T_b[5] - reactor.T_c[5]) / reactor.particle[5].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  data->localData[0]->realVars[1146] /* reactor.heatBoundary[5].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */ - data->localData[0]->realVars[885] /* reactor.T_c[5] variable */,data->localData[0]->realVars[1351] /* reactor.particle[5].contactResistance_SiuLee.Rss variable */,"reactor.particle[5].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2305
type: SIMPLE_ASSIGN
reactor.qh12[5] = reactor.U_t * reactor.dA * (reactor.T_h[5] - reactor.T_c[5])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[24] /* reactor.T_h[5] STATE(1) */ - data->localData[0]->realVars[885] /* reactor.T_c[5] variable */));
  TRACE_POP
}

void residualFunc2310(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2310};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[885] /* reactor.T_c[5] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2304(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2305(data, threadData);
  res[0] = data->localData[0]->realVars[2291] /* reactor.qh12[5] variable */ + (data->localData[0]->realVars[1146] /* reactor.heatBoundary[5].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2310(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[5] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[885].attribute /* reactor.T_c[5] */.max;
}


/*
equation index: 2206
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[7] = 0.120272355042726 * reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[7] * reactor.T_b[7] - reactor.pvap[7] * $DER.reactor.T_b[7]) / reactor.T_b[7] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */;
  data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[335] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */) - ((data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */) * (data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[7] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2207
type: SIMPLE_ASSIGN
reactor.qh1[7] = reactor.M_a[7] * reactor.particle[7].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  data->localData[0]->realVars[2233] /* reactor.qh1[7] variable */ = (data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */) * ((data->simulationInfo->realParameter[775] /* reactor.particle[7].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2208
type: SIMPLE_ASSIGN
reactor.qh3[7] = 1996.0 * reactor.M_v[7] * $DER.reactor.T_b[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  data->localData[0]->realVars[2333] /* reactor.qh3[7] variable */ = (1996.0) * ((data->localData[0]->realVars[741] /* reactor.M_v[7] DUMMY_STATE */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2209
type: SIMPLE_ASSIGN
reactor.qh2[7] = reactor.particle[7].particle_Radu2017_085.M_l * reactor.c_l[7] * $DER.reactor.T_b[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  data->localData[0]->realVars[2313] /* reactor.qh2[7] variable */ = (data->localData[0]->realVars[1473] /* reactor.particle[7].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[999] /* reactor.c_l[7] variable */) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2210
type: SIMPLE_ASSIGN
reactor.qm2[7] = reactor.V_v[7] * $DER.reactor.gama_i[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  data->localData[0]->realVars[2493] /* reactor.qm2[7] variable */ = (data->localData[0]->realVars[939] /* reactor.V_v[7] DUMMY_STATE */) * ((data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2211
type: SIMPLE_ASSIGN
$DER.reactor.psat[7] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[7]) * (-273.15 + reactor.T_b[7]) / (-16.00999999999999 + reactor.T_b[7])) * $DER.reactor.T_b[7] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[7]) * 257.14 / (-16.00999999999999 + reactor.T_b[7]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[7]) / (-16.00999999999999 + reactor.T_b[7]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */;
  data->localData[0]->realVars[266] /* der(reactor.psat[7]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"-16.00999999999999 + reactor.T_b[7]",equationIndexes)))) * ((data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[7]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"-16.00999999999999 + reactor.T_b[7]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2212
type: SIMPLE_ASSIGN
$DER.reactor.particle[7].particle_Radu2017_085.sorbent.A = if reactor.pvap[7] >= reactor.psat[7] then 0.0 else (-8.31446261815324) * (reactor.T_b[7] * ($DER.reactor.pvap[7] * reactor.psat[7] - reactor.pvap[7] * $DER.reactor.psat[7]) / reactor.psat[7] ^ 2.0 * reactor.psat[7] / reactor.pvap[7] + $DER.reactor.T_b[7] * log(reactor.pvap[7] / reactor.psat[7]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */,"reactor.psat[7]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[7] / reactor.psat[7]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */) * (data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */) - ((data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */) * (data->localData[0]->realVars[266] /* der(reactor.psat[7]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[7] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */),data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,"reactor.pvap[7]",equationIndexes)) + (data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[246] /* der(reactor.particle[7].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2213
type: SIMPLE_ASSIGN
$DER.reactor.w[7] = exp(reactor.particle[7].particle_Radu2017_085.sorbent.a - reactor.particle[7].particle_Radu2017_085.sorbent.b * reactor.particle[7].particle_Radu2017_085.sorbent.A) * (-reactor.particle[7].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[7].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[735] /* reactor.particle[7].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[755] /* reactor.particle[7].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2073] /* reactor.particle[7].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[755] /* reactor.particle[7].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[246] /* der(reactor.particle[7].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2214
type: SIMPLE_ASSIGN
reactor.qm3[7] = reactor.gama_i[7] * reactor.V_b[7] * reactor.particle[7].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[7] * reactor.dN / reactor.particle[7].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  data->localData[0]->realVars[2513] /* reactor.qm3[7] variable */ = (data->localData[0]->realVars[46] /* reactor.gama_i[7] STATE(1) */) * ((data->localData[0]->realVars[914] /* reactor.V_b[7] variable */) * ((data->simulationInfo->realParameter[955] /* reactor.particle[7].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[555] /* reactor.particle[7].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[7].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2215
type: SIMPLE_ASSIGN
reactor.qm1[7] = reactor.M_a[7] * $DER.reactor.w[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  data->localData[0]->realVars[2473] /* reactor.qm1[7] variable */ = (data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2216
type: SIMPLE_ASSIGN
reactor.qh4[7] = (-reactor.M_a[7]) * $DER.reactor.w[7] * reactor.particle[7].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  data->localData[0]->realVars[2353] /* reactor.qh4[7] variable */ = ((-data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */)) * ((data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) * ((data->simulationInfo->realParameter[695] /* reactor.particle[7].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2217
type: SIMPLE_ASSIGN
$DER.reactor.V_v[7] = reactor.V_b[7] * (-reactor.particle[7].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[7] / reactor.particle[7].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  data->localData[0]->realVars[206] /* der(reactor.V_v[7]) DUMMY_DER */ = (data->localData[0]->realVars[914] /* reactor.V_b[7] variable */) * (((-data->simulationInfo->realParameter[955] /* reactor.particle[7].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */,data->simulationInfo->realParameter[555] /* reactor.particle[7].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[7].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2218
type: SIMPLE_ASSIGN
$DER.reactor.M_v[7] = reactor.V_v[7] * $DER.reactor.gama_i[7] + $DER.reactor.V_v[7] * reactor.gama_i[7]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  data->localData[0]->realVars[186] /* der(reactor.M_v[7]) DUMMY_DER */ = (data->localData[0]->realVars[939] /* reactor.V_v[7] DUMMY_STATE */) * (data->localData[0]->realVars[126] /* der(reactor.gama_i[7]) STATE_DER */) + (data->localData[0]->realVars[206] /* der(reactor.V_v[7]) DUMMY_DER */) * (data->localData[0]->realVars[46] /* reactor.gama_i[7] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2219
type: SIMPLE_ASSIGN
reactor.qh5[7] = reactor.h_vi[7] * $DER.reactor.M_v[7] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  data->localData[0]->realVars[2373] /* reactor.qh5[7] variable */ = (data->localData[0]->realVars[1128] /* reactor.h_vi[7] variable */) * ((data->localData[0]->realVars[186] /* der(reactor.M_v[7]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2240(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2240};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2206(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2207(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2208(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2209(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2210(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2211(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2212(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2213(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2214(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2215(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2216(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2217(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2218(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2219(data, threadData);
  res[0] = data->localData[0]->realVars[2573] /* reactor.qm6[7] variable */ + data->localData[0]->realVars[2553] /* reactor.qm5[7] variable */ + data->localData[0]->realVars[2533] /* reactor.qm4[7] variable */ + (-data->localData[0]->realVars[2493] /* reactor.qm2[7] variable */) - data->localData[0]->realVars[2473] /* reactor.qm1[7] variable */ - data->localData[0]->realVars[2513] /* reactor.qm3[7] variable */;

  res[1] = data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ + data->localData[0]->realVars[2273] /* reactor.qh11[7] variable */ + data->localData[0]->realVars[2253] /* reactor.qh10[7] variable */ + data->localData[0]->realVars[2453] /* reactor.qh9[7] variable */ + data->localData[0]->realVars[2433] /* reactor.qh8[7] variable */ + data->localData[0]->realVars[2413] /* reactor.qh7[7] variable */ + data->localData[0]->realVars[2393] /* reactor.qh6[7] variable */ + (-data->localData[0]->realVars[2313] /* reactor.qh2[7] variable */) - data->localData[0]->realVars[2233] /* reactor.qh1[7] variable */ - data->localData[0]->realVars[2333] /* reactor.qh3[7] variable */ - data->localData[0]->realVars[2353] /* reactor.qh4[7] variable */ - data->localData[0]->realVars[2373] /* reactor.qh5[7] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2240(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[7]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[86].attribute /* der(reactor.T_b[7]) */.max;
  /* static ls data for der(reactor.pvap[7]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[286].attribute /* der(reactor.pvap[7]) */.max;
}


/*
equation index: 2191
type: SIMPLE_ASSIGN
reactor.heatBoundary[6].Q = (reactor.T_b[6] - reactor.T_c[6]) / reactor.particle[6].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  data->localData[0]->realVars[1147] /* reactor.heatBoundary[6].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */ - data->localData[0]->realVars[886] /* reactor.T_c[6] variable */,data->localData[0]->realVars[1352] /* reactor.particle[6].contactResistance_SiuLee.Rss variable */,"reactor.particle[6].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2192
type: SIMPLE_ASSIGN
reactor.qh12[6] = reactor.U_t * reactor.dA * (reactor.T_h[6] - reactor.T_c[6])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[25] /* reactor.T_h[6] STATE(1) */ - data->localData[0]->realVars[886] /* reactor.T_c[6] variable */));
  TRACE_POP
}

void residualFunc2197(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2197};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[886] /* reactor.T_c[6] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2191(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2192(data, threadData);
  res[0] = data->localData[0]->realVars[2292] /* reactor.qh12[6] variable */ + (data->localData[0]->realVars[1147] /* reactor.heatBoundary[6].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2197(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[6] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[886].attribute /* reactor.T_c[6] */.max;
}


/*
equation index: 2093
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[8] = 0.120272355042726 * reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[8] * reactor.T_b[8] - reactor.pvap[8] * $DER.reactor.T_b[8]) / reactor.T_b[8] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2093};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */;
  data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[336] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */) - ((data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */) * (data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[8] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2094
type: SIMPLE_ASSIGN
reactor.qh3[8] = 1996.0 * reactor.M_v[8] * $DER.reactor.T_b[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2094};
  data->localData[0]->realVars[2334] /* reactor.qh3[8] variable */ = (1996.0) * ((data->localData[0]->realVars[742] /* reactor.M_v[8] DUMMY_STATE */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2095
type: SIMPLE_ASSIGN
reactor.qh2[8] = reactor.particle[8].particle_Radu2017_085.M_l * reactor.c_l[8] * $DER.reactor.T_b[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2095};
  data->localData[0]->realVars[2314] /* reactor.qh2[8] variable */ = (data->localData[0]->realVars[1474] /* reactor.particle[8].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1000] /* reactor.c_l[8] variable */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2096
type: SIMPLE_ASSIGN
reactor.qh1[8] = reactor.M_a[8] * reactor.particle[8].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  data->localData[0]->realVars[2234] /* reactor.qh1[8] variable */ = (data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */) * ((data->simulationInfo->realParameter[776] /* reactor.particle[8].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2097
type: SIMPLE_ASSIGN
reactor.qm2[8] = reactor.V_v[8] * $DER.reactor.gama_i[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2097};
  data->localData[0]->realVars[2494] /* reactor.qm2[8] variable */ = (data->localData[0]->realVars[940] /* reactor.V_v[8] DUMMY_STATE */) * ((data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2098
type: SIMPLE_ASSIGN
$DER.reactor.psat[8] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[8]) * (-273.15 + reactor.T_b[8]) / (-16.00999999999999 + reactor.T_b[8])) * $DER.reactor.T_b[8] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[8]) * 257.14 / (-16.00999999999999 + reactor.T_b[8]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[8]) / (-16.00999999999999 + reactor.T_b[8]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */;
  data->localData[0]->realVars[267] /* der(reactor.psat[8]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"-16.00999999999999 + reactor.T_b[8]",equationIndexes)))) * ((data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[8]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"-16.00999999999999 + reactor.T_b[8]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2099
type: SIMPLE_ASSIGN
$DER.reactor.particle[8].particle_Radu2017_085.sorbent.A = if reactor.pvap[8] >= reactor.psat[8] then 0.0 else (-8.31446261815324) * (reactor.T_b[8] * ($DER.reactor.pvap[8] * reactor.psat[8] - reactor.pvap[8] * $DER.reactor.psat[8]) / reactor.psat[8] ^ 2.0 * reactor.psat[8] / reactor.pvap[8] + $DER.reactor.T_b[8] * log(reactor.pvap[8] / reactor.psat[8]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */,"reactor.psat[8]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[8] / reactor.psat[8]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */) * (data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */) - ((data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */) * (data->localData[0]->realVars[267] /* der(reactor.psat[8]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[8] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */),data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,"reactor.pvap[8]",equationIndexes)) + (data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[247] /* der(reactor.particle[8].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 2100
type: SIMPLE_ASSIGN
$DER.reactor.w[8] = exp(reactor.particle[8].particle_Radu2017_085.sorbent.a - reactor.particle[8].particle_Radu2017_085.sorbent.b * reactor.particle[8].particle_Radu2017_085.sorbent.A) * (-reactor.particle[8].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[8].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[736] /* reactor.particle[8].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[756] /* reactor.particle[8].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2074] /* reactor.particle[8].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[756] /* reactor.particle[8].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[247] /* der(reactor.particle[8].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 2101
type: SIMPLE_ASSIGN
reactor.qm1[8] = reactor.M_a[8] * $DER.reactor.w[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  data->localData[0]->realVars[2474] /* reactor.qm1[8] variable */ = (data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 2102
type: SIMPLE_ASSIGN
reactor.qm3[8] = reactor.gama_i[8] * reactor.V_b[8] * reactor.particle[8].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[8] * reactor.dN / reactor.particle[8].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  data->localData[0]->realVars[2514] /* reactor.qm3[8] variable */ = (data->localData[0]->realVars[47] /* reactor.gama_i[8] STATE(1) */) * ((data->localData[0]->realVars[915] /* reactor.V_b[8] variable */) * ((data->simulationInfo->realParameter[956] /* reactor.particle[8].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[556] /* reactor.particle[8].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[8].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 2103
type: SIMPLE_ASSIGN
reactor.qh4[8] = (-reactor.M_a[8]) * $DER.reactor.w[8] * reactor.particle[8].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  data->localData[0]->realVars[2354] /* reactor.qh4[8] variable */ = ((-data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */)) * ((data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) * ((data->simulationInfo->realParameter[696] /* reactor.particle[8].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 2104
type: SIMPLE_ASSIGN
$DER.reactor.V_v[8] = reactor.V_b[8] * (-reactor.particle[8].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[8] / reactor.particle[8].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  data->localData[0]->realVars[207] /* der(reactor.V_v[8]) DUMMY_DER */ = (data->localData[0]->realVars[915] /* reactor.V_b[8] variable */) * (((-data->simulationInfo->realParameter[956] /* reactor.particle[8].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */,data->simulationInfo->realParameter[556] /* reactor.particle[8].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[8].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2105
type: SIMPLE_ASSIGN
$DER.reactor.M_v[8] = reactor.V_v[8] * $DER.reactor.gama_i[8] + $DER.reactor.V_v[8] * reactor.gama_i[8]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  data->localData[0]->realVars[187] /* der(reactor.M_v[8]) DUMMY_DER */ = (data->localData[0]->realVars[940] /* reactor.V_v[8] DUMMY_STATE */) * (data->localData[0]->realVars[127] /* der(reactor.gama_i[8]) STATE_DER */) + (data->localData[0]->realVars[207] /* der(reactor.V_v[8]) DUMMY_DER */) * (data->localData[0]->realVars[47] /* reactor.gama_i[8] STATE(1) */);
  TRACE_POP
}
/*
equation index: 2106
type: SIMPLE_ASSIGN
reactor.qh5[8] = reactor.h_vi[8] * $DER.reactor.M_v[8] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  data->localData[0]->realVars[2374] /* reactor.qh5[8] variable */ = (data->localData[0]->realVars[1129] /* reactor.h_vi[8] variable */) * ((data->localData[0]->realVars[187] /* der(reactor.M_v[8]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2127(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2127};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2093(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2094(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2095(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2096(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2097(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2098(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2099(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2100(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2101(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2102(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2103(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2104(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2105(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2106(data, threadData);
  res[0] = data->localData[0]->realVars[2574] /* reactor.qm6[8] variable */ + data->localData[0]->realVars[2554] /* reactor.qm5[8] variable */ + data->localData[0]->realVars[2534] /* reactor.qm4[8] variable */ + (-data->localData[0]->realVars[2494] /* reactor.qm2[8] variable */) - data->localData[0]->realVars[2474] /* reactor.qm1[8] variable */ - data->localData[0]->realVars[2514] /* reactor.qm3[8] variable */;

  res[1] = data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ + data->localData[0]->realVars[2274] /* reactor.qh11[8] variable */ + data->localData[0]->realVars[2254] /* reactor.qh10[8] variable */ + data->localData[0]->realVars[2454] /* reactor.qh9[8] variable */ + data->localData[0]->realVars[2434] /* reactor.qh8[8] variable */ + data->localData[0]->realVars[2414] /* reactor.qh7[8] variable */ + data->localData[0]->realVars[2394] /* reactor.qh6[8] variable */ + (-data->localData[0]->realVars[2314] /* reactor.qh2[8] variable */) - data->localData[0]->realVars[2234] /* reactor.qh1[8] variable */ - data->localData[0]->realVars[2334] /* reactor.qh3[8] variable */ - data->localData[0]->realVars[2354] /* reactor.qh4[8] variable */ - data->localData[0]->realVars[2374] /* reactor.qh5[8] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2127(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[8]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[87].attribute /* der(reactor.T_b[8]) */.max;
  /* static ls data for der(reactor.pvap[8]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[287].attribute /* der(reactor.pvap[8]) */.max;
}


/*
equation index: 2078
type: SIMPLE_ASSIGN
reactor.heatBoundary[7].Q = (reactor.T_b[7] - reactor.T_c[7]) / reactor.particle[7].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2078};
  data->localData[0]->realVars[1148] /* reactor.heatBoundary[7].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */ - data->localData[0]->realVars[887] /* reactor.T_c[7] variable */,data->localData[0]->realVars[1353] /* reactor.particle[7].contactResistance_SiuLee.Rss variable */,"reactor.particle[7].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 2079
type: SIMPLE_ASSIGN
reactor.qh12[7] = reactor.U_t * reactor.dA * (reactor.T_h[7] - reactor.T_c[7])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2079};
  data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[26] /* reactor.T_h[7] STATE(1) */ - data->localData[0]->realVars[887] /* reactor.T_c[7] variable */));
  TRACE_POP
}

void residualFunc2084(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2084};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[887] /* reactor.T_c[7] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2078(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_2079(data, threadData);
  res[0] = data->localData[0]->realVars[2293] /* reactor.qh12[7] variable */ + (data->localData[0]->realVars[1148] /* reactor.heatBoundary[7].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2084(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[7] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[887].attribute /* reactor.T_c[7] */.max;
}


/*
equation index: 1980
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[9] = 0.120272355042726 * reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[9] * reactor.T_b[9] - reactor.pvap[9] * $DER.reactor.T_b[9]) / reactor.T_b[9] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */;
  data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[337] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */) - ((data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */) * (data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[9] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1981
type: SIMPLE_ASSIGN
reactor.qh2[9] = reactor.particle[9].particle_Radu2017_085.M_l * reactor.c_l[9] * $DER.reactor.T_b[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1981};
  data->localData[0]->realVars[2315] /* reactor.qh2[9] variable */ = (data->localData[0]->realVars[1475] /* reactor.particle[9].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1001] /* reactor.c_l[9] variable */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1982
type: SIMPLE_ASSIGN
reactor.qh3[9] = 1996.0 * reactor.M_v[9] * $DER.reactor.T_b[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1982};
  data->localData[0]->realVars[2335] /* reactor.qh3[9] variable */ = (1996.0) * ((data->localData[0]->realVars[743] /* reactor.M_v[9] DUMMY_STATE */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1983
type: SIMPLE_ASSIGN
reactor.qh1[9] = reactor.M_a[9] * reactor.particle[9].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  data->localData[0]->realVars[2235] /* reactor.qh1[9] variable */ = (data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */) * ((data->simulationInfo->realParameter[777] /* reactor.particle[9].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1984
type: SIMPLE_ASSIGN
reactor.qm2[9] = reactor.V_v[9] * $DER.reactor.gama_i[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  data->localData[0]->realVars[2495] /* reactor.qm2[9] variable */ = (data->localData[0]->realVars[941] /* reactor.V_v[9] DUMMY_STATE */) * ((data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1985
type: SIMPLE_ASSIGN
$DER.reactor.psat[9] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[9]) * (-273.15 + reactor.T_b[9]) / (-16.00999999999999 + reactor.T_b[9])) * $DER.reactor.T_b[9] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[9]) * 257.14 / (-16.00999999999999 + reactor.T_b[9]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[9]) / (-16.00999999999999 + reactor.T_b[9]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1985};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */;
  data->localData[0]->realVars[268] /* der(reactor.psat[9]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"-16.00999999999999 + reactor.T_b[9]",equationIndexes)))) * ((data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[9]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"-16.00999999999999 + reactor.T_b[9]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1986
type: SIMPLE_ASSIGN
$DER.reactor.particle[9].particle_Radu2017_085.sorbent.A = if reactor.pvap[9] >= reactor.psat[9] then 0.0 else (-8.31446261815324) * (reactor.T_b[9] * ($DER.reactor.pvap[9] * reactor.psat[9] - reactor.pvap[9] * $DER.reactor.psat[9]) / reactor.psat[9] ^ 2.0 * reactor.psat[9] / reactor.pvap[9] + $DER.reactor.T_b[9] * log(reactor.pvap[9] / reactor.psat[9]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1986};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */,"reactor.psat[9]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[9] / reactor.psat[9]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */) * (data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */) - ((data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */) * (data->localData[0]->realVars[268] /* der(reactor.psat[9]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[9] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */),data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,"reactor.pvap[9]",equationIndexes)) + (data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[248] /* der(reactor.particle[9].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1987
type: SIMPLE_ASSIGN
$DER.reactor.w[9] = exp(reactor.particle[9].particle_Radu2017_085.sorbent.a - reactor.particle[9].particle_Radu2017_085.sorbent.b * reactor.particle[9].particle_Radu2017_085.sorbent.A) * (-reactor.particle[9].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[9].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1987};
  data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[737] /* reactor.particle[9].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[757] /* reactor.particle[9].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2075] /* reactor.particle[9].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[757] /* reactor.particle[9].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[248] /* der(reactor.particle[9].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1988
type: SIMPLE_ASSIGN
reactor.qm3[9] = reactor.gama_i[9] * reactor.V_b[9] * reactor.particle[9].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[9] * reactor.dN / reactor.particle[9].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1988};
  data->localData[0]->realVars[2515] /* reactor.qm3[9] variable */ = (data->localData[0]->realVars[48] /* reactor.gama_i[9] STATE(1) */) * ((data->localData[0]->realVars[916] /* reactor.V_b[9] variable */) * ((data->simulationInfo->realParameter[957] /* reactor.particle[9].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[557] /* reactor.particle[9].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[9].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1989
type: SIMPLE_ASSIGN
reactor.qm1[9] = reactor.M_a[9] * $DER.reactor.w[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1989};
  data->localData[0]->realVars[2475] /* reactor.qm1[9] variable */ = (data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1990
type: SIMPLE_ASSIGN
reactor.qh4[9] = (-reactor.M_a[9]) * $DER.reactor.w[9] * reactor.particle[9].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1990};
  data->localData[0]->realVars[2355] /* reactor.qh4[9] variable */ = ((-data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */)) * ((data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) * ((data->simulationInfo->realParameter[697] /* reactor.particle[9].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1991
type: SIMPLE_ASSIGN
$DER.reactor.V_v[9] = reactor.V_b[9] * (-reactor.particle[9].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[9] / reactor.particle[9].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1991};
  data->localData[0]->realVars[208] /* der(reactor.V_v[9]) DUMMY_DER */ = (data->localData[0]->realVars[916] /* reactor.V_b[9] variable */) * (((-data->simulationInfo->realParameter[957] /* reactor.particle[9].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */,data->simulationInfo->realParameter[557] /* reactor.particle[9].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[9].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1992
type: SIMPLE_ASSIGN
$DER.reactor.M_v[9] = reactor.V_v[9] * $DER.reactor.gama_i[9] + $DER.reactor.V_v[9] * reactor.gama_i[9]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1992};
  data->localData[0]->realVars[188] /* der(reactor.M_v[9]) DUMMY_DER */ = (data->localData[0]->realVars[941] /* reactor.V_v[9] DUMMY_STATE */) * (data->localData[0]->realVars[128] /* der(reactor.gama_i[9]) STATE_DER */) + (data->localData[0]->realVars[208] /* der(reactor.V_v[9]) DUMMY_DER */) * (data->localData[0]->realVars[48] /* reactor.gama_i[9] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1993
type: SIMPLE_ASSIGN
reactor.qh5[9] = reactor.h_vi[9] * $DER.reactor.M_v[9] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1993};
  data->localData[0]->realVars[2375] /* reactor.qh5[9] variable */ = (data->localData[0]->realVars[1130] /* reactor.h_vi[9] variable */) * ((data->localData[0]->realVars[188] /* der(reactor.M_v[9]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc2014(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2014};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1980(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1981(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1982(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1983(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1984(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1985(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1986(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1987(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1988(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1989(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1990(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1991(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1992(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1993(data, threadData);
  res[0] = data->localData[0]->realVars[2575] /* reactor.qm6[9] variable */ + data->localData[0]->realVars[2555] /* reactor.qm5[9] variable */ + data->localData[0]->realVars[2535] /* reactor.qm4[9] variable */ + (-data->localData[0]->realVars[2495] /* reactor.qm2[9] variable */) - data->localData[0]->realVars[2475] /* reactor.qm1[9] variable */ - data->localData[0]->realVars[2515] /* reactor.qm3[9] variable */;

  res[1] = data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ + data->localData[0]->realVars[2275] /* reactor.qh11[9] variable */ + data->localData[0]->realVars[2255] /* reactor.qh10[9] variable */ + data->localData[0]->realVars[2455] /* reactor.qh9[9] variable */ + data->localData[0]->realVars[2435] /* reactor.qh8[9] variable */ + data->localData[0]->realVars[2415] /* reactor.qh7[9] variable */ + data->localData[0]->realVars[2395] /* reactor.qh6[9] variable */ + (-data->localData[0]->realVars[2315] /* reactor.qh2[9] variable */) - data->localData[0]->realVars[2235] /* reactor.qh1[9] variable */ - data->localData[0]->realVars[2335] /* reactor.qh3[9] variable */ - data->localData[0]->realVars[2355] /* reactor.qh4[9] variable */ - data->localData[0]->realVars[2375] /* reactor.qh5[9] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData2014(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[9]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[88].attribute /* der(reactor.T_b[9]) */.max;
  /* static ls data for der(reactor.pvap[9]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[288].attribute /* der(reactor.pvap[9]) */.max;
}


/*
equation index: 1965
type: SIMPLE_ASSIGN
reactor.heatBoundary[8].Q = (reactor.T_b[8] - reactor.T_c[8]) / reactor.particle[8].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1965};
  data->localData[0]->realVars[1149] /* reactor.heatBoundary[8].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */ - data->localData[0]->realVars[888] /* reactor.T_c[8] variable */,data->localData[0]->realVars[1354] /* reactor.particle[8].contactResistance_SiuLee.Rss variable */,"reactor.particle[8].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1966
type: SIMPLE_ASSIGN
reactor.qh12[8] = reactor.U_t * reactor.dA * (reactor.T_h[8] - reactor.T_c[8])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[27] /* reactor.T_h[8] STATE(1) */ - data->localData[0]->realVars[888] /* reactor.T_c[8] variable */));
  TRACE_POP
}

void residualFunc1971(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1971};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[888] /* reactor.T_c[8] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1965(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1966(data, threadData);
  res[0] = data->localData[0]->realVars[2294] /* reactor.qh12[8] variable */ + (data->localData[0]->realVars[1149] /* reactor.heatBoundary[8].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1971(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[8] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[888].attribute /* reactor.T_c[8] */.max;
}


/*
equation index: 1867
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[10] = 0.120272355042726 * reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[10] * reactor.T_b[10] - reactor.pvap[10] * $DER.reactor.T_b[10]) / reactor.T_b[10] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1867};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */;
  data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[338] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */) - ((data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */) * (data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[10] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1868
type: SIMPLE_ASSIGN
reactor.qm2[10] = reactor.V_v[10] * $DER.reactor.gama_i[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1868};
  data->localData[0]->realVars[2496] /* reactor.qm2[10] variable */ = (data->localData[0]->realVars[942] /* reactor.V_v[10] DUMMY_STATE */) * ((data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1869
type: SIMPLE_ASSIGN
$DER.reactor.psat[10] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[10]) * (-273.15 + reactor.T_b[10]) / (-16.00999999999999 + reactor.T_b[10])) * $DER.reactor.T_b[10] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[10]) * 257.14 / (-16.00999999999999 + reactor.T_b[10]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[10]) / (-16.00999999999999 + reactor.T_b[10]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1869};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */;
  data->localData[0]->realVars[269] /* der(reactor.psat[10]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"-16.00999999999999 + reactor.T_b[10]",equationIndexes)))) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[10]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"-16.00999999999999 + reactor.T_b[10]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1870
type: SIMPLE_ASSIGN
$DER.reactor.particle[10].particle_Radu2017_085.sorbent.A = if reactor.pvap[10] >= reactor.psat[10] then 0.0 else (-8.31446261815324) * (reactor.T_b[10] * ($DER.reactor.pvap[10] * reactor.psat[10] - reactor.pvap[10] * $DER.reactor.psat[10]) / reactor.psat[10] ^ 2.0 * reactor.psat[10] / reactor.pvap[10] + $DER.reactor.T_b[10] * log(reactor.pvap[10] / reactor.psat[10]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1870};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */,"reactor.psat[10]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[10] / reactor.psat[10]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */) * (data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */) - ((data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */) * (data->localData[0]->realVars[269] /* der(reactor.psat[10]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[10] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */),data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,"reactor.pvap[10]",equationIndexes)) + (data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[249] /* der(reactor.particle[10].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1871
type: SIMPLE_ASSIGN
$DER.reactor.w[10] = exp(reactor.particle[10].particle_Radu2017_085.sorbent.a - reactor.particle[10].particle_Radu2017_085.sorbent.b * reactor.particle[10].particle_Radu2017_085.sorbent.A) * (-reactor.particle[10].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[10].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[738] /* reactor.particle[10].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[758] /* reactor.particle[10].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2076] /* reactor.particle[10].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[758] /* reactor.particle[10].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[249] /* der(reactor.particle[10].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1872
type: SIMPLE_ASSIGN
reactor.qm3[10] = reactor.gama_i[10] * reactor.V_b[10] * reactor.particle[10].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[10] * reactor.dN / reactor.particle[10].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  data->localData[0]->realVars[2516] /* reactor.qm3[10] variable */ = (data->localData[0]->realVars[49] /* reactor.gama_i[10] STATE(1) */) * ((data->localData[0]->realVars[917] /* reactor.V_b[10] variable */) * ((data->simulationInfo->realParameter[958] /* reactor.particle[10].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[558] /* reactor.particle[10].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[10].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1873
type: SIMPLE_ASSIGN
reactor.qm1[10] = reactor.M_a[10] * $DER.reactor.w[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1873};
  data->localData[0]->realVars[2476] /* reactor.qm1[10] variable */ = (data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1874
type: SIMPLE_ASSIGN
reactor.qh4[10] = (-reactor.M_a[10]) * $DER.reactor.w[10] * reactor.particle[10].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1874};
  data->localData[0]->realVars[2356] /* reactor.qh4[10] variable */ = ((-data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */)) * ((data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) * ((data->simulationInfo->realParameter[698] /* reactor.particle[10].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1875
type: SIMPLE_ASSIGN
$DER.reactor.V_v[10] = reactor.V_b[10] * (-reactor.particle[10].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[10] / reactor.particle[10].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1875};
  data->localData[0]->realVars[209] /* der(reactor.V_v[10]) DUMMY_DER */ = (data->localData[0]->realVars[917] /* reactor.V_b[10] variable */) * (((-data->simulationInfo->realParameter[958] /* reactor.particle[10].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */,data->simulationInfo->realParameter[558] /* reactor.particle[10].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[10].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1876
type: SIMPLE_ASSIGN
$DER.reactor.M_v[10] = reactor.V_v[10] * $DER.reactor.gama_i[10] + $DER.reactor.V_v[10] * reactor.gama_i[10]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1876};
  data->localData[0]->realVars[189] /* der(reactor.M_v[10]) DUMMY_DER */ = (data->localData[0]->realVars[942] /* reactor.V_v[10] DUMMY_STATE */) * (data->localData[0]->realVars[129] /* der(reactor.gama_i[10]) STATE_DER */) + (data->localData[0]->realVars[209] /* der(reactor.V_v[10]) DUMMY_DER */) * (data->localData[0]->realVars[49] /* reactor.gama_i[10] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1877
type: SIMPLE_ASSIGN
reactor.qh5[10] = reactor.h_vi[10] * $DER.reactor.M_v[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1877};
  data->localData[0]->realVars[2376] /* reactor.qh5[10] variable */ = (data->localData[0]->realVars[1131] /* reactor.h_vi[10] variable */) * ((data->localData[0]->realVars[189] /* der(reactor.M_v[10]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1878
type: SIMPLE_ASSIGN
reactor.qh3[10] = 1996.0 * reactor.M_v[10] * $DER.reactor.T_b[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1878};
  data->localData[0]->realVars[2336] /* reactor.qh3[10] variable */ = (1996.0) * ((data->localData[0]->realVars[744] /* reactor.M_v[10] DUMMY_STATE */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1879
type: SIMPLE_ASSIGN
reactor.qh2[10] = reactor.particle[10].particle_Radu2017_085.M_l * reactor.c_l[10] * $DER.reactor.T_b[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1879};
  data->localData[0]->realVars[2316] /* reactor.qh2[10] variable */ = (data->localData[0]->realVars[1476] /* reactor.particle[10].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1002] /* reactor.c_l[10] variable */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1880
type: SIMPLE_ASSIGN
reactor.qh1[10] = reactor.M_a[10] * reactor.particle[10].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[10] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1880};
  data->localData[0]->realVars[2236] /* reactor.qh1[10] variable */ = (data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */) * ((data->simulationInfo->realParameter[778] /* reactor.particle[10].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc1901(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1901};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1867(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1868(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1869(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1870(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1871(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1872(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1873(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1874(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1875(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1876(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1877(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1878(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1879(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1880(data, threadData);
  res[0] = data->localData[0]->realVars[2576] /* reactor.qm6[10] variable */ + data->localData[0]->realVars[2556] /* reactor.qm5[10] variable */ + data->localData[0]->realVars[2536] /* reactor.qm4[10] variable */ + (-data->localData[0]->realVars[2496] /* reactor.qm2[10] variable */) - data->localData[0]->realVars[2476] /* reactor.qm1[10] variable */ - data->localData[0]->realVars[2516] /* reactor.qm3[10] variable */;

  res[1] = data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ + data->localData[0]->realVars[2276] /* reactor.qh11[10] variable */ + data->localData[0]->realVars[2256] /* reactor.qh10[10] variable */ + data->localData[0]->realVars[2456] /* reactor.qh9[10] variable */ + data->localData[0]->realVars[2436] /* reactor.qh8[10] variable */ + data->localData[0]->realVars[2416] /* reactor.qh7[10] variable */ + data->localData[0]->realVars[2396] /* reactor.qh6[10] variable */ + (-data->localData[0]->realVars[2316] /* reactor.qh2[10] variable */) - data->localData[0]->realVars[2236] /* reactor.qh1[10] variable */ - data->localData[0]->realVars[2336] /* reactor.qh3[10] variable */ - data->localData[0]->realVars[2356] /* reactor.qh4[10] variable */ - data->localData[0]->realVars[2376] /* reactor.qh5[10] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1901(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[10]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[89].attribute /* der(reactor.T_b[10]) */.max;
  /* static ls data for der(reactor.pvap[10]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[289].attribute /* der(reactor.pvap[10]) */.max;
}


/*
equation index: 1852
type: SIMPLE_ASSIGN
reactor.heatBoundary[9].Q = (reactor.T_b[9] - reactor.T_c[9]) / reactor.particle[9].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  data->localData[0]->realVars[1150] /* reactor.heatBoundary[9].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */ - data->localData[0]->realVars[889] /* reactor.T_c[9] variable */,data->localData[0]->realVars[1355] /* reactor.particle[9].contactResistance_SiuLee.Rss variable */,"reactor.particle[9].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1853
type: SIMPLE_ASSIGN
reactor.qh12[9] = reactor.U_t * reactor.dA * (reactor.T_h[9] - reactor.T_c[9])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[28] /* reactor.T_h[9] STATE(1) */ - data->localData[0]->realVars[889] /* reactor.T_c[9] variable */));
  TRACE_POP
}

void residualFunc1858(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1858};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[889] /* reactor.T_c[9] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1852(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1853(data, threadData);
  res[0] = data->localData[0]->realVars[2295] /* reactor.qh12[9] variable */ + (data->localData[0]->realVars[1150] /* reactor.heatBoundary[9].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1858(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[9] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[889].attribute /* reactor.T_c[9] */.max;
}


/*
equation index: 1754
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[11] = 0.120272355042726 * reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[11] * reactor.T_b[11] - reactor.pvap[11] * $DER.reactor.T_b[11]) / reactor.T_b[11] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */;
  data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[339] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */) - ((data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */) * (data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[11] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1755
type: SIMPLE_ASSIGN
reactor.qh3[11] = 1996.0 * reactor.M_v[11] * $DER.reactor.T_b[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  data->localData[0]->realVars[2337] /* reactor.qh3[11] variable */ = (1996.0) * ((data->localData[0]->realVars[745] /* reactor.M_v[11] DUMMY_STATE */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1756
type: SIMPLE_ASSIGN
reactor.qh2[11] = reactor.particle[11].particle_Radu2017_085.M_l * reactor.c_l[11] * $DER.reactor.T_b[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  data->localData[0]->realVars[2317] /* reactor.qh2[11] variable */ = (data->localData[0]->realVars[1477] /* reactor.particle[11].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1003] /* reactor.c_l[11] variable */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1757
type: SIMPLE_ASSIGN
reactor.qh1[11] = reactor.M_a[11] * reactor.particle[11].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  data->localData[0]->realVars[2237] /* reactor.qh1[11] variable */ = (data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */) * ((data->simulationInfo->realParameter[779] /* reactor.particle[11].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1758
type: SIMPLE_ASSIGN
reactor.qm2[11] = reactor.V_v[11] * $DER.reactor.gama_i[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  data->localData[0]->realVars[2497] /* reactor.qm2[11] variable */ = (data->localData[0]->realVars[943] /* reactor.V_v[11] DUMMY_STATE */) * ((data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1759
type: SIMPLE_ASSIGN
$DER.reactor.psat[11] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[11]) * (-273.15 + reactor.T_b[11]) / (-16.00999999999999 + reactor.T_b[11])) * $DER.reactor.T_b[11] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[11]) * 257.14 / (-16.00999999999999 + reactor.T_b[11]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[11]) / (-16.00999999999999 + reactor.T_b[11]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */;
  data->localData[0]->realVars[270] /* der(reactor.psat[11]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"-16.00999999999999 + reactor.T_b[11]",equationIndexes)))) * ((data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[11]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"-16.00999999999999 + reactor.T_b[11]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1760
type: SIMPLE_ASSIGN
$DER.reactor.particle[11].particle_Radu2017_085.sorbent.A = if reactor.pvap[11] >= reactor.psat[11] then 0.0 else (-8.31446261815324) * (reactor.T_b[11] * ($DER.reactor.pvap[11] * reactor.psat[11] - reactor.pvap[11] * $DER.reactor.psat[11]) / reactor.psat[11] ^ 2.0 * reactor.psat[11] / reactor.pvap[11] + $DER.reactor.T_b[11] * log(reactor.pvap[11] / reactor.psat[11]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1760};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */,"reactor.psat[11]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[11] / reactor.psat[11]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */) * (data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */) - ((data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */) * (data->localData[0]->realVars[270] /* der(reactor.psat[11]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[11] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */),data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,"reactor.pvap[11]",equationIndexes)) + (data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[250] /* der(reactor.particle[11].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1761
type: SIMPLE_ASSIGN
$DER.reactor.w[11] = exp(reactor.particle[11].particle_Radu2017_085.sorbent.a - reactor.particle[11].particle_Radu2017_085.sorbent.b * reactor.particle[11].particle_Radu2017_085.sorbent.A) * (-reactor.particle[11].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[11].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[739] /* reactor.particle[11].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[759] /* reactor.particle[11].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2077] /* reactor.particle[11].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[759] /* reactor.particle[11].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[250] /* der(reactor.particle[11].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1762
type: SIMPLE_ASSIGN
reactor.qm3[11] = reactor.gama_i[11] * reactor.V_b[11] * reactor.particle[11].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[11] * reactor.dN / reactor.particle[11].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  data->localData[0]->realVars[2517] /* reactor.qm3[11] variable */ = (data->localData[0]->realVars[50] /* reactor.gama_i[11] STATE(1) */) * ((data->localData[0]->realVars[918] /* reactor.V_b[11] variable */) * ((data->simulationInfo->realParameter[959] /* reactor.particle[11].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[559] /* reactor.particle[11].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[11].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1763
type: SIMPLE_ASSIGN
reactor.qm1[11] = reactor.M_a[11] * $DER.reactor.w[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  data->localData[0]->realVars[2477] /* reactor.qm1[11] variable */ = (data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1764
type: SIMPLE_ASSIGN
reactor.qh4[11] = (-reactor.M_a[11]) * $DER.reactor.w[11] * reactor.particle[11].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  data->localData[0]->realVars[2357] /* reactor.qh4[11] variable */ = ((-data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */)) * ((data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) * ((data->simulationInfo->realParameter[699] /* reactor.particle[11].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1765
type: SIMPLE_ASSIGN
$DER.reactor.V_v[11] = reactor.V_b[11] * (-reactor.particle[11].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[11] / reactor.particle[11].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  data->localData[0]->realVars[210] /* der(reactor.V_v[11]) DUMMY_DER */ = (data->localData[0]->realVars[918] /* reactor.V_b[11] variable */) * (((-data->simulationInfo->realParameter[959] /* reactor.particle[11].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */,data->simulationInfo->realParameter[559] /* reactor.particle[11].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[11].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1766
type: SIMPLE_ASSIGN
$DER.reactor.M_v[11] = reactor.V_v[11] * $DER.reactor.gama_i[11] + $DER.reactor.V_v[11] * reactor.gama_i[11]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  data->localData[0]->realVars[190] /* der(reactor.M_v[11]) DUMMY_DER */ = (data->localData[0]->realVars[943] /* reactor.V_v[11] DUMMY_STATE */) * (data->localData[0]->realVars[130] /* der(reactor.gama_i[11]) STATE_DER */) + (data->localData[0]->realVars[210] /* der(reactor.V_v[11]) DUMMY_DER */) * (data->localData[0]->realVars[50] /* reactor.gama_i[11] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1767
type: SIMPLE_ASSIGN
reactor.qh5[11] = reactor.h_vi[11] * $DER.reactor.M_v[11] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  data->localData[0]->realVars[2377] /* reactor.qh5[11] variable */ = (data->localData[0]->realVars[1132] /* reactor.h_vi[11] variable */) * ((data->localData[0]->realVars[190] /* der(reactor.M_v[11]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc1788(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1788};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1754(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1755(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1756(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1757(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1758(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1759(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1760(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1761(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1762(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1763(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1764(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1765(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1766(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1767(data, threadData);
  res[0] = data->localData[0]->realVars[2577] /* reactor.qm6[11] variable */ + data->localData[0]->realVars[2557] /* reactor.qm5[11] variable */ + data->localData[0]->realVars[2537] /* reactor.qm4[11] variable */ + (-data->localData[0]->realVars[2497] /* reactor.qm2[11] variable */) - data->localData[0]->realVars[2477] /* reactor.qm1[11] variable */ - data->localData[0]->realVars[2517] /* reactor.qm3[11] variable */;

  res[1] = data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ + data->localData[0]->realVars[2277] /* reactor.qh11[11] variable */ + data->localData[0]->realVars[2257] /* reactor.qh10[11] variable */ + data->localData[0]->realVars[2457] /* reactor.qh9[11] variable */ + data->localData[0]->realVars[2437] /* reactor.qh8[11] variable */ + data->localData[0]->realVars[2417] /* reactor.qh7[11] variable */ + data->localData[0]->realVars[2397] /* reactor.qh6[11] variable */ + (-data->localData[0]->realVars[2317] /* reactor.qh2[11] variable */) - data->localData[0]->realVars[2237] /* reactor.qh1[11] variable */ - data->localData[0]->realVars[2337] /* reactor.qh3[11] variable */ - data->localData[0]->realVars[2357] /* reactor.qh4[11] variable */ - data->localData[0]->realVars[2377] /* reactor.qh5[11] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1788(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[11]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[90].attribute /* der(reactor.T_b[11]) */.max;
  /* static ls data for der(reactor.pvap[11]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[290].attribute /* der(reactor.pvap[11]) */.max;
}


/*
equation index: 1739
type: SIMPLE_ASSIGN
reactor.heatBoundary[10].Q = (reactor.T_b[10] - reactor.T_c[10]) / reactor.particle[10].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  data->localData[0]->realVars[1151] /* reactor.heatBoundary[10].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */ - data->localData[0]->realVars[890] /* reactor.T_c[10] variable */,data->localData[0]->realVars[1356] /* reactor.particle[10].contactResistance_SiuLee.Rss variable */,"reactor.particle[10].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1740
type: SIMPLE_ASSIGN
reactor.qh12[10] = reactor.U_t * reactor.dA * (reactor.T_h[10] - reactor.T_c[10])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[29] /* reactor.T_h[10] STATE(1) */ - data->localData[0]->realVars[890] /* reactor.T_c[10] variable */));
  TRACE_POP
}

void residualFunc1745(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1745};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[890] /* reactor.T_c[10] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1739(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1740(data, threadData);
  res[0] = data->localData[0]->realVars[2296] /* reactor.qh12[10] variable */ + (data->localData[0]->realVars[1151] /* reactor.heatBoundary[10].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1745(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[10] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[890].attribute /* reactor.T_c[10] */.max;
}


/*
equation index: 1641
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[12] = 0.120272355042726 * reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[12] * reactor.T_b[12] - reactor.pvap[12] * $DER.reactor.T_b[12]) / reactor.T_b[12] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */;
  data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[340] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */) - ((data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */) * (data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[12] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1642
type: SIMPLE_ASSIGN
reactor.qh3[12] = 1996.0 * reactor.M_v[12] * $DER.reactor.T_b[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  data->localData[0]->realVars[2338] /* reactor.qh3[12] variable */ = (1996.0) * ((data->localData[0]->realVars[746] /* reactor.M_v[12] DUMMY_STATE */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1643
type: SIMPLE_ASSIGN
reactor.qh2[12] = reactor.particle[12].particle_Radu2017_085.M_l * reactor.c_l[12] * $DER.reactor.T_b[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  data->localData[0]->realVars[2318] /* reactor.qh2[12] variable */ = (data->localData[0]->realVars[1478] /* reactor.particle[12].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1004] /* reactor.c_l[12] variable */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1644
type: SIMPLE_ASSIGN
reactor.qh1[12] = reactor.M_a[12] * reactor.particle[12].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  data->localData[0]->realVars[2238] /* reactor.qh1[12] variable */ = (data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */) * ((data->simulationInfo->realParameter[780] /* reactor.particle[12].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1645
type: SIMPLE_ASSIGN
reactor.qm2[12] = reactor.V_v[12] * $DER.reactor.gama_i[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  data->localData[0]->realVars[2498] /* reactor.qm2[12] variable */ = (data->localData[0]->realVars[944] /* reactor.V_v[12] DUMMY_STATE */) * ((data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1646
type: SIMPLE_ASSIGN
$DER.reactor.psat[12] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[12]) * (-273.15 + reactor.T_b[12]) / (-16.00999999999999 + reactor.T_b[12])) * $DER.reactor.T_b[12] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[12]) * 257.14 / (-16.00999999999999 + reactor.T_b[12]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[12]) / (-16.00999999999999 + reactor.T_b[12]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */;
  data->localData[0]->realVars[271] /* der(reactor.psat[12]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"-16.00999999999999 + reactor.T_b[12]",equationIndexes)))) * ((data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[12]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"-16.00999999999999 + reactor.T_b[12]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1647
type: SIMPLE_ASSIGN
$DER.reactor.particle[12].particle_Radu2017_085.sorbent.A = if reactor.pvap[12] >= reactor.psat[12] then 0.0 else (-8.31446261815324) * (reactor.T_b[12] * ($DER.reactor.pvap[12] * reactor.psat[12] - reactor.pvap[12] * $DER.reactor.psat[12]) / reactor.psat[12] ^ 2.0 * reactor.psat[12] / reactor.pvap[12] + $DER.reactor.T_b[12] * log(reactor.pvap[12] / reactor.psat[12]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */,"reactor.psat[12]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[12] / reactor.psat[12]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */) * (data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */) - ((data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */) * (data->localData[0]->realVars[271] /* der(reactor.psat[12]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[12] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */),data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,"reactor.pvap[12]",equationIndexes)) + (data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[251] /* der(reactor.particle[12].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1648
type: SIMPLE_ASSIGN
$DER.reactor.w[12] = exp(reactor.particle[12].particle_Radu2017_085.sorbent.a - reactor.particle[12].particle_Radu2017_085.sorbent.b * reactor.particle[12].particle_Radu2017_085.sorbent.A) * (-reactor.particle[12].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[12].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[740] /* reactor.particle[12].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[760] /* reactor.particle[12].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2078] /* reactor.particle[12].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[760] /* reactor.particle[12].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[251] /* der(reactor.particle[12].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1649
type: SIMPLE_ASSIGN
reactor.qm3[12] = reactor.gama_i[12] * reactor.V_b[12] * reactor.particle[12].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[12] * reactor.dN / reactor.particle[12].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  data->localData[0]->realVars[2518] /* reactor.qm3[12] variable */ = (data->localData[0]->realVars[51] /* reactor.gama_i[12] STATE(1) */) * ((data->localData[0]->realVars[919] /* reactor.V_b[12] variable */) * ((data->simulationInfo->realParameter[960] /* reactor.particle[12].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[560] /* reactor.particle[12].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[12].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1650
type: SIMPLE_ASSIGN
reactor.qm1[12] = reactor.M_a[12] * $DER.reactor.w[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  data->localData[0]->realVars[2478] /* reactor.qm1[12] variable */ = (data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1651
type: SIMPLE_ASSIGN
reactor.qh4[12] = (-reactor.M_a[12]) * $DER.reactor.w[12] * reactor.particle[12].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  data->localData[0]->realVars[2358] /* reactor.qh4[12] variable */ = ((-data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */)) * ((data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) * ((data->simulationInfo->realParameter[700] /* reactor.particle[12].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1652
type: SIMPLE_ASSIGN
$DER.reactor.V_v[12] = reactor.V_b[12] * (-reactor.particle[12].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[12] / reactor.particle[12].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  data->localData[0]->realVars[211] /* der(reactor.V_v[12]) DUMMY_DER */ = (data->localData[0]->realVars[919] /* reactor.V_b[12] variable */) * (((-data->simulationInfo->realParameter[960] /* reactor.particle[12].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */,data->simulationInfo->realParameter[560] /* reactor.particle[12].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[12].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1653
type: SIMPLE_ASSIGN
$DER.reactor.M_v[12] = reactor.V_v[12] * $DER.reactor.gama_i[12] + $DER.reactor.V_v[12] * reactor.gama_i[12]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  data->localData[0]->realVars[191] /* der(reactor.M_v[12]) DUMMY_DER */ = (data->localData[0]->realVars[944] /* reactor.V_v[12] DUMMY_STATE */) * (data->localData[0]->realVars[131] /* der(reactor.gama_i[12]) STATE_DER */) + (data->localData[0]->realVars[211] /* der(reactor.V_v[12]) DUMMY_DER */) * (data->localData[0]->realVars[51] /* reactor.gama_i[12] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1654
type: SIMPLE_ASSIGN
reactor.qh5[12] = reactor.h_vi[12] * $DER.reactor.M_v[12] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  data->localData[0]->realVars[2378] /* reactor.qh5[12] variable */ = (data->localData[0]->realVars[1133] /* reactor.h_vi[12] variable */) * ((data->localData[0]->realVars[191] /* der(reactor.M_v[12]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc1675(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1675};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1641(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1642(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1643(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1644(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1645(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1646(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1647(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1648(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1649(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1650(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1651(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1652(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1653(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1654(data, threadData);
  res[0] = data->localData[0]->realVars[2578] /* reactor.qm6[12] variable */ + data->localData[0]->realVars[2558] /* reactor.qm5[12] variable */ + data->localData[0]->realVars[2538] /* reactor.qm4[12] variable */ + (-data->localData[0]->realVars[2498] /* reactor.qm2[12] variable */) - data->localData[0]->realVars[2478] /* reactor.qm1[12] variable */ - data->localData[0]->realVars[2518] /* reactor.qm3[12] variable */;

  res[1] = data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ + data->localData[0]->realVars[2278] /* reactor.qh11[12] variable */ + data->localData[0]->realVars[2258] /* reactor.qh10[12] variable */ + data->localData[0]->realVars[2458] /* reactor.qh9[12] variable */ + data->localData[0]->realVars[2438] /* reactor.qh8[12] variable */ + data->localData[0]->realVars[2418] /* reactor.qh7[12] variable */ + data->localData[0]->realVars[2398] /* reactor.qh6[12] variable */ + (-data->localData[0]->realVars[2318] /* reactor.qh2[12] variable */) - data->localData[0]->realVars[2238] /* reactor.qh1[12] variable */ - data->localData[0]->realVars[2338] /* reactor.qh3[12] variable */ - data->localData[0]->realVars[2358] /* reactor.qh4[12] variable */ - data->localData[0]->realVars[2378] /* reactor.qh5[12] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1675(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[12]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[91].attribute /* der(reactor.T_b[12]) */.max;
  /* static ls data for der(reactor.pvap[12]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[291].attribute /* der(reactor.pvap[12]) */.max;
}


/*
equation index: 1626
type: SIMPLE_ASSIGN
reactor.heatBoundary[11].Q = (reactor.T_b[11] - reactor.T_c[11]) / reactor.particle[11].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  data->localData[0]->realVars[1152] /* reactor.heatBoundary[11].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */ - data->localData[0]->realVars[891] /* reactor.T_c[11] variable */,data->localData[0]->realVars[1357] /* reactor.particle[11].contactResistance_SiuLee.Rss variable */,"reactor.particle[11].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1627
type: SIMPLE_ASSIGN
reactor.qh12[11] = reactor.U_t * reactor.dA * (reactor.T_h[11] - reactor.T_c[11])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[30] /* reactor.T_h[11] STATE(1) */ - data->localData[0]->realVars[891] /* reactor.T_c[11] variable */));
  TRACE_POP
}

void residualFunc1632(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1632};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[891] /* reactor.T_c[11] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1626(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1627(data, threadData);
  res[0] = data->localData[0]->realVars[2297] /* reactor.qh12[11] variable */ + (data->localData[0]->realVars[1152] /* reactor.heatBoundary[11].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1632(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[11] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[891].attribute /* reactor.T_c[11] */.max;
}


/*
equation index: 1528
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[13] = 0.120272355042726 * reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[13] * reactor.T_b[13] - reactor.pvap[13] * $DER.reactor.T_b[13]) / reactor.T_b[13] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */;
  data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[341] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */) - ((data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */) * (data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[13] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1529
type: SIMPLE_ASSIGN
reactor.qh1[13] = reactor.M_a[13] * reactor.particle[13].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  data->localData[0]->realVars[2239] /* reactor.qh1[13] variable */ = (data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */) * ((data->simulationInfo->realParameter[781] /* reactor.particle[13].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1530
type: SIMPLE_ASSIGN
reactor.qh3[13] = 1996.0 * reactor.M_v[13] * $DER.reactor.T_b[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  data->localData[0]->realVars[2339] /* reactor.qh3[13] variable */ = (1996.0) * ((data->localData[0]->realVars[747] /* reactor.M_v[13] DUMMY_STATE */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1531
type: SIMPLE_ASSIGN
reactor.qh2[13] = reactor.particle[13].particle_Radu2017_085.M_l * reactor.c_l[13] * $DER.reactor.T_b[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  data->localData[0]->realVars[2319] /* reactor.qh2[13] variable */ = (data->localData[0]->realVars[1479] /* reactor.particle[13].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1005] /* reactor.c_l[13] variable */) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1532
type: SIMPLE_ASSIGN
reactor.qm2[13] = reactor.V_v[13] * $DER.reactor.gama_i[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  data->localData[0]->realVars[2499] /* reactor.qm2[13] variable */ = (data->localData[0]->realVars[945] /* reactor.V_v[13] DUMMY_STATE */) * ((data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1533
type: SIMPLE_ASSIGN
$DER.reactor.psat[13] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[13]) * (-273.15 + reactor.T_b[13]) / (-16.00999999999999 + reactor.T_b[13])) * $DER.reactor.T_b[13] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[13]) * 257.14 / (-16.00999999999999 + reactor.T_b[13]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[13]) / (-16.00999999999999 + reactor.T_b[13]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */;
  data->localData[0]->realVars[272] /* der(reactor.psat[13]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"-16.00999999999999 + reactor.T_b[13]",equationIndexes)))) * ((data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[13]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"-16.00999999999999 + reactor.T_b[13]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1534
type: SIMPLE_ASSIGN
$DER.reactor.particle[13].particle_Radu2017_085.sorbent.A = if reactor.pvap[13] >= reactor.psat[13] then 0.0 else (-8.31446261815324) * (reactor.T_b[13] * ($DER.reactor.pvap[13] * reactor.psat[13] - reactor.pvap[13] * $DER.reactor.psat[13]) / reactor.psat[13] ^ 2.0 * reactor.psat[13] / reactor.pvap[13] + $DER.reactor.T_b[13] * log(reactor.pvap[13] / reactor.psat[13]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */,"reactor.psat[13]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[13] / reactor.psat[13]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */) * (data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */) - ((data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */) * (data->localData[0]->realVars[272] /* der(reactor.psat[13]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[13] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */),data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,"reactor.pvap[13]",equationIndexes)) + (data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[252] /* der(reactor.particle[13].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1535
type: SIMPLE_ASSIGN
$DER.reactor.w[13] = exp(reactor.particle[13].particle_Radu2017_085.sorbent.a - reactor.particle[13].particle_Radu2017_085.sorbent.b * reactor.particle[13].particle_Radu2017_085.sorbent.A) * (-reactor.particle[13].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[13].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[741] /* reactor.particle[13].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[761] /* reactor.particle[13].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2079] /* reactor.particle[13].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[761] /* reactor.particle[13].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[252] /* der(reactor.particle[13].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1536
type: SIMPLE_ASSIGN
reactor.qm3[13] = reactor.gama_i[13] * reactor.V_b[13] * reactor.particle[13].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[13] * reactor.dN / reactor.particle[13].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  data->localData[0]->realVars[2519] /* reactor.qm3[13] variable */ = (data->localData[0]->realVars[52] /* reactor.gama_i[13] STATE(1) */) * ((data->localData[0]->realVars[920] /* reactor.V_b[13] variable */) * ((data->simulationInfo->realParameter[961] /* reactor.particle[13].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[561] /* reactor.particle[13].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[13].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1537
type: SIMPLE_ASSIGN
reactor.qm1[13] = reactor.M_a[13] * $DER.reactor.w[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  data->localData[0]->realVars[2479] /* reactor.qm1[13] variable */ = (data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1538
type: SIMPLE_ASSIGN
reactor.qh4[13] = (-reactor.M_a[13]) * $DER.reactor.w[13] * reactor.particle[13].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  data->localData[0]->realVars[2359] /* reactor.qh4[13] variable */ = ((-data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */)) * ((data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) * ((data->simulationInfo->realParameter[701] /* reactor.particle[13].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1539
type: SIMPLE_ASSIGN
$DER.reactor.V_v[13] = reactor.V_b[13] * (-reactor.particle[13].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[13] / reactor.particle[13].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  data->localData[0]->realVars[212] /* der(reactor.V_v[13]) DUMMY_DER */ = (data->localData[0]->realVars[920] /* reactor.V_b[13] variable */) * (((-data->simulationInfo->realParameter[961] /* reactor.particle[13].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */,data->simulationInfo->realParameter[561] /* reactor.particle[13].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[13].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1540
type: SIMPLE_ASSIGN
$DER.reactor.M_v[13] = reactor.V_v[13] * $DER.reactor.gama_i[13] + $DER.reactor.V_v[13] * reactor.gama_i[13]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  data->localData[0]->realVars[192] /* der(reactor.M_v[13]) DUMMY_DER */ = (data->localData[0]->realVars[945] /* reactor.V_v[13] DUMMY_STATE */) * (data->localData[0]->realVars[132] /* der(reactor.gama_i[13]) STATE_DER */) + (data->localData[0]->realVars[212] /* der(reactor.V_v[13]) DUMMY_DER */) * (data->localData[0]->realVars[52] /* reactor.gama_i[13] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1541
type: SIMPLE_ASSIGN
reactor.qh5[13] = reactor.h_vi[13] * $DER.reactor.M_v[13] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  data->localData[0]->realVars[2379] /* reactor.qh5[13] variable */ = (data->localData[0]->realVars[1134] /* reactor.h_vi[13] variable */) * ((data->localData[0]->realVars[192] /* der(reactor.M_v[13]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc1562(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1562};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1528(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1529(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1530(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1531(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1532(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1533(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1534(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1535(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1536(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1537(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1538(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1539(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1540(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1541(data, threadData);
  res[0] = data->localData[0]->realVars[2579] /* reactor.qm6[13] variable */ + data->localData[0]->realVars[2559] /* reactor.qm5[13] variable */ + data->localData[0]->realVars[2539] /* reactor.qm4[13] variable */ + (-data->localData[0]->realVars[2499] /* reactor.qm2[13] variable */) - data->localData[0]->realVars[2479] /* reactor.qm1[13] variable */ - data->localData[0]->realVars[2519] /* reactor.qm3[13] variable */;

  res[1] = data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ + data->localData[0]->realVars[2279] /* reactor.qh11[13] variable */ + data->localData[0]->realVars[2259] /* reactor.qh10[13] variable */ + data->localData[0]->realVars[2459] /* reactor.qh9[13] variable */ + data->localData[0]->realVars[2439] /* reactor.qh8[13] variable */ + data->localData[0]->realVars[2419] /* reactor.qh7[13] variable */ + data->localData[0]->realVars[2399] /* reactor.qh6[13] variable */ + (-data->localData[0]->realVars[2319] /* reactor.qh2[13] variable */) - data->localData[0]->realVars[2239] /* reactor.qh1[13] variable */ - data->localData[0]->realVars[2339] /* reactor.qh3[13] variable */ - data->localData[0]->realVars[2359] /* reactor.qh4[13] variable */ - data->localData[0]->realVars[2379] /* reactor.qh5[13] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1562(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[13]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[92].attribute /* der(reactor.T_b[13]) */.max;
  /* static ls data for der(reactor.pvap[13]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[292].attribute /* der(reactor.pvap[13]) */.max;
}


/*
equation index: 1513
type: SIMPLE_ASSIGN
reactor.heatBoundary[12].Q = (reactor.T_b[12] - reactor.T_c[12]) / reactor.particle[12].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  data->localData[0]->realVars[1153] /* reactor.heatBoundary[12].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */ - data->localData[0]->realVars[892] /* reactor.T_c[12] variable */,data->localData[0]->realVars[1358] /* reactor.particle[12].contactResistance_SiuLee.Rss variable */,"reactor.particle[12].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1514
type: SIMPLE_ASSIGN
reactor.qh12[12] = reactor.U_t * reactor.dA * (reactor.T_h[12] - reactor.T_c[12])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[31] /* reactor.T_h[12] STATE(1) */ - data->localData[0]->realVars[892] /* reactor.T_c[12] variable */));
  TRACE_POP
}

void residualFunc1519(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1519};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[892] /* reactor.T_c[12] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1513(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1514(data, threadData);
  res[0] = data->localData[0]->realVars[2298] /* reactor.qh12[12] variable */ + (data->localData[0]->realVars[1153] /* reactor.heatBoundary[12].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1519(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[12] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[892].attribute /* reactor.T_c[12] */.max;
}


/*
equation index: 1415
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[14] = 0.120272355042726 * reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[14] * reactor.T_b[14] - reactor.pvap[14] * $DER.reactor.T_b[14]) / reactor.T_b[14] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */;
  data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[342] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */) - ((data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */) * (data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[14] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1416
type: SIMPLE_ASSIGN
reactor.qm2[14] = reactor.V_v[14] * $DER.reactor.gama_i[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  data->localData[0]->realVars[2500] /* reactor.qm2[14] variable */ = (data->localData[0]->realVars[946] /* reactor.V_v[14] DUMMY_STATE */) * ((data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1417
type: SIMPLE_ASSIGN
$DER.reactor.psat[14] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[14]) * (-273.15 + reactor.T_b[14]) / (-16.00999999999999 + reactor.T_b[14])) * $DER.reactor.T_b[14] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[14]) * 257.14 / (-16.00999999999999 + reactor.T_b[14]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[14]) / (-16.00999999999999 + reactor.T_b[14]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */;
  data->localData[0]->realVars[273] /* der(reactor.psat[14]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"-16.00999999999999 + reactor.T_b[14]",equationIndexes)))) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[14]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"-16.00999999999999 + reactor.T_b[14]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1418
type: SIMPLE_ASSIGN
$DER.reactor.particle[14].particle_Radu2017_085.sorbent.A = if reactor.pvap[14] >= reactor.psat[14] then 0.0 else (-8.31446261815324) * (reactor.T_b[14] * ($DER.reactor.pvap[14] * reactor.psat[14] - reactor.pvap[14] * $DER.reactor.psat[14]) / reactor.psat[14] ^ 2.0 * reactor.psat[14] / reactor.pvap[14] + $DER.reactor.T_b[14] * log(reactor.pvap[14] / reactor.psat[14]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */,"reactor.psat[14]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[14] / reactor.psat[14]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */) * (data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */) - ((data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */) * (data->localData[0]->realVars[273] /* der(reactor.psat[14]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[14] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */),data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,"reactor.pvap[14]",equationIndexes)) + (data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[253] /* der(reactor.particle[14].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1419
type: SIMPLE_ASSIGN
reactor.qh3[14] = 1996.0 * reactor.M_v[14] * $DER.reactor.T_b[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  data->localData[0]->realVars[2340] /* reactor.qh3[14] variable */ = (1996.0) * ((data->localData[0]->realVars[748] /* reactor.M_v[14] DUMMY_STATE */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1420
type: SIMPLE_ASSIGN
reactor.qh2[14] = reactor.particle[14].particle_Radu2017_085.M_l * reactor.c_l[14] * $DER.reactor.T_b[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  data->localData[0]->realVars[2320] /* reactor.qh2[14] variable */ = (data->localData[0]->realVars[1480] /* reactor.particle[14].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1006] /* reactor.c_l[14] variable */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1421
type: SIMPLE_ASSIGN
reactor.qh1[14] = reactor.M_a[14] * reactor.particle[14].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  data->localData[0]->realVars[2240] /* reactor.qh1[14] variable */ = (data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */) * ((data->simulationInfo->realParameter[782] /* reactor.particle[14].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1422
type: SIMPLE_ASSIGN
$DER.reactor.w[14] = exp(reactor.particle[14].particle_Radu2017_085.sorbent.a - reactor.particle[14].particle_Radu2017_085.sorbent.b * reactor.particle[14].particle_Radu2017_085.sorbent.A) * (-reactor.particle[14].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[14].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[742] /* reactor.particle[14].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[762] /* reactor.particle[14].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2080] /* reactor.particle[14].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[762] /* reactor.particle[14].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[253] /* der(reactor.particle[14].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1423
type: SIMPLE_ASSIGN
$DER.reactor.V_v[14] = reactor.V_b[14] * (-reactor.particle[14].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[14] / reactor.particle[14].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  data->localData[0]->realVars[213] /* der(reactor.V_v[14]) DUMMY_DER */ = (data->localData[0]->realVars[921] /* reactor.V_b[14] variable */) * (((-data->simulationInfo->realParameter[962] /* reactor.particle[14].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */,data->simulationInfo->realParameter[562] /* reactor.particle[14].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[14].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1424
type: SIMPLE_ASSIGN
$DER.reactor.M_v[14] = reactor.V_v[14] * $DER.reactor.gama_i[14] + $DER.reactor.V_v[14] * reactor.gama_i[14]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  data->localData[0]->realVars[193] /* der(reactor.M_v[14]) DUMMY_DER */ = (data->localData[0]->realVars[946] /* reactor.V_v[14] DUMMY_STATE */) * (data->localData[0]->realVars[133] /* der(reactor.gama_i[14]) STATE_DER */) + (data->localData[0]->realVars[213] /* der(reactor.V_v[14]) DUMMY_DER */) * (data->localData[0]->realVars[53] /* reactor.gama_i[14] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1425
type: SIMPLE_ASSIGN
reactor.qh5[14] = reactor.h_vi[14] * $DER.reactor.M_v[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  data->localData[0]->realVars[2380] /* reactor.qh5[14] variable */ = (data->localData[0]->realVars[1135] /* reactor.h_vi[14] variable */) * ((data->localData[0]->realVars[193] /* der(reactor.M_v[14]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1426
type: SIMPLE_ASSIGN
reactor.qm3[14] = reactor.gama_i[14] * reactor.V_b[14] * reactor.particle[14].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[14] * reactor.dN / reactor.particle[14].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  data->localData[0]->realVars[2520] /* reactor.qm3[14] variable */ = (data->localData[0]->realVars[53] /* reactor.gama_i[14] STATE(1) */) * ((data->localData[0]->realVars[921] /* reactor.V_b[14] variable */) * ((data->simulationInfo->realParameter[962] /* reactor.particle[14].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[562] /* reactor.particle[14].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[14].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1427
type: SIMPLE_ASSIGN
reactor.qm1[14] = reactor.M_a[14] * $DER.reactor.w[14] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  data->localData[0]->realVars[2480] /* reactor.qm1[14] variable */ = (data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1428
type: SIMPLE_ASSIGN
reactor.qh4[14] = (-reactor.M_a[14]) * $DER.reactor.w[14] * reactor.particle[14].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  data->localData[0]->realVars[2360] /* reactor.qh4[14] variable */ = ((-data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */)) * ((data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) * ((data->simulationInfo->realParameter[702] /* reactor.particle[14].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc1449(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1449};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1415(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1416(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1417(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1418(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1419(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1420(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1421(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1422(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1423(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1424(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1425(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1426(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1427(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1428(data, threadData);
  res[0] = data->localData[0]->realVars[2580] /* reactor.qm6[14] variable */ + data->localData[0]->realVars[2560] /* reactor.qm5[14] variable */ + data->localData[0]->realVars[2540] /* reactor.qm4[14] variable */ + (-data->localData[0]->realVars[2500] /* reactor.qm2[14] variable */) - data->localData[0]->realVars[2480] /* reactor.qm1[14] variable */ - data->localData[0]->realVars[2520] /* reactor.qm3[14] variable */;

  res[1] = data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ + data->localData[0]->realVars[2280] /* reactor.qh11[14] variable */ + data->localData[0]->realVars[2260] /* reactor.qh10[14] variable */ + data->localData[0]->realVars[2460] /* reactor.qh9[14] variable */ + data->localData[0]->realVars[2440] /* reactor.qh8[14] variable */ + data->localData[0]->realVars[2420] /* reactor.qh7[14] variable */ + data->localData[0]->realVars[2400] /* reactor.qh6[14] variable */ + (-data->localData[0]->realVars[2320] /* reactor.qh2[14] variable */) - data->localData[0]->realVars[2240] /* reactor.qh1[14] variable */ - data->localData[0]->realVars[2340] /* reactor.qh3[14] variable */ - data->localData[0]->realVars[2360] /* reactor.qh4[14] variable */ - data->localData[0]->realVars[2380] /* reactor.qh5[14] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1449(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.pvap[14]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[293].attribute /* der(reactor.pvap[14]) */.max;
  /* static ls data for der(reactor.T_b[14]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[93].attribute /* der(reactor.T_b[14]) */.max;
}


/*
equation index: 1400
type: SIMPLE_ASSIGN
reactor.heatBoundary[13].Q = (reactor.T_b[13] - reactor.T_c[13]) / reactor.particle[13].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  data->localData[0]->realVars[1154] /* reactor.heatBoundary[13].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */ - data->localData[0]->realVars[893] /* reactor.T_c[13] variable */,data->localData[0]->realVars[1359] /* reactor.particle[13].contactResistance_SiuLee.Rss variable */,"reactor.particle[13].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1401
type: SIMPLE_ASSIGN
reactor.qh12[13] = reactor.U_t * reactor.dA * (reactor.T_h[13] - reactor.T_c[13])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[32] /* reactor.T_h[13] STATE(1) */ - data->localData[0]->realVars[893] /* reactor.T_c[13] variable */));
  TRACE_POP
}

void residualFunc1406(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1406};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[893] /* reactor.T_c[13] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1400(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1401(data, threadData);
  res[0] = data->localData[0]->realVars[2299] /* reactor.qh12[13] variable */ + (data->localData[0]->realVars[1154] /* reactor.heatBoundary[13].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1406(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[13] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[893].attribute /* reactor.T_c[13] */.max;
}


/*
equation index: 1302
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[15] = 0.120272355042726 * reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[15] * reactor.T_b[15] - reactor.pvap[15] * $DER.reactor.T_b[15]) / reactor.T_b[15] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */;
  data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[343] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */) - ((data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */) * (data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[15] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
reactor.qh1[15] = reactor.M_a[15] * reactor.particle[15].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  data->localData[0]->realVars[2241] /* reactor.qh1[15] variable */ = (data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */) * ((data->simulationInfo->realParameter[783] /* reactor.particle[15].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
reactor.qh3[15] = 1996.0 * reactor.M_v[15] * $DER.reactor.T_b[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  data->localData[0]->realVars[2341] /* reactor.qh3[15] variable */ = (1996.0) * ((data->localData[0]->realVars[749] /* reactor.M_v[15] DUMMY_STATE */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
reactor.qh2[15] = reactor.particle[15].particle_Radu2017_085.M_l * reactor.c_l[15] * $DER.reactor.T_b[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  data->localData[0]->realVars[2321] /* reactor.qh2[15] variable */ = (data->localData[0]->realVars[1481] /* reactor.particle[15].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1007] /* reactor.c_l[15] variable */) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
reactor.qm2[15] = reactor.V_v[15] * $DER.reactor.gama_i[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  data->localData[0]->realVars[2501] /* reactor.qm2[15] variable */ = (data->localData[0]->realVars[947] /* reactor.V_v[15] DUMMY_STATE */) * ((data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
$DER.reactor.psat[15] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[15]) * (-273.15 + reactor.T_b[15]) / (-16.00999999999999 + reactor.T_b[15])) * $DER.reactor.T_b[15] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[15]) * 257.14 / (-16.00999999999999 + reactor.T_b[15]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[15]) / (-16.00999999999999 + reactor.T_b[15]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */;
  data->localData[0]->realVars[274] /* der(reactor.psat[15]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"-16.00999999999999 + reactor.T_b[15]",equationIndexes)))) * ((data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[15]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"-16.00999999999999 + reactor.T_b[15]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
$DER.reactor.particle[15].particle_Radu2017_085.sorbent.A = if reactor.pvap[15] >= reactor.psat[15] then 0.0 else (-8.31446261815324) * (reactor.T_b[15] * ($DER.reactor.pvap[15] * reactor.psat[15] - reactor.pvap[15] * $DER.reactor.psat[15]) / reactor.psat[15] ^ 2.0 * reactor.psat[15] / reactor.pvap[15] + $DER.reactor.T_b[15] * log(reactor.pvap[15] / reactor.psat[15]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */,"reactor.psat[15]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[15] / reactor.psat[15]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */) * (data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */) - ((data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */) * (data->localData[0]->realVars[274] /* der(reactor.psat[15]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[15] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */),data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,"reactor.pvap[15]",equationIndexes)) + (data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[254] /* der(reactor.particle[15].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
$DER.reactor.w[15] = exp(reactor.particle[15].particle_Radu2017_085.sorbent.a - reactor.particle[15].particle_Radu2017_085.sorbent.b * reactor.particle[15].particle_Radu2017_085.sorbent.A) * (-reactor.particle[15].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[15].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[743] /* reactor.particle[15].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[763] /* reactor.particle[15].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2081] /* reactor.particle[15].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[763] /* reactor.particle[15].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[254] /* der(reactor.particle[15].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
reactor.qm1[15] = reactor.M_a[15] * $DER.reactor.w[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  data->localData[0]->realVars[2481] /* reactor.qm1[15] variable */ = (data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
reactor.qm3[15] = reactor.gama_i[15] * reactor.V_b[15] * reactor.particle[15].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[15] * reactor.dN / reactor.particle[15].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  data->localData[0]->realVars[2521] /* reactor.qm3[15] variable */ = (data->localData[0]->realVars[54] /* reactor.gama_i[15] STATE(1) */) * ((data->localData[0]->realVars[922] /* reactor.V_b[15] variable */) * ((data->simulationInfo->realParameter[963] /* reactor.particle[15].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[563] /* reactor.particle[15].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[15].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
reactor.qh4[15] = (-reactor.M_a[15]) * $DER.reactor.w[15] * reactor.particle[15].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  data->localData[0]->realVars[2361] /* reactor.qh4[15] variable */ = ((-data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */)) * ((data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) * ((data->simulationInfo->realParameter[703] /* reactor.particle[15].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
$DER.reactor.V_v[15] = reactor.V_b[15] * (-reactor.particle[15].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[15] / reactor.particle[15].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  data->localData[0]->realVars[214] /* der(reactor.V_v[15]) DUMMY_DER */ = (data->localData[0]->realVars[922] /* reactor.V_b[15] variable */) * (((-data->simulationInfo->realParameter[963] /* reactor.particle[15].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */,data->simulationInfo->realParameter[563] /* reactor.particle[15].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[15].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
$DER.reactor.M_v[15] = reactor.V_v[15] * $DER.reactor.gama_i[15] + $DER.reactor.V_v[15] * reactor.gama_i[15]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  data->localData[0]->realVars[194] /* der(reactor.M_v[15]) DUMMY_DER */ = (data->localData[0]->realVars[947] /* reactor.V_v[15] DUMMY_STATE */) * (data->localData[0]->realVars[134] /* der(reactor.gama_i[15]) STATE_DER */) + (data->localData[0]->realVars[214] /* der(reactor.V_v[15]) DUMMY_DER */) * (data->localData[0]->realVars[54] /* reactor.gama_i[15] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
reactor.qh5[15] = reactor.h_vi[15] * $DER.reactor.M_v[15] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  data->localData[0]->realVars[2381] /* reactor.qh5[15] variable */ = (data->localData[0]->realVars[1136] /* reactor.h_vi[15] variable */) * ((data->localData[0]->realVars[194] /* der(reactor.M_v[15]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc1336(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1336};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1302(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1303(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1304(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1305(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1306(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1307(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1308(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1309(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1310(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1311(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1312(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1313(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1314(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1315(data, threadData);
  res[0] = data->localData[0]->realVars[2581] /* reactor.qm6[15] variable */ + data->localData[0]->realVars[2561] /* reactor.qm5[15] variable */ + data->localData[0]->realVars[2541] /* reactor.qm4[15] variable */ + (-data->localData[0]->realVars[2501] /* reactor.qm2[15] variable */) - data->localData[0]->realVars[2481] /* reactor.qm1[15] variable */ - data->localData[0]->realVars[2521] /* reactor.qm3[15] variable */;

  res[1] = data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ + data->localData[0]->realVars[2281] /* reactor.qh11[15] variable */ + data->localData[0]->realVars[2261] /* reactor.qh10[15] variable */ + data->localData[0]->realVars[2461] /* reactor.qh9[15] variable */ + data->localData[0]->realVars[2441] /* reactor.qh8[15] variable */ + data->localData[0]->realVars[2421] /* reactor.qh7[15] variable */ + data->localData[0]->realVars[2401] /* reactor.qh6[15] variable */ + (-data->localData[0]->realVars[2321] /* reactor.qh2[15] variable */) - data->localData[0]->realVars[2241] /* reactor.qh1[15] variable */ - data->localData[0]->realVars[2341] /* reactor.qh3[15] variable */ - data->localData[0]->realVars[2361] /* reactor.qh4[15] variable */ - data->localData[0]->realVars[2381] /* reactor.qh5[15] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1336(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[15]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[94].attribute /* der(reactor.T_b[15]) */.max;
  /* static ls data for der(reactor.pvap[15]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[294].attribute /* der(reactor.pvap[15]) */.max;
}


/*
equation index: 1287
type: SIMPLE_ASSIGN
reactor.heatBoundary[14].Q = (reactor.T_b[14] - reactor.T_c[14]) / reactor.particle[14].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  data->localData[0]->realVars[1155] /* reactor.heatBoundary[14].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */ - data->localData[0]->realVars[894] /* reactor.T_c[14] variable */,data->localData[0]->realVars[1360] /* reactor.particle[14].contactResistance_SiuLee.Rss variable */,"reactor.particle[14].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1288
type: SIMPLE_ASSIGN
reactor.qh12[14] = reactor.U_t * reactor.dA * (reactor.T_h[14] - reactor.T_c[14])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[33] /* reactor.T_h[14] STATE(1) */ - data->localData[0]->realVars[894] /* reactor.T_c[14] variable */));
  TRACE_POP
}

void residualFunc1293(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1293};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[894] /* reactor.T_c[14] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1287(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1288(data, threadData);
  res[0] = data->localData[0]->realVars[2300] /* reactor.qh12[14] variable */ + (data->localData[0]->realVars[1155] /* reactor.heatBoundary[14].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1293(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[14] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[894].attribute /* reactor.T_c[14] */.max;
}


/*
equation index: 1189
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[16] = 0.120272355042726 * reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[16] * reactor.T_b[16] - reactor.pvap[16] * $DER.reactor.T_b[16]) / reactor.T_b[16] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */;
  data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[344] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */) - ((data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */) * (data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[16] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
reactor.qm2[16] = reactor.V_v[16] * $DER.reactor.gama_i[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  data->localData[0]->realVars[2502] /* reactor.qm2[16] variable */ = (data->localData[0]->realVars[948] /* reactor.V_v[16] DUMMY_STATE */) * ((data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
$DER.reactor.psat[16] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[16]) * (-273.15 + reactor.T_b[16]) / (-16.00999999999999 + reactor.T_b[16])) * $DER.reactor.T_b[16] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[16]) * 257.14 / (-16.00999999999999 + reactor.T_b[16]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[16]) / (-16.00999999999999 + reactor.T_b[16]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */;
  data->localData[0]->realVars[275] /* der(reactor.psat[16]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"-16.00999999999999 + reactor.T_b[16]",equationIndexes)))) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[16]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"-16.00999999999999 + reactor.T_b[16]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
$DER.reactor.particle[16].particle_Radu2017_085.sorbent.A = if reactor.pvap[16] >= reactor.psat[16] then 0.0 else (-8.31446261815324) * (reactor.T_b[16] * ($DER.reactor.pvap[16] * reactor.psat[16] - reactor.pvap[16] * $DER.reactor.psat[16]) / reactor.psat[16] ^ 2.0 * reactor.psat[16] / reactor.pvap[16] + $DER.reactor.T_b[16] * log(reactor.pvap[16] / reactor.psat[16]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */,"reactor.psat[16]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[16] / reactor.psat[16]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */) * (data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */) - ((data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */) * (data->localData[0]->realVars[275] /* der(reactor.psat[16]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[16] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */),data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,"reactor.pvap[16]",equationIndexes)) + (data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[255] /* der(reactor.particle[16].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
$DER.reactor.w[16] = exp(reactor.particle[16].particle_Radu2017_085.sorbent.a - reactor.particle[16].particle_Radu2017_085.sorbent.b * reactor.particle[16].particle_Radu2017_085.sorbent.A) * (-reactor.particle[16].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[16].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[744] /* reactor.particle[16].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[764] /* reactor.particle[16].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2082] /* reactor.particle[16].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[764] /* reactor.particle[16].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[255] /* der(reactor.particle[16].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
reactor.qm1[16] = reactor.M_a[16] * $DER.reactor.w[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  data->localData[0]->realVars[2482] /* reactor.qm1[16] variable */ = (data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1195
type: SIMPLE_ASSIGN
reactor.qm3[16] = reactor.gama_i[16] * reactor.V_b[16] * reactor.particle[16].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[16] * reactor.dN / reactor.particle[16].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  data->localData[0]->realVars[2522] /* reactor.qm3[16] variable */ = (data->localData[0]->realVars[55] /* reactor.gama_i[16] STATE(1) */) * ((data->localData[0]->realVars[923] /* reactor.V_b[16] variable */) * ((data->simulationInfo->realParameter[964] /* reactor.particle[16].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[564] /* reactor.particle[16].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[16].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1196
type: SIMPLE_ASSIGN
reactor.qh4[16] = (-reactor.M_a[16]) * $DER.reactor.w[16] * reactor.particle[16].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  data->localData[0]->realVars[2362] /* reactor.qh4[16] variable */ = ((-data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */)) * ((data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) * ((data->simulationInfo->realParameter[704] /* reactor.particle[16].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1197
type: SIMPLE_ASSIGN
$DER.reactor.V_v[16] = reactor.V_b[16] * (-reactor.particle[16].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[16] / reactor.particle[16].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  data->localData[0]->realVars[215] /* der(reactor.V_v[16]) DUMMY_DER */ = (data->localData[0]->realVars[923] /* reactor.V_b[16] variable */) * (((-data->simulationInfo->realParameter[964] /* reactor.particle[16].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */,data->simulationInfo->realParameter[564] /* reactor.particle[16].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[16].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1198
type: SIMPLE_ASSIGN
$DER.reactor.M_v[16] = reactor.V_v[16] * $DER.reactor.gama_i[16] + $DER.reactor.V_v[16] * reactor.gama_i[16]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  data->localData[0]->realVars[195] /* der(reactor.M_v[16]) DUMMY_DER */ = (data->localData[0]->realVars[948] /* reactor.V_v[16] DUMMY_STATE */) * (data->localData[0]->realVars[135] /* der(reactor.gama_i[16]) STATE_DER */) + (data->localData[0]->realVars[215] /* der(reactor.V_v[16]) DUMMY_DER */) * (data->localData[0]->realVars[55] /* reactor.gama_i[16] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
reactor.qh5[16] = reactor.h_vi[16] * $DER.reactor.M_v[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  data->localData[0]->realVars[2382] /* reactor.qh5[16] variable */ = (data->localData[0]->realVars[1137] /* reactor.h_vi[16] variable */) * ((data->localData[0]->realVars[195] /* der(reactor.M_v[16]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
reactor.qh3[16] = 1996.0 * reactor.M_v[16] * $DER.reactor.T_b[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  data->localData[0]->realVars[2342] /* reactor.qh3[16] variable */ = (1996.0) * ((data->localData[0]->realVars[750] /* reactor.M_v[16] DUMMY_STATE */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
reactor.qh2[16] = reactor.particle[16].particle_Radu2017_085.M_l * reactor.c_l[16] * $DER.reactor.T_b[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  data->localData[0]->realVars[2322] /* reactor.qh2[16] variable */ = (data->localData[0]->realVars[1482] /* reactor.particle[16].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1008] /* reactor.c_l[16] variable */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1202
type: SIMPLE_ASSIGN
reactor.qh1[16] = reactor.M_a[16] * reactor.particle[16].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[16] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  data->localData[0]->realVars[2242] /* reactor.qh1[16] variable */ = (data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */) * ((data->simulationInfo->realParameter[784] /* reactor.particle[16].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc1223(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1223};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1189(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1190(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1191(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1192(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1193(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1194(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1195(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1196(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1197(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1198(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1199(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1200(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1201(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1202(data, threadData);
  res[0] = data->localData[0]->realVars[2582] /* reactor.qm6[16] variable */ + data->localData[0]->realVars[2562] /* reactor.qm5[16] variable */ + data->localData[0]->realVars[2542] /* reactor.qm4[16] variable */ + (-data->localData[0]->realVars[2502] /* reactor.qm2[16] variable */) - data->localData[0]->realVars[2482] /* reactor.qm1[16] variable */ - data->localData[0]->realVars[2522] /* reactor.qm3[16] variable */;

  res[1] = data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ + data->localData[0]->realVars[2282] /* reactor.qh11[16] variable */ + data->localData[0]->realVars[2262] /* reactor.qh10[16] variable */ + data->localData[0]->realVars[2462] /* reactor.qh9[16] variable */ + data->localData[0]->realVars[2442] /* reactor.qh8[16] variable */ + data->localData[0]->realVars[2422] /* reactor.qh7[16] variable */ + data->localData[0]->realVars[2402] /* reactor.qh6[16] variable */ + (-data->localData[0]->realVars[2322] /* reactor.qh2[16] variable */) - data->localData[0]->realVars[2242] /* reactor.qh1[16] variable */ - data->localData[0]->realVars[2342] /* reactor.qh3[16] variable */ - data->localData[0]->realVars[2362] /* reactor.qh4[16] variable */ - data->localData[0]->realVars[2382] /* reactor.qh5[16] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1223(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[16]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[95].attribute /* der(reactor.T_b[16]) */.max;
  /* static ls data for der(reactor.pvap[16]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[295].attribute /* der(reactor.pvap[16]) */.max;
}


/*
equation index: 1174
type: SIMPLE_ASSIGN
reactor.heatBoundary[15].Q = (reactor.T_b[15] - reactor.T_c[15]) / reactor.particle[15].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  data->localData[0]->realVars[1156] /* reactor.heatBoundary[15].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */ - data->localData[0]->realVars[895] /* reactor.T_c[15] variable */,data->localData[0]->realVars[1361] /* reactor.particle[15].contactResistance_SiuLee.Rss variable */,"reactor.particle[15].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1175
type: SIMPLE_ASSIGN
reactor.qh12[15] = reactor.U_t * reactor.dA * (reactor.T_h[15] - reactor.T_c[15])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[34] /* reactor.T_h[15] STATE(1) */ - data->localData[0]->realVars[895] /* reactor.T_c[15] variable */));
  TRACE_POP
}

void residualFunc1180(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1180};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[895] /* reactor.T_c[15] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1174(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1175(data, threadData);
  res[0] = data->localData[0]->realVars[2301] /* reactor.qh12[15] variable */ + (data->localData[0]->realVars[1156] /* reactor.heatBoundary[15].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1180(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[15] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[895].attribute /* reactor.T_c[15] */.max;
}


/*
equation index: 1076
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[17] = 0.120272355042726 * reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[17] * reactor.T_b[17] - reactor.pvap[17] * $DER.reactor.T_b[17]) / reactor.T_b[17] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */;
  data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[345] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */) - ((data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */) * (data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[17] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1077
type: SIMPLE_ASSIGN
reactor.qh1[17] = reactor.M_a[17] * reactor.particle[17].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  data->localData[0]->realVars[2243] /* reactor.qh1[17] variable */ = (data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */) * ((data->simulationInfo->realParameter[785] /* reactor.particle[17].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1078
type: SIMPLE_ASSIGN
reactor.qh3[17] = 1996.0 * reactor.M_v[17] * $DER.reactor.T_b[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  data->localData[0]->realVars[2343] /* reactor.qh3[17] variable */ = (1996.0) * ((data->localData[0]->realVars[751] /* reactor.M_v[17] DUMMY_STATE */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1079
type: SIMPLE_ASSIGN
reactor.qh2[17] = reactor.particle[17].particle_Radu2017_085.M_l * reactor.c_l[17] * $DER.reactor.T_b[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  data->localData[0]->realVars[2323] /* reactor.qh2[17] variable */ = (data->localData[0]->realVars[1483] /* reactor.particle[17].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1009] /* reactor.c_l[17] variable */) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1080
type: SIMPLE_ASSIGN
reactor.qm2[17] = reactor.V_v[17] * $DER.reactor.gama_i[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  data->localData[0]->realVars[2503] /* reactor.qm2[17] variable */ = (data->localData[0]->realVars[949] /* reactor.V_v[17] DUMMY_STATE */) * ((data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1081
type: SIMPLE_ASSIGN
$DER.reactor.psat[17] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[17]) * (-273.15 + reactor.T_b[17]) / (-16.00999999999999 + reactor.T_b[17])) * $DER.reactor.T_b[17] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[17]) * 257.14 / (-16.00999999999999 + reactor.T_b[17]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[17]) / (-16.00999999999999 + reactor.T_b[17]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */;
  data->localData[0]->realVars[276] /* der(reactor.psat[17]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"-16.00999999999999 + reactor.T_b[17]",equationIndexes)))) * ((data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[17]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"-16.00999999999999 + reactor.T_b[17]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1082
type: SIMPLE_ASSIGN
$DER.reactor.particle[17].particle_Radu2017_085.sorbent.A = if reactor.pvap[17] >= reactor.psat[17] then 0.0 else (-8.31446261815324) * (reactor.T_b[17] * ($DER.reactor.pvap[17] * reactor.psat[17] - reactor.pvap[17] * $DER.reactor.psat[17]) / reactor.psat[17] ^ 2.0 * reactor.psat[17] / reactor.pvap[17] + $DER.reactor.T_b[17] * log(reactor.pvap[17] / reactor.psat[17]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */,"reactor.psat[17]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[17] / reactor.psat[17]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */) * (data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */) - ((data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */) * (data->localData[0]->realVars[276] /* der(reactor.psat[17]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[17] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */),data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,"reactor.pvap[17]",equationIndexes)) + (data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[256] /* der(reactor.particle[17].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 1083
type: SIMPLE_ASSIGN
$DER.reactor.w[17] = exp(reactor.particle[17].particle_Radu2017_085.sorbent.a - reactor.particle[17].particle_Radu2017_085.sorbent.b * reactor.particle[17].particle_Radu2017_085.sorbent.A) * (-reactor.particle[17].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[17].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[745] /* reactor.particle[17].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[765] /* reactor.particle[17].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2083] /* reactor.particle[17].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[765] /* reactor.particle[17].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[256] /* der(reactor.particle[17].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 1084
type: SIMPLE_ASSIGN
reactor.qm3[17] = reactor.gama_i[17] * reactor.V_b[17] * reactor.particle[17].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[17] * reactor.dN / reactor.particle[17].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  data->localData[0]->realVars[2523] /* reactor.qm3[17] variable */ = (data->localData[0]->realVars[56] /* reactor.gama_i[17] STATE(1) */) * ((data->localData[0]->realVars[924] /* reactor.V_b[17] variable */) * ((data->simulationInfo->realParameter[965] /* reactor.particle[17].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[565] /* reactor.particle[17].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[17].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 1085
type: SIMPLE_ASSIGN
reactor.qm1[17] = reactor.M_a[17] * $DER.reactor.w[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  data->localData[0]->realVars[2483] /* reactor.qm1[17] variable */ = (data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 1086
type: SIMPLE_ASSIGN
reactor.qh4[17] = (-reactor.M_a[17]) * $DER.reactor.w[17] * reactor.particle[17].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  data->localData[0]->realVars[2363] /* reactor.qh4[17] variable */ = ((-data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */)) * ((data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) * ((data->simulationInfo->realParameter[705] /* reactor.particle[17].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 1087
type: SIMPLE_ASSIGN
$DER.reactor.V_v[17] = reactor.V_b[17] * (-reactor.particle[17].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[17] / reactor.particle[17].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  data->localData[0]->realVars[216] /* der(reactor.V_v[17]) DUMMY_DER */ = (data->localData[0]->realVars[924] /* reactor.V_b[17] variable */) * (((-data->simulationInfo->realParameter[965] /* reactor.particle[17].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */,data->simulationInfo->realParameter[565] /* reactor.particle[17].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[17].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1088
type: SIMPLE_ASSIGN
$DER.reactor.M_v[17] = reactor.V_v[17] * $DER.reactor.gama_i[17] + $DER.reactor.V_v[17] * reactor.gama_i[17]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  data->localData[0]->realVars[196] /* der(reactor.M_v[17]) DUMMY_DER */ = (data->localData[0]->realVars[949] /* reactor.V_v[17] DUMMY_STATE */) * (data->localData[0]->realVars[136] /* der(reactor.gama_i[17]) STATE_DER */) + (data->localData[0]->realVars[216] /* der(reactor.V_v[17]) DUMMY_DER */) * (data->localData[0]->realVars[56] /* reactor.gama_i[17] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1089
type: SIMPLE_ASSIGN
reactor.qh5[17] = reactor.h_vi[17] * $DER.reactor.M_v[17] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  data->localData[0]->realVars[2383] /* reactor.qh5[17] variable */ = (data->localData[0]->realVars[1138] /* reactor.h_vi[17] variable */) * ((data->localData[0]->realVars[196] /* der(reactor.M_v[17]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc1110(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1110};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1076(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1077(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1078(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1079(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1080(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1081(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1082(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1083(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1084(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1085(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1086(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1087(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1088(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1089(data, threadData);
  res[0] = data->localData[0]->realVars[2583] /* reactor.qm6[17] variable */ + data->localData[0]->realVars[2563] /* reactor.qm5[17] variable */ + data->localData[0]->realVars[2543] /* reactor.qm4[17] variable */ + (-data->localData[0]->realVars[2503] /* reactor.qm2[17] variable */) - data->localData[0]->realVars[2483] /* reactor.qm1[17] variable */ - data->localData[0]->realVars[2523] /* reactor.qm3[17] variable */;

  res[1] = data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ + data->localData[0]->realVars[2283] /* reactor.qh11[17] variable */ + data->localData[0]->realVars[2263] /* reactor.qh10[17] variable */ + data->localData[0]->realVars[2463] /* reactor.qh9[17] variable */ + data->localData[0]->realVars[2443] /* reactor.qh8[17] variable */ + data->localData[0]->realVars[2423] /* reactor.qh7[17] variable */ + data->localData[0]->realVars[2403] /* reactor.qh6[17] variable */ + (-data->localData[0]->realVars[2323] /* reactor.qh2[17] variable */) - data->localData[0]->realVars[2243] /* reactor.qh1[17] variable */ - data->localData[0]->realVars[2343] /* reactor.qh3[17] variable */ - data->localData[0]->realVars[2363] /* reactor.qh4[17] variable */ - data->localData[0]->realVars[2383] /* reactor.qh5[17] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1110(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[17]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[96].attribute /* der(reactor.T_b[17]) */.max;
  /* static ls data for der(reactor.pvap[17]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[296].attribute /* der(reactor.pvap[17]) */.max;
}


/*
equation index: 1061
type: SIMPLE_ASSIGN
reactor.heatBoundary[16].Q = (reactor.T_b[16] - reactor.T_c[16]) / reactor.particle[16].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  data->localData[0]->realVars[1157] /* reactor.heatBoundary[16].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */ - data->localData[0]->realVars[896] /* reactor.T_c[16] variable */,data->localData[0]->realVars[1362] /* reactor.particle[16].contactResistance_SiuLee.Rss variable */,"reactor.particle[16].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 1062
type: SIMPLE_ASSIGN
reactor.qh12[16] = reactor.U_t * reactor.dA * (reactor.T_h[16] - reactor.T_c[16])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[35] /* reactor.T_h[16] STATE(1) */ - data->localData[0]->realVars[896] /* reactor.T_c[16] variable */));
  TRACE_POP
}

void residualFunc1067(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1067};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[896] /* reactor.T_c[16] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1061(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_1062(data, threadData);
  res[0] = data->localData[0]->realVars[2302] /* reactor.qh12[16] variable */ + (data->localData[0]->realVars[1157] /* reactor.heatBoundary[16].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1067(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[16] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[896].attribute /* reactor.T_c[16] */.max;
}


/*
equation index: 963
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[18] = 0.120272355042726 * reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[18] * reactor.T_b[18] - reactor.pvap[18] * $DER.reactor.T_b[18]) / reactor.T_b[18] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */;
  data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[346] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */) - ((data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */) * (data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[18] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
reactor.qh2[18] = reactor.particle[18].particle_Radu2017_085.M_l * reactor.c_l[18] * $DER.reactor.T_b[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[2324] /* reactor.qh2[18] variable */ = (data->localData[0]->realVars[1484] /* reactor.particle[18].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1010] /* reactor.c_l[18] variable */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
reactor.qh3[18] = 1996.0 * reactor.M_v[18] * $DER.reactor.T_b[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  data->localData[0]->realVars[2344] /* reactor.qh3[18] variable */ = (1996.0) * ((data->localData[0]->realVars[752] /* reactor.M_v[18] DUMMY_STATE */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
reactor.qh1[18] = reactor.M_a[18] * reactor.particle[18].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  data->localData[0]->realVars[2244] /* reactor.qh1[18] variable */ = (data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */) * ((data->simulationInfo->realParameter[786] /* reactor.particle[18].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
reactor.qm2[18] = reactor.V_v[18] * $DER.reactor.gama_i[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[2504] /* reactor.qm2[18] variable */ = (data->localData[0]->realVars[950] /* reactor.V_v[18] DUMMY_STATE */) * ((data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 968
type: SIMPLE_ASSIGN
$DER.reactor.psat[18] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[18]) * (-273.15 + reactor.T_b[18]) / (-16.00999999999999 + reactor.T_b[18])) * $DER.reactor.T_b[18] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[18]) * 257.14 / (-16.00999999999999 + reactor.T_b[18]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[18]) / (-16.00999999999999 + reactor.T_b[18]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */;
  data->localData[0]->realVars[277] /* der(reactor.psat[18]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"-16.00999999999999 + reactor.T_b[18]",equationIndexes)))) * ((data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[18]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"-16.00999999999999 + reactor.T_b[18]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 969
type: SIMPLE_ASSIGN
$DER.reactor.particle[18].particle_Radu2017_085.sorbent.A = if reactor.pvap[18] >= reactor.psat[18] then 0.0 else (-8.31446261815324) * (reactor.T_b[18] * ($DER.reactor.pvap[18] * reactor.psat[18] - reactor.pvap[18] * $DER.reactor.psat[18]) / reactor.psat[18] ^ 2.0 * reactor.psat[18] / reactor.pvap[18] + $DER.reactor.T_b[18] * log(reactor.pvap[18] / reactor.psat[18]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */,"reactor.psat[18]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[18] / reactor.psat[18]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */) * (data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */) - ((data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */) * (data->localData[0]->realVars[277] /* der(reactor.psat[18]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[18] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */),data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,"reactor.pvap[18]",equationIndexes)) + (data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[257] /* der(reactor.particle[18].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 970
type: SIMPLE_ASSIGN
$DER.reactor.w[18] = exp(reactor.particle[18].particle_Radu2017_085.sorbent.a - reactor.particle[18].particle_Radu2017_085.sorbent.b * reactor.particle[18].particle_Radu2017_085.sorbent.A) * (-reactor.particle[18].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[18].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[746] /* reactor.particle[18].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[766] /* reactor.particle[18].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2084] /* reactor.particle[18].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[766] /* reactor.particle[18].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[257] /* der(reactor.particle[18].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 971
type: SIMPLE_ASSIGN
reactor.qm1[18] = reactor.M_a[18] * $DER.reactor.w[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->localData[0]->realVars[2484] /* reactor.qm1[18] variable */ = (data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
reactor.qm3[18] = reactor.gama_i[18] * reactor.V_b[18] * reactor.particle[18].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[18] * reactor.dN / reactor.particle[18].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->localData[0]->realVars[2524] /* reactor.qm3[18] variable */ = (data->localData[0]->realVars[57] /* reactor.gama_i[18] STATE(1) */) * ((data->localData[0]->realVars[925] /* reactor.V_b[18] variable */) * ((data->simulationInfo->realParameter[966] /* reactor.particle[18].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[566] /* reactor.particle[18].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[18].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
reactor.qh4[18] = (-reactor.M_a[18]) * $DER.reactor.w[18] * reactor.particle[18].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->localData[0]->realVars[2364] /* reactor.qh4[18] variable */ = ((-data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */)) * ((data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) * ((data->simulationInfo->realParameter[706] /* reactor.particle[18].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
$DER.reactor.V_v[18] = reactor.V_b[18] * (-reactor.particle[18].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[18] / reactor.particle[18].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->localData[0]->realVars[217] /* der(reactor.V_v[18]) DUMMY_DER */ = (data->localData[0]->realVars[925] /* reactor.V_b[18] variable */) * (((-data->simulationInfo->realParameter[966] /* reactor.particle[18].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */,data->simulationInfo->realParameter[566] /* reactor.particle[18].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[18].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
$DER.reactor.M_v[18] = reactor.V_v[18] * $DER.reactor.gama_i[18] + $DER.reactor.V_v[18] * reactor.gama_i[18]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->localData[0]->realVars[197] /* der(reactor.M_v[18]) DUMMY_DER */ = (data->localData[0]->realVars[950] /* reactor.V_v[18] DUMMY_STATE */) * (data->localData[0]->realVars[137] /* der(reactor.gama_i[18]) STATE_DER */) + (data->localData[0]->realVars[217] /* der(reactor.V_v[18]) DUMMY_DER */) * (data->localData[0]->realVars[57] /* reactor.gama_i[18] STATE(1) */);
  TRACE_POP
}
/*
equation index: 976
type: SIMPLE_ASSIGN
reactor.qh5[18] = reactor.h_vi[18] * $DER.reactor.M_v[18] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->localData[0]->realVars[2384] /* reactor.qh5[18] variable */ = (data->localData[0]->realVars[1139] /* reactor.h_vi[18] variable */) * ((data->localData[0]->realVars[197] /* der(reactor.M_v[18]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc997(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,997};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_963(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_964(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_965(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_966(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_967(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_968(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_969(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_970(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_971(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_972(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_973(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_974(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_975(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_976(data, threadData);
  res[0] = data->localData[0]->realVars[2584] /* reactor.qm6[18] variable */ + data->localData[0]->realVars[2564] /* reactor.qm5[18] variable */ + data->localData[0]->realVars[2544] /* reactor.qm4[18] variable */ + (-data->localData[0]->realVars[2504] /* reactor.qm2[18] variable */) - data->localData[0]->realVars[2484] /* reactor.qm1[18] variable */ - data->localData[0]->realVars[2524] /* reactor.qm3[18] variable */;

  res[1] = data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ + data->localData[0]->realVars[2284] /* reactor.qh11[18] variable */ + data->localData[0]->realVars[2264] /* reactor.qh10[18] variable */ + data->localData[0]->realVars[2464] /* reactor.qh9[18] variable */ + data->localData[0]->realVars[2444] /* reactor.qh8[18] variable */ + data->localData[0]->realVars[2424] /* reactor.qh7[18] variable */ + data->localData[0]->realVars[2404] /* reactor.qh6[18] variable */ + (-data->localData[0]->realVars[2324] /* reactor.qh2[18] variable */) - data->localData[0]->realVars[2244] /* reactor.qh1[18] variable */ - data->localData[0]->realVars[2344] /* reactor.qh3[18] variable */ - data->localData[0]->realVars[2364] /* reactor.qh4[18] variable */ - data->localData[0]->realVars[2384] /* reactor.qh5[18] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData997(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[18]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[97].attribute /* der(reactor.T_b[18]) */.max;
  /* static ls data for der(reactor.pvap[18]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[297].attribute /* der(reactor.pvap[18]) */.max;
}


/*
equation index: 948
type: SIMPLE_ASSIGN
reactor.heatBoundary[17].Q = (reactor.T_b[17] - reactor.T_c[17]) / reactor.particle[17].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[1158] /* reactor.heatBoundary[17].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */ - data->localData[0]->realVars[897] /* reactor.T_c[17] variable */,data->localData[0]->realVars[1363] /* reactor.particle[17].contactResistance_SiuLee.Rss variable */,"reactor.particle[17].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
reactor.qh12[17] = reactor.U_t * reactor.dA * (reactor.T_h[17] - reactor.T_c[17])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[36] /* reactor.T_h[17] STATE(1) */ - data->localData[0]->realVars[897] /* reactor.T_c[17] variable */));
  TRACE_POP
}

void residualFunc954(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,954};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[897] /* reactor.T_c[17] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_948(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_949(data, threadData);
  res[0] = data->localData[0]->realVars[2303] /* reactor.qh12[17] variable */ + (data->localData[0]->realVars[1158] /* reactor.heatBoundary[17].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData954(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[17] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[897].attribute /* reactor.T_c[17] */.max;
}


/*
equation index: 850
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[19] = 0.120272355042726 * reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[19] * reactor.T_b[19] - reactor.pvap[19] * $DER.reactor.T_b[19]) / reactor.T_b[19] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */;
  data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[347] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */) - ((data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */) * (data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[19] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
reactor.qh2[19] = reactor.particle[19].particle_Radu2017_085.M_l * reactor.c_l[19] * $DER.reactor.T_b[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->localData[0]->realVars[2325] /* reactor.qh2[19] variable */ = (data->localData[0]->realVars[1485] /* reactor.particle[19].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1011] /* reactor.c_l[19] variable */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
reactor.qh3[19] = 1996.0 * reactor.M_v[19] * $DER.reactor.T_b[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->localData[0]->realVars[2345] /* reactor.qh3[19] variable */ = (1996.0) * ((data->localData[0]->realVars[753] /* reactor.M_v[19] DUMMY_STATE */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
reactor.qh1[19] = reactor.M_a[19] * reactor.particle[19].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->localData[0]->realVars[2245] /* reactor.qh1[19] variable */ = (data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */) * ((data->simulationInfo->realParameter[787] /* reactor.particle[19].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
reactor.qm2[19] = reactor.V_v[19] * $DER.reactor.gama_i[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->localData[0]->realVars[2505] /* reactor.qm2[19] variable */ = (data->localData[0]->realVars[951] /* reactor.V_v[19] DUMMY_STATE */) * ((data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
$DER.reactor.psat[19] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[19]) * (-273.15 + reactor.T_b[19]) / (-16.00999999999999 + reactor.T_b[19])) * $DER.reactor.T_b[19] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[19]) * 257.14 / (-16.00999999999999 + reactor.T_b[19]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[19]) / (-16.00999999999999 + reactor.T_b[19]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */;
  data->localData[0]->realVars[278] /* der(reactor.psat[19]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"-16.00999999999999 + reactor.T_b[19]",equationIndexes)))) * ((data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[19]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"-16.00999999999999 + reactor.T_b[19]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
$DER.reactor.particle[19].particle_Radu2017_085.sorbent.A = if reactor.pvap[19] >= reactor.psat[19] then 0.0 else (-8.31446261815324) * (reactor.T_b[19] * ($DER.reactor.pvap[19] * reactor.psat[19] - reactor.pvap[19] * $DER.reactor.psat[19]) / reactor.psat[19] ^ 2.0 * reactor.psat[19] / reactor.pvap[19] + $DER.reactor.T_b[19] * log(reactor.pvap[19] / reactor.psat[19]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */,"reactor.psat[19]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[19] / reactor.psat[19]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */) * (data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */) - ((data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */) * (data->localData[0]->realVars[278] /* der(reactor.psat[19]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[19] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */),data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,"reactor.pvap[19]",equationIndexes)) + (data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[258] /* der(reactor.particle[19].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
$DER.reactor.w[19] = exp(reactor.particle[19].particle_Radu2017_085.sorbent.a - reactor.particle[19].particle_Radu2017_085.sorbent.b * reactor.particle[19].particle_Radu2017_085.sorbent.A) * (-reactor.particle[19].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[19].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[747] /* reactor.particle[19].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[767] /* reactor.particle[19].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2085] /* reactor.particle[19].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[767] /* reactor.particle[19].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[258] /* der(reactor.particle[19].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
reactor.qm3[19] = reactor.gama_i[19] * reactor.V_b[19] * reactor.particle[19].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[19] * reactor.dN / reactor.particle[19].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->localData[0]->realVars[2525] /* reactor.qm3[19] variable */ = (data->localData[0]->realVars[58] /* reactor.gama_i[19] STATE(1) */) * ((data->localData[0]->realVars[926] /* reactor.V_b[19] variable */) * ((data->simulationInfo->realParameter[967] /* reactor.particle[19].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[567] /* reactor.particle[19].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[19].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
reactor.qm1[19] = reactor.M_a[19] * $DER.reactor.w[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[2485] /* reactor.qm1[19] variable */ = (data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
reactor.qh4[19] = (-reactor.M_a[19]) * $DER.reactor.w[19] * reactor.particle[19].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  data->localData[0]->realVars[2365] /* reactor.qh4[19] variable */ = ((-data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */)) * ((data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) * ((data->simulationInfo->realParameter[707] /* reactor.particle[19].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
$DER.reactor.V_v[19] = reactor.V_b[19] * (-reactor.particle[19].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[19] / reactor.particle[19].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[218] /* der(reactor.V_v[19]) DUMMY_DER */ = (data->localData[0]->realVars[926] /* reactor.V_b[19] variable */) * (((-data->simulationInfo->realParameter[967] /* reactor.particle[19].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */,data->simulationInfo->realParameter[567] /* reactor.particle[19].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[19].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
$DER.reactor.M_v[19] = reactor.V_v[19] * $DER.reactor.gama_i[19] + $DER.reactor.V_v[19] * reactor.gama_i[19]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[198] /* der(reactor.M_v[19]) DUMMY_DER */ = (data->localData[0]->realVars[951] /* reactor.V_v[19] DUMMY_STATE */) * (data->localData[0]->realVars[138] /* der(reactor.gama_i[19]) STATE_DER */) + (data->localData[0]->realVars[218] /* der(reactor.V_v[19]) DUMMY_DER */) * (data->localData[0]->realVars[58] /* reactor.gama_i[19] STATE(1) */);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
reactor.qh5[19] = reactor.h_vi[19] * $DER.reactor.M_v[19] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  data->localData[0]->realVars[2385] /* reactor.qh5[19] variable */ = (data->localData[0]->realVars[1140] /* reactor.h_vi[19] variable */) * ((data->localData[0]->realVars[198] /* der(reactor.M_v[19]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}

void residualFunc884(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,884};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_850(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_851(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_852(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_853(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_854(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_855(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_856(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_857(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_858(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_859(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_860(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_861(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_862(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_863(data, threadData);
  res[0] = data->localData[0]->realVars[2585] /* reactor.qm6[19] variable */ + data->localData[0]->realVars[2565] /* reactor.qm5[19] variable */ + data->localData[0]->realVars[2545] /* reactor.qm4[19] variable */ + (-data->localData[0]->realVars[2505] /* reactor.qm2[19] variable */) - data->localData[0]->realVars[2485] /* reactor.qm1[19] variable */ - data->localData[0]->realVars[2525] /* reactor.qm3[19] variable */;

  res[1] = data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ + data->localData[0]->realVars[2285] /* reactor.qh11[19] variable */ + data->localData[0]->realVars[2265] /* reactor.qh10[19] variable */ + data->localData[0]->realVars[2465] /* reactor.qh9[19] variable */ + data->localData[0]->realVars[2445] /* reactor.qh8[19] variable */ + data->localData[0]->realVars[2425] /* reactor.qh7[19] variable */ + data->localData[0]->realVars[2405] /* reactor.qh6[19] variable */ + (-data->localData[0]->realVars[2325] /* reactor.qh2[19] variable */) - data->localData[0]->realVars[2245] /* reactor.qh1[19] variable */ - data->localData[0]->realVars[2345] /* reactor.qh3[19] variable */ - data->localData[0]->realVars[2365] /* reactor.qh4[19] variable */ - data->localData[0]->realVars[2385] /* reactor.qh5[19] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData884(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[19]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[98].attribute /* der(reactor.T_b[19]) */.max;
  /* static ls data for der(reactor.pvap[19]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[298].attribute /* der(reactor.pvap[19]) */.max;
}


/*
equation index: 835
type: SIMPLE_ASSIGN
reactor.heatBoundary[18].Q = (reactor.T_b[18] - reactor.T_c[18]) / reactor.particle[18].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  data->localData[0]->realVars[1159] /* reactor.heatBoundary[18].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */ - data->localData[0]->realVars[898] /* reactor.T_c[18] variable */,data->localData[0]->realVars[1364] /* reactor.particle[18].contactResistance_SiuLee.Rss variable */,"reactor.particle[18].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 836
type: SIMPLE_ASSIGN
reactor.qh12[18] = reactor.U_t * reactor.dA * (reactor.T_h[18] - reactor.T_c[18])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[37] /* reactor.T_h[18] STATE(1) */ - data->localData[0]->realVars[898] /* reactor.T_c[18] variable */));
  TRACE_POP
}

void residualFunc841(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,841};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[898] /* reactor.T_c[18] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_835(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_836(data, threadData);
  res[0] = data->localData[0]->realVars[2304] /* reactor.qh12[18] variable */ + (data->localData[0]->realVars[1159] /* reactor.heatBoundary[18].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData841(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[18] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[898].attribute /* reactor.T_c[18] */.max;
}


/*
equation index: 737
type: SIMPLE_ASSIGN
$DER.reactor.gama_i[20] = 0.120272355042726 * reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * ($DER.reactor.pvap[20] * reactor.T_b[20] - reactor.pvap[20] * $DER.reactor.T_b[20]) / reactor.T_b[20] ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */;
  data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */ = (0.120272355042726) * ((data->simulationInfo->realParameter[348] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM((data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */) - ((data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */) * (data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */)),(tmp0 * tmp0),"reactor.T_b[20] ^ 2.0",equationIndexes)));
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
reactor.qm2[20] = reactor.V_v[20] * $DER.reactor.gama_i[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->localData[0]->realVars[2506] /* reactor.qm2[20] variable */ = (data->localData[0]->realVars[952] /* reactor.V_v[20] DUMMY_STATE */) * ((data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
reactor.qh3[20] = 1996.0 * reactor.M_v[20] * $DER.reactor.T_b[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->localData[0]->realVars[2346] /* reactor.qh3[20] variable */ = (1996.0) * ((data->localData[0]->realVars[754] /* reactor.M_v[20] DUMMY_STATE */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
reactor.qh2[20] = reactor.particle[20].particle_Radu2017_085.M_l * reactor.c_l[20] * $DER.reactor.T_b[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[2326] /* reactor.qh2[20] variable */ = (data->localData[0]->realVars[1486] /* reactor.particle[20].particle_Radu2017_085.M_l DUMMY_STATE */) * ((data->localData[0]->realVars[1012] /* reactor.c_l[20] variable */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
reactor.qh1[20] = reactor.M_a[20] * reactor.particle[20].particle_Radu2017_085.sorbent.cpDry * $DER.reactor.T_b[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[2246] /* reactor.qh1[20] variable */ = (data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */) * ((data->simulationInfo->realParameter[788] /* reactor.particle[20].particle_Radu2017_085.sorbent.cpDry PARAM */) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
$DER.reactor.psat[20] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[20]) * (-273.15 + reactor.T_b[20]) / (-16.00999999999999 + reactor.T_b[20])) * $DER.reactor.T_b[20] * ((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[20]) * 257.14 / (-16.00999999999999 + reactor.T_b[20]) ^ 2.0 + (-0.004264392324093817) * (-273.15 + reactor.T_b[20]) / (-16.00999999999999 + reactor.T_b[20]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  modelica_real tmp0;
  tmp0 = -16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */;
  data->localData[0]->realVars[279] /* der(reactor.psat[20]) DUMMY_DER */ = (611.21) * ((exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"-16.00999999999999 + reactor.T_b[20]",equationIndexes)))) * ((data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * ((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */)) * (DIVISION_SIM(257.14,(tmp0 * tmp0),"(-16.00999999999999 + reactor.T_b[20]) ^ 2.0",equationIndexes)) + (-0.004264392324093817) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"-16.00999999999999 + reactor.T_b[20]",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
$DER.reactor.particle[20].particle_Radu2017_085.sorbent.A = if reactor.pvap[20] >= reactor.psat[20] then 0.0 else (-8.31446261815324) * (reactor.T_b[20] * ($DER.reactor.pvap[20] * reactor.psat[20] - reactor.pvap[20] * $DER.reactor.psat[20]) / reactor.psat[20] ^ 2.0 * reactor.psat[20] / reactor.pvap[20] + $DER.reactor.T_b[20] * log(reactor.pvap[20] / reactor.psat[20]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp0 = GreaterEq(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */);
  tmp3 = (modelica_boolean)tmp0;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp1 = data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */;
    tmp2 = DIVISION_SIM(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */,"reactor.psat[20]",equationIndexes);
    if(!(tmp2 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[20] / reactor.psat[20]) was %g should be > 0", tmp2);
    }
    tmp4 = (-8.31446261815324) * ((data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */) * (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */) * (data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */) - ((data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */) * (data->localData[0]->realVars[279] /* der(reactor.psat[20]) DUMMY_DER */)),(tmp1 * tmp1),"reactor.psat[20] ^ 2.0",equationIndexes)) * (data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */),data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,"reactor.pvap[20]",equationIndexes)) + (data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */) * (log(tmp2)));
  }
  data->localData[0]->realVars[259] /* der(reactor.particle[20].particle_Radu2017_085.sorbent.A) DUMMY_DER */ = tmp4;
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
$DER.reactor.w[20] = exp(reactor.particle[20].particle_Radu2017_085.sorbent.a - reactor.particle[20].particle_Radu2017_085.sorbent.b * reactor.particle[20].particle_Radu2017_085.sorbent.A) * (-reactor.particle[20].particle_Radu2017_085.sorbent.b) * $DER.reactor.particle[20].particle_Radu2017_085.sorbent.A
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */ = (exp(data->simulationInfo->realParameter[748] /* reactor.particle[20].particle_Radu2017_085.sorbent.a PARAM */ - ((data->simulationInfo->realParameter[768] /* reactor.particle[20].particle_Radu2017_085.sorbent.b PARAM */) * (data->localData[0]->realVars[2086] /* reactor.particle[20].particle_Radu2017_085.sorbent.A DUMMY_STATE */)))) * (((-data->simulationInfo->realParameter[768] /* reactor.particle[20].particle_Radu2017_085.sorbent.b PARAM */)) * (data->localData[0]->realVars[259] /* der(reactor.particle[20].particle_Radu2017_085.sorbent.A) DUMMY_DER */));
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
$DER.reactor.V_v[20] = reactor.V_b[20] * (-reactor.particle[20].particle_Radu2017_085.sorbent.rho) * $DER.reactor.w[20] / reactor.particle[20].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[219] /* der(reactor.V_v[20]) DUMMY_DER */ = (data->localData[0]->realVars[927] /* reactor.V_b[20] variable */) * (((-data->simulationInfo->realParameter[968] /* reactor.particle[20].particle_Radu2017_085.sorbent.rho PARAM */)) * (DIVISION_SIM(data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */,data->simulationInfo->realParameter[568] /* reactor.particle[20].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[20].particle_Radu2017_085.rhoWatLiq",equationIndexes)));
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
$DER.reactor.M_v[20] = reactor.V_v[20] * $DER.reactor.gama_i[20] + $DER.reactor.V_v[20] * reactor.gama_i[20]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[199] /* der(reactor.M_v[20]) DUMMY_DER */ = (data->localData[0]->realVars[952] /* reactor.V_v[20] DUMMY_STATE */) * (data->localData[0]->realVars[139] /* der(reactor.gama_i[20]) STATE_DER */) + (data->localData[0]->realVars[219] /* der(reactor.V_v[20]) DUMMY_DER */) * (data->localData[0]->realVars[59] /* reactor.gama_i[20] STATE(1) */);
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
reactor.qh5[20] = reactor.h_vi[20] * $DER.reactor.M_v[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[2386] /* reactor.qh5[20] variable */ = (data->localData[0]->realVars[1141] /* reactor.h_vi[20] variable */) * ((data->localData[0]->realVars[199] /* der(reactor.M_v[20]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
reactor.qm3[20] = reactor.gama_i[20] * reactor.V_b[20] * reactor.particle[20].particle_Radu2017_085.sorbent.rho * $DER.reactor.w[20] * reactor.dN / reactor.particle[20].particle_Radu2017_085.rhoWatLiq
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[2526] /* reactor.qm3[20] variable */ = (data->localData[0]->realVars[59] /* reactor.gama_i[20] STATE(1) */) * ((data->localData[0]->realVars[927] /* reactor.V_b[20] variable */) * ((data->simulationInfo->realParameter[968] /* reactor.particle[20].particle_Radu2017_085.sorbent.rho PARAM */) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * (DIVISION_SIM(data->localData[0]->realVars[1034] /* reactor.dN variable */,data->simulationInfo->realParameter[568] /* reactor.particle[20].particle_Radu2017_085.rhoWatLiq PARAM */,"reactor.particle[20].particle_Radu2017_085.rhoWatLiq",equationIndexes)))));
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
reactor.qm1[20] = reactor.M_a[20] * $DER.reactor.w[20] * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[2486] /* reactor.qm1[20] variable */ = (data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */));
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
reactor.qh4[20] = (-reactor.M_a[20]) * $DER.reactor.w[20] * reactor.particle[20].particle_Radu2017_085.sorbent.Hs * reactor.dN
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[2366] /* reactor.qh4[20] variable */ = ((-data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */)) * ((data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) * ((data->simulationInfo->realParameter[708] /* reactor.particle[20].particle_Radu2017_085.sorbent.Hs PARAM */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */)));
  TRACE_POP
}

void residualFunc771(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,771};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */ = xloc[1];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_737(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_738(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_739(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_740(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_741(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_742(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_743(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_744(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_745(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_746(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_747(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_748(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_749(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_750(data, threadData);
  res[0] = data->localData[0]->realVars[2586] /* reactor.qm6[20] variable */ + data->localData[0]->realVars[2566] /* reactor.qm5[20] variable */ + data->localData[0]->realVars[2546] /* reactor.qm4[20] variable */ + (-data->localData[0]->realVars[2506] /* reactor.qm2[20] variable */) - data->localData[0]->realVars[2486] /* reactor.qm1[20] variable */ - data->localData[0]->realVars[2526] /* reactor.qm3[20] variable */;

  res[1] = data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ + data->localData[0]->realVars[2286] /* reactor.qh11[20] variable */ + data->localData[0]->realVars[2266] /* reactor.qh10[20] variable */ + data->localData[0]->realVars[2466] /* reactor.qh9[20] variable */ + data->localData[0]->realVars[2446] /* reactor.qh8[20] variable */ + data->localData[0]->realVars[2426] /* reactor.qh7[20] variable */ + data->localData[0]->realVars[2406] /* reactor.qh6[20] variable */ + (-data->localData[0]->realVars[2326] /* reactor.qh2[20] variable */) - data->localData[0]->realVars[2246] /* reactor.qh1[20] variable */ - data->localData[0]->realVars[2346] /* reactor.qh3[20] variable */ - data->localData[0]->realVars[2366] /* reactor.qh4[20] variable */ - data->localData[0]->realVars[2386] /* reactor.qh5[20] variable */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData771(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for der(reactor.T_b[20]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[99].attribute /* der(reactor.T_b[20]) */.max;
  /* static ls data for der(reactor.pvap[20]) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[299].attribute /* der(reactor.pvap[20]) */.max;
}


/*
equation index: 722
type: SIMPLE_ASSIGN
reactor.heatBoundary[19].Q = (reactor.T_b[19] - reactor.T_c[19]) / reactor.particle[19].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[1160] /* reactor.heatBoundary[19].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */ - data->localData[0]->realVars[899] /* reactor.T_c[19] variable */,data->localData[0]->realVars[1365] /* reactor.particle[19].contactResistance_SiuLee.Rss variable */,"reactor.particle[19].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
reactor.qh12[19] = reactor.U_t * reactor.dA * (reactor.T_h[19] - reactor.T_c[19])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[38] /* reactor.T_h[19] STATE(1) */ - data->localData[0]->realVars[899] /* reactor.T_c[19] variable */));
  TRACE_POP
}

void residualFunc728(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,728};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[899] /* reactor.T_c[19] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_722(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_723(data, threadData);
  res[0] = data->localData[0]->realVars[2305] /* reactor.qh12[19] variable */ + (data->localData[0]->realVars[1160] /* reactor.heatBoundary[19].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData728(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[19] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[899].attribute /* reactor.T_c[19] */.max;
}


/*
equation index: 660
type: SIMPLE_ASSIGN
reactor.heatBoundary[20].Q = (reactor.T_b[20] - reactor.T_c[20]) / reactor.particle[20].contactResistance_SiuLee.Rss
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[1161] /* reactor.heatBoundary[20].Q variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */ - data->localData[0]->realVars[900] /* reactor.T_c[20] variable */,data->localData[0]->realVars[1366] /* reactor.particle[20].contactResistance_SiuLee.Rss variable */,"reactor.particle[20].contactResistance_SiuLee.Rss",equationIndexes);
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
reactor.qh12[20] = reactor.U_t * reactor.dA * (reactor.T_h[20] - reactor.T_c[20])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ = (data->localData[0]->realVars[903] /* reactor.U_t variable */) * ((data->localData[0]->realVars[1033] /* reactor.dA variable */) * (data->localData[0]->realVars[39] /* reactor.T_h[20] STATE(1) */ - data->localData[0]->realVars[900] /* reactor.T_c[20] variable */));
  TRACE_POP
}

void residualFunc666(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,666};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->localData[0]->realVars[900] /* reactor.T_c[20] variable */ = xloc[0];
  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_660(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_desorption_eqFunction_661(data, threadData);
  res[0] = data->localData[0]->realVars[2306] /* reactor.qh12[20] variable */ + (data->localData[0]->realVars[1161] /* reactor.heatBoundary[20].Q variable */) * (data->localData[0]->realVars[1034] /* reactor.dN variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData666(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for reactor.T_c[20] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[900].attribute /* reactor.T_c[20] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void MOSES_Simulations_ACTS_desorption_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 79, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[79].equationIndex = 5691;
  linearSystemData[79].size = 2;
  linearSystemData[79].nnz = 0;
  linearSystemData[79].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[79].residualFunc = residualFunc5691;
  linearSystemData[79].strictTearingFunctionCall = NULL;
  linearSystemData[79].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac279_column;
  linearSystemData[79].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac279;
  linearSystemData[79].jacobianIndex = 119 /*jacInx*/;
  linearSystemData[79].setA = NULL;  //setLinearMatrixA5691;
  linearSystemData[79].setb = NULL;  //setLinearVectorb5691;
  linearSystemData[79].initializeStaticLSData = initializeStaticLSData5691;
  
  assertStreamPrint(NULL, nLinearSystems > 78, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[78].equationIndex = 5626;
  linearSystemData[78].size = 1;
  linearSystemData[78].nnz = 0;
  linearSystemData[78].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[78].residualFunc = residualFunc5626;
  linearSystemData[78].strictTearingFunctionCall = NULL;
  linearSystemData[78].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac278_column;
  linearSystemData[78].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac278;
  linearSystemData[78].jacobianIndex = 118 /*jacInx*/;
  linearSystemData[78].setA = NULL;  //setLinearMatrixA5626;
  linearSystemData[78].setb = NULL;  //setLinearVectorb5626;
  linearSystemData[78].initializeStaticLSData = initializeStaticLSData5626;
  
  assertStreamPrint(NULL, nLinearSystems > 77, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[77].equationIndex = 5585;
  linearSystemData[77].size = 2;
  linearSystemData[77].nnz = 0;
  linearSystemData[77].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[77].residualFunc = residualFunc5585;
  linearSystemData[77].strictTearingFunctionCall = NULL;
  linearSystemData[77].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac277_column;
  linearSystemData[77].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac277;
  linearSystemData[77].jacobianIndex = 117 /*jacInx*/;
  linearSystemData[77].setA = NULL;  //setLinearMatrixA5585;
  linearSystemData[77].setb = NULL;  //setLinearVectorb5585;
  linearSystemData[77].initializeStaticLSData = initializeStaticLSData5585;
  
  assertStreamPrint(NULL, nLinearSystems > 76, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[76].equationIndex = 5532;
  linearSystemData[76].size = 1;
  linearSystemData[76].nnz = 0;
  linearSystemData[76].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[76].residualFunc = residualFunc5532;
  linearSystemData[76].strictTearingFunctionCall = NULL;
  linearSystemData[76].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac276_column;
  linearSystemData[76].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac276;
  linearSystemData[76].jacobianIndex = 116 /*jacInx*/;
  linearSystemData[76].setA = NULL;  //setLinearMatrixA5532;
  linearSystemData[76].setb = NULL;  //setLinearVectorb5532;
  linearSystemData[76].initializeStaticLSData = initializeStaticLSData5532;
  
  assertStreamPrint(NULL, nLinearSystems > 75, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[75].equationIndex = 5496;
  linearSystemData[75].size = 2;
  linearSystemData[75].nnz = 0;
  linearSystemData[75].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[75].residualFunc = residualFunc5496;
  linearSystemData[75].strictTearingFunctionCall = NULL;
  linearSystemData[75].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac275_column;
  linearSystemData[75].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac275;
  linearSystemData[75].jacobianIndex = 115 /*jacInx*/;
  linearSystemData[75].setA = NULL;  //setLinearMatrixA5496;
  linearSystemData[75].setb = NULL;  //setLinearVectorb5496;
  linearSystemData[75].initializeStaticLSData = initializeStaticLSData5496;
  
  assertStreamPrint(NULL, nLinearSystems > 74, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[74].equationIndex = 5443;
  linearSystemData[74].size = 1;
  linearSystemData[74].nnz = 0;
  linearSystemData[74].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[74].residualFunc = residualFunc5443;
  linearSystemData[74].strictTearingFunctionCall = NULL;
  linearSystemData[74].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac274_column;
  linearSystemData[74].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac274;
  linearSystemData[74].jacobianIndex = 114 /*jacInx*/;
  linearSystemData[74].setA = NULL;  //setLinearMatrixA5443;
  linearSystemData[74].setb = NULL;  //setLinearVectorb5443;
  linearSystemData[74].initializeStaticLSData = initializeStaticLSData5443;
  
  assertStreamPrint(NULL, nLinearSystems > 73, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[73].equationIndex = 5407;
  linearSystemData[73].size = 2;
  linearSystemData[73].nnz = 0;
  linearSystemData[73].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[73].residualFunc = residualFunc5407;
  linearSystemData[73].strictTearingFunctionCall = NULL;
  linearSystemData[73].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac273_column;
  linearSystemData[73].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac273;
  linearSystemData[73].jacobianIndex = 113 /*jacInx*/;
  linearSystemData[73].setA = NULL;  //setLinearMatrixA5407;
  linearSystemData[73].setb = NULL;  //setLinearVectorb5407;
  linearSystemData[73].initializeStaticLSData = initializeStaticLSData5407;
  
  assertStreamPrint(NULL, nLinearSystems > 72, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[72].equationIndex = 5354;
  linearSystemData[72].size = 1;
  linearSystemData[72].nnz = 0;
  linearSystemData[72].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[72].residualFunc = residualFunc5354;
  linearSystemData[72].strictTearingFunctionCall = NULL;
  linearSystemData[72].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac272_column;
  linearSystemData[72].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac272;
  linearSystemData[72].jacobianIndex = 112 /*jacInx*/;
  linearSystemData[72].setA = NULL;  //setLinearMatrixA5354;
  linearSystemData[72].setb = NULL;  //setLinearVectorb5354;
  linearSystemData[72].initializeStaticLSData = initializeStaticLSData5354;
  
  assertStreamPrint(NULL, nLinearSystems > 71, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[71].equationIndex = 5318;
  linearSystemData[71].size = 2;
  linearSystemData[71].nnz = 0;
  linearSystemData[71].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[71].residualFunc = residualFunc5318;
  linearSystemData[71].strictTearingFunctionCall = NULL;
  linearSystemData[71].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac271_column;
  linearSystemData[71].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac271;
  linearSystemData[71].jacobianIndex = 111 /*jacInx*/;
  linearSystemData[71].setA = NULL;  //setLinearMatrixA5318;
  linearSystemData[71].setb = NULL;  //setLinearVectorb5318;
  linearSystemData[71].initializeStaticLSData = initializeStaticLSData5318;
  
  assertStreamPrint(NULL, nLinearSystems > 70, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[70].equationIndex = 5265;
  linearSystemData[70].size = 1;
  linearSystemData[70].nnz = 0;
  linearSystemData[70].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[70].residualFunc = residualFunc5265;
  linearSystemData[70].strictTearingFunctionCall = NULL;
  linearSystemData[70].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac270_column;
  linearSystemData[70].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac270;
  linearSystemData[70].jacobianIndex = 110 /*jacInx*/;
  linearSystemData[70].setA = NULL;  //setLinearMatrixA5265;
  linearSystemData[70].setb = NULL;  //setLinearVectorb5265;
  linearSystemData[70].initializeStaticLSData = initializeStaticLSData5265;
  
  assertStreamPrint(NULL, nLinearSystems > 69, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[69].equationIndex = 5229;
  linearSystemData[69].size = 2;
  linearSystemData[69].nnz = 0;
  linearSystemData[69].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[69].residualFunc = residualFunc5229;
  linearSystemData[69].strictTearingFunctionCall = NULL;
  linearSystemData[69].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac269_column;
  linearSystemData[69].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac269;
  linearSystemData[69].jacobianIndex = 109 /*jacInx*/;
  linearSystemData[69].setA = NULL;  //setLinearMatrixA5229;
  linearSystemData[69].setb = NULL;  //setLinearVectorb5229;
  linearSystemData[69].initializeStaticLSData = initializeStaticLSData5229;
  
  assertStreamPrint(NULL, nLinearSystems > 68, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[68].equationIndex = 5176;
  linearSystemData[68].size = 1;
  linearSystemData[68].nnz = 0;
  linearSystemData[68].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[68].residualFunc = residualFunc5176;
  linearSystemData[68].strictTearingFunctionCall = NULL;
  linearSystemData[68].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac268_column;
  linearSystemData[68].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac268;
  linearSystemData[68].jacobianIndex = 108 /*jacInx*/;
  linearSystemData[68].setA = NULL;  //setLinearMatrixA5176;
  linearSystemData[68].setb = NULL;  //setLinearVectorb5176;
  linearSystemData[68].initializeStaticLSData = initializeStaticLSData5176;
  
  assertStreamPrint(NULL, nLinearSystems > 67, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[67].equationIndex = 5140;
  linearSystemData[67].size = 2;
  linearSystemData[67].nnz = 0;
  linearSystemData[67].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[67].residualFunc = residualFunc5140;
  linearSystemData[67].strictTearingFunctionCall = NULL;
  linearSystemData[67].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac267_column;
  linearSystemData[67].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac267;
  linearSystemData[67].jacobianIndex = 107 /*jacInx*/;
  linearSystemData[67].setA = NULL;  //setLinearMatrixA5140;
  linearSystemData[67].setb = NULL;  //setLinearVectorb5140;
  linearSystemData[67].initializeStaticLSData = initializeStaticLSData5140;
  
  assertStreamPrint(NULL, nLinearSystems > 66, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[66].equationIndex = 5087;
  linearSystemData[66].size = 1;
  linearSystemData[66].nnz = 0;
  linearSystemData[66].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[66].residualFunc = residualFunc5087;
  linearSystemData[66].strictTearingFunctionCall = NULL;
  linearSystemData[66].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac266_column;
  linearSystemData[66].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac266;
  linearSystemData[66].jacobianIndex = 106 /*jacInx*/;
  linearSystemData[66].setA = NULL;  //setLinearMatrixA5087;
  linearSystemData[66].setb = NULL;  //setLinearVectorb5087;
  linearSystemData[66].initializeStaticLSData = initializeStaticLSData5087;
  
  assertStreamPrint(NULL, nLinearSystems > 65, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[65].equationIndex = 5051;
  linearSystemData[65].size = 2;
  linearSystemData[65].nnz = 0;
  linearSystemData[65].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[65].residualFunc = residualFunc5051;
  linearSystemData[65].strictTearingFunctionCall = NULL;
  linearSystemData[65].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac265_column;
  linearSystemData[65].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac265;
  linearSystemData[65].jacobianIndex = 105 /*jacInx*/;
  linearSystemData[65].setA = NULL;  //setLinearMatrixA5051;
  linearSystemData[65].setb = NULL;  //setLinearVectorb5051;
  linearSystemData[65].initializeStaticLSData = initializeStaticLSData5051;
  
  assertStreamPrint(NULL, nLinearSystems > 64, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[64].equationIndex = 4998;
  linearSystemData[64].size = 1;
  linearSystemData[64].nnz = 0;
  linearSystemData[64].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[64].residualFunc = residualFunc4998;
  linearSystemData[64].strictTearingFunctionCall = NULL;
  linearSystemData[64].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac264_column;
  linearSystemData[64].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac264;
  linearSystemData[64].jacobianIndex = 104 /*jacInx*/;
  linearSystemData[64].setA = NULL;  //setLinearMatrixA4998;
  linearSystemData[64].setb = NULL;  //setLinearVectorb4998;
  linearSystemData[64].initializeStaticLSData = initializeStaticLSData4998;
  
  assertStreamPrint(NULL, nLinearSystems > 63, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[63].equationIndex = 4962;
  linearSystemData[63].size = 2;
  linearSystemData[63].nnz = 0;
  linearSystemData[63].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[63].residualFunc = residualFunc4962;
  linearSystemData[63].strictTearingFunctionCall = NULL;
  linearSystemData[63].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac263_column;
  linearSystemData[63].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac263;
  linearSystemData[63].jacobianIndex = 103 /*jacInx*/;
  linearSystemData[63].setA = NULL;  //setLinearMatrixA4962;
  linearSystemData[63].setb = NULL;  //setLinearVectorb4962;
  linearSystemData[63].initializeStaticLSData = initializeStaticLSData4962;
  
  assertStreamPrint(NULL, nLinearSystems > 62, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[62].equationIndex = 4909;
  linearSystemData[62].size = 1;
  linearSystemData[62].nnz = 0;
  linearSystemData[62].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[62].residualFunc = residualFunc4909;
  linearSystemData[62].strictTearingFunctionCall = NULL;
  linearSystemData[62].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac262_column;
  linearSystemData[62].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac262;
  linearSystemData[62].jacobianIndex = 102 /*jacInx*/;
  linearSystemData[62].setA = NULL;  //setLinearMatrixA4909;
  linearSystemData[62].setb = NULL;  //setLinearVectorb4909;
  linearSystemData[62].initializeStaticLSData = initializeStaticLSData4909;
  
  assertStreamPrint(NULL, nLinearSystems > 61, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[61].equationIndex = 4873;
  linearSystemData[61].size = 2;
  linearSystemData[61].nnz = 0;
  linearSystemData[61].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[61].residualFunc = residualFunc4873;
  linearSystemData[61].strictTearingFunctionCall = NULL;
  linearSystemData[61].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac261_column;
  linearSystemData[61].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac261;
  linearSystemData[61].jacobianIndex = 101 /*jacInx*/;
  linearSystemData[61].setA = NULL;  //setLinearMatrixA4873;
  linearSystemData[61].setb = NULL;  //setLinearVectorb4873;
  linearSystemData[61].initializeStaticLSData = initializeStaticLSData4873;
  
  assertStreamPrint(NULL, nLinearSystems > 60, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[60].equationIndex = 4820;
  linearSystemData[60].size = 1;
  linearSystemData[60].nnz = 0;
  linearSystemData[60].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[60].residualFunc = residualFunc4820;
  linearSystemData[60].strictTearingFunctionCall = NULL;
  linearSystemData[60].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac260_column;
  linearSystemData[60].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac260;
  linearSystemData[60].jacobianIndex = 100 /*jacInx*/;
  linearSystemData[60].setA = NULL;  //setLinearMatrixA4820;
  linearSystemData[60].setb = NULL;  //setLinearVectorb4820;
  linearSystemData[60].initializeStaticLSData = initializeStaticLSData4820;
  
  assertStreamPrint(NULL, nLinearSystems > 59, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[59].equationIndex = 4784;
  linearSystemData[59].size = 2;
  linearSystemData[59].nnz = 0;
  linearSystemData[59].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[59].residualFunc = residualFunc4784;
  linearSystemData[59].strictTearingFunctionCall = NULL;
  linearSystemData[59].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac259_column;
  linearSystemData[59].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac259;
  linearSystemData[59].jacobianIndex = 99 /*jacInx*/;
  linearSystemData[59].setA = NULL;  //setLinearMatrixA4784;
  linearSystemData[59].setb = NULL;  //setLinearVectorb4784;
  linearSystemData[59].initializeStaticLSData = initializeStaticLSData4784;
  
  assertStreamPrint(NULL, nLinearSystems > 58, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[58].equationIndex = 4731;
  linearSystemData[58].size = 1;
  linearSystemData[58].nnz = 0;
  linearSystemData[58].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[58].residualFunc = residualFunc4731;
  linearSystemData[58].strictTearingFunctionCall = NULL;
  linearSystemData[58].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac258_column;
  linearSystemData[58].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac258;
  linearSystemData[58].jacobianIndex = 98 /*jacInx*/;
  linearSystemData[58].setA = NULL;  //setLinearMatrixA4731;
  linearSystemData[58].setb = NULL;  //setLinearVectorb4731;
  linearSystemData[58].initializeStaticLSData = initializeStaticLSData4731;
  
  assertStreamPrint(NULL, nLinearSystems > 57, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[57].equationIndex = 4695;
  linearSystemData[57].size = 2;
  linearSystemData[57].nnz = 0;
  linearSystemData[57].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[57].residualFunc = residualFunc4695;
  linearSystemData[57].strictTearingFunctionCall = NULL;
  linearSystemData[57].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac257_column;
  linearSystemData[57].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac257;
  linearSystemData[57].jacobianIndex = 97 /*jacInx*/;
  linearSystemData[57].setA = NULL;  //setLinearMatrixA4695;
  linearSystemData[57].setb = NULL;  //setLinearVectorb4695;
  linearSystemData[57].initializeStaticLSData = initializeStaticLSData4695;
  
  assertStreamPrint(NULL, nLinearSystems > 56, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[56].equationIndex = 4642;
  linearSystemData[56].size = 1;
  linearSystemData[56].nnz = 0;
  linearSystemData[56].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[56].residualFunc = residualFunc4642;
  linearSystemData[56].strictTearingFunctionCall = NULL;
  linearSystemData[56].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac256_column;
  linearSystemData[56].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac256;
  linearSystemData[56].jacobianIndex = 96 /*jacInx*/;
  linearSystemData[56].setA = NULL;  //setLinearMatrixA4642;
  linearSystemData[56].setb = NULL;  //setLinearVectorb4642;
  linearSystemData[56].initializeStaticLSData = initializeStaticLSData4642;
  
  assertStreamPrint(NULL, nLinearSystems > 55, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[55].equationIndex = 4606;
  linearSystemData[55].size = 2;
  linearSystemData[55].nnz = 0;
  linearSystemData[55].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[55].residualFunc = residualFunc4606;
  linearSystemData[55].strictTearingFunctionCall = NULL;
  linearSystemData[55].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac255_column;
  linearSystemData[55].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac255;
  linearSystemData[55].jacobianIndex = 95 /*jacInx*/;
  linearSystemData[55].setA = NULL;  //setLinearMatrixA4606;
  linearSystemData[55].setb = NULL;  //setLinearVectorb4606;
  linearSystemData[55].initializeStaticLSData = initializeStaticLSData4606;
  
  assertStreamPrint(NULL, nLinearSystems > 54, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[54].equationIndex = 4553;
  linearSystemData[54].size = 1;
  linearSystemData[54].nnz = 0;
  linearSystemData[54].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[54].residualFunc = residualFunc4553;
  linearSystemData[54].strictTearingFunctionCall = NULL;
  linearSystemData[54].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac254_column;
  linearSystemData[54].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac254;
  linearSystemData[54].jacobianIndex = 94 /*jacInx*/;
  linearSystemData[54].setA = NULL;  //setLinearMatrixA4553;
  linearSystemData[54].setb = NULL;  //setLinearVectorb4553;
  linearSystemData[54].initializeStaticLSData = initializeStaticLSData4553;
  
  assertStreamPrint(NULL, nLinearSystems > 53, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[53].equationIndex = 4517;
  linearSystemData[53].size = 2;
  linearSystemData[53].nnz = 0;
  linearSystemData[53].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[53].residualFunc = residualFunc4517;
  linearSystemData[53].strictTearingFunctionCall = NULL;
  linearSystemData[53].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac253_column;
  linearSystemData[53].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac253;
  linearSystemData[53].jacobianIndex = 93 /*jacInx*/;
  linearSystemData[53].setA = NULL;  //setLinearMatrixA4517;
  linearSystemData[53].setb = NULL;  //setLinearVectorb4517;
  linearSystemData[53].initializeStaticLSData = initializeStaticLSData4517;
  
  assertStreamPrint(NULL, nLinearSystems > 52, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[52].equationIndex = 4464;
  linearSystemData[52].size = 1;
  linearSystemData[52].nnz = 0;
  linearSystemData[52].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[52].residualFunc = residualFunc4464;
  linearSystemData[52].strictTearingFunctionCall = NULL;
  linearSystemData[52].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac252_column;
  linearSystemData[52].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac252;
  linearSystemData[52].jacobianIndex = 92 /*jacInx*/;
  linearSystemData[52].setA = NULL;  //setLinearMatrixA4464;
  linearSystemData[52].setb = NULL;  //setLinearVectorb4464;
  linearSystemData[52].initializeStaticLSData = initializeStaticLSData4464;
  
  assertStreamPrint(NULL, nLinearSystems > 51, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[51].equationIndex = 4428;
  linearSystemData[51].size = 2;
  linearSystemData[51].nnz = 0;
  linearSystemData[51].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[51].residualFunc = residualFunc4428;
  linearSystemData[51].strictTearingFunctionCall = NULL;
  linearSystemData[51].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac251_column;
  linearSystemData[51].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac251;
  linearSystemData[51].jacobianIndex = 91 /*jacInx*/;
  linearSystemData[51].setA = NULL;  //setLinearMatrixA4428;
  linearSystemData[51].setb = NULL;  //setLinearVectorb4428;
  linearSystemData[51].initializeStaticLSData = initializeStaticLSData4428;
  
  assertStreamPrint(NULL, nLinearSystems > 50, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[50].equationIndex = 4375;
  linearSystemData[50].size = 1;
  linearSystemData[50].nnz = 0;
  linearSystemData[50].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[50].residualFunc = residualFunc4375;
  linearSystemData[50].strictTearingFunctionCall = NULL;
  linearSystemData[50].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac250_column;
  linearSystemData[50].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac250;
  linearSystemData[50].jacobianIndex = 90 /*jacInx*/;
  linearSystemData[50].setA = NULL;  //setLinearMatrixA4375;
  linearSystemData[50].setb = NULL;  //setLinearVectorb4375;
  linearSystemData[50].initializeStaticLSData = initializeStaticLSData4375;
  
  assertStreamPrint(NULL, nLinearSystems > 49, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[49].equationIndex = 4339;
  linearSystemData[49].size = 2;
  linearSystemData[49].nnz = 0;
  linearSystemData[49].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[49].residualFunc = residualFunc4339;
  linearSystemData[49].strictTearingFunctionCall = NULL;
  linearSystemData[49].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac249_column;
  linearSystemData[49].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac249;
  linearSystemData[49].jacobianIndex = 89 /*jacInx*/;
  linearSystemData[49].setA = NULL;  //setLinearMatrixA4339;
  linearSystemData[49].setb = NULL;  //setLinearVectorb4339;
  linearSystemData[49].initializeStaticLSData = initializeStaticLSData4339;
  
  assertStreamPrint(NULL, nLinearSystems > 48, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[48].equationIndex = 4286;
  linearSystemData[48].size = 1;
  linearSystemData[48].nnz = 0;
  linearSystemData[48].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[48].residualFunc = residualFunc4286;
  linearSystemData[48].strictTearingFunctionCall = NULL;
  linearSystemData[48].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac248_column;
  linearSystemData[48].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac248;
  linearSystemData[48].jacobianIndex = 88 /*jacInx*/;
  linearSystemData[48].setA = NULL;  //setLinearMatrixA4286;
  linearSystemData[48].setb = NULL;  //setLinearVectorb4286;
  linearSystemData[48].initializeStaticLSData = initializeStaticLSData4286;
  
  assertStreamPrint(NULL, nLinearSystems > 47, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[47].equationIndex = 4249;
  linearSystemData[47].size = 2;
  linearSystemData[47].nnz = 0;
  linearSystemData[47].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[47].residualFunc = residualFunc4249;
  linearSystemData[47].strictTearingFunctionCall = NULL;
  linearSystemData[47].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac247_column;
  linearSystemData[47].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac247;
  linearSystemData[47].jacobianIndex = 87 /*jacInx*/;
  linearSystemData[47].setA = NULL;  //setLinearMatrixA4249;
  linearSystemData[47].setb = NULL;  //setLinearVectorb4249;
  linearSystemData[47].initializeStaticLSData = initializeStaticLSData4249;
  
  assertStreamPrint(NULL, nLinearSystems > 46, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[46].equationIndex = 4196;
  linearSystemData[46].size = 1;
  linearSystemData[46].nnz = 0;
  linearSystemData[46].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[46].residualFunc = residualFunc4196;
  linearSystemData[46].strictTearingFunctionCall = NULL;
  linearSystemData[46].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac246_column;
  linearSystemData[46].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac246;
  linearSystemData[46].jacobianIndex = 86 /*jacInx*/;
  linearSystemData[46].setA = NULL;  //setLinearMatrixA4196;
  linearSystemData[46].setb = NULL;  //setLinearVectorb4196;
  linearSystemData[46].initializeStaticLSData = initializeStaticLSData4196;
  
  assertStreamPrint(NULL, nLinearSystems > 45, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[45].equationIndex = 4160;
  linearSystemData[45].size = 2;
  linearSystemData[45].nnz = 0;
  linearSystemData[45].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[45].residualFunc = residualFunc4160;
  linearSystemData[45].strictTearingFunctionCall = NULL;
  linearSystemData[45].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac245_column;
  linearSystemData[45].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac245;
  linearSystemData[45].jacobianIndex = 85 /*jacInx*/;
  linearSystemData[45].setA = NULL;  //setLinearMatrixA4160;
  linearSystemData[45].setb = NULL;  //setLinearVectorb4160;
  linearSystemData[45].initializeStaticLSData = initializeStaticLSData4160;
  
  assertStreamPrint(NULL, nLinearSystems > 44, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[44].equationIndex = 4107;
  linearSystemData[44].size = 1;
  linearSystemData[44].nnz = 0;
  linearSystemData[44].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[44].residualFunc = residualFunc4107;
  linearSystemData[44].strictTearingFunctionCall = NULL;
  linearSystemData[44].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac244_column;
  linearSystemData[44].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac244;
  linearSystemData[44].jacobianIndex = 84 /*jacInx*/;
  linearSystemData[44].setA = NULL;  //setLinearMatrixA4107;
  linearSystemData[44].setb = NULL;  //setLinearVectorb4107;
  linearSystemData[44].initializeStaticLSData = initializeStaticLSData4107;
  
  assertStreamPrint(NULL, nLinearSystems > 43, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[43].equationIndex = 4071;
  linearSystemData[43].size = 2;
  linearSystemData[43].nnz = 0;
  linearSystemData[43].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[43].residualFunc = residualFunc4071;
  linearSystemData[43].strictTearingFunctionCall = NULL;
  linearSystemData[43].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac243_column;
  linearSystemData[43].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac243;
  linearSystemData[43].jacobianIndex = 83 /*jacInx*/;
  linearSystemData[43].setA = NULL;  //setLinearMatrixA4071;
  linearSystemData[43].setb = NULL;  //setLinearVectorb4071;
  linearSystemData[43].initializeStaticLSData = initializeStaticLSData4071;
  
  assertStreamPrint(NULL, nLinearSystems > 42, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[42].equationIndex = 4018;
  linearSystemData[42].size = 1;
  linearSystemData[42].nnz = 0;
  linearSystemData[42].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[42].residualFunc = residualFunc4018;
  linearSystemData[42].strictTearingFunctionCall = NULL;
  linearSystemData[42].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac242_column;
  linearSystemData[42].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac242;
  linearSystemData[42].jacobianIndex = 82 /*jacInx*/;
  linearSystemData[42].setA = NULL;  //setLinearMatrixA4018;
  linearSystemData[42].setb = NULL;  //setLinearVectorb4018;
  linearSystemData[42].initializeStaticLSData = initializeStaticLSData4018;
  
  assertStreamPrint(NULL, nLinearSystems > 41, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[41].equationIndex = 3982;
  linearSystemData[41].size = 2;
  linearSystemData[41].nnz = 0;
  linearSystemData[41].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[41].residualFunc = residualFunc3982;
  linearSystemData[41].strictTearingFunctionCall = NULL;
  linearSystemData[41].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac241_column;
  linearSystemData[41].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac241;
  linearSystemData[41].jacobianIndex = 81 /*jacInx*/;
  linearSystemData[41].setA = NULL;  //setLinearMatrixA3982;
  linearSystemData[41].setb = NULL;  //setLinearVectorb3982;
  linearSystemData[41].initializeStaticLSData = initializeStaticLSData3982;
  
  assertStreamPrint(NULL, nLinearSystems > 40, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[40].equationIndex = 3929;
  linearSystemData[40].size = 1;
  linearSystemData[40].nnz = 0;
  linearSystemData[40].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[40].residualFunc = residualFunc3929;
  linearSystemData[40].strictTearingFunctionCall = NULL;
  linearSystemData[40].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac240_column;
  linearSystemData[40].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac240;
  linearSystemData[40].jacobianIndex = 80 /*jacInx*/;
  linearSystemData[40].setA = NULL;  //setLinearMatrixA3929;
  linearSystemData[40].setb = NULL;  //setLinearVectorb3929;
  linearSystemData[40].initializeStaticLSData = initializeStaticLSData3929;
  
  assertStreamPrint(NULL, nLinearSystems > 39, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[39].equationIndex = 2869;
  linearSystemData[39].size = 2;
  linearSystemData[39].nnz = 0;
  linearSystemData[39].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[39].residualFunc = residualFunc2869;
  linearSystemData[39].strictTearingFunctionCall = NULL;
  linearSystemData[39].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac218_column;
  linearSystemData[39].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac218;
  linearSystemData[39].jacobianIndex = 58 /*jacInx*/;
  linearSystemData[39].setA = NULL;  //setLinearMatrixA2869;
  linearSystemData[39].setb = NULL;  //setLinearVectorb2869;
  linearSystemData[39].initializeStaticLSData = initializeStaticLSData2869;
  
  assertStreamPrint(NULL, nLinearSystems > 38, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[38].equationIndex = 2816;
  linearSystemData[38].size = 2;
  linearSystemData[38].nnz = 0;
  linearSystemData[38].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[38].residualFunc = residualFunc2816;
  linearSystemData[38].strictTearingFunctionCall = NULL;
  linearSystemData[38].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac217_column;
  linearSystemData[38].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac217;
  linearSystemData[38].jacobianIndex = 57 /*jacInx*/;
  linearSystemData[38].setA = NULL;  //setLinearMatrixA2816;
  linearSystemData[38].setb = NULL;  //setLinearVectorb2816;
  linearSystemData[38].initializeStaticLSData = initializeStaticLSData2816;
  
  assertStreamPrint(NULL, nLinearSystems > 37, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[37].equationIndex = 2770;
  linearSystemData[37].size = 1;
  linearSystemData[37].nnz = 0;
  linearSystemData[37].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[37].residualFunc = residualFunc2770;
  linearSystemData[37].strictTearingFunctionCall = NULL;
  linearSystemData[37].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac216_column;
  linearSystemData[37].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac216;
  linearSystemData[37].jacobianIndex = 56 /*jacInx*/;
  linearSystemData[37].setA = NULL;  //setLinearMatrixA2770;
  linearSystemData[37].setb = NULL;  //setLinearVectorb2770;
  linearSystemData[37].initializeStaticLSData = initializeStaticLSData2770;
  
  assertStreamPrint(NULL, nLinearSystems > 36, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[36].equationIndex = 2692;
  linearSystemData[36].size = 2;
  linearSystemData[36].nnz = 0;
  linearSystemData[36].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[36].residualFunc = residualFunc2692;
  linearSystemData[36].strictTearingFunctionCall = NULL;
  linearSystemData[36].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac213_column;
  linearSystemData[36].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac213;
  linearSystemData[36].jacobianIndex = 54 /*jacInx*/;
  linearSystemData[36].setA = NULL;  //setLinearMatrixA2692;
  linearSystemData[36].setb = NULL;  //setLinearVectorb2692;
  linearSystemData[36].initializeStaticLSData = initializeStaticLSData2692;
  
  assertStreamPrint(NULL, nLinearSystems > 35, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[35].equationIndex = 2649;
  linearSystemData[35].size = 1;
  linearSystemData[35].nnz = 0;
  linearSystemData[35].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[35].residualFunc = residualFunc2649;
  linearSystemData[35].strictTearingFunctionCall = NULL;
  linearSystemData[35].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac212_column;
  linearSystemData[35].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac212;
  linearSystemData[35].jacobianIndex = 53 /*jacInx*/;
  linearSystemData[35].setA = NULL;  //setLinearMatrixA2649;
  linearSystemData[35].setb = NULL;  //setLinearVectorb2649;
  linearSystemData[35].initializeStaticLSData = initializeStaticLSData2649;
  
  assertStreamPrint(NULL, nLinearSystems > 34, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[34].equationIndex = 2579;
  linearSystemData[34].size = 2;
  linearSystemData[34].nnz = 0;
  linearSystemData[34].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[34].residualFunc = residualFunc2579;
  linearSystemData[34].strictTearingFunctionCall = NULL;
  linearSystemData[34].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac209_column;
  linearSystemData[34].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac209;
  linearSystemData[34].jacobianIndex = 51 /*jacInx*/;
  linearSystemData[34].setA = NULL;  //setLinearMatrixA2579;
  linearSystemData[34].setb = NULL;  //setLinearVectorb2579;
  linearSystemData[34].initializeStaticLSData = initializeStaticLSData2579;
  
  assertStreamPrint(NULL, nLinearSystems > 33, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[33].equationIndex = 2536;
  linearSystemData[33].size = 1;
  linearSystemData[33].nnz = 0;
  linearSystemData[33].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[33].residualFunc = residualFunc2536;
  linearSystemData[33].strictTearingFunctionCall = NULL;
  linearSystemData[33].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac208_column;
  linearSystemData[33].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac208;
  linearSystemData[33].jacobianIndex = 50 /*jacInx*/;
  linearSystemData[33].setA = NULL;  //setLinearMatrixA2536;
  linearSystemData[33].setb = NULL;  //setLinearVectorb2536;
  linearSystemData[33].initializeStaticLSData = initializeStaticLSData2536;
  
  assertStreamPrint(NULL, nLinearSystems > 32, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[32].equationIndex = 2466;
  linearSystemData[32].size = 2;
  linearSystemData[32].nnz = 0;
  linearSystemData[32].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[32].residualFunc = residualFunc2466;
  linearSystemData[32].strictTearingFunctionCall = NULL;
  linearSystemData[32].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac205_column;
  linearSystemData[32].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac205;
  linearSystemData[32].jacobianIndex = 48 /*jacInx*/;
  linearSystemData[32].setA = NULL;  //setLinearMatrixA2466;
  linearSystemData[32].setb = NULL;  //setLinearVectorb2466;
  linearSystemData[32].initializeStaticLSData = initializeStaticLSData2466;
  
  assertStreamPrint(NULL, nLinearSystems > 31, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[31].equationIndex = 2423;
  linearSystemData[31].size = 1;
  linearSystemData[31].nnz = 0;
  linearSystemData[31].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[31].residualFunc = residualFunc2423;
  linearSystemData[31].strictTearingFunctionCall = NULL;
  linearSystemData[31].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac204_column;
  linearSystemData[31].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac204;
  linearSystemData[31].jacobianIndex = 47 /*jacInx*/;
  linearSystemData[31].setA = NULL;  //setLinearMatrixA2423;
  linearSystemData[31].setb = NULL;  //setLinearVectorb2423;
  linearSystemData[31].initializeStaticLSData = initializeStaticLSData2423;
  
  assertStreamPrint(NULL, nLinearSystems > 30, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[30].equationIndex = 2353;
  linearSystemData[30].size = 2;
  linearSystemData[30].nnz = 0;
  linearSystemData[30].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[30].residualFunc = residualFunc2353;
  linearSystemData[30].strictTearingFunctionCall = NULL;
  linearSystemData[30].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac201_column;
  linearSystemData[30].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac201;
  linearSystemData[30].jacobianIndex = 45 /*jacInx*/;
  linearSystemData[30].setA = NULL;  //setLinearMatrixA2353;
  linearSystemData[30].setb = NULL;  //setLinearVectorb2353;
  linearSystemData[30].initializeStaticLSData = initializeStaticLSData2353;
  
  assertStreamPrint(NULL, nLinearSystems > 29, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[29].equationIndex = 2310;
  linearSystemData[29].size = 1;
  linearSystemData[29].nnz = 0;
  linearSystemData[29].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[29].residualFunc = residualFunc2310;
  linearSystemData[29].strictTearingFunctionCall = NULL;
  linearSystemData[29].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac200_column;
  linearSystemData[29].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac200;
  linearSystemData[29].jacobianIndex = 44 /*jacInx*/;
  linearSystemData[29].setA = NULL;  //setLinearMatrixA2310;
  linearSystemData[29].setb = NULL;  //setLinearVectorb2310;
  linearSystemData[29].initializeStaticLSData = initializeStaticLSData2310;
  
  assertStreamPrint(NULL, nLinearSystems > 28, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[28].equationIndex = 2240;
  linearSystemData[28].size = 2;
  linearSystemData[28].nnz = 0;
  linearSystemData[28].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[28].residualFunc = residualFunc2240;
  linearSystemData[28].strictTearingFunctionCall = NULL;
  linearSystemData[28].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac197_column;
  linearSystemData[28].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac197;
  linearSystemData[28].jacobianIndex = 42 /*jacInx*/;
  linearSystemData[28].setA = NULL;  //setLinearMatrixA2240;
  linearSystemData[28].setb = NULL;  //setLinearVectorb2240;
  linearSystemData[28].initializeStaticLSData = initializeStaticLSData2240;
  
  assertStreamPrint(NULL, nLinearSystems > 27, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[27].equationIndex = 2197;
  linearSystemData[27].size = 1;
  linearSystemData[27].nnz = 0;
  linearSystemData[27].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[27].residualFunc = residualFunc2197;
  linearSystemData[27].strictTearingFunctionCall = NULL;
  linearSystemData[27].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac196_column;
  linearSystemData[27].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac196;
  linearSystemData[27].jacobianIndex = 41 /*jacInx*/;
  linearSystemData[27].setA = NULL;  //setLinearMatrixA2197;
  linearSystemData[27].setb = NULL;  //setLinearVectorb2197;
  linearSystemData[27].initializeStaticLSData = initializeStaticLSData2197;
  
  assertStreamPrint(NULL, nLinearSystems > 26, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[26].equationIndex = 2127;
  linearSystemData[26].size = 2;
  linearSystemData[26].nnz = 0;
  linearSystemData[26].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[26].residualFunc = residualFunc2127;
  linearSystemData[26].strictTearingFunctionCall = NULL;
  linearSystemData[26].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac193_column;
  linearSystemData[26].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac193;
  linearSystemData[26].jacobianIndex = 39 /*jacInx*/;
  linearSystemData[26].setA = NULL;  //setLinearMatrixA2127;
  linearSystemData[26].setb = NULL;  //setLinearVectorb2127;
  linearSystemData[26].initializeStaticLSData = initializeStaticLSData2127;
  
  assertStreamPrint(NULL, nLinearSystems > 25, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[25].equationIndex = 2084;
  linearSystemData[25].size = 1;
  linearSystemData[25].nnz = 0;
  linearSystemData[25].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[25].residualFunc = residualFunc2084;
  linearSystemData[25].strictTearingFunctionCall = NULL;
  linearSystemData[25].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac192_column;
  linearSystemData[25].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac192;
  linearSystemData[25].jacobianIndex = 38 /*jacInx*/;
  linearSystemData[25].setA = NULL;  //setLinearMatrixA2084;
  linearSystemData[25].setb = NULL;  //setLinearVectorb2084;
  linearSystemData[25].initializeStaticLSData = initializeStaticLSData2084;
  
  assertStreamPrint(NULL, nLinearSystems > 24, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[24].equationIndex = 2014;
  linearSystemData[24].size = 2;
  linearSystemData[24].nnz = 0;
  linearSystemData[24].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[24].residualFunc = residualFunc2014;
  linearSystemData[24].strictTearingFunctionCall = NULL;
  linearSystemData[24].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac189_column;
  linearSystemData[24].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac189;
  linearSystemData[24].jacobianIndex = 36 /*jacInx*/;
  linearSystemData[24].setA = NULL;  //setLinearMatrixA2014;
  linearSystemData[24].setb = NULL;  //setLinearVectorb2014;
  linearSystemData[24].initializeStaticLSData = initializeStaticLSData2014;
  
  assertStreamPrint(NULL, nLinearSystems > 23, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[23].equationIndex = 1971;
  linearSystemData[23].size = 1;
  linearSystemData[23].nnz = 0;
  linearSystemData[23].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[23].residualFunc = residualFunc1971;
  linearSystemData[23].strictTearingFunctionCall = NULL;
  linearSystemData[23].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac188_column;
  linearSystemData[23].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac188;
  linearSystemData[23].jacobianIndex = 35 /*jacInx*/;
  linearSystemData[23].setA = NULL;  //setLinearMatrixA1971;
  linearSystemData[23].setb = NULL;  //setLinearVectorb1971;
  linearSystemData[23].initializeStaticLSData = initializeStaticLSData1971;
  
  assertStreamPrint(NULL, nLinearSystems > 22, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[22].equationIndex = 1901;
  linearSystemData[22].size = 2;
  linearSystemData[22].nnz = 0;
  linearSystemData[22].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[22].residualFunc = residualFunc1901;
  linearSystemData[22].strictTearingFunctionCall = NULL;
  linearSystemData[22].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac185_column;
  linearSystemData[22].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac185;
  linearSystemData[22].jacobianIndex = 33 /*jacInx*/;
  linearSystemData[22].setA = NULL;  //setLinearMatrixA1901;
  linearSystemData[22].setb = NULL;  //setLinearVectorb1901;
  linearSystemData[22].initializeStaticLSData = initializeStaticLSData1901;
  
  assertStreamPrint(NULL, nLinearSystems > 21, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[21].equationIndex = 1858;
  linearSystemData[21].size = 1;
  linearSystemData[21].nnz = 0;
  linearSystemData[21].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[21].residualFunc = residualFunc1858;
  linearSystemData[21].strictTearingFunctionCall = NULL;
  linearSystemData[21].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac184_column;
  linearSystemData[21].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac184;
  linearSystemData[21].jacobianIndex = 32 /*jacInx*/;
  linearSystemData[21].setA = NULL;  //setLinearMatrixA1858;
  linearSystemData[21].setb = NULL;  //setLinearVectorb1858;
  linearSystemData[21].initializeStaticLSData = initializeStaticLSData1858;
  
  assertStreamPrint(NULL, nLinearSystems > 20, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[20].equationIndex = 1788;
  linearSystemData[20].size = 2;
  linearSystemData[20].nnz = 0;
  linearSystemData[20].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[20].residualFunc = residualFunc1788;
  linearSystemData[20].strictTearingFunctionCall = NULL;
  linearSystemData[20].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac181_column;
  linearSystemData[20].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac181;
  linearSystemData[20].jacobianIndex = 30 /*jacInx*/;
  linearSystemData[20].setA = NULL;  //setLinearMatrixA1788;
  linearSystemData[20].setb = NULL;  //setLinearVectorb1788;
  linearSystemData[20].initializeStaticLSData = initializeStaticLSData1788;
  
  assertStreamPrint(NULL, nLinearSystems > 19, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[19].equationIndex = 1745;
  linearSystemData[19].size = 1;
  linearSystemData[19].nnz = 0;
  linearSystemData[19].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[19].residualFunc = residualFunc1745;
  linearSystemData[19].strictTearingFunctionCall = NULL;
  linearSystemData[19].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac180_column;
  linearSystemData[19].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac180;
  linearSystemData[19].jacobianIndex = 29 /*jacInx*/;
  linearSystemData[19].setA = NULL;  //setLinearMatrixA1745;
  linearSystemData[19].setb = NULL;  //setLinearVectorb1745;
  linearSystemData[19].initializeStaticLSData = initializeStaticLSData1745;
  
  assertStreamPrint(NULL, nLinearSystems > 18, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[18].equationIndex = 1675;
  linearSystemData[18].size = 2;
  linearSystemData[18].nnz = 0;
  linearSystemData[18].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[18].residualFunc = residualFunc1675;
  linearSystemData[18].strictTearingFunctionCall = NULL;
  linearSystemData[18].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac177_column;
  linearSystemData[18].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac177;
  linearSystemData[18].jacobianIndex = 27 /*jacInx*/;
  linearSystemData[18].setA = NULL;  //setLinearMatrixA1675;
  linearSystemData[18].setb = NULL;  //setLinearVectorb1675;
  linearSystemData[18].initializeStaticLSData = initializeStaticLSData1675;
  
  assertStreamPrint(NULL, nLinearSystems > 17, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[17].equationIndex = 1632;
  linearSystemData[17].size = 1;
  linearSystemData[17].nnz = 0;
  linearSystemData[17].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[17].residualFunc = residualFunc1632;
  linearSystemData[17].strictTearingFunctionCall = NULL;
  linearSystemData[17].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac176_column;
  linearSystemData[17].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac176;
  linearSystemData[17].jacobianIndex = 26 /*jacInx*/;
  linearSystemData[17].setA = NULL;  //setLinearMatrixA1632;
  linearSystemData[17].setb = NULL;  //setLinearVectorb1632;
  linearSystemData[17].initializeStaticLSData = initializeStaticLSData1632;
  
  assertStreamPrint(NULL, nLinearSystems > 16, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[16].equationIndex = 1562;
  linearSystemData[16].size = 2;
  linearSystemData[16].nnz = 0;
  linearSystemData[16].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[16].residualFunc = residualFunc1562;
  linearSystemData[16].strictTearingFunctionCall = NULL;
  linearSystemData[16].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac173_column;
  linearSystemData[16].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac173;
  linearSystemData[16].jacobianIndex = 24 /*jacInx*/;
  linearSystemData[16].setA = NULL;  //setLinearMatrixA1562;
  linearSystemData[16].setb = NULL;  //setLinearVectorb1562;
  linearSystemData[16].initializeStaticLSData = initializeStaticLSData1562;
  
  assertStreamPrint(NULL, nLinearSystems > 15, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[15].equationIndex = 1519;
  linearSystemData[15].size = 1;
  linearSystemData[15].nnz = 0;
  linearSystemData[15].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[15].residualFunc = residualFunc1519;
  linearSystemData[15].strictTearingFunctionCall = NULL;
  linearSystemData[15].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac172_column;
  linearSystemData[15].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac172;
  linearSystemData[15].jacobianIndex = 23 /*jacInx*/;
  linearSystemData[15].setA = NULL;  //setLinearMatrixA1519;
  linearSystemData[15].setb = NULL;  //setLinearVectorb1519;
  linearSystemData[15].initializeStaticLSData = initializeStaticLSData1519;
  
  assertStreamPrint(NULL, nLinearSystems > 14, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[14].equationIndex = 1449;
  linearSystemData[14].size = 2;
  linearSystemData[14].nnz = 0;
  linearSystemData[14].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[14].residualFunc = residualFunc1449;
  linearSystemData[14].strictTearingFunctionCall = NULL;
  linearSystemData[14].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac169_column;
  linearSystemData[14].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac169;
  linearSystemData[14].jacobianIndex = 21 /*jacInx*/;
  linearSystemData[14].setA = NULL;  //setLinearMatrixA1449;
  linearSystemData[14].setb = NULL;  //setLinearVectorb1449;
  linearSystemData[14].initializeStaticLSData = initializeStaticLSData1449;
  
  assertStreamPrint(NULL, nLinearSystems > 13, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[13].equationIndex = 1406;
  linearSystemData[13].size = 1;
  linearSystemData[13].nnz = 0;
  linearSystemData[13].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[13].residualFunc = residualFunc1406;
  linearSystemData[13].strictTearingFunctionCall = NULL;
  linearSystemData[13].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac168_column;
  linearSystemData[13].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac168;
  linearSystemData[13].jacobianIndex = 20 /*jacInx*/;
  linearSystemData[13].setA = NULL;  //setLinearMatrixA1406;
  linearSystemData[13].setb = NULL;  //setLinearVectorb1406;
  linearSystemData[13].initializeStaticLSData = initializeStaticLSData1406;
  
  assertStreamPrint(NULL, nLinearSystems > 12, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[12].equationIndex = 1336;
  linearSystemData[12].size = 2;
  linearSystemData[12].nnz = 0;
  linearSystemData[12].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[12].residualFunc = residualFunc1336;
  linearSystemData[12].strictTearingFunctionCall = NULL;
  linearSystemData[12].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac165_column;
  linearSystemData[12].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac165;
  linearSystemData[12].jacobianIndex = 18 /*jacInx*/;
  linearSystemData[12].setA = NULL;  //setLinearMatrixA1336;
  linearSystemData[12].setb = NULL;  //setLinearVectorb1336;
  linearSystemData[12].initializeStaticLSData = initializeStaticLSData1336;
  
  assertStreamPrint(NULL, nLinearSystems > 11, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[11].equationIndex = 1293;
  linearSystemData[11].size = 1;
  linearSystemData[11].nnz = 0;
  linearSystemData[11].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[11].residualFunc = residualFunc1293;
  linearSystemData[11].strictTearingFunctionCall = NULL;
  linearSystemData[11].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac164_column;
  linearSystemData[11].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac164;
  linearSystemData[11].jacobianIndex = 17 /*jacInx*/;
  linearSystemData[11].setA = NULL;  //setLinearMatrixA1293;
  linearSystemData[11].setb = NULL;  //setLinearVectorb1293;
  linearSystemData[11].initializeStaticLSData = initializeStaticLSData1293;
  
  assertStreamPrint(NULL, nLinearSystems > 10, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[10].equationIndex = 1223;
  linearSystemData[10].size = 2;
  linearSystemData[10].nnz = 0;
  linearSystemData[10].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[10].residualFunc = residualFunc1223;
  linearSystemData[10].strictTearingFunctionCall = NULL;
  linearSystemData[10].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac161_column;
  linearSystemData[10].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac161;
  linearSystemData[10].jacobianIndex = 15 /*jacInx*/;
  linearSystemData[10].setA = NULL;  //setLinearMatrixA1223;
  linearSystemData[10].setb = NULL;  //setLinearVectorb1223;
  linearSystemData[10].initializeStaticLSData = initializeStaticLSData1223;
  
  assertStreamPrint(NULL, nLinearSystems > 9, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[9].equationIndex = 1180;
  linearSystemData[9].size = 1;
  linearSystemData[9].nnz = 0;
  linearSystemData[9].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[9].residualFunc = residualFunc1180;
  linearSystemData[9].strictTearingFunctionCall = NULL;
  linearSystemData[9].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac160_column;
  linearSystemData[9].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac160;
  linearSystemData[9].jacobianIndex = 14 /*jacInx*/;
  linearSystemData[9].setA = NULL;  //setLinearMatrixA1180;
  linearSystemData[9].setb = NULL;  //setLinearVectorb1180;
  linearSystemData[9].initializeStaticLSData = initializeStaticLSData1180;
  
  assertStreamPrint(NULL, nLinearSystems > 8, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[8].equationIndex = 1110;
  linearSystemData[8].size = 2;
  linearSystemData[8].nnz = 0;
  linearSystemData[8].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[8].residualFunc = residualFunc1110;
  linearSystemData[8].strictTearingFunctionCall = NULL;
  linearSystemData[8].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac157_column;
  linearSystemData[8].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac157;
  linearSystemData[8].jacobianIndex = 12 /*jacInx*/;
  linearSystemData[8].setA = NULL;  //setLinearMatrixA1110;
  linearSystemData[8].setb = NULL;  //setLinearVectorb1110;
  linearSystemData[8].initializeStaticLSData = initializeStaticLSData1110;
  
  assertStreamPrint(NULL, nLinearSystems > 7, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[7].equationIndex = 1067;
  linearSystemData[7].size = 1;
  linearSystemData[7].nnz = 0;
  linearSystemData[7].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[7].residualFunc = residualFunc1067;
  linearSystemData[7].strictTearingFunctionCall = NULL;
  linearSystemData[7].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac156_column;
  linearSystemData[7].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac156;
  linearSystemData[7].jacobianIndex = 11 /*jacInx*/;
  linearSystemData[7].setA = NULL;  //setLinearMatrixA1067;
  linearSystemData[7].setb = NULL;  //setLinearVectorb1067;
  linearSystemData[7].initializeStaticLSData = initializeStaticLSData1067;
  
  assertStreamPrint(NULL, nLinearSystems > 6, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[6].equationIndex = 997;
  linearSystemData[6].size = 2;
  linearSystemData[6].nnz = 0;
  linearSystemData[6].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[6].residualFunc = residualFunc997;
  linearSystemData[6].strictTearingFunctionCall = NULL;
  linearSystemData[6].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac153_column;
  linearSystemData[6].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac153;
  linearSystemData[6].jacobianIndex = 9 /*jacInx*/;
  linearSystemData[6].setA = NULL;  //setLinearMatrixA997;
  linearSystemData[6].setb = NULL;  //setLinearVectorb997;
  linearSystemData[6].initializeStaticLSData = initializeStaticLSData997;
  
  assertStreamPrint(NULL, nLinearSystems > 5, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[5].equationIndex = 954;
  linearSystemData[5].size = 1;
  linearSystemData[5].nnz = 0;
  linearSystemData[5].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[5].residualFunc = residualFunc954;
  linearSystemData[5].strictTearingFunctionCall = NULL;
  linearSystemData[5].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac152_column;
  linearSystemData[5].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac152;
  linearSystemData[5].jacobianIndex = 8 /*jacInx*/;
  linearSystemData[5].setA = NULL;  //setLinearMatrixA954;
  linearSystemData[5].setb = NULL;  //setLinearVectorb954;
  linearSystemData[5].initializeStaticLSData = initializeStaticLSData954;
  
  assertStreamPrint(NULL, nLinearSystems > 4, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[4].equationIndex = 884;
  linearSystemData[4].size = 2;
  linearSystemData[4].nnz = 0;
  linearSystemData[4].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[4].residualFunc = residualFunc884;
  linearSystemData[4].strictTearingFunctionCall = NULL;
  linearSystemData[4].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac149_column;
  linearSystemData[4].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac149;
  linearSystemData[4].jacobianIndex = 6 /*jacInx*/;
  linearSystemData[4].setA = NULL;  //setLinearMatrixA884;
  linearSystemData[4].setb = NULL;  //setLinearVectorb884;
  linearSystemData[4].initializeStaticLSData = initializeStaticLSData884;
  
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 841;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc841;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac148_column;
  linearSystemData[3].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac148;
  linearSystemData[3].jacobianIndex = 5 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA841;
  linearSystemData[3].setb = NULL;  //setLinearVectorb841;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData841;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 771;
  linearSystemData[2].size = 2;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc771;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac145_column;
  linearSystemData[2].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac145;
  linearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA771;
  linearSystemData[2].setb = NULL;  //setLinearVectorb771;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData771;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 728;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc728;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac144_column;
  linearSystemData[1].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac144;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA728;
  linearSystemData[1].setb = NULL;  //setLinearVectorb728;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData728;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 666;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc666;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = MOSES_Simulations_ACTS_desorption_functionJacLSJac141_column;
  linearSystemData[0].initialAnalyticalJacobian = MOSES_Simulations_ACTS_desorption_initialAnalyticJacobianLSJac141;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA666;
  linearSystemData[0].setb = NULL;  //setLinearVectorb666;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData666;
}

#if defined(__cplusplus)
}
#endif

