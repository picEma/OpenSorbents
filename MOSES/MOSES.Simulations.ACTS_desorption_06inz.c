/* Initialization */
#include "MOSES.Simulations.ACTS_desorption_model.h"
#include "MOSES.Simulations.ACTS_desorption_11mix.h"
#include "MOSES.Simulations.ACTS_desorption_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void MOSES_Simulations_ACTS_desorption_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
reactor.V_r = 0.7853750000000001 * reactor.Do ^ 2.0 * reactor.L
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  data->localData[0]->realVars[932] /* reactor.V_r variable */ = (0.7853750000000001) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[27] /* reactor.L PARAM */));
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
reactor.p_d = reactor.p / reactor.Do
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[1346] /* reactor.p_d variable */ = DIVISION_SIM(data->simulationInfo->realParameter[148] /* reactor.p PARAM */,data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,"reactor.Do",equationIndexes);
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
reactor.Ri = 0.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[877] /* reactor.Ri variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
reactor.ro_a = 0.05 * (reactor.particle[1].particle_Radu2017_085.sorbent.rho + reactor.particle[2].particle_Radu2017_085.sorbent.rho + reactor.particle[3].particle_Radu2017_085.sorbent.rho + reactor.particle[4].particle_Radu2017_085.sorbent.rho + reactor.particle[5].particle_Radu2017_085.sorbent.rho + reactor.particle[6].particle_Radu2017_085.sorbent.rho + reactor.particle[7].particle_Radu2017_085.sorbent.rho + reactor.particle[8].particle_Radu2017_085.sorbent.rho + reactor.particle[9].particle_Radu2017_085.sorbent.rho + reactor.particle[10].particle_Radu2017_085.sorbent.rho + reactor.particle[11].particle_Radu2017_085.sorbent.rho + reactor.particle[12].particle_Radu2017_085.sorbent.rho + reactor.particle[13].particle_Radu2017_085.sorbent.rho + reactor.particle[14].particle_Radu2017_085.sorbent.rho + reactor.particle[15].particle_Radu2017_085.sorbent.rho + reactor.particle[16].particle_Radu2017_085.sorbent.rho + reactor.particle[17].particle_Radu2017_085.sorbent.rho + reactor.particle[18].particle_Radu2017_085.sorbent.rho + reactor.particle[19].particle_Radu2017_085.sorbent.rho + reactor.particle[20].particle_Radu2017_085.sorbent.rho)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[2589] /* reactor.ro_a variable */ = (0.05) * (data->simulationInfo->realParameter[949] /* reactor.particle[1].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[950] /* reactor.particle[2].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[951] /* reactor.particle[3].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[952] /* reactor.particle[4].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[953] /* reactor.particle[5].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[954] /* reactor.particle[6].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[955] /* reactor.particle[7].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[956] /* reactor.particle[8].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[957] /* reactor.particle[9].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[958] /* reactor.particle[10].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[959] /* reactor.particle[11].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[960] /* reactor.particle[12].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[961] /* reactor.particle[13].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[962] /* reactor.particle[14].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[963] /* reactor.particle[15].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[964] /* reactor.particle[16].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[965] /* reactor.particle[17].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[966] /* reactor.particle[18].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[967] /* reactor.particle[19].particle_Radu2017_085.sorbent.rho PARAM */ + data->simulationInfo->realParameter[968] /* reactor.particle[20].particle_Radu2017_085.sorbent.rho PARAM */);
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
reactor.A = f_p * (1.57075 * (reactor.Do ^ 2.0 - reactor.Di ^ 2.0) * reactor.L / reactor.p + 3.1415 * reactor.Di * reactor.L + reactor.L * ((-3.1415) * reactor.Di * reactor.t_fin / reactor.p + 3.1415 * reactor.Do * reactor.t_fin / reactor.p))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  modelica_real tmp1;
  modelica_real tmp2;
  tmp1 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  tmp2 = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */;
  data->localData[0]->realVars[656] /* reactor.A variable */ = (data->simulationInfo->realParameter[19] /* f_p PARAM */) * ((1.57075) * (((tmp1 * tmp1) - ((tmp2 * tmp2))) * (DIVISION_SIM(data->simulationInfo->realParameter[27] /* reactor.L PARAM */,data->simulationInfo->realParameter[148] /* reactor.p PARAM */,"reactor.p",equationIndexes))) + (3.1415) * ((data->simulationInfo->realParameter[24] /* reactor.Di PARAM */) * (data->simulationInfo->realParameter[27] /* reactor.L PARAM */)) + (data->simulationInfo->realParameter[27] /* reactor.L PARAM */) * ((-3.1415) * ((data->simulationInfo->realParameter[24] /* reactor.Di PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[1130] /* reactor.t_fin PARAM */,data->simulationInfo->realParameter[148] /* reactor.p PARAM */,"reactor.p",equationIndexes))) + (3.1415) * ((data->simulationInfo->realParameter[26] /* reactor.Do PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[1130] /* reactor.t_fin PARAM */,data->simulationInfo->realParameter[148] /* reactor.p PARAM */,"reactor.p",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
reactor.particle[20].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[20].contact_ratio + (-0.0010929) / reactor.particle[20].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[20].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[20].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  tmp3 = data->simulationInfo->realParameter[248] /* reactor.particle[20].contact_ratio PARAM */;
  tmp4 = data->simulationInfo->realParameter[248] /* reactor.particle[20].contact_ratio PARAM */;
  tmp5 = data->simulationInfo->realParameter[248] /* reactor.particle[20].contact_ratio PARAM */;
  tmp5 *= tmp5;
  data->localData[0]->realVars[1386] /* reactor.particle[20].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[248] /* reactor.particle[20].contact_ratio PARAM */,"reactor.particle[20].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp3 * tmp3),"reactor.particle[20].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp4 * tmp4 * tmp4),"reactor.particle[20].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp5 * tmp5),"reactor.particle[20].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
reactor.V_b[20] = 4.188790204786391 * reactor.particle[20].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[948] /* reactor.particle[20].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[927] /* reactor.V_b[20] variable */ = (4.188790204786391) * ((tmp6 * tmp6 * tmp6));
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
reactor.particle[19].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[19].contact_ratio + (-0.0010929) / reactor.particle[19].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[19].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[19].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  tmp7 = data->simulationInfo->realParameter[247] /* reactor.particle[19].contact_ratio PARAM */;
  tmp8 = data->simulationInfo->realParameter[247] /* reactor.particle[19].contact_ratio PARAM */;
  tmp9 = data->simulationInfo->realParameter[247] /* reactor.particle[19].contact_ratio PARAM */;
  tmp9 *= tmp9;
  data->localData[0]->realVars[1385] /* reactor.particle[19].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[247] /* reactor.particle[19].contact_ratio PARAM */,"reactor.particle[19].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp7 * tmp7),"reactor.particle[19].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp8 * tmp8 * tmp8),"reactor.particle[19].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp9 * tmp9),"reactor.particle[19].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
reactor.V_b[19] = 4.188790204786391 * reactor.particle[19].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  modelica_real tmp10;
  tmp10 = data->simulationInfo->realParameter[947] /* reactor.particle[19].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[926] /* reactor.V_b[19] variable */ = (4.188790204786391) * ((tmp10 * tmp10 * tmp10));
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
reactor.particle[18].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[18].contact_ratio + (-0.0010929) / reactor.particle[18].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[18].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[18].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp11 = data->simulationInfo->realParameter[246] /* reactor.particle[18].contact_ratio PARAM */;
  tmp12 = data->simulationInfo->realParameter[246] /* reactor.particle[18].contact_ratio PARAM */;
  tmp13 = data->simulationInfo->realParameter[246] /* reactor.particle[18].contact_ratio PARAM */;
  tmp13 *= tmp13;
  data->localData[0]->realVars[1384] /* reactor.particle[18].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[246] /* reactor.particle[18].contact_ratio PARAM */,"reactor.particle[18].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp11 * tmp11),"reactor.particle[18].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp12 * tmp12 * tmp12),"reactor.particle[18].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp13 * tmp13),"reactor.particle[18].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
reactor.V_b[18] = 4.188790204786391 * reactor.particle[18].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  modelica_real tmp14;
  tmp14 = data->simulationInfo->realParameter[946] /* reactor.particle[18].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[925] /* reactor.V_b[18] variable */ = (4.188790204786391) * ((tmp14 * tmp14 * tmp14));
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
reactor.particle[17].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[17].contact_ratio + (-0.0010929) / reactor.particle[17].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[17].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[17].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  tmp15 = data->simulationInfo->realParameter[245] /* reactor.particle[17].contact_ratio PARAM */;
  tmp16 = data->simulationInfo->realParameter[245] /* reactor.particle[17].contact_ratio PARAM */;
  tmp17 = data->simulationInfo->realParameter[245] /* reactor.particle[17].contact_ratio PARAM */;
  tmp17 *= tmp17;
  data->localData[0]->realVars[1383] /* reactor.particle[17].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[245] /* reactor.particle[17].contact_ratio PARAM */,"reactor.particle[17].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp15 * tmp15),"reactor.particle[17].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp16 * tmp16 * tmp16),"reactor.particle[17].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp17 * tmp17),"reactor.particle[17].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
reactor.V_b[17] = 4.188790204786391 * reactor.particle[17].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  modelica_real tmp18;
  tmp18 = data->simulationInfo->realParameter[945] /* reactor.particle[17].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[924] /* reactor.V_b[17] variable */ = (4.188790204786391) * ((tmp18 * tmp18 * tmp18));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
reactor.particle[16].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[16].contact_ratio + (-0.0010929) / reactor.particle[16].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[16].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[16].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  tmp19 = data->simulationInfo->realParameter[244] /* reactor.particle[16].contact_ratio PARAM */;
  tmp20 = data->simulationInfo->realParameter[244] /* reactor.particle[16].contact_ratio PARAM */;
  tmp21 = data->simulationInfo->realParameter[244] /* reactor.particle[16].contact_ratio PARAM */;
  tmp21 *= tmp21;
  data->localData[0]->realVars[1382] /* reactor.particle[16].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[244] /* reactor.particle[16].contact_ratio PARAM */,"reactor.particle[16].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp19 * tmp19),"reactor.particle[16].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp20 * tmp20 * tmp20),"reactor.particle[16].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp21 * tmp21),"reactor.particle[16].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
reactor.V_b[16] = 4.188790204786391 * reactor.particle[16].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  modelica_real tmp22;
  tmp22 = data->simulationInfo->realParameter[944] /* reactor.particle[16].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[923] /* reactor.V_b[16] variable */ = (4.188790204786391) * ((tmp22 * tmp22 * tmp22));
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
reactor.particle[15].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[15].contact_ratio + (-0.0010929) / reactor.particle[15].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[15].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[15].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  tmp23 = data->simulationInfo->realParameter[243] /* reactor.particle[15].contact_ratio PARAM */;
  tmp24 = data->simulationInfo->realParameter[243] /* reactor.particle[15].contact_ratio PARAM */;
  tmp25 = data->simulationInfo->realParameter[243] /* reactor.particle[15].contact_ratio PARAM */;
  tmp25 *= tmp25;
  data->localData[0]->realVars[1381] /* reactor.particle[15].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[243] /* reactor.particle[15].contact_ratio PARAM */,"reactor.particle[15].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp23 * tmp23),"reactor.particle[15].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp24 * tmp24 * tmp24),"reactor.particle[15].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp25 * tmp25),"reactor.particle[15].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
reactor.V_b[15] = 4.188790204786391 * reactor.particle[15].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_real tmp26;
  tmp26 = data->simulationInfo->realParameter[943] /* reactor.particle[15].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[922] /* reactor.V_b[15] variable */ = (4.188790204786391) * ((tmp26 * tmp26 * tmp26));
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
reactor.particle[14].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[14].contact_ratio + (-0.0010929) / reactor.particle[14].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[14].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[14].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  tmp27 = data->simulationInfo->realParameter[242] /* reactor.particle[14].contact_ratio PARAM */;
  tmp28 = data->simulationInfo->realParameter[242] /* reactor.particle[14].contact_ratio PARAM */;
  tmp29 = data->simulationInfo->realParameter[242] /* reactor.particle[14].contact_ratio PARAM */;
  tmp29 *= tmp29;
  data->localData[0]->realVars[1380] /* reactor.particle[14].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[242] /* reactor.particle[14].contact_ratio PARAM */,"reactor.particle[14].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp27 * tmp27),"reactor.particle[14].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp28 * tmp28 * tmp28),"reactor.particle[14].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp29 * tmp29),"reactor.particle[14].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
reactor.V_b[14] = 4.188790204786391 * reactor.particle[14].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_real tmp30;
  tmp30 = data->simulationInfo->realParameter[942] /* reactor.particle[14].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[921] /* reactor.V_b[14] variable */ = (4.188790204786391) * ((tmp30 * tmp30 * tmp30));
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
reactor.particle[13].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[13].contact_ratio + (-0.0010929) / reactor.particle[13].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[13].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[13].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  tmp31 = data->simulationInfo->realParameter[241] /* reactor.particle[13].contact_ratio PARAM */;
  tmp32 = data->simulationInfo->realParameter[241] /* reactor.particle[13].contact_ratio PARAM */;
  tmp33 = data->simulationInfo->realParameter[241] /* reactor.particle[13].contact_ratio PARAM */;
  tmp33 *= tmp33;
  data->localData[0]->realVars[1379] /* reactor.particle[13].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[241] /* reactor.particle[13].contact_ratio PARAM */,"reactor.particle[13].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp31 * tmp31),"reactor.particle[13].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp32 * tmp32 * tmp32),"reactor.particle[13].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp33 * tmp33),"reactor.particle[13].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
reactor.V_b[13] = 4.188790204786391 * reactor.particle[13].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  modelica_real tmp34;
  tmp34 = data->simulationInfo->realParameter[941] /* reactor.particle[13].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[920] /* reactor.V_b[13] variable */ = (4.188790204786391) * ((tmp34 * tmp34 * tmp34));
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
reactor.particle[12].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[12].contact_ratio + (-0.0010929) / reactor.particle[12].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[12].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[12].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  tmp35 = data->simulationInfo->realParameter[240] /* reactor.particle[12].contact_ratio PARAM */;
  tmp36 = data->simulationInfo->realParameter[240] /* reactor.particle[12].contact_ratio PARAM */;
  tmp37 = data->simulationInfo->realParameter[240] /* reactor.particle[12].contact_ratio PARAM */;
  tmp37 *= tmp37;
  data->localData[0]->realVars[1378] /* reactor.particle[12].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[240] /* reactor.particle[12].contact_ratio PARAM */,"reactor.particle[12].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp35 * tmp35),"reactor.particle[12].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp36 * tmp36 * tmp36),"reactor.particle[12].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp37 * tmp37),"reactor.particle[12].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
reactor.V_b[12] = 4.188790204786391 * reactor.particle[12].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_real tmp38;
  tmp38 = data->simulationInfo->realParameter[940] /* reactor.particle[12].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[919] /* reactor.V_b[12] variable */ = (4.188790204786391) * ((tmp38 * tmp38 * tmp38));
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
reactor.particle[11].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[11].contact_ratio + (-0.0010929) / reactor.particle[11].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[11].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[11].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  tmp39 = data->simulationInfo->realParameter[239] /* reactor.particle[11].contact_ratio PARAM */;
  tmp40 = data->simulationInfo->realParameter[239] /* reactor.particle[11].contact_ratio PARAM */;
  tmp41 = data->simulationInfo->realParameter[239] /* reactor.particle[11].contact_ratio PARAM */;
  tmp41 *= tmp41;
  data->localData[0]->realVars[1377] /* reactor.particle[11].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[239] /* reactor.particle[11].contact_ratio PARAM */,"reactor.particle[11].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp39 * tmp39),"reactor.particle[11].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp40 * tmp40 * tmp40),"reactor.particle[11].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp41 * tmp41),"reactor.particle[11].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
reactor.V_b[11] = 4.188790204786391 * reactor.particle[11].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_real tmp42;
  tmp42 = data->simulationInfo->realParameter[939] /* reactor.particle[11].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[918] /* reactor.V_b[11] variable */ = (4.188790204786391) * ((tmp42 * tmp42 * tmp42));
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
reactor.particle[10].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[10].contact_ratio + (-0.0010929) / reactor.particle[10].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[10].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[10].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  tmp43 = data->simulationInfo->realParameter[238] /* reactor.particle[10].contact_ratio PARAM */;
  tmp44 = data->simulationInfo->realParameter[238] /* reactor.particle[10].contact_ratio PARAM */;
  tmp45 = data->simulationInfo->realParameter[238] /* reactor.particle[10].contact_ratio PARAM */;
  tmp45 *= tmp45;
  data->localData[0]->realVars[1376] /* reactor.particle[10].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[238] /* reactor.particle[10].contact_ratio PARAM */,"reactor.particle[10].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp43 * tmp43),"reactor.particle[10].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp44 * tmp44 * tmp44),"reactor.particle[10].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp45 * tmp45),"reactor.particle[10].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
reactor.V_b[10] = 4.188790204786391 * reactor.particle[10].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  modelica_real tmp46;
  tmp46 = data->simulationInfo->realParameter[938] /* reactor.particle[10].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[917] /* reactor.V_b[10] variable */ = (4.188790204786391) * ((tmp46 * tmp46 * tmp46));
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
reactor.particle[9].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[9].contact_ratio + (-0.0010929) / reactor.particle[9].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[9].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[9].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  tmp47 = data->simulationInfo->realParameter[237] /* reactor.particle[9].contact_ratio PARAM */;
  tmp48 = data->simulationInfo->realParameter[237] /* reactor.particle[9].contact_ratio PARAM */;
  tmp49 = data->simulationInfo->realParameter[237] /* reactor.particle[9].contact_ratio PARAM */;
  tmp49 *= tmp49;
  data->localData[0]->realVars[1375] /* reactor.particle[9].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[237] /* reactor.particle[9].contact_ratio PARAM */,"reactor.particle[9].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp47 * tmp47),"reactor.particle[9].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp48 * tmp48 * tmp48),"reactor.particle[9].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp49 * tmp49),"reactor.particle[9].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
reactor.V_b[9] = 4.188790204786391 * reactor.particle[9].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_real tmp50;
  tmp50 = data->simulationInfo->realParameter[937] /* reactor.particle[9].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[916] /* reactor.V_b[9] variable */ = (4.188790204786391) * ((tmp50 * tmp50 * tmp50));
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
reactor.particle[8].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[8].contact_ratio + (-0.0010929) / reactor.particle[8].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[8].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[8].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  tmp51 = data->simulationInfo->realParameter[236] /* reactor.particle[8].contact_ratio PARAM */;
  tmp52 = data->simulationInfo->realParameter[236] /* reactor.particle[8].contact_ratio PARAM */;
  tmp53 = data->simulationInfo->realParameter[236] /* reactor.particle[8].contact_ratio PARAM */;
  tmp53 *= tmp53;
  data->localData[0]->realVars[1374] /* reactor.particle[8].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[236] /* reactor.particle[8].contact_ratio PARAM */,"reactor.particle[8].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp51 * tmp51),"reactor.particle[8].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp52 * tmp52 * tmp52),"reactor.particle[8].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp53 * tmp53),"reactor.particle[8].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
reactor.V_b[8] = 4.188790204786391 * reactor.particle[8].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  modelica_real tmp54;
  tmp54 = data->simulationInfo->realParameter[936] /* reactor.particle[8].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[915] /* reactor.V_b[8] variable */ = (4.188790204786391) * ((tmp54 * tmp54 * tmp54));
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
reactor.particle[7].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[7].contact_ratio + (-0.0010929) / reactor.particle[7].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[7].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[7].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  tmp55 = data->simulationInfo->realParameter[235] /* reactor.particle[7].contact_ratio PARAM */;
  tmp56 = data->simulationInfo->realParameter[235] /* reactor.particle[7].contact_ratio PARAM */;
  tmp57 = data->simulationInfo->realParameter[235] /* reactor.particle[7].contact_ratio PARAM */;
  tmp57 *= tmp57;
  data->localData[0]->realVars[1373] /* reactor.particle[7].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[235] /* reactor.particle[7].contact_ratio PARAM */,"reactor.particle[7].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp55 * tmp55),"reactor.particle[7].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp56 * tmp56 * tmp56),"reactor.particle[7].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp57 * tmp57),"reactor.particle[7].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
reactor.V_b[7] = 4.188790204786391 * reactor.particle[7].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  modelica_real tmp58;
  tmp58 = data->simulationInfo->realParameter[935] /* reactor.particle[7].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[914] /* reactor.V_b[7] variable */ = (4.188790204786391) * ((tmp58 * tmp58 * tmp58));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
reactor.particle[6].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[6].contact_ratio + (-0.0010929) / reactor.particle[6].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[6].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[6].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  tmp59 = data->simulationInfo->realParameter[234] /* reactor.particle[6].contact_ratio PARAM */;
  tmp60 = data->simulationInfo->realParameter[234] /* reactor.particle[6].contact_ratio PARAM */;
  tmp61 = data->simulationInfo->realParameter[234] /* reactor.particle[6].contact_ratio PARAM */;
  tmp61 *= tmp61;
  data->localData[0]->realVars[1372] /* reactor.particle[6].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[234] /* reactor.particle[6].contact_ratio PARAM */,"reactor.particle[6].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp59 * tmp59),"reactor.particle[6].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp60 * tmp60 * tmp60),"reactor.particle[6].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp61 * tmp61),"reactor.particle[6].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
reactor.V_b[6] = 4.188790204786391 * reactor.particle[6].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  modelica_real tmp62;
  tmp62 = data->simulationInfo->realParameter[934] /* reactor.particle[6].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[913] /* reactor.V_b[6] variable */ = (4.188790204786391) * ((tmp62 * tmp62 * tmp62));
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
reactor.particle[5].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[5].contact_ratio + (-0.0010929) / reactor.particle[5].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[5].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[5].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  tmp63 = data->simulationInfo->realParameter[233] /* reactor.particle[5].contact_ratio PARAM */;
  tmp64 = data->simulationInfo->realParameter[233] /* reactor.particle[5].contact_ratio PARAM */;
  tmp65 = data->simulationInfo->realParameter[233] /* reactor.particle[5].contact_ratio PARAM */;
  tmp65 *= tmp65;
  data->localData[0]->realVars[1371] /* reactor.particle[5].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[233] /* reactor.particle[5].contact_ratio PARAM */,"reactor.particle[5].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp63 * tmp63),"reactor.particle[5].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp64 * tmp64 * tmp64),"reactor.particle[5].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp65 * tmp65),"reactor.particle[5].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
reactor.V_b[5] = 4.188790204786391 * reactor.particle[5].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_real tmp66;
  tmp66 = data->simulationInfo->realParameter[933] /* reactor.particle[5].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[912] /* reactor.V_b[5] variable */ = (4.188790204786391) * ((tmp66 * tmp66 * tmp66));
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
reactor.particle[4].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[4].contact_ratio + (-0.0010929) / reactor.particle[4].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[4].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[4].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  tmp67 = data->simulationInfo->realParameter[232] /* reactor.particle[4].contact_ratio PARAM */;
  tmp68 = data->simulationInfo->realParameter[232] /* reactor.particle[4].contact_ratio PARAM */;
  tmp69 = data->simulationInfo->realParameter[232] /* reactor.particle[4].contact_ratio PARAM */;
  tmp69 *= tmp69;
  data->localData[0]->realVars[1370] /* reactor.particle[4].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[232] /* reactor.particle[4].contact_ratio PARAM */,"reactor.particle[4].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp67 * tmp67),"reactor.particle[4].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp68 * tmp68 * tmp68),"reactor.particle[4].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp69 * tmp69),"reactor.particle[4].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
reactor.V_b[4] = 4.188790204786391 * reactor.particle[4].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  modelica_real tmp70;
  tmp70 = data->simulationInfo->realParameter[932] /* reactor.particle[4].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[911] /* reactor.V_b[4] variable */ = (4.188790204786391) * ((tmp70 * tmp70 * tmp70));
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
reactor.particle[3].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[3].contact_ratio + (-0.0010929) / reactor.particle[3].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[3].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[3].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp71 = data->simulationInfo->realParameter[231] /* reactor.particle[3].contact_ratio PARAM */;
  tmp72 = data->simulationInfo->realParameter[231] /* reactor.particle[3].contact_ratio PARAM */;
  tmp73 = data->simulationInfo->realParameter[231] /* reactor.particle[3].contact_ratio PARAM */;
  tmp73 *= tmp73;
  data->localData[0]->realVars[1369] /* reactor.particle[3].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[231] /* reactor.particle[3].contact_ratio PARAM */,"reactor.particle[3].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp71 * tmp71),"reactor.particle[3].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp72 * tmp72 * tmp72),"reactor.particle[3].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp73 * tmp73),"reactor.particle[3].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
reactor.V_b[3] = 4.188790204786391 * reactor.particle[3].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  modelica_real tmp74;
  tmp74 = data->simulationInfo->realParameter[931] /* reactor.particle[3].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[910] /* reactor.V_b[3] variable */ = (4.188790204786391) * ((tmp74 * tmp74 * tmp74));
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
reactor.particle[2].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[2].contact_ratio + (-0.0010929) / reactor.particle[2].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[2].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[2].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  tmp75 = data->simulationInfo->realParameter[230] /* reactor.particle[2].contact_ratio PARAM */;
  tmp76 = data->simulationInfo->realParameter[230] /* reactor.particle[2].contact_ratio PARAM */;
  tmp77 = data->simulationInfo->realParameter[230] /* reactor.particle[2].contact_ratio PARAM */;
  tmp77 *= tmp77;
  data->localData[0]->realVars[1368] /* reactor.particle[2].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[230] /* reactor.particle[2].contact_ratio PARAM */,"reactor.particle[2].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp75 * tmp75),"reactor.particle[2].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp76 * tmp76 * tmp76),"reactor.particle[2].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp77 * tmp77),"reactor.particle[2].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
reactor.V_b[2] = 4.188790204786391 * reactor.particle[2].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_real tmp78;
  tmp78 = data->simulationInfo->realParameter[930] /* reactor.particle[2].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[909] /* reactor.V_b[2] variable */ = (4.188790204786391) * ((tmp78 * tmp78 * tmp78));
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
reactor.particle[1].contactResistance_SiuLee.eta = 0.19196 * (1.0 / reactor.particle[1].contact_ratio + (-0.0010929) / reactor.particle[1].contact_ratio ^ 2.0 + 3.0187e-005 / reactor.particle[1].contact_ratio ^ 3.0 + (-1.202e-007) / reactor.particle[1].contact_ratio ^ 4.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  tmp79 = data->simulationInfo->realParameter[229] /* reactor.particle[1].contact_ratio PARAM */;
  tmp80 = data->simulationInfo->realParameter[229] /* reactor.particle[1].contact_ratio PARAM */;
  tmp81 = data->simulationInfo->realParameter[229] /* reactor.particle[1].contact_ratio PARAM */;
  tmp81 *= tmp81;
  data->localData[0]->realVars[1367] /* reactor.particle[1].contactResistance_SiuLee.eta variable */ = (0.19196) * (DIVISION_SIM(1.0,data->simulationInfo->realParameter[229] /* reactor.particle[1].contact_ratio PARAM */,"reactor.particle[1].contact_ratio",equationIndexes) + DIVISION_SIM(-0.0010929,(tmp79 * tmp79),"reactor.particle[1].contact_ratio ^ 2.0",equationIndexes) + DIVISION_SIM(3.0187e-005,(tmp80 * tmp80 * tmp80),"reactor.particle[1].contact_ratio ^ 3.0",equationIndexes) + DIVISION_SIM(-1.202e-007,(tmp81 * tmp81),"reactor.particle[1].contact_ratio ^ 4.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
reactor.V_b[1] = 4.188790204786391 * reactor.particle[1].particle_Radu2017_085.sorbent.radius ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_real tmp82;
  tmp82 = data->simulationInfo->realParameter[929] /* reactor.particle[1].particle_Radu2017_085.sorbent.radius PARAM */;
  data->localData[0]->realVars[908] /* reactor.V_b[1] variable */ = (4.188790204786391) * ((tmp82 * tmp82 * tmp82));
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
reactor.dx = 0.05 * reactor.L
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[1039] /* reactor.dx variable */ = (0.05) * (data->simulationInfo->realParameter[27] /* reactor.L PARAM */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
reactor.V_cyl = 0.7853981633974483 * reactor.dx * (reactor.Do ^ 2.0 - reactor.Di ^ 2.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_real tmp83;
  modelica_real tmp84;
  tmp83 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  tmp84 = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */;
  data->localData[0]->realVars[928] /* reactor.V_cyl variable */ = (0.7853981633974483) * ((data->localData[0]->realVars[1039] /* reactor.dx variable */) * ((tmp83 * tmp83) - ((tmp84 * tmp84))));
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
reactor.Ac_f = 0.7853750000000001 * (reactor.Di ^ 2.0 - reactor.Dii ^ 2.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_real tmp85;
  modelica_real tmp86;
  tmp85 = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */;
  tmp86 = data->simulationInfo->realParameter[25] /* reactor.Dii PARAM */;
  data->localData[0]->realVars[660] /* reactor.Ac_f variable */ = (0.7853750000000001) * ((tmp85 * tmp85) - ((tmp86 * tmp86)));
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
reactor.M_h[20] = 1000.0 * reactor.Ac_f * reactor.dx
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[734] /* reactor.M_h[20] variable */ = (1000.0) * ((data->localData[0]->realVars[660] /* reactor.Ac_f variable */) * (data->localData[0]->realVars[1039] /* reactor.dx variable */));
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
reactor.vf = 0.001 * reactor.mdot_h / reactor.Ac_f
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[2633] /* reactor.vf variable */ = (0.001) * (DIVISION_SIM(data->simulationInfo->realParameter[146] /* reactor.mdot_h PARAM */,data->localData[0]->realVars[660] /* reactor.Ac_f variable */,"reactor.Ac_f",equationIndexes));
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
reactor.Ac_r = 0.7853750000000001 * (reactor.Do ^ 2.0 - reactor.Di ^ 2.0)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_real tmp87;
  modelica_real tmp88;
  tmp87 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  tmp88 = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */;
  data->localData[0]->realVars[661] /* reactor.Ac_r variable */ = (0.7853750000000001) * ((tmp87 * tmp87) - ((tmp88 * tmp88)));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
reactor.A_i = 3.1415 * reactor.Di * reactor.L * reactor.fin_in
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[658] /* reactor.A_i variable */ = (3.1415) * ((data->simulationInfo->realParameter[24] /* reactor.Di PARAM */) * ((data->simulationInfo->realParameter[27] /* reactor.L PARAM */) * (data->simulationInfo->realParameter[84] /* reactor.fin_in PARAM */)));
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
reactor.Rr = reactor.Rfo / reactor.A_i
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[879] /* reactor.Rr variable */ = DIVISION_SIM(data->simulationInfo->realParameter[30] /* reactor.Rfo PARAM */,data->localData[0]->realVars[658] /* reactor.A_i variable */,"reactor.A_i",equationIndexes);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
reactor.V_p = 4.188666666666666 * (0.5 * reactor.dp) ^ 3.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  modelica_real tmp89;
  tmp89 = (0.5) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */);
  data->localData[0]->realVars[931] /* reactor.V_p variable */ = (4.188666666666666) * ((tmp89 * tmp89 * tmp89));
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
reactor.V_i = 0.7853750000000001 * (reactor.Do ^ 2.0 - reactor.Di ^ 2.0) * reactor.L
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  modelica_real tmp90;
  modelica_real tmp91;
  tmp90 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  tmp91 = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */;
  data->localData[0]->realVars[929] /* reactor.V_i variable */ = (0.7853750000000001) * (((tmp90 * tmp90) - ((tmp91 * tmp91))) * (data->simulationInfo->realParameter[27] /* reactor.L PARAM */));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
reactor.V_m = reactor.V_i * f_p
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[930] /* reactor.V_m variable */ = (data->localData[0]->realVars[929] /* reactor.V_i variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
reactor.qt = 0.125 * ((1.0 + 2.0 * reactor.c / reactor.Do) ^ 2.0 - (reactor.Di / reactor.Do) ^ 2.0) * (reactor.p - reactor.s) * reactor.f * reactor.Do ^ 2.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  tmp92 = 1.0 + (2.0) * (DIVISION_SIM(data->simulationInfo->realParameter[37] /* reactor.c PARAM */,data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,"reactor.Do",equationIndexes));
  tmp93 = DIVISION_SIM(data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,"reactor.Do",equationIndexes);
  tmp94 = data->simulationInfo->realParameter[26] /* reactor.Do PARAM */;
  data->localData[0]->realVars[2588] /* reactor.qt variable */ = (0.125) * (((tmp92 * tmp92) - ((tmp93 * tmp93))) * ((data->simulationInfo->realParameter[148] /* reactor.p PARAM */ - data->simulationInfo->realParameter[1129] /* reactor.s PARAM */) * ((data->simulationInfo->realParameter[82] /* reactor.f PARAM */) * ((tmp94 * tmp94)))));
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
reactor.qr = reactor.qt * reactor.effv
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[2587] /* reactor.qr variable */ = (data->localData[0]->realVars[2588] /* reactor.qt variable */) * (data->simulationInfo->realParameter[80] /* reactor.effv PARAM */);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
reactor.Dh = reactor.Di - reactor.Dii
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[682] /* reactor.Dh variable */ = data->simulationInfo->realParameter[24] /* reactor.Di PARAM */ - data->simulationInfo->realParameter[25] /* reactor.Dii PARAM */;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
reactor.Fo = 1.0 + (-0.14) * (reactor.Dii / reactor.Di) ^ 0.6
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  tmp95 = DIVISION_SIM(data->simulationInfo->realParameter[25] /* reactor.Dii PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  tmp96 = 0.6;
  if(tmp95 < 0.0 && tmp96 != 0.0)
  {
    tmp98 = modf(tmp96, &tmp99);
    
    if(tmp98 > 0.5)
    {
      tmp98 -= 1.0;
      tmp99 += 1.0;
    }
    else if(tmp98 < -0.5)
    {
      tmp98 += 1.0;
      tmp99 -= 1.0;
    }
    
    if(fabs(tmp98) < 1e-10)
      tmp97 = pow(tmp95, tmp99);
    else
    {
      tmp101 = modf(1.0/tmp96, &tmp100);
      if(tmp101 > 0.5)
      {
        tmp101 -= 1.0;
        tmp100 += 1.0;
      }
      else if(tmp101 < -0.5)
      {
        tmp101 += 1.0;
        tmp100 -= 1.0;
      }
      if(fabs(tmp101) < 1e-10 && ((unsigned long)tmp100 & 1))
      {
        tmp97 = -pow(-tmp95, tmp98)*pow(tmp95, tmp99);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
      }
    }
  }
  else
  {
    tmp97 = pow(tmp95, tmp96);
  }
  if(isnan(tmp97) || isinf(tmp97))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
  }
  data->localData[0]->realVars[711] /* reactor.Fo variable */ = 1.0 + (-0.14) * (tmp97);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
reactor.Rm = 0.1591596371160274 * log((reactor.Di + reactor.e) / reactor.Di) / (reactor.k_t * reactor.L)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  modelica_real tmp102;
  tmp102 = DIVISION_SIM(data->simulationInfo->realParameter[24] /* reactor.Di PARAM */ + data->simulationInfo->realParameter[79] /* reactor.e PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp102 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((reactor.Di + reactor.e) / reactor.Di) was %g should be > 0", tmp102);
  }
  data->localData[0]->realVars[878] /* reactor.Rm variable */ = (0.1591596371160274) * (DIVISION_SIM(log(tmp102),(data->simulationInfo->realParameter[145] /* reactor.k_t PARAM */) * (data->simulationInfo->realParameter[27] /* reactor.L PARAM */),"reactor.k_t * reactor.L",equationIndexes));
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
reactor.L_fin = 0.5 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[712] /* reactor.L_fin variable */ = (0.5) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
reactor.Lc = reactor.L_fin + 0.5 * reactor.t_fin
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[713] /* reactor.Lc variable */ = data->localData[0]->realVars[712] /* reactor.L_fin variable */ + (0.5) * (data->simulationInfo->realParameter[1130] /* reactor.t_fin PARAM */);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
reactor.Un_ast = 0.376 + 6.4097 * reactor.f
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[906] /* reactor.Un_ast variable */ = 0.376 + (6.4097) * (data->simulationInfo->realParameter[82] /* reactor.f PARAM */);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
reactor.Up_ast = 1.0 + 0.2302 * (reactor.p / reactor.Do) ^ 2.0 + (-0.5755) * reactor.p / reactor.Do
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_real tmp103;
  tmp103 = DIVISION_SIM(data->simulationInfo->realParameter[148] /* reactor.p PARAM */,data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,"reactor.Do",equationIndexes);
  data->localData[0]->realVars[907] /* reactor.Up_ast variable */ = 1.0 + (0.2302) * ((tmp103 * tmp103)) + (-0.5755) * (DIVISION_SIM(data->simulationInfo->realParameter[148] /* reactor.p PARAM */,data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,"reactor.Do",equationIndexes));
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
reactor.Ug = 600.0 * reactor.Un_ast * reactor.Up_ast
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[904] /* reactor.Ug variable */ = (600.0) * ((data->localData[0]->realVars[906] /* reactor.Un_ast variable */) * (data->localData[0]->realVars[907] /* reactor.Up_ast variable */));
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
reactor.A_cs = 0.05235987755982988 * reactor.L * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[657] /* reactor.A_cs variable */ = (0.05235987755982988) * ((data->simulationInfo->realParameter[27] /* reactor.L PARAM */) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */));
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
reactor.tor = 1.23 * (1.0 - reactor.epsilon_bed) ^ 0.75 / reactor.epsilon_bed
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  tmp104 = 1.0 - data->simulationInfo->realParameter[81] /* reactor.epsilon_bed PARAM */;
  tmp105 = 0.75;
  if(tmp104 < 0.0 && tmp105 != 0.0)
  {
    tmp107 = modf(tmp105, &tmp108);
    
    if(tmp107 > 0.5)
    {
      tmp107 -= 1.0;
      tmp108 += 1.0;
    }
    else if(tmp107 < -0.5)
    {
      tmp107 += 1.0;
      tmp108 -= 1.0;
    }
    
    if(fabs(tmp107) < 1e-10)
      tmp106 = pow(tmp104, tmp108);
    else
    {
      tmp110 = modf(1.0/tmp105, &tmp109);
      if(tmp110 > 0.5)
      {
        tmp110 -= 1.0;
        tmp109 += 1.0;
      }
      else if(tmp110 < -0.5)
      {
        tmp110 += 1.0;
        tmp109 -= 1.0;
      }
      if(fabs(tmp110) < 1e-10 && ((unsigned long)tmp109 & 1))
      {
        tmp106 = -pow(-tmp104, tmp107)*pow(tmp104, tmp108);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp104, tmp105);
      }
    }
  }
  else
  {
    tmp106 = pow(tmp104, tmp105);
  }
  if(isnan(tmp106) || isinf(tmp106))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp104, tmp105);
  }
  data->localData[0]->realVars[2591] /* reactor.tor variable */ = (1.23) * (DIVISION_SIM(tmp106,data->simulationInfo->realParameter[81] /* reactor.epsilon_bed PARAM */,"reactor.epsilon_bed",equationIndexes));
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
reactor.mu_vap[1] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  tmp111 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp111 *= tmp111;tmp112 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp113 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1326] /* reactor.mu_vap[1] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp111 * tmp111)) + (-2.3305128e-006) * ((tmp112 * tmp112 * tmp112)) + (0.00060786534) * ((tmp113 * tmp113)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
reactor.mu_vap[2] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  tmp114 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp114 *= tmp114;tmp115 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp116 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1327] /* reactor.mu_vap[2] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp114 * tmp114)) + (-2.3305128e-006) * ((tmp115 * tmp115 * tmp115)) + (0.00060786534) * ((tmp116 * tmp116)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
reactor.mu_vap[3] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  tmp117 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp117 *= tmp117;tmp118 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp119 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1328] /* reactor.mu_vap[3] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp117 * tmp117)) + (-2.3305128e-006) * ((tmp118 * tmp118 * tmp118)) + (0.00060786534) * ((tmp119 * tmp119)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
reactor.mu_vap[4] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  tmp120 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp120 *= tmp120;tmp121 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp122 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1329] /* reactor.mu_vap[4] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp120 * tmp120)) + (-2.3305128e-006) * ((tmp121 * tmp121 * tmp121)) + (0.00060786534) * ((tmp122 * tmp122)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
reactor.mu_vap[5] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  tmp123 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp123 *= tmp123;tmp124 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp125 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1330] /* reactor.mu_vap[5] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp123 * tmp123)) + (-2.3305128e-006) * ((tmp124 * tmp124 * tmp124)) + (0.00060786534) * ((tmp125 * tmp125)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
reactor.mu_vap[6] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  tmp126 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp126 *= tmp126;tmp127 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp128 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1331] /* reactor.mu_vap[6] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp126 * tmp126)) + (-2.3305128e-006) * ((tmp127 * tmp127 * tmp127)) + (0.00060786534) * ((tmp128 * tmp128)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
reactor.mu_vap[7] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  tmp129 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp129 *= tmp129;tmp130 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp131 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1332] /* reactor.mu_vap[7] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp129 * tmp129)) + (-2.3305128e-006) * ((tmp130 * tmp130 * tmp130)) + (0.00060786534) * ((tmp131 * tmp131)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
reactor.mu_vap[8] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  tmp132 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp132 *= tmp132;tmp133 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp134 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1333] /* reactor.mu_vap[8] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp132 * tmp132)) + (-2.3305128e-006) * ((tmp133 * tmp133 * tmp133)) + (0.00060786534) * ((tmp134 * tmp134)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
reactor.mu_vap[9] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  tmp135 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp135 *= tmp135;tmp136 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp137 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1334] /* reactor.mu_vap[9] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp135 * tmp135)) + (-2.3305128e-006) * ((tmp136 * tmp136 * tmp136)) + (0.00060786534) * ((tmp137 * tmp137)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
reactor.mu_vap[10] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  tmp138 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp138 *= tmp138;tmp139 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp140 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1335] /* reactor.mu_vap[10] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp138 * tmp138)) + (-2.3305128e-006) * ((tmp139 * tmp139 * tmp139)) + (0.00060786534) * ((tmp140 * tmp140)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
reactor.mu_vap[11] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  tmp141 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp141 *= tmp141;tmp142 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp143 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1336] /* reactor.mu_vap[11] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp141 * tmp141)) + (-2.3305128e-006) * ((tmp142 * tmp142 * tmp142)) + (0.00060786534) * ((tmp143 * tmp143)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
reactor.mu_vap[12] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  tmp144 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp144 *= tmp144;tmp145 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp146 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1337] /* reactor.mu_vap[12] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp144 * tmp144)) + (-2.3305128e-006) * ((tmp145 * tmp145 * tmp145)) + (0.00060786534) * ((tmp146 * tmp146)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
reactor.mu_vap[13] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  tmp147 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp147 *= tmp147;tmp148 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp149 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1338] /* reactor.mu_vap[13] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp147 * tmp147)) + (-2.3305128e-006) * ((tmp148 * tmp148 * tmp148)) + (0.00060786534) * ((tmp149 * tmp149)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
reactor.mu_vap[14] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  tmp150 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp150 *= tmp150;tmp151 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp152 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1339] /* reactor.mu_vap[14] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp150 * tmp150)) + (-2.3305128e-006) * ((tmp151 * tmp151 * tmp151)) + (0.00060786534) * ((tmp152 * tmp152)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
reactor.mu_vap[15] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  tmp153 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp153 *= tmp153;tmp154 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp155 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1340] /* reactor.mu_vap[15] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp153 * tmp153)) + (-2.3305128e-006) * ((tmp154 * tmp154 * tmp154)) + (0.00060786534) * ((tmp155 * tmp155)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
reactor.mu_vap[16] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  tmp156 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp156 *= tmp156;tmp157 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp158 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1341] /* reactor.mu_vap[16] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp156 * tmp156)) + (-2.3305128e-006) * ((tmp157 * tmp157 * tmp157)) + (0.00060786534) * ((tmp158 * tmp158)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
reactor.mu_vap[17] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  tmp159 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp159 *= tmp159;tmp160 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp161 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1342] /* reactor.mu_vap[17] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp159 * tmp159)) + (-2.3305128e-006) * ((tmp160 * tmp160 * tmp160)) + (0.00060786534) * ((tmp161 * tmp161)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
reactor.mu_vap[18] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  tmp162 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp162 *= tmp162;tmp163 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp164 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1343] /* reactor.mu_vap[18] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp162 * tmp162)) + (-2.3305128e-006) * ((tmp163 * tmp163 * tmp163)) + (0.00060786534) * ((tmp164 * tmp164)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
reactor.mu_vap[19] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  tmp165 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp165 *= tmp165;tmp166 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp167 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1344] /* reactor.mu_vap[19] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp165 * tmp165)) + (-2.3305128e-006) * ((tmp166 * tmp166 * tmp166)) + (0.00060786534) * ((tmp167 * tmp167)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
reactor.mu_vap[20] = 4.9162769 + 2.7686214e-015 * reactor.T2 ^ 6.0 + (-5.7810372e-012) * reactor.T2 ^ 5.0 + 5.0267344e-009 * reactor.T2 ^ 4.0 + (-2.3305128e-006) * reactor.T2 ^ 3.0 + 0.00060786534 * reactor.T2 ^ 2.0 + (-0.084621376) * reactor.T2
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  tmp168 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp168 *= tmp168;tmp169 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  tmp170 = data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */;
  data->localData[0]->realVars[1345] /* reactor.mu_vap[20] variable */ = 4.9162769 + (2.7686214e-015) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 6)) + (-5.7810372e-012) * (real_int_pow(threadData, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, 5)) + (5.0267344e-009) * ((tmp168 * tmp168)) + (-2.3305128e-006) * ((tmp169 * tmp169 * tmp169)) + (0.00060786534) * ((tmp170 * tmp170)) + (-0.084621376) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3023(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3024(DATA *data, threadData_t *threadData);


/*
equation index: 91
type: SIMPLE_ASSIGN
reactor.eff_fin = tanh(reactor.mL_c) / reactor.mL_c
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[1040] /* reactor.eff_fin variable */ = DIVISION_SIM(tanh(data->localData[0]->realVars[1164] /* reactor.mL_c variable */),data->localData[0]->realVars[1164] /* reactor.mL_c variable */,"reactor.mL_c",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3500(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3022(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3021(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3020(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3019(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3018(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3017(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3016(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3015(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3014(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3013(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3012(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3011(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3010(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3009(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3008(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3007(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3006(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3005(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3004(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3003(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3002(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: SIMPLE_ASSIGN
reactor.Np = floor(reactor.V_m / reactor.V_p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[776] /* reactor.Np variable */ = floor(DIVISION_SIM(data->localData[0]->realVars[930] /* reactor.V_m variable */,data->localData[0]->realVars[931] /* reactor.V_p variable */,"reactor.V_p",equationIndexes));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3001(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2999(DATA *data, threadData_t *threadData);


/*
equation index: 117
type: SIMPLE_ASSIGN
reactor.h_ve[20] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[1121] /* reactor.h_ve[20] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
reactor.h_ve[19] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[1120] /* reactor.h_ve[19] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
reactor.h_ve[18] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[1119] /* reactor.h_ve[18] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
reactor.h_ve[17] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[1118] /* reactor.h_ve[17] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
reactor.h_ve[16] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[1117] /* reactor.h_ve[16] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
reactor.h_ve[15] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[1116] /* reactor.h_ve[15] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
reactor.h_ve[14] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[1115] /* reactor.h_ve[14] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
reactor.h_ve[13] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[1114] /* reactor.h_ve[13] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
reactor.h_ve[12] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[1113] /* reactor.h_ve[12] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
reactor.h_ve[11] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[1112] /* reactor.h_ve[11] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
reactor.h_ve[10] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[1111] /* reactor.h_ve[10] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
reactor.h_ve[9] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[1110] /* reactor.h_ve[9] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
reactor.h_ve[8] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[1109] /* reactor.h_ve[8] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
reactor.h_ve[7] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[1108] /* reactor.h_ve[7] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
reactor.h_ve[6] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[1107] /* reactor.h_ve[6] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
reactor.h_ve[5] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[1106] /* reactor.h_ve[5] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
reactor.h_ve[4] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[1105] /* reactor.h_ve[4] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
reactor.h_ve[3] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[1104] /* reactor.h_ve[3] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
reactor.h_ve[2] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[1103] /* reactor.h_ve[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
reactor.h_ve[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(reactor.Psat_theo, reactor.T2, 0).h
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[1102] /* reactor.h_ve[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_2998(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: SIMPLE_ASSIGN
reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[20], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[1706] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1121] /* reactor.h_ve[20] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3587(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2997(DATA *data, threadData_t *threadData);


/*
equation index: 141
type: SIMPLE_ASSIGN
reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[19], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[1705] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1120] /* reactor.h_ve[19] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2996(DATA *data, threadData_t *threadData);


/*
equation index: 144
type: SIMPLE_ASSIGN
reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[18], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[1704] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1119] /* reactor.h_ve[18] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3595(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2995(DATA *data, threadData_t *threadData);


/*
equation index: 147
type: SIMPLE_ASSIGN
reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[17], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[1703] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1118] /* reactor.h_ve[17] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3599(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2994(DATA *data, threadData_t *threadData);


/*
equation index: 150
type: SIMPLE_ASSIGN
reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[16], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[1702] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1117] /* reactor.h_ve[16] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3603(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2993(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: SIMPLE_ASSIGN
reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[15], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[1701] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1116] /* reactor.h_ve[15] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3607(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2992(DATA *data, threadData_t *threadData);


/*
equation index: 156
type: SIMPLE_ASSIGN
reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[14], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[1700] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1115] /* reactor.h_ve[14] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3611(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2991(DATA *data, threadData_t *threadData);


/*
equation index: 159
type: SIMPLE_ASSIGN
reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[13], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[1699] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1114] /* reactor.h_ve[13] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3615(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2990(DATA *data, threadData_t *threadData);


/*
equation index: 162
type: SIMPLE_ASSIGN
reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[12], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[1698] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1113] /* reactor.h_ve[12] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3619(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2989(DATA *data, threadData_t *threadData);


/*
equation index: 165
type: SIMPLE_ASSIGN
reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[11], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[1697] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1112] /* reactor.h_ve[11] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3623(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2988(DATA *data, threadData_t *threadData);


/*
equation index: 168
type: SIMPLE_ASSIGN
reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[10], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[1696] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1111] /* reactor.h_ve[10] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3627(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2987(DATA *data, threadData_t *threadData);


/*
equation index: 171
type: SIMPLE_ASSIGN
reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[9], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[1695] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1110] /* reactor.h_ve[9] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3631(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2986(DATA *data, threadData_t *threadData);


/*
equation index: 174
type: SIMPLE_ASSIGN
reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[8], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[1694] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1109] /* reactor.h_ve[8] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3635(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2985(DATA *data, threadData_t *threadData);


/*
equation index: 177
type: SIMPLE_ASSIGN
reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[7], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[1693] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1108] /* reactor.h_ve[7] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3639(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2984(DATA *data, threadData_t *threadData);


/*
equation index: 180
type: SIMPLE_ASSIGN
reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[6], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[1692] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1107] /* reactor.h_ve[6] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3643(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2983(DATA *data, threadData_t *threadData);


/*
equation index: 183
type: SIMPLE_ASSIGN
reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[5], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[1691] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1106] /* reactor.h_ve[5] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3647(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2982(DATA *data, threadData_t *threadData);


/*
equation index: 186
type: SIMPLE_ASSIGN
reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[4], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[1690] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1105] /* reactor.h_ve[4] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3651(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2981(DATA *data, threadData_t *threadData);


/*
equation index: 189
type: SIMPLE_ASSIGN
reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[3], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[1689] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1104] /* reactor.h_ve[3] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3655(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2980(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: SIMPLE_ASSIGN
reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[2], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[1688] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1103] /* reactor.h_ve[2] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3659(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2979(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: SIMPLE_ASSIGN
reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(reactor.Psat_theo, reactor.h_ve[1], 0, 0).T
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[1687] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */, data->localData[0]->realVars[1102] /* reactor.h_ve[1] variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3663(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2978(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2977(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2976(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2975(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2974(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2973(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2972(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2971(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2970(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2969(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2968(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2967(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2966(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2965(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2964(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2963(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2962(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2961(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2960(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_2959(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: SIMPLE_ASSIGN
reactor.T_h[1] = $START.reactor.T_h[1]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[20] /* reactor.T_h[1] STATE(1) */ = data->modelData->realVarsData[20].attribute /* reactor.T_h[1] STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
reactor.T_h[2] = $START.reactor.T_h[2]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[21] /* reactor.T_h[2] STATE(1) */ = data->modelData->realVarsData[21].attribute /* reactor.T_h[2] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3563(DATA *data, threadData_t *threadData);


/*
equation index: 220
type: SIMPLE_ASSIGN
reactor.T_h[3] = $START.reactor.T_h[3]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->localData[0]->realVars[22] /* reactor.T_h[3] STATE(1) */ = data->modelData->realVarsData[22].attribute /* reactor.T_h[3] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3562(DATA *data, threadData_t *threadData);


/*
equation index: 222
type: SIMPLE_ASSIGN
reactor.T_h[4] = $START.reactor.T_h[4]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[23] /* reactor.T_h[4] STATE(1) */ = data->modelData->realVarsData[23].attribute /* reactor.T_h[4] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3561(DATA *data, threadData_t *threadData);


/*
equation index: 224
type: SIMPLE_ASSIGN
reactor.T_h[5] = $START.reactor.T_h[5]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[24] /* reactor.T_h[5] STATE(1) */ = data->modelData->realVarsData[24].attribute /* reactor.T_h[5] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3560(DATA *data, threadData_t *threadData);


/*
equation index: 226
type: SIMPLE_ASSIGN
reactor.T_h[6] = $START.reactor.T_h[6]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[25] /* reactor.T_h[6] STATE(1) */ = data->modelData->realVarsData[25].attribute /* reactor.T_h[6] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3559(DATA *data, threadData_t *threadData);


/*
equation index: 228
type: SIMPLE_ASSIGN
reactor.T_h[7] = $START.reactor.T_h[7]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[26] /* reactor.T_h[7] STATE(1) */ = data->modelData->realVarsData[26].attribute /* reactor.T_h[7] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3558(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: SIMPLE_ASSIGN
reactor.T_h[8] = $START.reactor.T_h[8]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[27] /* reactor.T_h[8] STATE(1) */ = data->modelData->realVarsData[27].attribute /* reactor.T_h[8] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3557(DATA *data, threadData_t *threadData);


/*
equation index: 232
type: SIMPLE_ASSIGN
reactor.T_h[9] = $START.reactor.T_h[9]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[28] /* reactor.T_h[9] STATE(1) */ = data->modelData->realVarsData[28].attribute /* reactor.T_h[9] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3556(DATA *data, threadData_t *threadData);


/*
equation index: 234
type: SIMPLE_ASSIGN
reactor.T_h[10] = $START.reactor.T_h[10]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[29] /* reactor.T_h[10] STATE(1) */ = data->modelData->realVarsData[29].attribute /* reactor.T_h[10] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3555(DATA *data, threadData_t *threadData);


/*
equation index: 236
type: SIMPLE_ASSIGN
reactor.T_h[11] = $START.reactor.T_h[11]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[30] /* reactor.T_h[11] STATE(1) */ = data->modelData->realVarsData[30].attribute /* reactor.T_h[11] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3554(DATA *data, threadData_t *threadData);


/*
equation index: 238
type: SIMPLE_ASSIGN
reactor.T_h[12] = $START.reactor.T_h[12]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[31] /* reactor.T_h[12] STATE(1) */ = data->modelData->realVarsData[31].attribute /* reactor.T_h[12] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3553(DATA *data, threadData_t *threadData);


/*
equation index: 240
type: SIMPLE_ASSIGN
reactor.T_h[13] = $START.reactor.T_h[13]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[32] /* reactor.T_h[13] STATE(1) */ = data->modelData->realVarsData[32].attribute /* reactor.T_h[13] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3552(DATA *data, threadData_t *threadData);


/*
equation index: 242
type: SIMPLE_ASSIGN
reactor.T_h[14] = $START.reactor.T_h[14]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[33] /* reactor.T_h[14] STATE(1) */ = data->modelData->realVarsData[33].attribute /* reactor.T_h[14] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3551(DATA *data, threadData_t *threadData);


/*
equation index: 244
type: SIMPLE_ASSIGN
reactor.T_h[15] = $START.reactor.T_h[15]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[34] /* reactor.T_h[15] STATE(1) */ = data->modelData->realVarsData[34].attribute /* reactor.T_h[15] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3550(DATA *data, threadData_t *threadData);


/*
equation index: 246
type: SIMPLE_ASSIGN
reactor.T_h[16] = $START.reactor.T_h[16]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[35] /* reactor.T_h[16] STATE(1) */ = data->modelData->realVarsData[35].attribute /* reactor.T_h[16] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3549(DATA *data, threadData_t *threadData);


/*
equation index: 248
type: SIMPLE_ASSIGN
reactor.T_h[17] = $START.reactor.T_h[17]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[36] /* reactor.T_h[17] STATE(1) */ = data->modelData->realVarsData[36].attribute /* reactor.T_h[17] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3548(DATA *data, threadData_t *threadData);


/*
equation index: 250
type: SIMPLE_ASSIGN
reactor.T_h[18] = $START.reactor.T_h[18]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[37] /* reactor.T_h[18] STATE(1) */ = data->modelData->realVarsData[37].attribute /* reactor.T_h[18] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3547(DATA *data, threadData_t *threadData);


/*
equation index: 252
type: SIMPLE_ASSIGN
reactor.T_h[19] = $START.reactor.T_h[19]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[38] /* reactor.T_h[19] STATE(1) */ = data->modelData->realVarsData[38].attribute /* reactor.T_h[19] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3546(DATA *data, threadData_t *threadData);


/*
equation index: 254
type: SIMPLE_ASSIGN
reactor.T_h[20] = $START.reactor.T_h[20]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[39] /* reactor.T_h[20] STATE(1) */ = data->modelData->realVarsData[39].attribute /* reactor.T_h[20] STATE(1) */.start;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3545(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3544(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3070(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3075(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3072(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3073(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3071(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3074(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3076(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3077(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3501(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3502(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3067(DATA *data, threadData_t *threadData);


/*
equation index: 268
type: SIMPLE_ASSIGN
reactor.w[1] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[2634] /* reactor.w[1] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3911(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3910(DATA *data, threadData_t *threadData);


/*
equation index: 271
type: SIMPLE_ASSIGN
reactor.particle[1].particle_Radu2017_085.sorbent.A = (reactor.particle[1].particle_Radu2017_085.sorbent.a - log(reactor.w[1])) / reactor.particle[1].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  modelica_real tmp171;
  tmp171 = data->localData[0]->realVars[2634] /* reactor.w[1] DUMMY_STATE */;
  if(!(tmp171 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[1]) was %g should be > 0", tmp171);
  }
  data->localData[0]->realVars[2067] /* reactor.particle[1].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[729] /* reactor.particle[1].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp171),data->simulationInfo->realParameter[749] /* reactor.particle[1].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[1].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3920(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3921(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3922(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3941(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3942(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3946(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3947(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3948(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3949(DATA *data, threadData_t *threadData);


/*
equation index: 281
type: SIMPLE_ASSIGN
reactor.w[2] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[2635] /* reactor.w[2] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4000(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3999(DATA *data, threadData_t *threadData);


/*
equation index: 284
type: SIMPLE_ASSIGN
reactor.particle[2].particle_Radu2017_085.sorbent.A = (reactor.particle[2].particle_Radu2017_085.sorbent.a - log(reactor.w[2])) / reactor.particle[2].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_real tmp172;
  tmp172 = data->localData[0]->realVars[2635] /* reactor.w[2] DUMMY_STATE */;
  if(!(tmp172 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[2]) was %g should be > 0", tmp172);
  }
  data->localData[0]->realVars[2068] /* reactor.particle[2].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[730] /* reactor.particle[2].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp172),data->simulationInfo->realParameter[750] /* reactor.particle[2].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[2].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4009(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4010(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4011(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4030(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4031(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4035(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4036(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4037(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4038(DATA *data, threadData_t *threadData);


/*
equation index: 294
type: SIMPLE_ASSIGN
reactor.w[3] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[2636] /* reactor.w[3] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4089(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4088(DATA *data, threadData_t *threadData);


/*
equation index: 297
type: SIMPLE_ASSIGN
reactor.particle[3].particle_Radu2017_085.sorbent.A = (reactor.particle[3].particle_Radu2017_085.sorbent.a - log(reactor.w[3])) / reactor.particle[3].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  modelica_real tmp173;
  tmp173 = data->localData[0]->realVars[2636] /* reactor.w[3] DUMMY_STATE */;
  if(!(tmp173 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[3]) was %g should be > 0", tmp173);
  }
  data->localData[0]->realVars[2069] /* reactor.particle[3].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[731] /* reactor.particle[3].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp173),data->simulationInfo->realParameter[751] /* reactor.particle[3].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[3].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4098(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4099(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4100(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4119(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4120(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4124(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4125(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4126(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4127(DATA *data, threadData_t *threadData);


/*
equation index: 307
type: SIMPLE_ASSIGN
reactor.w[4] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[2637] /* reactor.w[4] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4178(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4177(DATA *data, threadData_t *threadData);


/*
equation index: 310
type: SIMPLE_ASSIGN
reactor.particle[4].particle_Radu2017_085.sorbent.A = (reactor.particle[4].particle_Radu2017_085.sorbent.a - log(reactor.w[4])) / reactor.particle[4].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  modelica_real tmp174;
  tmp174 = data->localData[0]->realVars[2637] /* reactor.w[4] DUMMY_STATE */;
  if(!(tmp174 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[4]) was %g should be > 0", tmp174);
  }
  data->localData[0]->realVars[2070] /* reactor.particle[4].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[732] /* reactor.particle[4].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp174),data->simulationInfo->realParameter[752] /* reactor.particle[4].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[4].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4187(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4188(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4189(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4208(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4209(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4213(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4214(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4215(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4216(DATA *data, threadData_t *threadData);


/*
equation index: 320
type: SIMPLE_ASSIGN
reactor.w[5] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[2638] /* reactor.w[5] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4267(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4266(DATA *data, threadData_t *threadData);


/*
equation index: 323
type: SIMPLE_ASSIGN
reactor.particle[5].particle_Radu2017_085.sorbent.A = (reactor.particle[5].particle_Radu2017_085.sorbent.a - log(reactor.w[5])) / reactor.particle[5].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  modelica_real tmp175;
  tmp175 = data->localData[0]->realVars[2638] /* reactor.w[5] DUMMY_STATE */;
  if(!(tmp175 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[5]) was %g should be > 0", tmp175);
  }
  data->localData[0]->realVars[2071] /* reactor.particle[5].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[733] /* reactor.particle[5].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp175),data->simulationInfo->realParameter[753] /* reactor.particle[5].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[5].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4276(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4277(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4278(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4279(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4298(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4299(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4303(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4304(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4305(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4306(DATA *data, threadData_t *threadData);


/*
equation index: 334
type: SIMPLE_ASSIGN
reactor.w[6] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[2639] /* reactor.w[6] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4357(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4356(DATA *data, threadData_t *threadData);


/*
equation index: 337
type: SIMPLE_ASSIGN
reactor.particle[6].particle_Radu2017_085.sorbent.A = (reactor.particle[6].particle_Radu2017_085.sorbent.a - log(reactor.w[6])) / reactor.particle[6].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  modelica_real tmp176;
  tmp176 = data->localData[0]->realVars[2639] /* reactor.w[6] DUMMY_STATE */;
  if(!(tmp176 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[6]) was %g should be > 0", tmp176);
  }
  data->localData[0]->realVars[2072] /* reactor.particle[6].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[734] /* reactor.particle[6].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp176),data->simulationInfo->realParameter[754] /* reactor.particle[6].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[6].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4366(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4367(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4368(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4387(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4388(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4392(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4393(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4394(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4395(DATA *data, threadData_t *threadData);


/*
equation index: 347
type: SIMPLE_ASSIGN
reactor.w[7] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[2640] /* reactor.w[7] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4446(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4445(DATA *data, threadData_t *threadData);


/*
equation index: 350
type: SIMPLE_ASSIGN
reactor.particle[7].particle_Radu2017_085.sorbent.A = (reactor.particle[7].particle_Radu2017_085.sorbent.a - log(reactor.w[7])) / reactor.particle[7].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  modelica_real tmp177;
  tmp177 = data->localData[0]->realVars[2640] /* reactor.w[7] DUMMY_STATE */;
  if(!(tmp177 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[7]) was %g should be > 0", tmp177);
  }
  data->localData[0]->realVars[2073] /* reactor.particle[7].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[735] /* reactor.particle[7].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp177),data->simulationInfo->realParameter[755] /* reactor.particle[7].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[7].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4455(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4456(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4457(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4476(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4477(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4481(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4482(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4483(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4484(DATA *data, threadData_t *threadData);


/*
equation index: 360
type: SIMPLE_ASSIGN
reactor.w[8] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[2641] /* reactor.w[8] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4535(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4534(DATA *data, threadData_t *threadData);


/*
equation index: 363
type: SIMPLE_ASSIGN
reactor.particle[8].particle_Radu2017_085.sorbent.A = (reactor.particle[8].particle_Radu2017_085.sorbent.a - log(reactor.w[8])) / reactor.particle[8].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_real tmp178;
  tmp178 = data->localData[0]->realVars[2641] /* reactor.w[8] DUMMY_STATE */;
  if(!(tmp178 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[8]) was %g should be > 0", tmp178);
  }
  data->localData[0]->realVars[2074] /* reactor.particle[8].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[736] /* reactor.particle[8].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp178),data->simulationInfo->realParameter[756] /* reactor.particle[8].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[8].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4544(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4545(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4546(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4565(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4566(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4570(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4571(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4572(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4573(DATA *data, threadData_t *threadData);


/*
equation index: 373
type: SIMPLE_ASSIGN
reactor.w[9] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[2642] /* reactor.w[9] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4624(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4623(DATA *data, threadData_t *threadData);


/*
equation index: 376
type: SIMPLE_ASSIGN
reactor.particle[9].particle_Radu2017_085.sorbent.A = (reactor.particle[9].particle_Radu2017_085.sorbent.a - log(reactor.w[9])) / reactor.particle[9].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  modelica_real tmp179;
  tmp179 = data->localData[0]->realVars[2642] /* reactor.w[9] DUMMY_STATE */;
  if(!(tmp179 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[9]) was %g should be > 0", tmp179);
  }
  data->localData[0]->realVars[2075] /* reactor.particle[9].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[737] /* reactor.particle[9].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp179),data->simulationInfo->realParameter[757] /* reactor.particle[9].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[9].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4633(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4634(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4635(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4654(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4655(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4659(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4660(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4661(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4662(DATA *data, threadData_t *threadData);


/*
equation index: 386
type: SIMPLE_ASSIGN
reactor.w[10] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[2643] /* reactor.w[10] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4713(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4712(DATA *data, threadData_t *threadData);


/*
equation index: 389
type: SIMPLE_ASSIGN
reactor.particle[10].particle_Radu2017_085.sorbent.A = (reactor.particle[10].particle_Radu2017_085.sorbent.a - log(reactor.w[10])) / reactor.particle[10].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  modelica_real tmp180;
  tmp180 = data->localData[0]->realVars[2643] /* reactor.w[10] DUMMY_STATE */;
  if(!(tmp180 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[10]) was %g should be > 0", tmp180);
  }
  data->localData[0]->realVars[2076] /* reactor.particle[10].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[738] /* reactor.particle[10].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp180),data->simulationInfo->realParameter[758] /* reactor.particle[10].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[10].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4722(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4723(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4724(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4743(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4744(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4748(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4749(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4750(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4751(DATA *data, threadData_t *threadData);


/*
equation index: 399
type: SIMPLE_ASSIGN
reactor.w[11] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[2644] /* reactor.w[11] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4802(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4801(DATA *data, threadData_t *threadData);


/*
equation index: 402
type: SIMPLE_ASSIGN
reactor.particle[11].particle_Radu2017_085.sorbent.A = (reactor.particle[11].particle_Radu2017_085.sorbent.a - log(reactor.w[11])) / reactor.particle[11].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  modelica_real tmp181;
  tmp181 = data->localData[0]->realVars[2644] /* reactor.w[11] DUMMY_STATE */;
  if(!(tmp181 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[11]) was %g should be > 0", tmp181);
  }
  data->localData[0]->realVars[2077] /* reactor.particle[11].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[739] /* reactor.particle[11].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp181),data->simulationInfo->realParameter[759] /* reactor.particle[11].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[11].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4811(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4812(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4813(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4832(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4833(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4837(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4838(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4839(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4840(DATA *data, threadData_t *threadData);


/*
equation index: 412
type: SIMPLE_ASSIGN
reactor.w[12] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[2645] /* reactor.w[12] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4891(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4890(DATA *data, threadData_t *threadData);


/*
equation index: 415
type: SIMPLE_ASSIGN
reactor.particle[12].particle_Radu2017_085.sorbent.A = (reactor.particle[12].particle_Radu2017_085.sorbent.a - log(reactor.w[12])) / reactor.particle[12].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  modelica_real tmp182;
  tmp182 = data->localData[0]->realVars[2645] /* reactor.w[12] DUMMY_STATE */;
  if(!(tmp182 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[12]) was %g should be > 0", tmp182);
  }
  data->localData[0]->realVars[2078] /* reactor.particle[12].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[740] /* reactor.particle[12].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp182),data->simulationInfo->realParameter[760] /* reactor.particle[12].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[12].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4900(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4901(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4902(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4921(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4922(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4926(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4927(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4928(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4929(DATA *data, threadData_t *threadData);


/*
equation index: 425
type: SIMPLE_ASSIGN
reactor.w[13] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[2646] /* reactor.w[13] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4980(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4979(DATA *data, threadData_t *threadData);


/*
equation index: 428
type: SIMPLE_ASSIGN
reactor.particle[13].particle_Radu2017_085.sorbent.A = (reactor.particle[13].particle_Radu2017_085.sorbent.a - log(reactor.w[13])) / reactor.particle[13].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  modelica_real tmp183;
  tmp183 = data->localData[0]->realVars[2646] /* reactor.w[13] DUMMY_STATE */;
  if(!(tmp183 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[13]) was %g should be > 0", tmp183);
  }
  data->localData[0]->realVars[2079] /* reactor.particle[13].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[741] /* reactor.particle[13].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp183),data->simulationInfo->realParameter[761] /* reactor.particle[13].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[13].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4989(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4990(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4991(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5010(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5011(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5015(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5016(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5017(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5018(DATA *data, threadData_t *threadData);


/*
equation index: 438
type: SIMPLE_ASSIGN
reactor.w[14] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[2647] /* reactor.w[14] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5069(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5068(DATA *data, threadData_t *threadData);


/*
equation index: 441
type: SIMPLE_ASSIGN
reactor.particle[14].particle_Radu2017_085.sorbent.A = (reactor.particle[14].particle_Radu2017_085.sorbent.a - log(reactor.w[14])) / reactor.particle[14].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  modelica_real tmp184;
  tmp184 = data->localData[0]->realVars[2647] /* reactor.w[14] DUMMY_STATE */;
  if(!(tmp184 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[14]) was %g should be > 0", tmp184);
  }
  data->localData[0]->realVars[2080] /* reactor.particle[14].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[742] /* reactor.particle[14].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp184),data->simulationInfo->realParameter[762] /* reactor.particle[14].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[14].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5078(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5079(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5080(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5099(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5100(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5104(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5105(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5106(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5107(DATA *data, threadData_t *threadData);


/*
equation index: 451
type: SIMPLE_ASSIGN
reactor.w[15] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->localData[0]->realVars[2648] /* reactor.w[15] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5158(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5157(DATA *data, threadData_t *threadData);


/*
equation index: 454
type: SIMPLE_ASSIGN
reactor.particle[15].particle_Radu2017_085.sorbent.A = (reactor.particle[15].particle_Radu2017_085.sorbent.a - log(reactor.w[15])) / reactor.particle[15].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  modelica_real tmp185;
  tmp185 = data->localData[0]->realVars[2648] /* reactor.w[15] DUMMY_STATE */;
  if(!(tmp185 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[15]) was %g should be > 0", tmp185);
  }
  data->localData[0]->realVars[2081] /* reactor.particle[15].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[743] /* reactor.particle[15].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp185),data->simulationInfo->realParameter[763] /* reactor.particle[15].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[15].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5167(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5168(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5169(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5188(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5189(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5193(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5194(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5195(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5196(DATA *data, threadData_t *threadData);


/*
equation index: 464
type: SIMPLE_ASSIGN
reactor.w[16] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[2649] /* reactor.w[16] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5247(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5246(DATA *data, threadData_t *threadData);


/*
equation index: 467
type: SIMPLE_ASSIGN
reactor.particle[16].particle_Radu2017_085.sorbent.A = (reactor.particle[16].particle_Radu2017_085.sorbent.a - log(reactor.w[16])) / reactor.particle[16].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  modelica_real tmp186;
  tmp186 = data->localData[0]->realVars[2649] /* reactor.w[16] DUMMY_STATE */;
  if(!(tmp186 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[16]) was %g should be > 0", tmp186);
  }
  data->localData[0]->realVars[2082] /* reactor.particle[16].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[744] /* reactor.particle[16].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp186),data->simulationInfo->realParameter[764] /* reactor.particle[16].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[16].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5256(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5257(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5258(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5277(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5278(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5282(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5283(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5284(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5285(DATA *data, threadData_t *threadData);


/*
equation index: 477
type: SIMPLE_ASSIGN
reactor.w[17] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[2650] /* reactor.w[17] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5336(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5335(DATA *data, threadData_t *threadData);


/*
equation index: 480
type: SIMPLE_ASSIGN
reactor.particle[17].particle_Radu2017_085.sorbent.A = (reactor.particle[17].particle_Radu2017_085.sorbent.a - log(reactor.w[17])) / reactor.particle[17].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  modelica_real tmp187;
  tmp187 = data->localData[0]->realVars[2650] /* reactor.w[17] DUMMY_STATE */;
  if(!(tmp187 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[17]) was %g should be > 0", tmp187);
  }
  data->localData[0]->realVars[2083] /* reactor.particle[17].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[745] /* reactor.particle[17].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp187),data->simulationInfo->realParameter[765] /* reactor.particle[17].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[17].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5345(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5346(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5347(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5366(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5367(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5371(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5372(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5373(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5374(DATA *data, threadData_t *threadData);


/*
equation index: 490
type: SIMPLE_ASSIGN
reactor.w[18] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[2651] /* reactor.w[18] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5425(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5424(DATA *data, threadData_t *threadData);


/*
equation index: 493
type: SIMPLE_ASSIGN
reactor.particle[18].particle_Radu2017_085.sorbent.A = (reactor.particle[18].particle_Radu2017_085.sorbent.a - log(reactor.w[18])) / reactor.particle[18].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  modelica_real tmp188;
  tmp188 = data->localData[0]->realVars[2651] /* reactor.w[18] DUMMY_STATE */;
  if(!(tmp188 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[18]) was %g should be > 0", tmp188);
  }
  data->localData[0]->realVars[2084] /* reactor.particle[18].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[746] /* reactor.particle[18].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp188),data->simulationInfo->realParameter[766] /* reactor.particle[18].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[18].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5434(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5435(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5436(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5455(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5456(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5460(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5461(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5462(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5463(DATA *data, threadData_t *threadData);


/*
equation index: 503
type: SIMPLE_ASSIGN
reactor.w[19] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[2652] /* reactor.w[19] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5514(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5513(DATA *data, threadData_t *threadData);


/*
equation index: 506
type: SIMPLE_ASSIGN
reactor.particle[19].particle_Radu2017_085.sorbent.A = (reactor.particle[19].particle_Radu2017_085.sorbent.a - log(reactor.w[19])) / reactor.particle[19].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  modelica_real tmp189;
  tmp189 = data->localData[0]->realVars[2652] /* reactor.w[19] DUMMY_STATE */;
  if(!(tmp189 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[19]) was %g should be > 0", tmp189);
  }
  data->localData[0]->realVars[2085] /* reactor.particle[19].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[747] /* reactor.particle[19].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp189),data->simulationInfo->realParameter[767] /* reactor.particle[19].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[19].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5523(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5524(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5525(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5544(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5545(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5549(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5550(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5551(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5552(DATA *data, threadData_t *threadData);


/*
equation index: 516
type: SIMPLE_ASSIGN
reactor.w[20] = reactor.Wi
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[2653] /* reactor.w[20] DUMMY_STATE */ = data->simulationInfo->realParameter[36] /* reactor.Wi PARAM */;
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5604(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5602(DATA *data, threadData_t *threadData);


/*
equation index: 519
type: SIMPLE_ASSIGN
reactor.particle[20].particle_Radu2017_085.sorbent.A = (reactor.particle[20].particle_Radu2017_085.sorbent.a - log(reactor.w[20])) / reactor.particle[20].particle_Radu2017_085.sorbent.b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  modelica_real tmp190;
  tmp190 = data->localData[0]->realVars[2653] /* reactor.w[20] DUMMY_STATE */;
  if(!(tmp190 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.w[20]) was %g should be > 0", tmp190);
  }
  data->localData[0]->realVars[2086] /* reactor.particle[20].particle_Radu2017_085.sorbent.A DUMMY_STATE */ = DIVISION_SIM(data->simulationInfo->realParameter[748] /* reactor.particle[20].particle_Radu2017_085.sorbent.a PARAM */ - log(tmp190),data->simulationInfo->realParameter[768] /* reactor.particle[20].particle_Radu2017_085.sorbent.b PARAM */,"reactor.particle[20].particle_Radu2017_085.sorbent.b",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5617(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5618(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5619(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5643(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5644(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5649(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5650(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5651(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5652(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5653(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5654(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5655(DATA *data, threadData_t *threadData);


/*
equation index: 532
type: SIMPLE_ASSIGN
reactor.Pmedia[1] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[798] /* reactor.Pmedia[1] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
reactor.gama_media[1] = 0.01801 * reactor.Pmedia[1] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[798] /* reactor.Pmedia[1] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3583(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3480(DATA *data, threadData_t *threadData);


/*
equation index: 536
type: SIMPLE_ASSIGN
reactor.Pmedia[2] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[799] /* reactor.Pmedia[2] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
reactor.gama_media[2] = 0.01801 * reactor.Pmedia[2] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[799] /* reactor.Pmedia[2] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3582(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3459(DATA *data, threadData_t *threadData);


/*
equation index: 540
type: SIMPLE_ASSIGN
reactor.Pmedia[3] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[800] /* reactor.Pmedia[3] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
reactor.gama_media[3] = 0.01801 * reactor.Pmedia[3] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[800] /* reactor.Pmedia[3] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3581(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3438(DATA *data, threadData_t *threadData);


/*
equation index: 544
type: SIMPLE_ASSIGN
reactor.Pmedia[4] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[801] /* reactor.Pmedia[4] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
reactor.gama_media[4] = 0.01801 * reactor.Pmedia[4] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[801] /* reactor.Pmedia[4] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3580(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3417(DATA *data, threadData_t *threadData);


/*
equation index: 548
type: SIMPLE_ASSIGN
reactor.Pmedia[5] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[802] /* reactor.Pmedia[5] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
reactor.gama_media[5] = 0.01801 * reactor.Pmedia[5] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[802] /* reactor.Pmedia[5] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3579(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3396(DATA *data, threadData_t *threadData);


/*
equation index: 552
type: SIMPLE_ASSIGN
reactor.Pmedia[6] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[803] /* reactor.Pmedia[6] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
reactor.gama_media[6] = 0.01801 * reactor.Pmedia[6] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[803] /* reactor.Pmedia[6] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3578(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3375(DATA *data, threadData_t *threadData);


/*
equation index: 556
type: SIMPLE_ASSIGN
reactor.Pmedia[7] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[804] /* reactor.Pmedia[7] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
reactor.gama_media[7] = 0.01801 * reactor.Pmedia[7] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[804] /* reactor.Pmedia[7] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3577(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3354(DATA *data, threadData_t *threadData);


/*
equation index: 560
type: SIMPLE_ASSIGN
reactor.Pmedia[8] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->localData[0]->realVars[805] /* reactor.Pmedia[8] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
reactor.gama_media[8] = 0.01801 * reactor.Pmedia[8] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[805] /* reactor.Pmedia[8] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3576(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3333(DATA *data, threadData_t *threadData);


/*
equation index: 564
type: SIMPLE_ASSIGN
reactor.Pmedia[9] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->localData[0]->realVars[806] /* reactor.Pmedia[9] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
reactor.gama_media[9] = 0.01801 * reactor.Pmedia[9] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[806] /* reactor.Pmedia[9] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3575(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3312(DATA *data, threadData_t *threadData);


/*
equation index: 568
type: SIMPLE_ASSIGN
reactor.Pmedia[10] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->localData[0]->realVars[807] /* reactor.Pmedia[10] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
reactor.gama_media[10] = 0.01801 * reactor.Pmedia[10] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[807] /* reactor.Pmedia[10] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3574(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3291(DATA *data, threadData_t *threadData);


/*
equation index: 572
type: SIMPLE_ASSIGN
reactor.Pmedia[11] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[808] /* reactor.Pmedia[11] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
reactor.gama_media[11] = 0.01801 * reactor.Pmedia[11] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[808] /* reactor.Pmedia[11] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3573(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3270(DATA *data, threadData_t *threadData);


/*
equation index: 576
type: SIMPLE_ASSIGN
reactor.Pmedia[12] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->localData[0]->realVars[809] /* reactor.Pmedia[12] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
reactor.gama_media[12] = 0.01801 * reactor.Pmedia[12] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[809] /* reactor.Pmedia[12] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3572(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3249(DATA *data, threadData_t *threadData);


/*
equation index: 580
type: SIMPLE_ASSIGN
reactor.Pmedia[13] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[810] /* reactor.Pmedia[13] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
reactor.gama_media[13] = 0.01801 * reactor.Pmedia[13] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[810] /* reactor.Pmedia[13] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3571(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3228(DATA *data, threadData_t *threadData);


/*
equation index: 584
type: SIMPLE_ASSIGN
reactor.Pmedia[14] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->localData[0]->realVars[811] /* reactor.Pmedia[14] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
reactor.gama_media[14] = 0.01801 * reactor.Pmedia[14] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[811] /* reactor.Pmedia[14] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3570(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3207(DATA *data, threadData_t *threadData);


/*
equation index: 588
type: SIMPLE_ASSIGN
reactor.Pmedia[15] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->localData[0]->realVars[812] /* reactor.Pmedia[15] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
reactor.gama_media[15] = 0.01801 * reactor.Pmedia[15] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[812] /* reactor.Pmedia[15] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3569(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3186(DATA *data, threadData_t *threadData);


/*
equation index: 592
type: SIMPLE_ASSIGN
reactor.Pmedia[16] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->localData[0]->realVars[813] /* reactor.Pmedia[16] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
reactor.gama_media[16] = 0.01801 * reactor.Pmedia[16] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[813] /* reactor.Pmedia[16] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3568(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3165(DATA *data, threadData_t *threadData);


/*
equation index: 596
type: SIMPLE_ASSIGN
reactor.Pmedia[17] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->localData[0]->realVars[814] /* reactor.Pmedia[17] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
reactor.gama_media[17] = 0.01801 * reactor.Pmedia[17] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[814] /* reactor.Pmedia[17] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3567(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3144(DATA *data, threadData_t *threadData);


/*
equation index: 600
type: SIMPLE_ASSIGN
reactor.Pmedia[18] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->localData[0]->realVars[815] /* reactor.Pmedia[18] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
reactor.gama_media[18] = 0.01801 * reactor.Pmedia[18] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[815] /* reactor.Pmedia[18] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3566(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3123(DATA *data, threadData_t *threadData);


/*
equation index: 604
type: SIMPLE_ASSIGN
reactor.Pmedia[19] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->localData[0]->realVars[816] /* reactor.Pmedia[19] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
reactor.gama_media[19] = 0.01801 * reactor.Pmedia[19] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[816] /* reactor.Pmedia[19] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3565(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3102(DATA *data, threadData_t *threadData);


/*
equation index: 608
type: SIMPLE_ASSIGN
reactor.Pmedia[20] = reactor.Psat_theo
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->localData[0]->realVars[817] /* reactor.Pmedia[20] variable */ = data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
reactor.gama_media[20] = 0.01801 * reactor.Pmedia[20] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[817] /* reactor.Pmedia[20] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3564(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3081(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3046(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3047(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3048(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3049(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3050(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3051(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3052(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3053(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3054(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3055(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3056(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3057(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3058(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3059(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3060(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3061(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3062(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3063(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3064(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3065(DATA *data, threadData_t *threadData);


/*
equation index: 632
type: SIMPLE_ASSIGN
reactor.particle[20].particle_Radu2017_085.T_b = reactor.particle[20].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->localData[0]->realVars[1586] /* reactor.particle[20].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1606] /* reactor.particle[20].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
reactor.T_b[20] = reactor.particle[20].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */ = data->localData[0]->realVars[1586] /* reactor.particle[20].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
reactor.psat[20] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[20]) * (-273.15 + reactor.T_b[20]) / (-16.00999999999999 + reactor.T_b[20]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"-16.00999999999999 + reactor.T_b[20]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_635(DATA*, threadData_t*);
/*
equation index: 636
indexNonlinear: 0
type: NONLINEAR

vars: {reactor.pvap[20]}
eqns: {635}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 636 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,636};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 636 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
reactor.gama_i[20] = 0.120272355042726 * reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[20] / reactor.T_b[20]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[59] /* reactor.gama_i[20] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[348] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"reactor.T_b[20]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5605(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5606(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5645(DATA *data, threadData_t *threadData);


/*
equation index: 641
type: SIMPLE_ASSIGN
reactor.particle[20].particle_Radu2017_085.sorbent.Ds = reactor.particle[20].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[20].particle_Radu2017_085.sorbent.Ea / reactor.T_b[20])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[2106] /* reactor.particle[20].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[648] /* reactor.particle[20].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[668] /* reactor.particle[20].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,"reactor.T_b[20]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5633(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5634(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5635(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5636(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3672(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3671(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3670(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3669(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3668(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3667(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3666(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3665(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3664(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3902(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3903(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5640(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5637(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5638(DATA *data, threadData_t *threadData);


/*
equation index: 666
type: LINEAR

<var>reactor.T_c[20]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[900] /* reactor.T_c[20] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 666 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,666};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 666 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[900] /* reactor.T_c[20] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5630(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5631(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5632(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3080(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3082(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3083(DATA *data, threadData_t *threadData);


/*
equation index: 673
type: SIMPLE_ASSIGN
reactor.R_inter[20] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[20] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[852] /* reactor.R_inter[20] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[681] /* reactor.D_gas[20] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[20] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_674(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_675(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_676(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_677(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_678(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_679(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_680(DATA*, threadData_t*);
/*
equation index: 688
indexNonlinear: 1
type: NONLINEAR

vars: {reactor.v_vap[20]}
eqns: {674, 675, 676, 677, 678, 679, 680}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 688 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,688};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 688 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5641(DATA *data, threadData_t *threadData);


/*
equation index: 690
type: SIMPLE_ASSIGN
reactor.particle[19].particle_Radu2017_085.T_b = reactor.particle[19].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[1585] /* reactor.particle[19].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1605] /* reactor.particle[19].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
reactor.T_b[19] = reactor.particle[19].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */ = data->localData[0]->realVars[1585] /* reactor.particle[19].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
reactor.psat[19] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[19]) * (-273.15 + reactor.T_b[19]) / (-16.00999999999999 + reactor.T_b[19]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"-16.00999999999999 + reactor.T_b[19]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_693(DATA*, threadData_t*);
/*
equation index: 694
indexNonlinear: 2
type: NONLINEAR

vars: {reactor.pvap[19]}
eqns: {693}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 694 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,694};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 694 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
reactor.gama_i[19] = 0.120272355042726 * reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[19] / reactor.T_b[19]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[58] /* reactor.gama_i[19] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[347] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"reactor.T_b[19]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5515(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5516(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5546(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5610(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5611(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5613(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5614(DATA *data, threadData_t *threadData);


/*
equation index: 703
type: SIMPLE_ASSIGN
reactor.particle[19].particle_Radu2017_085.sorbent.Ds = reactor.particle[19].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[19].particle_Radu2017_085.sorbent.Ea / reactor.T_b[19])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[2105] /* reactor.particle[19].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[647] /* reactor.particle[19].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[667] /* reactor.particle[19].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,"reactor.T_b[19]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5536(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5537(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5538(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5539(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3681(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3680(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3679(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3678(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3677(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3676(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3675(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3674(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3673(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3899(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3900(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5542(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5540(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5541(DATA *data, threadData_t *threadData);


/*
equation index: 728
type: LINEAR

<var>reactor.T_c[19]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[899] /* reactor.T_c[19] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 728 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,728};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 728 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[899] /* reactor.T_c[19] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5533(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5534(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5535(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3503(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3504(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5646(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5647(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5607(DATA *data, threadData_t *threadData);


/*
equation index: 771
type: LINEAR

<var>$DER.reactor.T_b[20]</var>
<var>$DER.reactor.pvap[20]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */,data->localData[1]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 771 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,771};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 771 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[99] /* der(reactor.T_b[20]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[299] /* der(reactor.pvap[20]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
$DER.reactor.particle[20].particle_Radu2017_085.M_l = reactor.M_a[20] * $DER.reactor.w[20] + $DER.reactor.M_a[20] * reactor.w[20]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[239] /* der(reactor.particle[20].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */) * (data->localData[0]->realVars[319] /* der(reactor.w[20]) DUMMY_DER */) + (data->localData[0]->realVars[179] /* der(reactor.M_a[20]) DUMMY_DER */) * (data->localData[0]->realVars[2653] /* reactor.w[20] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5696(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5701(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5692(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5694(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5700(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5705(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5702(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5698(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5703(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5608(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3101(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3103(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3104(DATA *data, threadData_t *threadData);


/*
equation index: 786
type: SIMPLE_ASSIGN
reactor.R_inter[19] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[19] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[851] /* reactor.R_inter[19] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[680] /* reactor.D_gas[19] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[19] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_787(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_788(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_789(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_790(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_791(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_792(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_793(DATA*, threadData_t*);
/*
equation index: 801
indexNonlinear: 3
type: NONLINEAR

vars: {reactor.v_vap[19]}
eqns: {787, 788, 789, 790, 791, 792, 793}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 801 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,801};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 801 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5543(DATA *data, threadData_t *threadData);


/*
equation index: 803
type: SIMPLE_ASSIGN
reactor.particle[18].particle_Radu2017_085.T_b = reactor.particle[18].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[1584] /* reactor.particle[18].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1604] /* reactor.particle[18].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
reactor.T_b[18] = reactor.particle[18].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */ = data->localData[0]->realVars[1584] /* reactor.particle[18].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
reactor.psat[18] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[18]) * (-273.15 + reactor.T_b[18]) / (-16.00999999999999 + reactor.T_b[18]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"-16.00999999999999 + reactor.T_b[18]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_806(DATA*, threadData_t*);
/*
equation index: 807
indexNonlinear: 4
type: NONLINEAR

vars: {reactor.pvap[18]}
eqns: {806}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 807 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,807};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 807 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
reactor.gama_i[18] = 0.120272355042726 * reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[18] / reactor.T_b[18]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->localData[0]->realVars[57] /* reactor.gama_i[18] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[346] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"reactor.T_b[18]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5426(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5427(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5457(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5519(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5520(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5521(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5522(DATA *data, threadData_t *threadData);


/*
equation index: 816
type: SIMPLE_ASSIGN
reactor.particle[18].particle_Radu2017_085.sorbent.Ds = reactor.particle[18].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[18].particle_Radu2017_085.sorbent.Ea / reactor.T_b[18])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  data->localData[0]->realVars[2104] /* reactor.particle[18].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[646] /* reactor.particle[18].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[666] /* reactor.particle[18].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,"reactor.T_b[18]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5447(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5448(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5449(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5450(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3690(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3689(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3688(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3687(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3686(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3685(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3684(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3683(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3682(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3896(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3897(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5453(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5451(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5452(DATA *data, threadData_t *threadData);


/*
equation index: 841
type: LINEAR

<var>reactor.T_c[18]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[898] /* reactor.T_c[18] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 841 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,841};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 841 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[898] /* reactor.T_c[18] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5444(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5445(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5446(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3505(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3506(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5547(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5548(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5517(DATA *data, threadData_t *threadData);


/*
equation index: 884
type: LINEAR

<var>$DER.reactor.T_b[19]</var>
<var>$DER.reactor.pvap[19]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */,data->localData[1]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 884 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,884};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 884 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[98] /* der(reactor.T_b[19]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[298] /* der(reactor.pvap[19]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
$DER.reactor.particle[19].particle_Radu2017_085.M_l = reactor.M_a[19] * $DER.reactor.w[19] + $DER.reactor.M_a[19] * reactor.w[19]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  data->localData[0]->realVars[238] /* der(reactor.particle[19].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */) * (data->localData[0]->realVars[318] /* der(reactor.w[19]) DUMMY_DER */) + (data->localData[0]->realVars[178] /* der(reactor.M_a[19]) DUMMY_DER */) * (data->localData[0]->realVars[2652] /* reactor.w[19] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5588(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5592(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5594(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5593(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5589(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5586(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5595(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5587(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5591(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5518(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3122(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3124(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3125(DATA *data, threadData_t *threadData);


/*
equation index: 899
type: SIMPLE_ASSIGN
reactor.R_inter[18] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[18] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[850] /* reactor.R_inter[18] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[679] /* reactor.D_gas[18] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[18] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_900(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_901(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_902(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_903(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_904(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_905(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_906(DATA*, threadData_t*);
/*
equation index: 914
indexNonlinear: 5
type: NONLINEAR

vars: {reactor.v_vap[18]}
eqns: {900, 901, 902, 903, 904, 905, 906}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 914 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,914};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 914 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5454(DATA *data, threadData_t *threadData);


/*
equation index: 916
type: SIMPLE_ASSIGN
reactor.particle[17].particle_Radu2017_085.T_b = reactor.particle[17].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[1583] /* reactor.particle[17].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1603] /* reactor.particle[17].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
reactor.T_b[17] = reactor.particle[17].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */ = data->localData[0]->realVars[1583] /* reactor.particle[17].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
reactor.psat[17] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[17]) * (-273.15 + reactor.T_b[17]) / (-16.00999999999999 + reactor.T_b[17]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"-16.00999999999999 + reactor.T_b[17]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_919(DATA*, threadData_t*);
/*
equation index: 920
indexNonlinear: 6
type: NONLINEAR

vars: {reactor.pvap[17]}
eqns: {919}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 920 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,920};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 920 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
reactor.gama_i[17] = 0.120272355042726 * reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[17] / reactor.T_b[17]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[56] /* reactor.gama_i[17] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[345] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"reactor.T_b[17]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5337(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5338(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5368(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5430(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5431(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5432(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5433(DATA *data, threadData_t *threadData);


/*
equation index: 929
type: SIMPLE_ASSIGN
reactor.particle[17].particle_Radu2017_085.sorbent.Ds = reactor.particle[17].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[17].particle_Radu2017_085.sorbent.Ea / reactor.T_b[17])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[2103] /* reactor.particle[17].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[645] /* reactor.particle[17].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[665] /* reactor.particle[17].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,"reactor.T_b[17]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5358(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5359(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5360(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5361(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3699(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3698(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3697(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3696(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3695(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3694(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3693(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3692(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3691(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3893(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3894(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5364(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5362(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5363(DATA *data, threadData_t *threadData);


/*
equation index: 954
type: LINEAR

<var>reactor.T_c[17]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[897] /* reactor.T_c[17] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 954 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,954};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 954 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[897] /* reactor.T_c[17] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5355(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5356(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5357(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3507(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3508(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5458(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5459(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5428(DATA *data, threadData_t *threadData);


/*
equation index: 997
type: LINEAR

<var>$DER.reactor.T_b[18]</var>
<var>$DER.reactor.pvap[18]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */,data->localData[1]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 997 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 6, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,997};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 997 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[97] /* der(reactor.T_b[18]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[297] /* der(reactor.pvap[18]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
$DER.reactor.particle[18].particle_Radu2017_085.M_l = reactor.M_a[18] * $DER.reactor.w[18] + $DER.reactor.M_a[18] * reactor.w[18]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->localData[0]->realVars[237] /* der(reactor.particle[18].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */) * (data->localData[0]->realVars[317] /* der(reactor.w[18]) DUMMY_DER */) + (data->localData[0]->realVars[177] /* der(reactor.M_a[18]) DUMMY_DER */) * (data->localData[0]->realVars[2651] /* reactor.w[18] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5500(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5505(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5499(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5502(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5501(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5497(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5506(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5498(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5504(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5429(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3143(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3145(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3146(DATA *data, threadData_t *threadData);


/*
equation index: 1012
type: SIMPLE_ASSIGN
reactor.R_inter[17] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[17] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[849] /* reactor.R_inter[17] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[678] /* reactor.D_gas[17] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[17] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1013(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1014(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1015(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1016(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1017(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1018(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1019(DATA*, threadData_t*);
/*
equation index: 1027
indexNonlinear: 7
type: NONLINEAR

vars: {reactor.v_vap[17]}
eqns: {1013, 1014, 1015, 1016, 1017, 1018, 1019}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1027 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1027};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1027 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5365(DATA *data, threadData_t *threadData);


/*
equation index: 1029
type: SIMPLE_ASSIGN
reactor.particle[16].particle_Radu2017_085.T_b = reactor.particle[16].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  data->localData[0]->realVars[1582] /* reactor.particle[16].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1602] /* reactor.particle[16].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
reactor.T_b[16] = reactor.particle[16].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */ = data->localData[0]->realVars[1582] /* reactor.particle[16].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
reactor.psat[16] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[16]) * (-273.15 + reactor.T_b[16]) / (-16.00999999999999 + reactor.T_b[16]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"-16.00999999999999 + reactor.T_b[16]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1032(DATA*, threadData_t*);
/*
equation index: 1033
indexNonlinear: 8
type: NONLINEAR

vars: {reactor.pvap[16]}
eqns: {1032}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1033 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1033};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1033 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  TRACE_POP
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
reactor.gama_i[16] = 0.120272355042726 * reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[16] / reactor.T_b[16]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  data->localData[0]->realVars[55] /* reactor.gama_i[16] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[344] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"reactor.T_b[16]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5248(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5249(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5279(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5341(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5342(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5343(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5344(DATA *data, threadData_t *threadData);


/*
equation index: 1042
type: SIMPLE_ASSIGN
reactor.particle[16].particle_Radu2017_085.sorbent.Ds = reactor.particle[16].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[16].particle_Radu2017_085.sorbent.Ea / reactor.T_b[16])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  data->localData[0]->realVars[2102] /* reactor.particle[16].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[644] /* reactor.particle[16].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[664] /* reactor.particle[16].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,"reactor.T_b[16]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5269(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5270(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5271(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5272(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3708(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3707(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3706(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3705(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3704(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3703(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3702(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3701(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3700(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3890(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3891(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5275(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5273(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5274(DATA *data, threadData_t *threadData);


/*
equation index: 1067
type: LINEAR

<var>reactor.T_c[16]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[896] /* reactor.T_c[16] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1067 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 7, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1067};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1067 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[896] /* reactor.T_c[16] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5266(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5267(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5268(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3509(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3510(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5369(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5370(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5339(DATA *data, threadData_t *threadData);


/*
equation index: 1110
type: LINEAR

<var>$DER.reactor.T_b[17]</var>
<var>$DER.reactor.pvap[17]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */,data->localData[1]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1110 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 8, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1110};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1110 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[96] /* der(reactor.T_b[17]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[296] /* der(reactor.pvap[17]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
$DER.reactor.particle[17].particle_Radu2017_085.M_l = reactor.M_a[17] * $DER.reactor.w[17] + $DER.reactor.M_a[17] * reactor.w[17]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  data->localData[0]->realVars[236] /* der(reactor.particle[17].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */) * (data->localData[0]->realVars[316] /* der(reactor.w[17]) DUMMY_DER */) + (data->localData[0]->realVars[176] /* der(reactor.M_a[17]) DUMMY_DER */) * (data->localData[0]->realVars[2650] /* reactor.w[17] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5416(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5410(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5414(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5411(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5415(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5409(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5413(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5417(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5408(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5340(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3164(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3166(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3167(DATA *data, threadData_t *threadData);


/*
equation index: 1125
type: SIMPLE_ASSIGN
reactor.R_inter[16] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[16] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[848] /* reactor.R_inter[16] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[677] /* reactor.D_gas[16] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[16] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1126(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1127(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1128(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1129(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1130(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1131(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1132(DATA*, threadData_t*);
/*
equation index: 1140
indexNonlinear: 9
type: NONLINEAR

vars: {reactor.v_vap[16]}
eqns: {1126, 1127, 1128, 1129, 1130, 1131, 1132}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1140 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1140};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1140 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5276(DATA *data, threadData_t *threadData);


/*
equation index: 1142
type: SIMPLE_ASSIGN
reactor.particle[15].particle_Radu2017_085.T_b = reactor.particle[15].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  data->localData[0]->realVars[1581] /* reactor.particle[15].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1601] /* reactor.particle[15].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
reactor.T_b[15] = reactor.particle[15].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */ = data->localData[0]->realVars[1581] /* reactor.particle[15].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
reactor.psat[15] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[15]) * (-273.15 + reactor.T_b[15]) / (-16.00999999999999 + reactor.T_b[15]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"-16.00999999999999 + reactor.T_b[15]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1145(DATA*, threadData_t*);
/*
equation index: 1146
indexNonlinear: 10
type: NONLINEAR

vars: {reactor.pvap[15]}
eqns: {1145}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1146 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1146};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1146 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
reactor.gama_i[15] = 0.120272355042726 * reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[15] / reactor.T_b[15]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  data->localData[0]->realVars[54] /* reactor.gama_i[15] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[343] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"reactor.T_b[15]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5159(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5160(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5190(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5252(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5253(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5254(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5255(DATA *data, threadData_t *threadData);


/*
equation index: 1155
type: SIMPLE_ASSIGN
reactor.particle[15].particle_Radu2017_085.sorbent.Ds = reactor.particle[15].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[15].particle_Radu2017_085.sorbent.Ea / reactor.T_b[15])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  data->localData[0]->realVars[2101] /* reactor.particle[15].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[643] /* reactor.particle[15].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[663] /* reactor.particle[15].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,"reactor.T_b[15]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5180(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5181(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5182(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5183(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3717(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3716(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3715(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3714(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3713(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3712(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3711(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3710(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3709(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3887(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3888(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5186(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5184(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5185(DATA *data, threadData_t *threadData);


/*
equation index: 1180
type: LINEAR

<var>reactor.T_c[15]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[895] /* reactor.T_c[15] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1180 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 9, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1180};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1180 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[895] /* reactor.T_c[15] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5177(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5178(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5179(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3511(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3512(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5280(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5281(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5250(DATA *data, threadData_t *threadData);


/*
equation index: 1223
type: LINEAR

<var>$DER.reactor.T_b[16]</var>
<var>$DER.reactor.pvap[16]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */,data->localData[1]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1223 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 10, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1223};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1223 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[95] /* der(reactor.T_b[16]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[295] /* der(reactor.pvap[16]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5319(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5320(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5328(DATA *data, threadData_t *threadData);


/*
equation index: 1227
type: SIMPLE_ASSIGN
$DER.reactor.particle[16].particle_Radu2017_085.M_l = reactor.M_a[16] * $DER.reactor.w[16] + $DER.reactor.M_a[16] * reactor.w[16]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  data->localData[0]->realVars[235] /* der(reactor.particle[16].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */) * (data->localData[0]->realVars[315] /* der(reactor.w[16]) DUMMY_DER */) + (data->localData[0]->realVars[175] /* der(reactor.M_a[16]) DUMMY_DER */) * (data->localData[0]->realVars[2649] /* reactor.w[16] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5324(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5322(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5325(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5321(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5326(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5327(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5251(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3185(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3187(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3188(DATA *data, threadData_t *threadData);


/*
equation index: 1238
type: SIMPLE_ASSIGN
reactor.R_inter[15] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[15] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[847] /* reactor.R_inter[15] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[676] /* reactor.D_gas[15] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[15] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1239(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1240(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1241(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1242(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1243(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1244(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1245(DATA*, threadData_t*);
/*
equation index: 1253
indexNonlinear: 11
type: NONLINEAR

vars: {reactor.v_vap[15]}
eqns: {1239, 1240, 1241, 1242, 1243, 1244, 1245}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1253 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1253};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1253 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5187(DATA *data, threadData_t *threadData);


/*
equation index: 1255
type: SIMPLE_ASSIGN
reactor.particle[14].particle_Radu2017_085.T_b = reactor.particle[14].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  data->localData[0]->realVars[1580] /* reactor.particle[14].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1600] /* reactor.particle[14].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
reactor.T_b[14] = reactor.particle[14].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */ = data->localData[0]->realVars[1580] /* reactor.particle[14].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
reactor.psat[14] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[14]) * (-273.15 + reactor.T_b[14]) / (-16.00999999999999 + reactor.T_b[14]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"-16.00999999999999 + reactor.T_b[14]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1258(DATA*, threadData_t*);
/*
equation index: 1259
indexNonlinear: 12
type: NONLINEAR

vars: {reactor.pvap[14]}
eqns: {1258}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1259 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1259};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1259 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
reactor.gama_i[14] = 0.120272355042726 * reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[14] / reactor.T_b[14]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  data->localData[0]->realVars[53] /* reactor.gama_i[14] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[342] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"reactor.T_b[14]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5070(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5071(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5101(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5163(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5164(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5165(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5166(DATA *data, threadData_t *threadData);


/*
equation index: 1268
type: SIMPLE_ASSIGN
reactor.particle[14].particle_Radu2017_085.sorbent.Ds = reactor.particle[14].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[14].particle_Radu2017_085.sorbent.Ea / reactor.T_b[14])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  data->localData[0]->realVars[2100] /* reactor.particle[14].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[642] /* reactor.particle[14].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[662] /* reactor.particle[14].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,"reactor.T_b[14]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5091(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5092(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5093(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5094(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3726(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3725(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3724(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3723(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3722(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3721(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3720(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3719(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3718(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3884(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3885(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5097(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5095(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5096(DATA *data, threadData_t *threadData);


/*
equation index: 1293
type: LINEAR

<var>reactor.T_c[14]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[894] /* reactor.T_c[14] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1293 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 11, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1293};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1293 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[894] /* reactor.T_c[14] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5088(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5089(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5090(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3513(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3514(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5191(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5192(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5161(DATA *data, threadData_t *threadData);


/*
equation index: 1336
type: LINEAR

<var>$DER.reactor.T_b[15]</var>
<var>$DER.reactor.pvap[15]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */,data->localData[1]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1336 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 12, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1336};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1336 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[94] /* der(reactor.T_b[15]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[294] /* der(reactor.pvap[15]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
$DER.reactor.particle[15].particle_Radu2017_085.M_l = reactor.M_a[15] * $DER.reactor.w[15] + $DER.reactor.M_a[15] * reactor.w[15]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  data->localData[0]->realVars[234] /* der(reactor.particle[15].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */) * (data->localData[0]->realVars[314] /* der(reactor.w[15]) DUMMY_DER */) + (data->localData[0]->realVars[174] /* der(reactor.M_a[15]) DUMMY_DER */) * (data->localData[0]->realVars[2648] /* reactor.w[15] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5235(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5231(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5237(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5230(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5236(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5232(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5239(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5233(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5234(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5162(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3206(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3208(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3209(DATA *data, threadData_t *threadData);


/*
equation index: 1351
type: SIMPLE_ASSIGN
reactor.R_inter[14] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[14] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[846] /* reactor.R_inter[14] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[675] /* reactor.D_gas[14] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[14] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1352(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1353(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1354(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1355(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1356(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1357(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1358(DATA*, threadData_t*);
/*
equation index: 1366
indexNonlinear: 13
type: NONLINEAR

vars: {reactor.v_vap[14]}
eqns: {1352, 1353, 1354, 1355, 1356, 1357, 1358}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1366 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1366};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1366 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5098(DATA *data, threadData_t *threadData);


/*
equation index: 1368
type: SIMPLE_ASSIGN
reactor.particle[13].particle_Radu2017_085.T_b = reactor.particle[13].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  data->localData[0]->realVars[1579] /* reactor.particle[13].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1599] /* reactor.particle[13].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
reactor.T_b[13] = reactor.particle[13].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */ = data->localData[0]->realVars[1579] /* reactor.particle[13].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
reactor.psat[13] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[13]) * (-273.15 + reactor.T_b[13]) / (-16.00999999999999 + reactor.T_b[13]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"-16.00999999999999 + reactor.T_b[13]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1371(DATA*, threadData_t*);
/*
equation index: 1372
indexNonlinear: 14
type: NONLINEAR

vars: {reactor.pvap[13]}
eqns: {1371}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1372 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1372};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1372 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  TRACE_POP
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
reactor.gama_i[13] = 0.120272355042726 * reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[13] / reactor.T_b[13]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  data->localData[0]->realVars[52] /* reactor.gama_i[13] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[341] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"reactor.T_b[13]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4981(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4982(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5012(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5074(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5075(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5076(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5077(DATA *data, threadData_t *threadData);


/*
equation index: 1381
type: SIMPLE_ASSIGN
reactor.particle[13].particle_Radu2017_085.sorbent.Ds = reactor.particle[13].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[13].particle_Radu2017_085.sorbent.Ea / reactor.T_b[13])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  data->localData[0]->realVars[2099] /* reactor.particle[13].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[641] /* reactor.particle[13].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[661] /* reactor.particle[13].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,"reactor.T_b[13]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5002(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5003(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5004(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5005(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3735(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3734(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3733(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3732(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3731(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3728(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3727(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3881(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3882(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5008(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5006(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5007(DATA *data, threadData_t *threadData);


/*
equation index: 1406
type: LINEAR

<var>reactor.T_c[13]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[893] /* reactor.T_c[13] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1406 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 13, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1406};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1406 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[893] /* reactor.T_c[13] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4999(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5000(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5001(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3515(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3516(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5102(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5103(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5072(DATA *data, threadData_t *threadData);


/*
equation index: 1449
type: LINEAR

<var>$DER.reactor.pvap[14]</var>
<var>$DER.reactor.T_b[14]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */,data->localData[1]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1449 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 14, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1449};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1449 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[293] /* der(reactor.pvap[14]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[93] /* der(reactor.T_b[14]) STATE_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
$DER.reactor.particle[14].particle_Radu2017_085.M_l = reactor.M_a[14] * $DER.reactor.w[14] + $DER.reactor.M_a[14] * reactor.w[14]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  data->localData[0]->realVars[233] /* der(reactor.particle[14].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */) * (data->localData[0]->realVars[313] /* der(reactor.w[14]) DUMMY_DER */) + (data->localData[0]->realVars[173] /* der(reactor.M_a[14]) DUMMY_DER */) * (data->localData[0]->realVars[2647] /* reactor.w[14] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5141(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5142(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5145(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5143(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5150(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5144(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5147(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5148(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5146(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5073(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3227(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3229(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3230(DATA *data, threadData_t *threadData);


/*
equation index: 1464
type: SIMPLE_ASSIGN
reactor.R_inter[13] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[13] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[845] /* reactor.R_inter[13] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[674] /* reactor.D_gas[13] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[13] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1465(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1466(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1467(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1468(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1469(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1470(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1471(DATA*, threadData_t*);
/*
equation index: 1479
indexNonlinear: 15
type: NONLINEAR

vars: {reactor.v_vap[13]}
eqns: {1465, 1466, 1467, 1468, 1469, 1470, 1471}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1479 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1479};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1479 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */ = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5009(DATA *data, threadData_t *threadData);


/*
equation index: 1481
type: SIMPLE_ASSIGN
reactor.particle[12].particle_Radu2017_085.T_b = reactor.particle[12].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  data->localData[0]->realVars[1578] /* reactor.particle[12].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1598] /* reactor.particle[12].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
reactor.T_b[12] = reactor.particle[12].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */ = data->localData[0]->realVars[1578] /* reactor.particle[12].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
reactor.psat[12] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[12]) * (-273.15 + reactor.T_b[12]) / (-16.00999999999999 + reactor.T_b[12]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"-16.00999999999999 + reactor.T_b[12]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1484(DATA*, threadData_t*);
/*
equation index: 1485
indexNonlinear: 16
type: NONLINEAR

vars: {reactor.pvap[12]}
eqns: {1484}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1485 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1485};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1485 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  TRACE_POP
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
reactor.gama_i[12] = 0.120272355042726 * reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[12] / reactor.T_b[12]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  data->localData[0]->realVars[51] /* reactor.gama_i[12] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[340] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"reactor.T_b[12]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4892(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4893(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4923(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4985(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4986(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4987(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4988(DATA *data, threadData_t *threadData);


/*
equation index: 1494
type: SIMPLE_ASSIGN
reactor.particle[12].particle_Radu2017_085.sorbent.Ds = reactor.particle[12].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[12].particle_Radu2017_085.sorbent.Ea / reactor.T_b[12])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  data->localData[0]->realVars[2098] /* reactor.particle[12].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[640] /* reactor.particle[12].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[660] /* reactor.particle[12].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,"reactor.T_b[12]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4913(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4914(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4915(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4916(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3744(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3743(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3742(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3741(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3740(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3738(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3737(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3736(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3878(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3879(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4919(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4917(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4918(DATA *data, threadData_t *threadData);


/*
equation index: 1519
type: LINEAR

<var>reactor.T_c[12]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[892] /* reactor.T_c[12] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1519 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 15, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1519};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1519 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[892] /* reactor.T_c[12] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4910(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4911(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4912(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3517(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3518(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5013(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5014(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4983(DATA *data, threadData_t *threadData);


/*
equation index: 1562
type: LINEAR

<var>$DER.reactor.T_b[13]</var>
<var>$DER.reactor.pvap[13]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */,data->localData[1]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1562 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 16, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1562};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1562 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[92] /* der(reactor.T_b[13]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[292] /* der(reactor.pvap[13]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
$DER.reactor.particle[13].particle_Radu2017_085.M_l = reactor.M_a[13] * $DER.reactor.w[13] + $DER.reactor.M_a[13] * reactor.w[13]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  data->localData[0]->realVars[232] /* der(reactor.particle[13].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */) * (data->localData[0]->realVars[312] /* der(reactor.w[13]) DUMMY_DER */) + (data->localData[0]->realVars[172] /* der(reactor.M_a[13]) DUMMY_DER */) * (data->localData[0]->realVars[2646] /* reactor.w[13] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_5060(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5055(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5054(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5058(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5059(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5053(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5057(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5061(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5052(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4984(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3248(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3250(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3251(DATA *data, threadData_t *threadData);


/*
equation index: 1577
type: SIMPLE_ASSIGN
reactor.R_inter[12] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[12] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[844] /* reactor.R_inter[12] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[673] /* reactor.D_gas[12] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[12] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1578(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1579(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1580(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1581(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1582(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1583(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1584(DATA*, threadData_t*);
/*
equation index: 1592
indexNonlinear: 17
type: NONLINEAR

vars: {reactor.v_vap[12]}
eqns: {1578, 1579, 1580, 1581, 1582, 1583, 1584}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1592 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1592};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1592 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */ = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4920(DATA *data, threadData_t *threadData);


/*
equation index: 1594
type: SIMPLE_ASSIGN
reactor.particle[11].particle_Radu2017_085.T_b = reactor.particle[11].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  data->localData[0]->realVars[1577] /* reactor.particle[11].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1597] /* reactor.particle[11].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
reactor.T_b[11] = reactor.particle[11].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */ = data->localData[0]->realVars[1577] /* reactor.particle[11].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
reactor.psat[11] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[11]) * (-273.15 + reactor.T_b[11]) / (-16.00999999999999 + reactor.T_b[11]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"-16.00999999999999 + reactor.T_b[11]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1597(DATA*, threadData_t*);
/*
equation index: 1598
indexNonlinear: 18
type: NONLINEAR

vars: {reactor.pvap[11]}
eqns: {1597}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1598 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1598};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1598 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  TRACE_POP
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
reactor.gama_i[11] = 0.120272355042726 * reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[11] / reactor.T_b[11]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  data->localData[0]->realVars[50] /* reactor.gama_i[11] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[339] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"reactor.T_b[11]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4803(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4804(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4834(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4896(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4897(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4898(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4899(DATA *data, threadData_t *threadData);


/*
equation index: 1607
type: SIMPLE_ASSIGN
reactor.particle[11].particle_Radu2017_085.sorbent.Ds = reactor.particle[11].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[11].particle_Radu2017_085.sorbent.Ea / reactor.T_b[11])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  data->localData[0]->realVars[2097] /* reactor.particle[11].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[639] /* reactor.particle[11].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[659] /* reactor.particle[11].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,"reactor.T_b[11]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4824(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4825(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4826(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4827(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3753(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3752(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3751(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3748(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3747(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3746(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3745(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3875(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3876(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4830(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4828(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4829(DATA *data, threadData_t *threadData);


/*
equation index: 1632
type: LINEAR

<var>reactor.T_c[11]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[891] /* reactor.T_c[11] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1632 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 17, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1632};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1632 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[891] /* reactor.T_c[11] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4821(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4822(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4823(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3519(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3520(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4924(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4925(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4894(DATA *data, threadData_t *threadData);


/*
equation index: 1675
type: LINEAR

<var>$DER.reactor.T_b[12]</var>
<var>$DER.reactor.pvap[12]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */,data->localData[1]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1675 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 18, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1675};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1675 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[91] /* der(reactor.T_b[12]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[291] /* der(reactor.pvap[12]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
$DER.reactor.particle[12].particle_Radu2017_085.M_l = reactor.M_a[12] * $DER.reactor.w[12] + $DER.reactor.M_a[12] * reactor.w[12]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  data->localData[0]->realVars[231] /* der(reactor.particle[12].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */) * (data->localData[0]->realVars[311] /* der(reactor.w[12]) DUMMY_DER */) + (data->localData[0]->realVars[171] /* der(reactor.M_a[12]) DUMMY_DER */) * (data->localData[0]->realVars[2645] /* reactor.w[12] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4971(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4965(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4969(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4966(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4970(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4963(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4964(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4968(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4972(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4895(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3269(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3271(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3272(DATA *data, threadData_t *threadData);


/*
equation index: 1690
type: SIMPLE_ASSIGN
reactor.R_inter[11] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[11] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[843] /* reactor.R_inter[11] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[672] /* reactor.D_gas[11] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[11] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1691(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1692(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1693(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1694(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1695(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1696(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1697(DATA*, threadData_t*);
/*
equation index: 1705
indexNonlinear: 19
type: NONLINEAR

vars: {reactor.v_vap[11]}
eqns: {1691, 1692, 1693, 1694, 1695, 1696, 1697}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1705 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[19].nlsxOld[0] = data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
  retValue = solve_nonlinear_system(data, threadData, 19);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1705};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1705 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */ = data->simulationInfo->nonlinearSystemData[19].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4831(DATA *data, threadData_t *threadData);


/*
equation index: 1707
type: SIMPLE_ASSIGN
reactor.particle[10].particle_Radu2017_085.T_b = reactor.particle[10].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  data->localData[0]->realVars[1576] /* reactor.particle[10].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1596] /* reactor.particle[10].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
reactor.T_b[10] = reactor.particle[10].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */ = data->localData[0]->realVars[1576] /* reactor.particle[10].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
reactor.psat[10] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[10]) * (-273.15 + reactor.T_b[10]) / (-16.00999999999999 + reactor.T_b[10]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"-16.00999999999999 + reactor.T_b[10]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1710(DATA*, threadData_t*);
/*
equation index: 1711
indexNonlinear: 20
type: NONLINEAR

vars: {reactor.pvap[10]}
eqns: {1710}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1711 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[20].nlsxOld[0] = data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 20);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1711};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1711 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[20].nlsx[0];
  TRACE_POP
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
reactor.gama_i[10] = 0.120272355042726 * reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[10] / reactor.T_b[10]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  data->localData[0]->realVars[49] /* reactor.gama_i[10] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[338] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"reactor.T_b[10]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4714(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4715(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4745(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4807(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4808(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4809(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4810(DATA *data, threadData_t *threadData);


/*
equation index: 1720
type: SIMPLE_ASSIGN
reactor.particle[10].particle_Radu2017_085.sorbent.Ds = reactor.particle[10].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[10].particle_Radu2017_085.sorbent.Ea / reactor.T_b[10])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  data->localData[0]->realVars[2096] /* reactor.particle[10].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[638] /* reactor.particle[10].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[658] /* reactor.particle[10].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,"reactor.T_b[10]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4735(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4736(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4737(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4738(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3762(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3761(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3758(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3757(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3756(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3755(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3754(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3872(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3873(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4741(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4739(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4740(DATA *data, threadData_t *threadData);


/*
equation index: 1745
type: LINEAR

<var>reactor.T_c[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[890] /* reactor.T_c[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1745 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 19, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1745};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1745 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[890] /* reactor.T_c[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4732(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4733(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4734(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3521(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3522(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4835(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4836(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4805(DATA *data, threadData_t *threadData);


/*
equation index: 1788
type: LINEAR

<var>$DER.reactor.T_b[11]</var>
<var>$DER.reactor.pvap[11]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */,data->localData[1]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1788 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 20, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1788};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1788 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[90] /* der(reactor.T_b[11]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[290] /* der(reactor.pvap[11]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
$DER.reactor.particle[11].particle_Radu2017_085.M_l = reactor.M_a[11] * $DER.reactor.w[11] + $DER.reactor.M_a[11] * reactor.w[11]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  data->localData[0]->realVars[230] /* der(reactor.particle[11].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */) * (data->localData[0]->realVars[310] /* der(reactor.w[11]) DUMMY_DER */) + (data->localData[0]->realVars[170] /* der(reactor.M_a[11]) DUMMY_DER */) * (data->localData[0]->realVars[2644] /* reactor.w[11] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4875(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4874(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4879(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4880(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4881(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4878(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4876(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4883(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4877(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4806(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3290(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3292(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3293(DATA *data, threadData_t *threadData);


/*
equation index: 1803
type: SIMPLE_ASSIGN
reactor.R_inter[10] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[10] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[842] /* reactor.R_inter[10] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[671] /* reactor.D_gas[10] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[10] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1804(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1805(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1806(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1807(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1808(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1809(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1810(DATA*, threadData_t*);
/*
equation index: 1818
indexNonlinear: 21
type: NONLINEAR

vars: {reactor.v_vap[10]}
eqns: {1804, 1805, 1806, 1807, 1808, 1809, 1810}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1818 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[21].nlsxOld[0] = data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
  retValue = solve_nonlinear_system(data, threadData, 21);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1818};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1818 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */ = data->simulationInfo->nonlinearSystemData[21].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4742(DATA *data, threadData_t *threadData);


/*
equation index: 1820
type: SIMPLE_ASSIGN
reactor.particle[9].particle_Radu2017_085.T_b = reactor.particle[9].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  data->localData[0]->realVars[1575] /* reactor.particle[9].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1595] /* reactor.particle[9].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
reactor.T_b[9] = reactor.particle[9].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */ = data->localData[0]->realVars[1575] /* reactor.particle[9].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
reactor.psat[9] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[9]) * (-273.15 + reactor.T_b[9]) / (-16.00999999999999 + reactor.T_b[9]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"-16.00999999999999 + reactor.T_b[9]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1823(DATA*, threadData_t*);
/*
equation index: 1824
indexNonlinear: 22
type: NONLINEAR

vars: {reactor.pvap[9]}
eqns: {1823}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1824 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[22].nlsxOld[0] = data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 22);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1824};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1824 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[22].nlsx[0];
  TRACE_POP
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
reactor.gama_i[9] = 0.120272355042726 * reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[9] / reactor.T_b[9]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  data->localData[0]->realVars[48] /* reactor.gama_i[9] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[337] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"reactor.T_b[9]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4625(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4626(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4656(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4718(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4719(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4720(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4721(DATA *data, threadData_t *threadData);


/*
equation index: 1833
type: SIMPLE_ASSIGN
reactor.particle[9].particle_Radu2017_085.sorbent.Ds = reactor.particle[9].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[9].particle_Radu2017_085.sorbent.Ea / reactor.T_b[9])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  data->localData[0]->realVars[2095] /* reactor.particle[9].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[637] /* reactor.particle[9].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[657] /* reactor.particle[9].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,"reactor.T_b[9]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4646(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4647(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4648(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4649(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3771(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3769(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3768(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3767(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3766(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3765(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3764(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3763(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3869(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3870(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4652(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4650(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4651(DATA *data, threadData_t *threadData);


/*
equation index: 1858
type: LINEAR

<var>reactor.T_c[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1858};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[889] /* reactor.T_c[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1858 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 21, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1858};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1858 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[889] /* reactor.T_c[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4643(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4644(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4645(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3523(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3524(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4746(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4747(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4716(DATA *data, threadData_t *threadData);


/*
equation index: 1901
type: LINEAR

<var>$DER.reactor.T_b[10]</var>
<var>$DER.reactor.pvap[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */,data->localData[1]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1901 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 22, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1901};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1901 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[89] /* der(reactor.T_b[10]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[289] /* der(reactor.pvap[10]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4785(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4786(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4794(DATA *data, threadData_t *threadData);


/*
equation index: 1905
type: SIMPLE_ASSIGN
$DER.reactor.particle[10].particle_Radu2017_085.M_l = reactor.M_a[10] * $DER.reactor.w[10] + $DER.reactor.M_a[10] * reactor.w[10]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1905};
  data->localData[0]->realVars[229] /* der(reactor.particle[10].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */) * (data->localData[0]->realVars[309] /* der(reactor.w[10]) DUMMY_DER */) + (data->localData[0]->realVars[169] /* der(reactor.M_a[10]) DUMMY_DER */) * (data->localData[0]->realVars[2643] /* reactor.w[10] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4792(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4788(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4787(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4790(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4789(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4793(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4717(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3311(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3313(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3314(DATA *data, threadData_t *threadData);


/*
equation index: 1916
type: SIMPLE_ASSIGN
reactor.R_inter[9] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[9] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1916};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[841] /* reactor.R_inter[9] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[670] /* reactor.D_gas[9] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[9] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1917(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1918(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1919(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1920(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1921(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1922(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_1923(DATA*, threadData_t*);
/*
equation index: 1931
indexNonlinear: 23
type: NONLINEAR

vars: {reactor.v_vap[9]}
eqns: {1917, 1918, 1919, 1920, 1921, 1922, 1923}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1931 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[23].nlsxOld[0] = data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
  retValue = solve_nonlinear_system(data, threadData, 23);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1931};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1931 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */ = data->simulationInfo->nonlinearSystemData[23].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4653(DATA *data, threadData_t *threadData);


/*
equation index: 1933
type: SIMPLE_ASSIGN
reactor.particle[8].particle_Radu2017_085.T_b = reactor.particle[8].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  data->localData[0]->realVars[1574] /* reactor.particle[8].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1594] /* reactor.particle[8].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
reactor.T_b[8] = reactor.particle[8].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */ = data->localData[0]->realVars[1574] /* reactor.particle[8].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 1935
type: SIMPLE_ASSIGN
reactor.psat[8] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[8]) * (-273.15 + reactor.T_b[8]) / (-16.00999999999999 + reactor.T_b[8]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1935};
  data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"-16.00999999999999 + reactor.T_b[8]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_1936(DATA*, threadData_t*);
/*
equation index: 1937
indexNonlinear: 24
type: NONLINEAR

vars: {reactor.pvap[8]}
eqns: {1936}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1937};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1937 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[24].nlsxOld[0] = data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 24);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1937};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1937 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[24].nlsx[0];
  TRACE_POP
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
reactor.gama_i[8] = 0.120272355042726 * reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[8] / reactor.T_b[8]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  data->localData[0]->realVars[47] /* reactor.gama_i[8] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[336] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"reactor.T_b[8]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4536(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4537(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4567(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4629(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4630(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4631(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4632(DATA *data, threadData_t *threadData);


/*
equation index: 1946
type: SIMPLE_ASSIGN
reactor.particle[8].particle_Radu2017_085.sorbent.Ds = reactor.particle[8].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[8].particle_Radu2017_085.sorbent.Ea / reactor.T_b[8])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  data->localData[0]->realVars[2094] /* reactor.particle[8].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[636] /* reactor.particle[8].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[656] /* reactor.particle[8].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,"reactor.T_b[8]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4557(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4558(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4559(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4560(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3780(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3778(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3777(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3776(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3775(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3774(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3773(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3772(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3866(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3867(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4563(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4561(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4562(DATA *data, threadData_t *threadData);


/*
equation index: 1971
type: LINEAR

<var>reactor.T_c[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[888] /* reactor.T_c[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1971 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 23, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1971};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1971 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[888] /* reactor.T_c[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4554(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4555(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4556(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3525(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3526(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4657(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4658(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4627(DATA *data, threadData_t *threadData);


/*
equation index: 2014
type: LINEAR

<var>$DER.reactor.T_b[9]</var>
<var>$DER.reactor.pvap[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2014};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */,data->localData[1]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2014 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 24, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2014};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2014 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[88] /* der(reactor.T_b[9]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[288] /* der(reactor.pvap[9]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2015
type: SIMPLE_ASSIGN
$DER.reactor.particle[9].particle_Radu2017_085.M_l = reactor.M_a[9] * $DER.reactor.w[9] + $DER.reactor.M_a[9] * reactor.w[9]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2015};
  data->localData[0]->realVars[228] /* der(reactor.particle[9].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */) * (data->localData[0]->realVars[308] /* der(reactor.w[9]) DUMMY_DER */) + (data->localData[0]->realVars[168] /* der(reactor.M_a[9]) DUMMY_DER */) * (data->localData[0]->realVars[2642] /* reactor.w[9] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4697(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4696(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4701(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4702(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4703(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4700(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4699(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4698(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4705(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4628(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3332(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3334(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3335(DATA *data, threadData_t *threadData);


/*
equation index: 2029
type: SIMPLE_ASSIGN
reactor.R_inter[8] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[8] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2029};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[840] /* reactor.R_inter[8] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[669] /* reactor.D_gas[8] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[8] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2030(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2031(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2032(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2033(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2034(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2035(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2036(DATA*, threadData_t*);
/*
equation index: 2044
indexNonlinear: 25
type: NONLINEAR

vars: {reactor.v_vap[8]}
eqns: {2030, 2031, 2032, 2033, 2034, 2035, 2036}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2044};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2044 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[25].nlsxOld[0] = data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
  retValue = solve_nonlinear_system(data, threadData, 25);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2044};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2044 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */ = data->simulationInfo->nonlinearSystemData[25].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4564(DATA *data, threadData_t *threadData);


/*
equation index: 2046
type: SIMPLE_ASSIGN
reactor.particle[7].particle_Radu2017_085.T_b = reactor.particle[7].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  data->localData[0]->realVars[1573] /* reactor.particle[7].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1593] /* reactor.particle[7].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2047
type: SIMPLE_ASSIGN
reactor.T_b[7] = reactor.particle[7].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2047};
  data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */ = data->localData[0]->realVars[1573] /* reactor.particle[7].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
reactor.psat[7] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[7]) * (-273.15 + reactor.T_b[7]) / (-16.00999999999999 + reactor.T_b[7]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"-16.00999999999999 + reactor.T_b[7]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2049(DATA*, threadData_t*);
/*
equation index: 2050
indexNonlinear: 26
type: NONLINEAR

vars: {reactor.pvap[7]}
eqns: {2049}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2050};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2050 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[26].nlsxOld[0] = data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 26);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2050};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2050 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[26].nlsx[0];
  TRACE_POP
}

/*
equation index: 2051
type: SIMPLE_ASSIGN
reactor.gama_i[7] = 0.120272355042726 * reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[7] / reactor.T_b[7]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2051};
  data->localData[0]->realVars[46] /* reactor.gama_i[7] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[335] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"reactor.T_b[7]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4447(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4448(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4478(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4540(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4541(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4542(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4543(DATA *data, threadData_t *threadData);


/*
equation index: 2059
type: SIMPLE_ASSIGN
reactor.particle[7].particle_Radu2017_085.sorbent.Ds = reactor.particle[7].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[7].particle_Radu2017_085.sorbent.Ea / reactor.T_b[7])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2059};
  data->localData[0]->realVars[2093] /* reactor.particle[7].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[635] /* reactor.particle[7].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[655] /* reactor.particle[7].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,"reactor.T_b[7]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4468(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4469(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4470(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4471(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3788(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3787(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3786(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3785(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3784(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3783(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3782(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3781(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3863(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3864(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4474(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4472(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4473(DATA *data, threadData_t *threadData);


/*
equation index: 2084
type: LINEAR

<var>reactor.T_c[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2084};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[887] /* reactor.T_c[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2084 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 25, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2084};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2084 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[887] /* reactor.T_c[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4465(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4466(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4467(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3527(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3528(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4568(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4569(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4538(DATA *data, threadData_t *threadData);


/*
equation index: 2127
type: LINEAR

<var>$DER.reactor.T_b[8]</var>
<var>$DER.reactor.pvap[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */,data->localData[1]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2127 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 26, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2127};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2127 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[87] /* der(reactor.T_b[8]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[287] /* der(reactor.pvap[8]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2128
type: SIMPLE_ASSIGN
$DER.reactor.particle[8].particle_Radu2017_085.M_l = reactor.M_a[8] * $DER.reactor.w[8] + $DER.reactor.M_a[8] * reactor.w[8]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2128};
  data->localData[0]->realVars[227] /* der(reactor.particle[8].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */) * (data->localData[0]->realVars[307] /* der(reactor.w[8]) DUMMY_DER */) + (data->localData[0]->realVars[167] /* der(reactor.M_a[8]) DUMMY_DER */) * (data->localData[0]->realVars[2641] /* reactor.w[8] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4615(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4609(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4610(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4613(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4614(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4607(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4608(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4612(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4616(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4539(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3353(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3355(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3356(DATA *data, threadData_t *threadData);


/*
equation index: 2142
type: SIMPLE_ASSIGN
reactor.R_inter[7] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[7] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[839] /* reactor.R_inter[7] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[668] /* reactor.D_gas[7] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[7] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2143(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2144(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2145(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2146(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2147(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2148(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2149(DATA*, threadData_t*);
/*
equation index: 2157
indexNonlinear: 27
type: NONLINEAR

vars: {reactor.v_vap[7]}
eqns: {2143, 2144, 2145, 2146, 2147, 2148, 2149}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2157 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[27].nlsxOld[0] = data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
  retValue = solve_nonlinear_system(data, threadData, 27);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2157};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2157 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */ = data->simulationInfo->nonlinearSystemData[27].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4475(DATA *data, threadData_t *threadData);


/*
equation index: 2159
type: SIMPLE_ASSIGN
reactor.particle[6].particle_Radu2017_085.T_b = reactor.particle[6].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  data->localData[0]->realVars[1572] /* reactor.particle[6].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1592] /* reactor.particle[6].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
reactor.T_b[6] = reactor.particle[6].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */ = data->localData[0]->realVars[1572] /* reactor.particle[6].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
reactor.psat[6] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[6]) * (-273.15 + reactor.T_b[6]) / (-16.00999999999999 + reactor.T_b[6]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"-16.00999999999999 + reactor.T_b[6]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2162(DATA*, threadData_t*);
/*
equation index: 2163
indexNonlinear: 28
type: NONLINEAR

vars: {reactor.pvap[6]}
eqns: {2162}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2163 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[28].nlsxOld[0] = data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 28);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2163};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2163 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[28].nlsx[0];
  TRACE_POP
}

/*
equation index: 2164
type: SIMPLE_ASSIGN
reactor.gama_i[6] = 0.120272355042726 * reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[6] / reactor.T_b[6]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  data->localData[0]->realVars[45] /* reactor.gama_i[6] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[334] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"reactor.T_b[6]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4358(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4359(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4389(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4451(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4452(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4453(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4454(DATA *data, threadData_t *threadData);


/*
equation index: 2172
type: SIMPLE_ASSIGN
reactor.particle[6].particle_Radu2017_085.sorbent.Ds = reactor.particle[6].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[6].particle_Radu2017_085.sorbent.Ea / reactor.T_b[6])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  data->localData[0]->realVars[2092] /* reactor.particle[6].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[634] /* reactor.particle[6].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[654] /* reactor.particle[6].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,"reactor.T_b[6]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4379(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4380(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4381(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4382(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3798(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3797(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3796(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3795(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3794(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3793(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3792(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3791(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3790(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3860(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3861(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4385(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4383(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4384(DATA *data, threadData_t *threadData);


/*
equation index: 2197
type: LINEAR

<var>reactor.T_c[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[886] /* reactor.T_c[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2197 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 27, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2197};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2197 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[886] /* reactor.T_c[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4376(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4377(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4378(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3529(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3530(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4479(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4480(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4449(DATA *data, threadData_t *threadData);


/*
equation index: 2240
type: LINEAR

<var>$DER.reactor.T_b[7]</var>
<var>$DER.reactor.pvap[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */,data->localData[1]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2240 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 28, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2240};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2240 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[86] /* der(reactor.T_b[7]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[286] /* der(reactor.pvap[7]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2241
type: SIMPLE_ASSIGN
$DER.reactor.particle[7].particle_Radu2017_085.M_l = reactor.M_a[7] * $DER.reactor.w[7] + $DER.reactor.M_a[7] * reactor.w[7]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  data->localData[0]->realVars[226] /* der(reactor.particle[7].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */) * (data->localData[0]->realVars[306] /* der(reactor.w[7]) DUMMY_DER */) + (data->localData[0]->realVars[166] /* der(reactor.M_a[7]) DUMMY_DER */) * (data->localData[0]->realVars[2640] /* reactor.w[7] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4520(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4524(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4526(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4525(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4521(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4519(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4523(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4527(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4518(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4450(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3374(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3376(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3377(DATA *data, threadData_t *threadData);


/*
equation index: 2255
type: SIMPLE_ASSIGN
reactor.R_inter[6] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[6] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[838] /* reactor.R_inter[6] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[667] /* reactor.D_gas[6] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[6] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2256(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2257(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2258(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2259(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2260(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2261(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2262(DATA*, threadData_t*);
/*
equation index: 2270
indexNonlinear: 29
type: NONLINEAR

vars: {reactor.v_vap[6]}
eqns: {2256, 2257, 2258, 2259, 2260, 2261, 2262}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2270 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[29].nlsxOld[0] = data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
  retValue = solve_nonlinear_system(data, threadData, 29);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2270};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2270 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */ = data->simulationInfo->nonlinearSystemData[29].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4386(DATA *data, threadData_t *threadData);


/*
equation index: 2272
type: SIMPLE_ASSIGN
reactor.particle[5].particle_Radu2017_085.T_b = reactor.particle[5].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  data->localData[0]->realVars[1571] /* reactor.particle[5].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1591] /* reactor.particle[5].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2273
type: SIMPLE_ASSIGN
reactor.T_b[5] = reactor.particle[5].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */ = data->localData[0]->realVars[1571] /* reactor.particle[5].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2274
type: SIMPLE_ASSIGN
reactor.psat[5] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[5]) * (-273.15 + reactor.T_b[5]) / (-16.00999999999999 + reactor.T_b[5]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"-16.00999999999999 + reactor.T_b[5]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2275(DATA*, threadData_t*);
/*
equation index: 2276
indexNonlinear: 30
type: NONLINEAR

vars: {reactor.pvap[5]}
eqns: {2275}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2276 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[30].nlsxOld[0] = data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 30);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2276};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2276 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[30].nlsx[0];
  TRACE_POP
}

/*
equation index: 2277
type: SIMPLE_ASSIGN
reactor.gama_i[5] = 0.120272355042726 * reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[5] / reactor.T_b[5]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  data->localData[0]->realVars[44] /* reactor.gama_i[5] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[333] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"reactor.T_b[5]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4268(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4269(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4300(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4362(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4363(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4364(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4365(DATA *data, threadData_t *threadData);


/*
equation index: 2285
type: SIMPLE_ASSIGN
reactor.particle[5].particle_Radu2017_085.sorbent.Ds = reactor.particle[5].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[5].particle_Radu2017_085.sorbent.Ea / reactor.T_b[5])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  data->localData[0]->realVars[2091] /* reactor.particle[5].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[633] /* reactor.particle[5].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[653] /* reactor.particle[5].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,"reactor.T_b[5]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4290(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4291(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4292(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4293(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3807(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3806(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3805(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3804(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3803(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3802(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3801(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3800(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3857(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3858(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4296(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4294(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4295(DATA *data, threadData_t *threadData);


/*
equation index: 2310
type: LINEAR

<var>reactor.T_c[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[885] /* reactor.T_c[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2310 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 29, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2310};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2310 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[885] /* reactor.T_c[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4287(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4288(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4289(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3531(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3532(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4390(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4391(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4360(DATA *data, threadData_t *threadData);


/*
equation index: 2353
type: LINEAR

<var>$DER.reactor.pvap[6]</var>
<var>$DER.reactor.T_b[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2353};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */,data->localData[1]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2353 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 30, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2353};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2353 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[285] /* der(reactor.pvap[6]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[85] /* der(reactor.T_b[6]) STATE_DER */ = aux_x[1];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4429(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4430(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4438(DATA *data, threadData_t *threadData);


/*
equation index: 2357
type: SIMPLE_ASSIGN
$DER.reactor.particle[6].particle_Radu2017_085.M_l = reactor.M_a[6] * $DER.reactor.w[6] + $DER.reactor.M_a[6] * reactor.w[6]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2357};
  data->localData[0]->realVars[225] /* der(reactor.particle[6].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */) * (data->localData[0]->realVars[305] /* der(reactor.w[6]) DUMMY_DER */) + (data->localData[0]->realVars[165] /* der(reactor.M_a[6]) DUMMY_DER */) * (data->localData[0]->realVars[2639] /* reactor.w[6] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4434(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4432(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4435(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4431(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4436(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4437(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4361(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3395(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3397(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3398(DATA *data, threadData_t *threadData);


/*
equation index: 2368
type: SIMPLE_ASSIGN
reactor.R_inter[5] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[5] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2368};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[837] /* reactor.R_inter[5] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[666] /* reactor.D_gas[5] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[5] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2369(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2370(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2371(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2372(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2373(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2374(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2375(DATA*, threadData_t*);
/*
equation index: 2383
indexNonlinear: 31
type: NONLINEAR

vars: {reactor.v_vap[5]}
eqns: {2369, 2370, 2371, 2372, 2373, 2374, 2375}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2383};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2383 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[31].nlsxOld[0] = data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
  retValue = solve_nonlinear_system(data, threadData, 31);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2383};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2383 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */ = data->simulationInfo->nonlinearSystemData[31].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4297(DATA *data, threadData_t *threadData);


/*
equation index: 2385
type: SIMPLE_ASSIGN
reactor.particle[4].particle_Radu2017_085.T_b = reactor.particle[4].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2385};
  data->localData[0]->realVars[1570] /* reactor.particle[4].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1590] /* reactor.particle[4].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2386
type: SIMPLE_ASSIGN
reactor.T_b[4] = reactor.particle[4].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2386};
  data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */ = data->localData[0]->realVars[1570] /* reactor.particle[4].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2387
type: SIMPLE_ASSIGN
reactor.psat[4] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[4]) * (-273.15 + reactor.T_b[4]) / (-16.00999999999999 + reactor.T_b[4]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2387};
  data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"-16.00999999999999 + reactor.T_b[4]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2388(DATA*, threadData_t*);
/*
equation index: 2389
indexNonlinear: 32
type: NONLINEAR

vars: {reactor.pvap[4]}
eqns: {2388}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2389};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2389 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[0] = data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 32);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2389};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2389 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[32].nlsx[0];
  TRACE_POP
}

/*
equation index: 2390
type: SIMPLE_ASSIGN
reactor.gama_i[4] = 0.120272355042726 * reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[4] / reactor.T_b[4]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2390};
  data->localData[0]->realVars[43] /* reactor.gama_i[4] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[332] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"reactor.T_b[4]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4179(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4180(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4210(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4272(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4273(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4274(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4275(DATA *data, threadData_t *threadData);


/*
equation index: 2398
type: SIMPLE_ASSIGN
reactor.particle[4].particle_Radu2017_085.sorbent.Ds = reactor.particle[4].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[4].particle_Radu2017_085.sorbent.Ea / reactor.T_b[4])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2398};
  data->localData[0]->realVars[2090] /* reactor.particle[4].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[632] /* reactor.particle[4].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[652] /* reactor.particle[4].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,"reactor.T_b[4]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4200(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4201(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4202(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4203(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3816(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3815(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3814(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3813(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3812(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3811(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3808(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3854(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3855(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4206(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4204(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4205(DATA *data, threadData_t *threadData);


/*
equation index: 2423
type: LINEAR

<var>reactor.T_c[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2423};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[884] /* reactor.T_c[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2423 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 31, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2423};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2423 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[884] /* reactor.T_c[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4197(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4198(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4199(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3533(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3534(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4301(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4302(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4270(DATA *data, threadData_t *threadData);


/*
equation index: 2466
type: LINEAR

<var>$DER.reactor.T_b[5]</var>
<var>$DER.reactor.pvap[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2466};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */,data->localData[1]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2466 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 32, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2466};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2466 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[84] /* der(reactor.T_b[5]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[284] /* der(reactor.pvap[5]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2467
type: SIMPLE_ASSIGN
$DER.reactor.particle[5].particle_Radu2017_085.M_l = reactor.M_a[5] * $DER.reactor.w[5] + $DER.reactor.M_a[5] * reactor.w[5]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2467};
  data->localData[0]->realVars[224] /* der(reactor.particle[5].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */) * (data->localData[0]->realVars[304] /* der(reactor.w[5]) DUMMY_DER */) + (data->localData[0]->realVars[164] /* der(reactor.M_a[5]) DUMMY_DER */) * (data->localData[0]->realVars[2638] /* reactor.w[5] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4341(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4340(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4345(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4346(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4347(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4344(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4343(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4342(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4349(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4271(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3416(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3418(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3419(DATA *data, threadData_t *threadData);


/*
equation index: 2481
type: SIMPLE_ASSIGN
reactor.R_inter[4] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[4] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2481};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[836] /* reactor.R_inter[4] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[665] /* reactor.D_gas[4] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[4] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2482(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2483(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2484(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2485(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2486(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2487(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2488(DATA*, threadData_t*);
/*
equation index: 2496
indexNonlinear: 33
type: NONLINEAR

vars: {reactor.v_vap[4]}
eqns: {2482, 2483, 2484, 2485, 2486, 2487, 2488}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2496};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2496 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[33].nlsxOld[0] = data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
  retValue = solve_nonlinear_system(data, threadData, 33);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2496};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2496 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */ = data->simulationInfo->nonlinearSystemData[33].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4207(DATA *data, threadData_t *threadData);


/*
equation index: 2498
type: SIMPLE_ASSIGN
reactor.particle[3].particle_Radu2017_085.T_b = reactor.particle[3].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2498};
  data->localData[0]->realVars[1569] /* reactor.particle[3].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1589] /* reactor.particle[3].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
reactor.T_b[3] = reactor.particle[3].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2499};
  data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */ = data->localData[0]->realVars[1569] /* reactor.particle[3].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
reactor.psat[3] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[3]) * (-273.15 + reactor.T_b[3]) / (-16.00999999999999 + reactor.T_b[3]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2500};
  data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"-16.00999999999999 + reactor.T_b[3]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2501(DATA*, threadData_t*);
/*
equation index: 2502
indexNonlinear: 34
type: NONLINEAR

vars: {reactor.pvap[3]}
eqns: {2501}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2502};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2502 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[34].nlsxOld[0] = data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 34);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2502};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2502 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[34].nlsx[0];
  TRACE_POP
}

/*
equation index: 2503
type: SIMPLE_ASSIGN
reactor.gama_i[3] = 0.120272355042726 * reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[3] / reactor.T_b[3]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2503};
  data->localData[0]->realVars[42] /* reactor.gama_i[3] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[331] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"reactor.T_b[3]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4090(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4091(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4121(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4183(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4184(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4185(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4186(DATA *data, threadData_t *threadData);


/*
equation index: 2511
type: SIMPLE_ASSIGN
reactor.particle[3].particle_Radu2017_085.sorbent.Ds = reactor.particle[3].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[3].particle_Radu2017_085.sorbent.Ea / reactor.T_b[3])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2511};
  data->localData[0]->realVars[2089] /* reactor.particle[3].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[631] /* reactor.particle[3].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[651] /* reactor.particle[3].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,"reactor.T_b[3]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4111(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4112(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4113(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4114(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3825(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3824(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3823(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3822(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3821(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3820(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3819(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3818(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3817(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3851(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3852(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4117(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4115(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4116(DATA *data, threadData_t *threadData);


/*
equation index: 2536
type: LINEAR

<var>reactor.T_c[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2536};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[883] /* reactor.T_c[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2536 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 33, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2536};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2536 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[883] /* reactor.T_c[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4108(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4109(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4110(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3535(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3536(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4211(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4212(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4181(DATA *data, threadData_t *threadData);


/*
equation index: 2579
type: LINEAR

<var>$DER.reactor.T_b[4]</var>
<var>$DER.reactor.pvap[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2579};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */,data->localData[1]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2579 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 34, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2579};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2579 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[83] /* der(reactor.T_b[4]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[283] /* der(reactor.pvap[4]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2580
type: SIMPLE_ASSIGN
$DER.reactor.particle[4].particle_Radu2017_085.M_l = reactor.M_a[4] * $DER.reactor.w[4] + $DER.reactor.M_a[4] * reactor.w[4]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2580};
  data->localData[0]->realVars[223] /* der(reactor.particle[4].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */) * (data->localData[0]->realVars[303] /* der(reactor.w[4]) DUMMY_DER */) + (data->localData[0]->realVars[163] /* der(reactor.M_a[4]) DUMMY_DER */) * (data->localData[0]->realVars[2637] /* reactor.w[4] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4254(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4258(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4253(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4251(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4257(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4252(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4259(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4255(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4250(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4182(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3437(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3439(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3440(DATA *data, threadData_t *threadData);


/*
equation index: 2594
type: SIMPLE_ASSIGN
reactor.R_inter[3] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[3] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2594};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[835] /* reactor.R_inter[3] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[664] /* reactor.D_gas[3] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[3] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2595(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2596(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2597(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2598(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2599(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2600(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2601(DATA*, threadData_t*);
/*
equation index: 2609
indexNonlinear: 35
type: NONLINEAR

vars: {reactor.v_vap[3]}
eqns: {2595, 2596, 2597, 2598, 2599, 2600, 2601}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2609};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2609 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[35].nlsxOld[0] = data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 35);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2609};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2609 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */ = data->simulationInfo->nonlinearSystemData[35].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4118(DATA *data, threadData_t *threadData);


/*
equation index: 2611
type: SIMPLE_ASSIGN
reactor.particle[2].particle_Radu2017_085.T_b = reactor.particle[2].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2611};
  data->localData[0]->realVars[1568] /* reactor.particle[2].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1588] /* reactor.particle[2].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2612
type: SIMPLE_ASSIGN
reactor.T_b[2] = reactor.particle[2].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2612};
  data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */ = data->localData[0]->realVars[1568] /* reactor.particle[2].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2613
type: SIMPLE_ASSIGN
reactor.psat[2] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[2]) * (-273.15 + reactor.T_b[2]) / (-16.00999999999999 + reactor.T_b[2]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2613};
  data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"-16.00999999999999 + reactor.T_b[2]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2614(DATA*, threadData_t*);
/*
equation index: 2615
indexNonlinear: 36
type: NONLINEAR

vars: {reactor.pvap[2]}
eqns: {2614}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2615};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2615 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[36].nlsxOld[0] = data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 36);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2615};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2615 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[36].nlsx[0];
  TRACE_POP
}

/*
equation index: 2616
type: SIMPLE_ASSIGN
reactor.gama_i[2] = 0.120272355042726 * reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[2] / reactor.T_b[2]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2616};
  data->localData[0]->realVars[41] /* reactor.gama_i[2] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[330] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"reactor.T_b[2]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4001(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4002(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4032(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4094(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4095(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4096(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4097(DATA *data, threadData_t *threadData);


/*
equation index: 2624
type: SIMPLE_ASSIGN
reactor.particle[2].particle_Radu2017_085.sorbent.Ds = reactor.particle[2].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[2].particle_Radu2017_085.sorbent.Ea / reactor.T_b[2])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2624};
  data->localData[0]->realVars[2088] /* reactor.particle[2].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[630] /* reactor.particle[2].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[650] /* reactor.particle[2].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,"reactor.T_b[2]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4022(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4023(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4024(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4025(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3834(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3833(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3832(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3831(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3830(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3829(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3828(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3827(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3826(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3848(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3849(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4028(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4026(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4027(DATA *data, threadData_t *threadData);


/*
equation index: 2649
type: LINEAR

<var>reactor.T_c[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2649};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[882] /* reactor.T_c[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2649 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 35, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2649};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2649 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[882] /* reactor.T_c[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4019(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4020(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4021(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3537(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3538(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4122(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4123(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4092(DATA *data, threadData_t *threadData);


/*
equation index: 2692
type: LINEAR

<var>$DER.reactor.pvap[3]</var>
<var>$DER.reactor.T_b[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2692};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */,data->localData[1]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2692 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 36, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2692};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2692 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[282] /* der(reactor.pvap[3]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[82] /* der(reactor.T_b[3]) STATE_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2693
type: SIMPLE_ASSIGN
$DER.reactor.particle[3].particle_Radu2017_085.M_l = reactor.M_a[3] * $DER.reactor.w[3] + $DER.reactor.M_a[3] * reactor.w[3]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2693};
  data->localData[0]->realVars[222] /* der(reactor.particle[3].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */) * (data->localData[0]->realVars[302] /* der(reactor.w[3]) DUMMY_DER */) + (data->localData[0]->realVars[162] /* der(reactor.M_a[3]) DUMMY_DER */) * (data->localData[0]->realVars[2636] /* reactor.w[3] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4163(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4161(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4162(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4166(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4170(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4169(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4168(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4167(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4164(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4093(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3458(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3460(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3461(DATA *data, threadData_t *threadData);


/*
equation index: 2707
type: SIMPLE_ASSIGN
reactor.R_inter[2] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[2] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2707};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[834] /* reactor.R_inter[2] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[663] /* reactor.D_gas[2] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[2] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2708(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2709(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2710(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2711(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2712(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2713(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2714(DATA*, threadData_t*);
/*
equation index: 2722
indexNonlinear: 37
type: NONLINEAR

vars: {reactor.v_vap[2]}
eqns: {2708, 2709, 2710, 2711, 2712, 2713, 2714}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2722};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2722 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[37].nlsxOld[0] = data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 37);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2722};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2722 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */ = data->simulationInfo->nonlinearSystemData[37].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4029(DATA *data, threadData_t *threadData);


/*
equation index: 2724
type: SIMPLE_ASSIGN
reactor.particle[1].particle_Radu2017_085.T_b = reactor.particle[1].particle_Radu2017_085.Ti
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2724};
  data->localData[0]->realVars[1567] /* reactor.particle[1].particle_Radu2017_085.T_b variable */ = data->localData[0]->realVars[1587] /* reactor.particle[1].particle_Radu2017_085.Ti variable */;
  TRACE_POP
}

/*
equation index: 2725
type: SIMPLE_ASSIGN
reactor.T_b[1] = reactor.particle[1].particle_Radu2017_085.T_b
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2725};
  data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */ = data->localData[0]->realVars[1567] /* reactor.particle[1].particle_Radu2017_085.T_b variable */;
  TRACE_POP
}

/*
equation index: 2726
type: SIMPLE_ASSIGN
reactor.psat[1] = 611.21 * exp((19.84281876332623 + (-0.004264392324093817) * reactor.T_b[1]) * (-273.15 + reactor.T_b[1]) / (-16.00999999999999 + reactor.T_b[1]))
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2726};
  data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */ = (611.21) * (exp((19.84281876332623 + (-0.004264392324093817) * (data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */)) * (DIVISION_SIM(-273.15 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,-16.00999999999999 + data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"-16.00999999999999 + reactor.T_b[1]",equationIndexes))));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2727(DATA*, threadData_t*);
/*
equation index: 2728
indexNonlinear: 38
type: NONLINEAR

vars: {reactor.pvap[1]}
eqns: {2727}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2728};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2728 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[38].nlsxOld[0] = data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */;
  retValue = solve_nonlinear_system(data, threadData, 38);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2728};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2728 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */ = data->simulationInfo->nonlinearSystemData[38].nlsx[0];
  TRACE_POP
}

/*
equation index: 2729
type: SIMPLE_ASSIGN
reactor.gama_i[1] = 0.120272355042726 * reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M * reactor.pvap[1] / reactor.T_b[1]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2729};
  data->localData[0]->realVars[40] /* reactor.gama_i[1] STATE(1) */ = (0.120272355042726) * ((data->simulationInfo->realParameter[329] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.M PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"reactor.T_b[1]",equationIndexes)));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3912(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3913(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3943(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4005(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4006(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3918(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3919(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4007(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4008(DATA *data, threadData_t *threadData);


/*
equation index: 2739
type: SIMPLE_ASSIGN
reactor.particle[1].particle_Radu2017_085.sorbent.Ds = reactor.particle[1].particle_Radu2017_085.sorbent.D0 * exp((-0.120272355042726) * reactor.particle[1].particle_Radu2017_085.sorbent.Ea / reactor.T_b[1])
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2739};
  data->localData[0]->realVars[2087] /* reactor.particle[1].particle_Radu2017_085.sorbent.Ds variable */ = (data->simulationInfo->realParameter[629] /* reactor.particle[1].particle_Radu2017_085.sorbent.D0 PARAM */) * (exp((-0.120272355042726) * (DIVISION_SIM(data->simulationInfo->realParameter[649] /* reactor.particle[1].particle_Radu2017_085.sorbent.Ea PARAM */,data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,"reactor.T_b[1]",equationIndexes))));
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3933(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3934(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3935(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3936(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5642(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3843(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3842(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3841(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3840(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3839(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3838(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3837(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3836(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3835(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3845(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3846(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3939(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3916(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3917(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5612(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3937(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3938(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5639(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5616(DATA *data, threadData_t *threadData);


/*
equation index: 2770
type: LINEAR

<var>reactor.T_c[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2770};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[881] /* reactor.T_c[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2770 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 37, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2770};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2770 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[881] /* reactor.T_c[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3930(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3931(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3932(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5627(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5628(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5629(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3541(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3542(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3944(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3945(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3914(DATA *data, threadData_t *threadData);


/*
equation index: 2816
type: LINEAR

<var>$DER.reactor.pvap[1]</var>
<var>$DER.reactor.T_b[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2816};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */,data->localData[1]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2816 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 38, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2816};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2816 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[280] /* der(reactor.pvap[1]) DUMMY_DER */ = aux_x[0];
  data->localData[0]->realVars[80] /* der(reactor.T_b[1]) STATE_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2817
type: SIMPLE_ASSIGN
$DER.reactor.particle[1].particle_Radu2017_085.M_l = reactor.M_a[1] * $DER.reactor.w[1] + $DER.reactor.M_a[1] * reactor.w[1]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2817};
  data->localData[0]->realVars[220] /* der(reactor.particle[1].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */) * (data->localData[0]->realVars[300] /* der(reactor.w[1]) DUMMY_DER */) + (data->localData[0]->realVars[160] /* der(reactor.M_a[1]) DUMMY_DER */) * (data->localData[0]->realVars[2634] /* reactor.w[1] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3988(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3983(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3984(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3990(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3992(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3986(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3987(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3985(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3991(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3915(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3539(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3540(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3543(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4033(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4034(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5648(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4003(DATA *data, threadData_t *threadData);


/*
equation index: 2869
type: LINEAR

<var>$DER.reactor.T_b[2]</var>
<var>$DER.reactor.pvap[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_eqFunction_2869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2869};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { data->localData[1]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */,data->localData[1]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2869 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 39, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2869};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2869 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[81] /* der(reactor.T_b[2]) STATE_DER */ = aux_x[0];
  data->localData[0]->realVars[281] /* der(reactor.pvap[2]) DUMMY_DER */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 2870
type: SIMPLE_ASSIGN
$DER.reactor.particle[2].particle_Radu2017_085.M_l = reactor.M_a[2] * $DER.reactor.w[2] + $DER.reactor.M_a[2] * reactor.w[2]
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2870};
  data->localData[0]->realVars[221] /* der(reactor.particle[2].particle_Radu2017_085.M_l) DUMMY_DER */ = (data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */) * (data->localData[0]->realVars[301] /* der(reactor.w[2]) DUMMY_DER */) + (data->localData[0]->realVars[161] /* der(reactor.M_a[2]) DUMMY_DER */) * (data->localData[0]->realVars[2635] /* reactor.w[2] DUMMY_STATE */);
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_4080(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4073(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5693(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4075(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4079(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5695(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4074(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5706(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4076(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5704(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4081(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4077(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4072(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5697(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_4004(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5609(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3479(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3481(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3482(DATA *data, threadData_t *threadData);


/*
equation index: 2890
type: SIMPLE_ASSIGN
reactor.R_inter[1] = 0.1591549430918954 * log(reactor.Do / reactor.Di) * reactor.tor / (reactor.D_gas[1] * reactor.p)
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2890};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[26] /* reactor.Do PARAM */,data->simulationInfo->realParameter[24] /* reactor.Di PARAM */,"reactor.Di",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.Do / reactor.Di) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[833] /* reactor.R_inter[1] variable */ = (0.1591549430918954) * ((log(tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[2591] /* reactor.tor variable */,(data->localData[0]->realVars[662] /* reactor.D_gas[1] variable */) * (data->simulationInfo->realParameter[148] /* reactor.p PARAM */),"reactor.D_gas[1] * reactor.p",equationIndexes)));
  TRACE_POP
}

void MOSES_Simulations_ACTS_desorption_eqFunction_2891(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2892(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2893(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2894(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2895(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2896(DATA*, threadData_t*);
void MOSES_Simulations_ACTS_desorption_eqFunction_2897(DATA*, threadData_t*);
/*
equation index: 2905
indexNonlinear: 39
type: NONLINEAR

vars: {reactor.v_vap[1]}
eqns: {2891, 2892, 2893, 2894, 2895, 2896, 2897}
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2905};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2905 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[39].nlsxOld[0] = data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 39);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2905};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2905 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */ = data->simulationInfo->nonlinearSystemData[39].nlsx[0];
  TRACE_POP
}
extern void MOSES_Simulations_ACTS_desorption_eqFunction_3940(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3069(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3078(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3068(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_3066(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5603(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5615(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5656(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5657(DATA *data, threadData_t *threadData);

extern void MOSES_Simulations_ACTS_desorption_eqFunction_5658(DATA *data, threadData_t *threadData);


/*
equation index: 2916
type: SIMPLE_ASSIGN
reactor.ro_h = 1000.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2916};
  data->localData[0]->realVars[2590] /* reactor.ro_h variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 2917
type: SIMPLE_ASSIGN
reactor.Umax = 600.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2917};
  data->localData[0]->realVars[905] /* reactor.Umax variable */ = 600.0;
  TRACE_POP
}

/*
equation index: 2918
type: SIMPLE_ASSIGN
reactor.ff = 0.02
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2918};
  data->localData[0]->realVars[1041] /* reactor.ff variable */ = 0.02;
  TRACE_POP
}

/*
equation index: 2919
type: SIMPLE_ASSIGN
reactor.c_v[1] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2919};
  data->localData[0]->realVars[1013] /* reactor.c_v[1] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2920
type: SIMPLE_ASSIGN
reactor.c_h[1] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2920};
  data->localData[0]->realVars[973] /* reactor.c_h[1] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2921
type: SIMPLE_ASSIGN
reactor.c_v[2] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2921};
  data->localData[0]->realVars[1014] /* reactor.c_v[2] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2922
type: SIMPLE_ASSIGN
reactor.c_h[2] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2922};
  data->localData[0]->realVars[974] /* reactor.c_h[2] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2923
type: SIMPLE_ASSIGN
reactor.c_v[3] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2923};
  data->localData[0]->realVars[1015] /* reactor.c_v[3] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2924
type: SIMPLE_ASSIGN
reactor.c_h[3] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2924};
  data->localData[0]->realVars[975] /* reactor.c_h[3] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2925
type: SIMPLE_ASSIGN
reactor.c_v[4] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2925};
  data->localData[0]->realVars[1016] /* reactor.c_v[4] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2926
type: SIMPLE_ASSIGN
reactor.c_h[4] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2926};
  data->localData[0]->realVars[976] /* reactor.c_h[4] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2927
type: SIMPLE_ASSIGN
reactor.c_v[5] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2927};
  data->localData[0]->realVars[1017] /* reactor.c_v[5] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2928
type: SIMPLE_ASSIGN
reactor.c_h[5] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2928};
  data->localData[0]->realVars[977] /* reactor.c_h[5] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2929
type: SIMPLE_ASSIGN
reactor.c_v[6] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2929};
  data->localData[0]->realVars[1018] /* reactor.c_v[6] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2930
type: SIMPLE_ASSIGN
reactor.c_h[6] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2930};
  data->localData[0]->realVars[978] /* reactor.c_h[6] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2931
type: SIMPLE_ASSIGN
reactor.c_v[7] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2931};
  data->localData[0]->realVars[1019] /* reactor.c_v[7] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2932
type: SIMPLE_ASSIGN
reactor.c_h[7] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2932};
  data->localData[0]->realVars[979] /* reactor.c_h[7] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2933
type: SIMPLE_ASSIGN
reactor.c_v[8] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2933};
  data->localData[0]->realVars[1020] /* reactor.c_v[8] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2934
type: SIMPLE_ASSIGN
reactor.c_h[8] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2934};
  data->localData[0]->realVars[980] /* reactor.c_h[8] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2935
type: SIMPLE_ASSIGN
reactor.c_v[9] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2935};
  data->localData[0]->realVars[1021] /* reactor.c_v[9] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2936
type: SIMPLE_ASSIGN
reactor.c_h[9] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2936};
  data->localData[0]->realVars[981] /* reactor.c_h[9] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2937
type: SIMPLE_ASSIGN
reactor.c_v[10] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2937};
  data->localData[0]->realVars[1022] /* reactor.c_v[10] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2938
type: SIMPLE_ASSIGN
reactor.c_h[10] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2938};
  data->localData[0]->realVars[982] /* reactor.c_h[10] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2939
type: SIMPLE_ASSIGN
reactor.c_v[11] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2939};
  data->localData[0]->realVars[1023] /* reactor.c_v[11] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2940
type: SIMPLE_ASSIGN
reactor.c_h[11] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2940};
  data->localData[0]->realVars[983] /* reactor.c_h[11] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2941
type: SIMPLE_ASSIGN
reactor.c_v[12] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2941};
  data->localData[0]->realVars[1024] /* reactor.c_v[12] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2942
type: SIMPLE_ASSIGN
reactor.c_h[12] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2942};
  data->localData[0]->realVars[984] /* reactor.c_h[12] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2943
type: SIMPLE_ASSIGN
reactor.c_v[13] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2943};
  data->localData[0]->realVars[1025] /* reactor.c_v[13] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2944
type: SIMPLE_ASSIGN
reactor.c_h[13] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2944};
  data->localData[0]->realVars[985] /* reactor.c_h[13] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2945
type: SIMPLE_ASSIGN
reactor.c_v[14] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2945};
  data->localData[0]->realVars[1026] /* reactor.c_v[14] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2946
type: SIMPLE_ASSIGN
reactor.c_h[14] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2946};
  data->localData[0]->realVars[986] /* reactor.c_h[14] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2947
type: SIMPLE_ASSIGN
reactor.c_v[15] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2947};
  data->localData[0]->realVars[1027] /* reactor.c_v[15] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2948
type: SIMPLE_ASSIGN
reactor.c_h[15] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2948};
  data->localData[0]->realVars[987] /* reactor.c_h[15] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2949
type: SIMPLE_ASSIGN
reactor.c_v[16] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2949};
  data->localData[0]->realVars[1028] /* reactor.c_v[16] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2950
type: SIMPLE_ASSIGN
reactor.c_h[16] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2950};
  data->localData[0]->realVars[988] /* reactor.c_h[16] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2951
type: SIMPLE_ASSIGN
reactor.c_v[17] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2951};
  data->localData[0]->realVars[1029] /* reactor.c_v[17] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2952
type: SIMPLE_ASSIGN
reactor.c_h[17] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2952};
  data->localData[0]->realVars[989] /* reactor.c_h[17] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2953
type: SIMPLE_ASSIGN
reactor.c_v[18] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2953};
  data->localData[0]->realVars[1030] /* reactor.c_v[18] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2954
type: SIMPLE_ASSIGN
reactor.c_h[18] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2954};
  data->localData[0]->realVars[990] /* reactor.c_h[18] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2955
type: SIMPLE_ASSIGN
reactor.c_v[19] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2955};
  data->localData[0]->realVars[1031] /* reactor.c_v[19] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2956
type: SIMPLE_ASSIGN
reactor.c_h[19] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2956};
  data->localData[0]->realVars[991] /* reactor.c_h[19] variable */ = 4180.0;
  TRACE_POP
}

/*
equation index: 2957
type: SIMPLE_ASSIGN
reactor.c_v[20] = 1996.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2957};
  data->localData[0]->realVars[1032] /* reactor.c_v[20] variable */ = 1996.0;
  TRACE_POP
}

/*
equation index: 2958
type: SIMPLE_ASSIGN
reactor.c_h[20] = 4180.0
*/
void MOSES_Simulations_ACTS_desorption_eqFunction_2958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2958};
  data->localData[0]->realVars[992] /* reactor.c_h[20] variable */ = 4180.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void MOSES_Simulations_ACTS_desorption_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  MOSES_Simulations_ACTS_desorption_eqFunction_1(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_6(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_7(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_8(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_9(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_10(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_11(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_12(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_13(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_14(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_15(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_16(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_17(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_18(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_19(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_20(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_21(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_22(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_23(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_24(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_25(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_26(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_27(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_28(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_29(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_30(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_31(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_32(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_33(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_34(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_35(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_36(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_37(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_38(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_39(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_40(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_41(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_42(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_43(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_44(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_45(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_46(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_47(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_48(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_49(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_50(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_51(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_52(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_53(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_54(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_55(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_56(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_57(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_58(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_59(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_60(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_61(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_62(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_63(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_64(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_65(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_66(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_67(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_68(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_69(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_70(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_71(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_72(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_73(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_74(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_75(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_76(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_77(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_78(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_79(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_80(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_81(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_82(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_83(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_84(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_85(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_86(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_87(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_88(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3023(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3024(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_91(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3500(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3022(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3021(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3020(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3019(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3018(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3017(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3016(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3015(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3014(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3013(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3012(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3011(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3010(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3009(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3008(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3007(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3006(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3005(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3004(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3003(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3002(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_114(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3001(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2999(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_117(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_118(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_119(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_120(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_121(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_122(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_123(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_124(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_125(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_126(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_127(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_128(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_129(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_130(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_131(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_132(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_133(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_134(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_135(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_136(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2998(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_138(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3587(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2997(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_141(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3591(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2996(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_144(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3595(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2995(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_147(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3599(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2994(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_150(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3603(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2993(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_153(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3607(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2992(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_156(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3611(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2991(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_159(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3615(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2990(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_162(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3619(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2989(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_165(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3623(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2988(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_168(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3627(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2987(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_171(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3631(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2986(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_174(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3635(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2985(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_177(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3639(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2984(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_180(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3643(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2983(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_183(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3647(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2982(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_186(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3651(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2981(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_189(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3655(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2980(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_192(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3659(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2979(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_195(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3663(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2978(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2977(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2976(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2975(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2974(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2973(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2972(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2971(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2970(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2969(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2968(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2967(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2966(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2965(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2964(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2963(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2962(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2961(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2960(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2959(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_217(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_218(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3563(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_220(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3562(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_222(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3561(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_224(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3560(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_226(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3559(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_228(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3558(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_230(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3557(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_232(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3556(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_234(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3555(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_236(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3554(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_238(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3553(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_240(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3552(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_242(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3551(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_244(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3550(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_246(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3549(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_248(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3548(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_250(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3547(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_252(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3546(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_254(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3545(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3544(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3070(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3075(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3072(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3073(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3071(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3074(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3076(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3077(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3501(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3502(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3067(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_268(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3911(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3910(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_271(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3920(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3921(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3922(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3941(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3942(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3946(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3947(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3948(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3949(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_281(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4000(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3999(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_284(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4009(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4010(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4011(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4030(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4031(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4035(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4036(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4037(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4038(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_294(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4089(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4088(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_297(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4098(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4099(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4100(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4119(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4120(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4124(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4125(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4126(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4127(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_307(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4178(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4177(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_310(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4187(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4188(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4189(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4208(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4209(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4213(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4214(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4215(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4216(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_320(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4267(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4266(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_323(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4276(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4277(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4278(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4279(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4298(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4299(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4303(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4304(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4305(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4306(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_334(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4357(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4356(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_337(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4366(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4367(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4368(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4387(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4388(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4392(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4393(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4394(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4395(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_347(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4446(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4445(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_350(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4455(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4456(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4457(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4476(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4477(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4481(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4482(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4483(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4484(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_360(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4535(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4534(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_363(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4544(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4545(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4546(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4565(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4566(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4570(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4571(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4572(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4573(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_373(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4624(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4623(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_376(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4633(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4634(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4635(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4654(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4655(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4659(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4660(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4661(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4662(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_386(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4713(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4712(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_389(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4722(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4723(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4724(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4743(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4744(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4748(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4749(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4750(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4751(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_399(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4802(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4801(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_402(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4811(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4812(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4813(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4832(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4833(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4837(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4838(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4839(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4840(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_412(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4891(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4890(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_415(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4900(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4901(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4902(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4921(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4922(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4926(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4927(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4928(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4929(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_425(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4980(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4979(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_428(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4989(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4990(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4991(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5010(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5011(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5015(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5016(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5017(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5018(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_438(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5069(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5068(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_441(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5078(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5079(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5080(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5099(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5100(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5104(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5105(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5106(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5107(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_451(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5158(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5157(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_454(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5167(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5168(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5169(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5188(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5189(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5193(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5194(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5195(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5196(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_464(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5247(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5246(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_467(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5256(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5257(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5258(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5277(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5278(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5282(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5283(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5284(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5285(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_477(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5336(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5335(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_480(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5345(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5346(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5347(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5366(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5367(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5371(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5372(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5373(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5374(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_490(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5425(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5424(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_493(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5434(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5435(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5436(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5455(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5456(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5460(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5461(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5462(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5463(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_503(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5514(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5513(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_506(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5523(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5524(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5525(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5544(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5545(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5549(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5550(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5551(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5552(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_516(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5604(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5602(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_519(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5617(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5618(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5619(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5643(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5644(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5649(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5650(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5651(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5652(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5653(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5654(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5655(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_532(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_533(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3583(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3480(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_536(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_537(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3582(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3459(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_540(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_541(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3581(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3438(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_544(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_545(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3580(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3417(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_548(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_549(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3579(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3396(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_552(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_553(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3578(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3375(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_556(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_557(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3577(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3354(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_560(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_561(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3576(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3333(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_564(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_565(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3575(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3312(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_568(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_569(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3574(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3291(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_572(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_573(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3573(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3270(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_576(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_577(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3572(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3249(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_580(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_581(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3571(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3228(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_584(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_585(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3570(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3207(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_588(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_589(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3569(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3186(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_592(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_593(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3568(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3165(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_596(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_597(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3567(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3144(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_600(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_601(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3566(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3123(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_604(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_605(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3565(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3102(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_608(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_609(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3564(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3081(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3046(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3047(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3048(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3049(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3050(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3051(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3052(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3053(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3054(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3055(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3056(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3057(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3058(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3059(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3060(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3061(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3062(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3063(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3064(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3065(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_632(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_633(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_634(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_636(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_637(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5605(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5606(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5645(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_641(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5633(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5634(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5635(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5636(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3672(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3671(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3670(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3669(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3668(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3667(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3666(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3665(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3664(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3902(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3903(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5640(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5637(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5638(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_666(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5630(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5631(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5632(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3080(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3082(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3083(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_673(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_688(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5641(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_690(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_691(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_692(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_694(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_695(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5515(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5516(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5546(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5610(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5611(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5613(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5614(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_703(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5536(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5537(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5538(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5539(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3681(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3680(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3679(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3678(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3677(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3676(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3675(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3674(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3673(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3899(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3900(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5542(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5540(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5541(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_728(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5533(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5534(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5535(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3503(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3504(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5646(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5647(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5607(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_771(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_772(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5696(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5701(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5692(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5694(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5700(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5705(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5702(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5698(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5703(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5608(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3101(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3103(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3104(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_786(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_801(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5543(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_803(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_804(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_805(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_807(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_808(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5426(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5427(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5457(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5519(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5520(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5521(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5522(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_816(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5447(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5448(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5449(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5450(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3690(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3689(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3688(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3687(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3686(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3685(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3684(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3683(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3682(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3896(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3897(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5453(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5451(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5452(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_841(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5444(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5445(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5446(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3505(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3506(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5547(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5548(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5517(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_884(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_885(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5588(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5592(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5594(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5593(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5589(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5586(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5595(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5587(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5591(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5518(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3122(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3124(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3125(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_899(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_914(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5454(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_916(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_917(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_918(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_920(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_921(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5337(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5338(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5368(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5430(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5431(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5432(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5433(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_929(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5358(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5359(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5360(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5361(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3699(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3698(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3697(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3696(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3695(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3694(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3693(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3692(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3691(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3893(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3894(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5364(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5362(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5363(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_954(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5355(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5356(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5357(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3507(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3508(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5458(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5459(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5428(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_997(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_998(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5500(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5505(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5499(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5502(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5501(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5497(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5506(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5498(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5504(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5429(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3143(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3145(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3146(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1012(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1027(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5365(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1029(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1030(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1031(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1033(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1034(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5248(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5249(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5279(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5341(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5342(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5343(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5344(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1042(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5269(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5270(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5271(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5272(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3708(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3707(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3706(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3705(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3704(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3703(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3702(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3701(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3700(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3890(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3891(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5275(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5273(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5274(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1067(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5266(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5267(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5268(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3509(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3510(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5369(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5370(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5339(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1110(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1111(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5416(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5410(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5414(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5411(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5415(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5409(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5413(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5417(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5408(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5340(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3164(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3166(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3167(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1125(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1140(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5276(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1142(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1143(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1144(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1146(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1147(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5159(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5160(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5190(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5252(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5253(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5254(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5255(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1155(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5180(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5181(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5182(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5183(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3717(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3716(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3715(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3714(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3713(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3712(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3711(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3710(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3709(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3887(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3888(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5186(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5184(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5185(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1180(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5177(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5178(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5179(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3511(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3512(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5280(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5281(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5250(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1223(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5319(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5320(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5328(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1227(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5324(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5322(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5325(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5321(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5326(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5327(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5251(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3185(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3187(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3188(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1238(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1253(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5187(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1255(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1256(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1257(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1259(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1260(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5070(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5071(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5101(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5163(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5164(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5165(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5166(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1268(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5091(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5092(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5093(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5094(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3726(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3725(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3724(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3723(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3722(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3721(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3720(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3719(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3718(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3884(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3885(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5097(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5095(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5096(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1293(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5088(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5089(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5090(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3513(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3514(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5191(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5192(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5161(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1336(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1337(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5235(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5231(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5237(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5230(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5236(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5232(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5239(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5233(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5234(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5162(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3206(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3208(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3209(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1351(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1366(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5098(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1368(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1369(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1370(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1372(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1373(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4981(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4982(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5012(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5074(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5075(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5076(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5077(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1381(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5002(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5003(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5004(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5005(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3735(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3734(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3733(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3732(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3731(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3730(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3729(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3728(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3727(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3881(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3882(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5008(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5006(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5007(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1406(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4999(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5000(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5001(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3515(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3516(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5102(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5103(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5072(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1449(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1450(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5141(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5142(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5145(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5143(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5150(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5144(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5147(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5148(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5146(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5073(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3227(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3229(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3230(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1464(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1479(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5009(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1481(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1482(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1483(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1485(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1486(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4892(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4893(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4923(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4985(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4986(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4987(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4988(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1494(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4913(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4914(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4915(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4916(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3744(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3743(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3742(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3741(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3740(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3739(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3738(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3737(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3736(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3878(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3879(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4919(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4917(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4918(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1519(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4910(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4911(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4912(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3517(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3518(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5013(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5014(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4983(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1562(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1563(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5060(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5055(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5054(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5058(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5059(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5053(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5057(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5061(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5052(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4984(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3248(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3250(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3251(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1577(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1592(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4920(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1594(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1595(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1596(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1598(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1599(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4803(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4804(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4834(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4896(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4897(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4898(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4899(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1607(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4824(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4825(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4826(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4827(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3753(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3752(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3751(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3750(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3749(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3748(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3747(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3746(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3745(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3875(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3876(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4830(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4828(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4829(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1632(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4821(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4822(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4823(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3519(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3520(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4924(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4925(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4894(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1675(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1676(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4971(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4965(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4969(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4966(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4970(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4963(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4964(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4968(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4972(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4895(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3269(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3271(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3272(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1690(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1705(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4831(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1707(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1708(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1709(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1711(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1712(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4714(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4715(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4745(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4807(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4808(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4809(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4810(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1720(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4735(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4736(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4737(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4738(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3762(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3761(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3760(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3759(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3758(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3757(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3756(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3755(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3754(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3872(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3873(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4741(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4739(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4740(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1745(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4732(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4733(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4734(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3521(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3522(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4835(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4836(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4805(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1788(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1789(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4875(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4874(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4879(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4880(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4881(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4878(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4876(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4883(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4877(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4806(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3290(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3292(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3293(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1803(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1818(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4742(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1820(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1821(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1822(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1824(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1825(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4625(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4626(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4656(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4718(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4719(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4720(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4721(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1833(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4646(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4647(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4648(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4649(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3771(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3770(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3769(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3768(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3767(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3766(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3765(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3764(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3763(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3869(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3870(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4652(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4650(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4651(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1858(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4643(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4644(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4645(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3523(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3524(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4746(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4747(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4716(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1901(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4785(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4786(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4794(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1905(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4792(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4788(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4787(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4790(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4789(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4793(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4717(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3311(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3313(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3314(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1916(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1931(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4653(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1933(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1934(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1935(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1937(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1938(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4536(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4537(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4567(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4629(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4630(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4631(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4632(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1946(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4557(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4558(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4559(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4560(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3780(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3779(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3778(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3777(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3776(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3775(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3774(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3773(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3772(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3866(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3867(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4563(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4561(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4562(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_1971(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4554(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4555(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4556(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3525(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3526(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4657(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4658(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4627(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2014(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2015(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4697(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4696(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4701(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4702(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4703(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4700(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4699(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4698(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4705(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4628(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3332(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3334(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3335(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2029(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2044(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4564(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2046(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2047(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2048(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2050(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2051(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4447(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4448(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4478(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4540(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4541(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4542(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4543(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2059(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4468(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4469(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4470(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4471(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3789(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3788(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3787(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3786(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3785(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3784(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3783(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3782(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3781(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3863(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3864(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4474(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4472(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4473(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2084(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4465(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4466(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4467(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3527(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3528(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4568(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4569(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4538(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2127(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2128(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4615(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4609(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4610(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4613(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4614(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4607(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4608(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4612(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4616(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4539(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3353(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3355(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3356(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2142(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2157(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4475(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2159(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2160(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2161(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2163(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2164(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4358(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4359(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4389(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4451(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4452(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4453(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4454(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2172(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4379(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4380(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4381(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4382(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3798(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3797(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3796(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3795(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3794(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3793(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3792(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3791(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3790(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3860(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3861(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4385(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4383(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4384(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2197(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4376(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4377(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4378(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3529(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3530(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4479(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4480(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4449(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2240(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2241(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4520(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4524(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4526(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4525(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4521(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4519(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4523(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4527(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4518(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4450(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3374(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3376(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3377(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2255(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2270(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4386(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2272(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2273(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2274(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2276(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2277(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4268(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4269(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4300(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4362(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4363(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4364(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4365(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2285(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4290(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4291(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4292(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4293(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3807(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3806(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3805(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3804(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3803(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3802(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3801(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3800(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3799(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3857(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3858(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4296(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4294(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4295(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2310(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4287(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4288(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4289(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3531(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3532(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4390(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4391(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4360(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2353(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4429(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4430(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4438(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2357(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4434(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4432(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4435(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4431(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4436(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4437(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4361(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3395(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3397(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3398(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2368(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2383(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4297(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2385(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2386(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2387(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2389(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2390(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4179(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4180(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4210(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4272(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4273(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4274(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4275(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2398(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4200(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4201(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4202(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4203(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3816(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3815(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3814(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3813(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3812(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3811(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3810(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3809(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3808(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3854(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3855(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4206(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4204(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4205(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2423(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4197(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4198(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4199(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3533(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3534(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4301(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4302(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4270(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2466(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2467(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4341(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4340(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4345(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4346(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4347(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4344(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4343(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4342(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4349(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4271(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3416(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3418(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3419(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2481(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2496(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4207(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2498(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2499(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2500(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2502(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2503(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4090(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4091(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4121(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4183(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4184(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4185(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4186(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2511(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4111(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4112(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4113(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4114(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3825(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3824(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3823(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3822(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3821(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3820(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3819(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3818(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3817(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3851(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3852(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4117(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4115(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4116(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2536(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4108(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4109(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4110(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3535(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3536(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4211(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4212(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4181(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2579(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2580(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4254(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4258(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4253(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4251(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4257(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4252(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4259(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4255(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4250(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4182(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3437(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3439(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3440(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2594(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2609(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4118(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2611(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2612(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2613(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2615(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2616(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4001(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4002(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4032(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4094(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4095(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4096(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4097(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2624(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4022(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4023(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4024(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4025(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3834(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3833(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3832(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3831(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3830(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3829(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3828(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3827(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3826(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3848(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3849(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4028(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4026(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4027(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2649(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4019(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4020(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4021(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3537(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3538(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4122(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4123(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4092(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2692(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2693(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4163(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4161(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4162(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4166(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4170(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4169(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4168(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4167(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4164(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4093(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3458(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3460(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3461(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2707(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2722(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4029(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2724(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2725(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2726(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2728(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2729(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3912(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3913(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3943(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4005(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4006(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3918(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3919(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4007(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4008(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2739(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3933(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3934(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3935(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3936(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5642(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3843(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3842(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3841(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3840(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3839(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3838(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3837(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3836(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3835(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3845(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3846(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3939(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3916(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3917(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5612(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3937(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3938(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5639(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5616(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2770(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3930(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3931(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3932(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5627(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5628(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5629(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3541(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3542(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3944(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3945(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3914(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2816(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2817(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3988(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3983(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3984(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3990(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3992(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3986(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3987(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3985(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3991(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3915(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3539(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3540(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3543(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4033(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4034(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5648(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4003(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2869(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2870(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4080(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4073(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5693(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4075(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4079(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5695(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4074(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5706(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4076(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5704(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4081(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4077(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4072(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5697(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_4004(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5609(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3479(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3481(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3482(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2890(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2905(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3940(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3069(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3078(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3068(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_3066(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5603(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5615(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5656(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5657(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_5658(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2916(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2917(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2918(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2919(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2920(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2921(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2922(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2923(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2924(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2925(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2926(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2927(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2928(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2929(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2930(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2931(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2932(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2933(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2934(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2935(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2936(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2937(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2938(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2939(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2940(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2941(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2942(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2943(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2944(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2945(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2946(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2947(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2948(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2949(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2950(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2951(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2952(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2953(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2954(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2955(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2956(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2957(data, threadData);
  MOSES_Simulations_ACTS_desorption_eqFunction_2958(data, threadData);
  TRACE_POP
}


int MOSES_Simulations_ACTS_desorption_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  MOSES_Simulations_ACTS_desorption_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int MOSES_Simulations_ACTS_desorption_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int MOSES_Simulations_ACTS_desorption_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

