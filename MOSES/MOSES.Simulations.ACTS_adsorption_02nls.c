/* Non Linear Systems */
#include "MOSES.Simulations.ACTS_adsorption_model.h"
#include "MOSES.Simulations.ACTS_adsorption_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 3484
type: SIMPLE_ASSIGN
reactor.Re_vap[1] = abs(2.0 * reactor.gama_media[1] * reactor.v_vap[1] * reactor.dp / (3.0 * reactor.mu_vap[1] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3484};
  data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */) * ((data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1326] /* reactor.mu_vap[1] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[1] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3485
type: SIMPLE_ASSIGN
reactor.frict[1] = if reactor.Re_vap[1] > 1.0 then 172.0 / reactor.Re_vap[1] + 4.36 / reactor.Re_vap[1] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3485};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */, 1.0, 41, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */,"reactor.Re_vap[1]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[1] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1042] /* reactor.frict[1] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3486
type: SIMPLE_ASSIGN
reactor.Dp[1] = 0.1666666666666667 * reactor.frict[1] * reactor.gama_media[1] * reactor.v_vap[1] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3486};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
  data->localData[0]->realVars[683] /* reactor.Dp[1] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1042] /* reactor.frict[1] variable */) * ((data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3487
type: SIMPLE_ASSIGN
reactor.Pext[1] = if reactor.v_vap[1] > 0.0 then reactor.Psat_theo - reactor.Dp[1] else reactor.Psat_theo + reactor.Dp[1]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3487};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */, 0.0, 40, Greater);
  data->localData[0]->realVars[778] /* reactor.Pext[1] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[683] /* reactor.Dp[1] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[683] /* reactor.Dp[1] variable */);
  TRACE_POP
}
/*
equation index: 3488
type: SIMPLE_ASSIGN
reactor.gama_ext[1] = 0.01801 * reactor.Pext[1] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3488};
  data->localData[0]->realVars[1082] /* reactor.gama_ext[1] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[778] /* reactor.Pext[1] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3489
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[1] = (reactor.gama_ext[1] - reactor.gama_media[1]) / reactor.R_inter[1]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3489};
  data->localData[0]->realVars[1225] /* reactor.mdot_e_ext[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1082] /* reactor.gama_ext[1] variable */ - data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */,data->localData[0]->realVars[833] /* reactor.R_inter[1] variable */,"reactor.R_inter[1]",equationIndexes);
  TRACE_POP
}

void residualFunc3498(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3498};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3484(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3485(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3486(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3487(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3488(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3489(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1225] /* reactor.mdot_e_ext[1] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */),"reactor.A_cs * reactor.gama_media[1]",equationIndexes)) - data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3498(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3498(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[1] */
  sysData->nominal[i] = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3498(sysData);
}

void getIterationVarsNLS3498(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
}


/* inner equations */

/*
equation index: 3463
type: SIMPLE_ASSIGN
reactor.Re_vap[2] = abs(2.0 * reactor.gama_media[2] * reactor.v_vap[2] * reactor.dp / (3.0 * reactor.mu_vap[2] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3463};
  data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */) * ((data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1327] /* reactor.mu_vap[2] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[2] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3464
type: SIMPLE_ASSIGN
reactor.frict[2] = if reactor.Re_vap[2] > 1.0 then 172.0 / reactor.Re_vap[2] + 4.36 / reactor.Re_vap[2] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3464};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */, 1.0, 43, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */,"reactor.Re_vap[2]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[2] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1043] /* reactor.frict[2] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3465
type: SIMPLE_ASSIGN
reactor.Dp[2] = 0.1666666666666667 * reactor.frict[2] * reactor.gama_media[2] * reactor.v_vap[2] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3465};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
  data->localData[0]->realVars[684] /* reactor.Dp[2] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1043] /* reactor.frict[2] variable */) * ((data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3466
type: SIMPLE_ASSIGN
reactor.Pext[2] = if reactor.v_vap[2] > 0.0 then reactor.Psat_theo - reactor.Dp[2] else reactor.Psat_theo + reactor.Dp[2]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3466};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */, 0.0, 42, Greater);
  data->localData[0]->realVars[779] /* reactor.Pext[2] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[684] /* reactor.Dp[2] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[684] /* reactor.Dp[2] variable */);
  TRACE_POP
}
/*
equation index: 3467
type: SIMPLE_ASSIGN
reactor.gama_ext[2] = 0.01801 * reactor.Pext[2] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3467};
  data->localData[0]->realVars[1083] /* reactor.gama_ext[2] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[779] /* reactor.Pext[2] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3468
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[2] = (reactor.gama_ext[2] - reactor.gama_media[2]) / reactor.R_inter[2]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3468};
  data->localData[0]->realVars[1226] /* reactor.mdot_e_ext[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1083] /* reactor.gama_ext[2] variable */ - data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */,data->localData[0]->realVars[834] /* reactor.R_inter[2] variable */,"reactor.R_inter[2]",equationIndexes);
  TRACE_POP
}

void residualFunc3477(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3477};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3463(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3464(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3465(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3466(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3467(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3468(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1226] /* reactor.mdot_e_ext[2] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */),"reactor.A_cs * reactor.gama_media[2]",equationIndexes)) - data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3477(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3477(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[2] */
  sysData->nominal[i] = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3477(sysData);
}

void getIterationVarsNLS3477(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
}


/* inner equations */

/*
equation index: 3442
type: SIMPLE_ASSIGN
reactor.Re_vap[3] = abs(2.0 * reactor.gama_media[3] * reactor.v_vap[3] * reactor.dp / (3.0 * reactor.mu_vap[3] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3442};
  data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */) * ((data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1328] /* reactor.mu_vap[3] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[3] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3443
type: SIMPLE_ASSIGN
reactor.frict[3] = if reactor.Re_vap[3] > 1.0 then 172.0 / reactor.Re_vap[3] + 4.36 / reactor.Re_vap[3] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3443};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */, 1.0, 45, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */,"reactor.Re_vap[3]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[3] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1044] /* reactor.frict[3] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3444
type: SIMPLE_ASSIGN
reactor.Dp[3] = 0.1666666666666667 * reactor.frict[3] * reactor.gama_media[3] * reactor.v_vap[3] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3444};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
  data->localData[0]->realVars[685] /* reactor.Dp[3] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1044] /* reactor.frict[3] variable */) * ((data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3445
type: SIMPLE_ASSIGN
reactor.Pext[3] = if reactor.v_vap[3] > 0.0 then reactor.Psat_theo - reactor.Dp[3] else reactor.Psat_theo + reactor.Dp[3]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3445};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */, 0.0, 44, Greater);
  data->localData[0]->realVars[780] /* reactor.Pext[3] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[685] /* reactor.Dp[3] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[685] /* reactor.Dp[3] variable */);
  TRACE_POP
}
/*
equation index: 3446
type: SIMPLE_ASSIGN
reactor.gama_ext[3] = 0.01801 * reactor.Pext[3] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3446};
  data->localData[0]->realVars[1084] /* reactor.gama_ext[3] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[780] /* reactor.Pext[3] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3447
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[3] = (reactor.gama_ext[3] - reactor.gama_media[3]) / reactor.R_inter[3]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3447};
  data->localData[0]->realVars[1227] /* reactor.mdot_e_ext[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1084] /* reactor.gama_ext[3] variable */ - data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */,data->localData[0]->realVars[835] /* reactor.R_inter[3] variable */,"reactor.R_inter[3]",equationIndexes);
  TRACE_POP
}

void residualFunc3456(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3456};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3442(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3443(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3444(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3445(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3446(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3447(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1227] /* reactor.mdot_e_ext[3] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */),"reactor.A_cs * reactor.gama_media[3]",equationIndexes)) - data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3456(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3456(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[3] */
  sysData->nominal[i] = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3456(sysData);
}

void getIterationVarsNLS3456(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
}


/* inner equations */

/*
equation index: 3421
type: SIMPLE_ASSIGN
reactor.Re_vap[4] = abs(2.0 * reactor.gama_media[4] * reactor.v_vap[4] * reactor.dp / (3.0 * reactor.mu_vap[4] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3421};
  data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */) * ((data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1329] /* reactor.mu_vap[4] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[4] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3422
type: SIMPLE_ASSIGN
reactor.frict[4] = if reactor.Re_vap[4] > 1.0 then 172.0 / reactor.Re_vap[4] + 4.36 / reactor.Re_vap[4] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3422};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */, 1.0, 46, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */,"reactor.Re_vap[4]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[4] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1045] /* reactor.frict[4] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3423
type: SIMPLE_ASSIGN
reactor.Dp[4] = 0.1666666666666667 * reactor.frict[4] * reactor.gama_media[4] * reactor.v_vap[4] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3423};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
  data->localData[0]->realVars[686] /* reactor.Dp[4] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1045] /* reactor.frict[4] variable */) * ((data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3424
type: SIMPLE_ASSIGN
reactor.Pext[4] = if reactor.v_vap[4] > 0.0 then reactor.Psat_theo - reactor.Dp[4] else reactor.Psat_theo + reactor.Dp[4]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3424};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */, 0.0, 47, Greater);
  data->localData[0]->realVars[781] /* reactor.Pext[4] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[686] /* reactor.Dp[4] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[686] /* reactor.Dp[4] variable */);
  TRACE_POP
}
/*
equation index: 3425
type: SIMPLE_ASSIGN
reactor.gama_ext[4] = 0.01801 * reactor.Pext[4] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3425};
  data->localData[0]->realVars[1085] /* reactor.gama_ext[4] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[781] /* reactor.Pext[4] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3426
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[4] = (reactor.gama_ext[4] - reactor.gama_media[4]) / reactor.R_inter[4]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3426};
  data->localData[0]->realVars[1228] /* reactor.mdot_e_ext[4] variable */ = DIVISION_SIM(data->localData[0]->realVars[1085] /* reactor.gama_ext[4] variable */ - data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */,data->localData[0]->realVars[836] /* reactor.R_inter[4] variable */,"reactor.R_inter[4]",equationIndexes);
  TRACE_POP
}

void residualFunc3435(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3435};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3421(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3422(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3423(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3424(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3425(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3426(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1228] /* reactor.mdot_e_ext[4] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */),"reactor.A_cs * reactor.gama_media[4]",equationIndexes)) - data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3435(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3435(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[4] */
  sysData->nominal[i] = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3435(sysData);
}

void getIterationVarsNLS3435(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
}


/* inner equations */

/*
equation index: 3400
type: SIMPLE_ASSIGN
reactor.Re_vap[5] = abs(2.0 * reactor.gama_media[5] * reactor.v_vap[5] * reactor.dp / (3.0 * reactor.mu_vap[5] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3400};
  data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */) * ((data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1330] /* reactor.mu_vap[5] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[5] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3401
type: SIMPLE_ASSIGN
reactor.frict[5] = if reactor.Re_vap[5] > 1.0 then 172.0 / reactor.Re_vap[5] + 4.36 / reactor.Re_vap[5] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3401};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */, 1.0, 49, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */,"reactor.Re_vap[5]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[5] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1046] /* reactor.frict[5] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3402
type: SIMPLE_ASSIGN
reactor.Dp[5] = 0.1666666666666667 * reactor.frict[5] * reactor.gama_media[5] * reactor.v_vap[5] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3402};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
  data->localData[0]->realVars[687] /* reactor.Dp[5] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1046] /* reactor.frict[5] variable */) * ((data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3403
type: SIMPLE_ASSIGN
reactor.Pext[5] = if reactor.v_vap[5] > 0.0 then reactor.Psat_theo - reactor.Dp[5] else reactor.Psat_theo + reactor.Dp[5]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3403};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */, 0.0, 48, Greater);
  data->localData[0]->realVars[782] /* reactor.Pext[5] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[687] /* reactor.Dp[5] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[687] /* reactor.Dp[5] variable */);
  TRACE_POP
}
/*
equation index: 3404
type: SIMPLE_ASSIGN
reactor.gama_ext[5] = 0.01801 * reactor.Pext[5] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3404};
  data->localData[0]->realVars[1086] /* reactor.gama_ext[5] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[782] /* reactor.Pext[5] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3405
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[5] = (reactor.gama_ext[5] - reactor.gama_media[5]) / reactor.R_inter[5]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3405};
  data->localData[0]->realVars[1229] /* reactor.mdot_e_ext[5] variable */ = DIVISION_SIM(data->localData[0]->realVars[1086] /* reactor.gama_ext[5] variable */ - data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */,data->localData[0]->realVars[837] /* reactor.R_inter[5] variable */,"reactor.R_inter[5]",equationIndexes);
  TRACE_POP
}

void residualFunc3414(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3414};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3400(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3401(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3402(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3403(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3404(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3405(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1229] /* reactor.mdot_e_ext[5] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */),"reactor.A_cs * reactor.gama_media[5]",equationIndexes)) - data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3414(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3414(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[5] */
  sysData->nominal[i] = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3414(sysData);
}

void getIterationVarsNLS3414(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
}


/* inner equations */

/*
equation index: 3379
type: SIMPLE_ASSIGN
reactor.Re_vap[6] = abs(2.0 * reactor.gama_media[6] * reactor.v_vap[6] * reactor.dp / (3.0 * reactor.mu_vap[6] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3379};
  data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */) * ((data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1331] /* reactor.mu_vap[6] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[6] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3380
type: SIMPLE_ASSIGN
reactor.frict[6] = if reactor.Re_vap[6] > 1.0 then 172.0 / reactor.Re_vap[6] + 4.36 / reactor.Re_vap[6] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3380};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */, 1.0, 51, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */,"reactor.Re_vap[6]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[6] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1047] /* reactor.frict[6] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3381
type: SIMPLE_ASSIGN
reactor.Dp[6] = 0.1666666666666667 * reactor.frict[6] * reactor.gama_media[6] * reactor.v_vap[6] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3381};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
  data->localData[0]->realVars[688] /* reactor.Dp[6] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1047] /* reactor.frict[6] variable */) * ((data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3382
type: SIMPLE_ASSIGN
reactor.Pext[6] = if reactor.v_vap[6] > 0.0 then reactor.Psat_theo - reactor.Dp[6] else reactor.Psat_theo + reactor.Dp[6]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3382};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */, 0.0, 50, Greater);
  data->localData[0]->realVars[783] /* reactor.Pext[6] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[688] /* reactor.Dp[6] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[688] /* reactor.Dp[6] variable */);
  TRACE_POP
}
/*
equation index: 3383
type: SIMPLE_ASSIGN
reactor.gama_ext[6] = 0.01801 * reactor.Pext[6] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3383};
  data->localData[0]->realVars[1087] /* reactor.gama_ext[6] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[783] /* reactor.Pext[6] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3384
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[6] = (reactor.gama_ext[6] - reactor.gama_media[6]) / reactor.R_inter[6]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3384};
  data->localData[0]->realVars[1230] /* reactor.mdot_e_ext[6] variable */ = DIVISION_SIM(data->localData[0]->realVars[1087] /* reactor.gama_ext[6] variable */ - data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */,data->localData[0]->realVars[838] /* reactor.R_inter[6] variable */,"reactor.R_inter[6]",equationIndexes);
  TRACE_POP
}

void residualFunc3393(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3393};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3379(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3380(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3381(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3382(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3383(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3384(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1230] /* reactor.mdot_e_ext[6] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */),"reactor.A_cs * reactor.gama_media[6]",equationIndexes)) - data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3393(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3393(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[6] */
  sysData->nominal[i] = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3393(sysData);
}

void getIterationVarsNLS3393(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
}


/* inner equations */

/*
equation index: 3358
type: SIMPLE_ASSIGN
reactor.Re_vap[7] = abs(2.0 * reactor.gama_media[7] * reactor.v_vap[7] * reactor.dp / (3.0 * reactor.mu_vap[7] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3358};
  data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */) * ((data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1332] /* reactor.mu_vap[7] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[7] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3359
type: SIMPLE_ASSIGN
reactor.frict[7] = if reactor.Re_vap[7] > 1.0 then 172.0 / reactor.Re_vap[7] + 4.36 / reactor.Re_vap[7] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3359};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */, 1.0, 53, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */,"reactor.Re_vap[7]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[7] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1048] /* reactor.frict[7] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3360
type: SIMPLE_ASSIGN
reactor.Dp[7] = 0.1666666666666667 * reactor.frict[7] * reactor.gama_media[7] * reactor.v_vap[7] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3360};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
  data->localData[0]->realVars[689] /* reactor.Dp[7] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1048] /* reactor.frict[7] variable */) * ((data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3361
type: SIMPLE_ASSIGN
reactor.Pext[7] = if reactor.v_vap[7] > 0.0 then reactor.Psat_theo - reactor.Dp[7] else reactor.Psat_theo + reactor.Dp[7]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3361};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */, 0.0, 52, Greater);
  data->localData[0]->realVars[784] /* reactor.Pext[7] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[689] /* reactor.Dp[7] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[689] /* reactor.Dp[7] variable */);
  TRACE_POP
}
/*
equation index: 3362
type: SIMPLE_ASSIGN
reactor.gama_ext[7] = 0.01801 * reactor.Pext[7] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3362};
  data->localData[0]->realVars[1088] /* reactor.gama_ext[7] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[784] /* reactor.Pext[7] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3363
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[7] = (reactor.gama_ext[7] - reactor.gama_media[7]) / reactor.R_inter[7]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3363};
  data->localData[0]->realVars[1231] /* reactor.mdot_e_ext[7] variable */ = DIVISION_SIM(data->localData[0]->realVars[1088] /* reactor.gama_ext[7] variable */ - data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */,data->localData[0]->realVars[839] /* reactor.R_inter[7] variable */,"reactor.R_inter[7]",equationIndexes);
  TRACE_POP
}

void residualFunc3372(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3372};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3358(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3359(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3360(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3361(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3362(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3363(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1231] /* reactor.mdot_e_ext[7] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */),"reactor.A_cs * reactor.gama_media[7]",equationIndexes)) - data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3372(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3372(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[7] */
  sysData->nominal[i] = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3372(sysData);
}

void getIterationVarsNLS3372(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
}


/* inner equations */

/*
equation index: 3337
type: SIMPLE_ASSIGN
reactor.Re_vap[8] = abs(2.0 * reactor.gama_media[8] * reactor.v_vap[8] * reactor.dp / (3.0 * reactor.mu_vap[8] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3337};
  data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */) * ((data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1333] /* reactor.mu_vap[8] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[8] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3338
type: SIMPLE_ASSIGN
reactor.frict[8] = if reactor.Re_vap[8] > 1.0 then 172.0 / reactor.Re_vap[8] + 4.36 / reactor.Re_vap[8] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3338};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */, 1.0, 54, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */,"reactor.Re_vap[8]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[8] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1049] /* reactor.frict[8] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3339
type: SIMPLE_ASSIGN
reactor.Dp[8] = 0.1666666666666667 * reactor.frict[8] * reactor.gama_media[8] * reactor.v_vap[8] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3339};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
  data->localData[0]->realVars[690] /* reactor.Dp[8] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1049] /* reactor.frict[8] variable */) * ((data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3340
type: SIMPLE_ASSIGN
reactor.Pext[8] = if reactor.v_vap[8] > 0.0 then reactor.Psat_theo - reactor.Dp[8] else reactor.Psat_theo + reactor.Dp[8]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3340};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */, 0.0, 55, Greater);
  data->localData[0]->realVars[785] /* reactor.Pext[8] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[690] /* reactor.Dp[8] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[690] /* reactor.Dp[8] variable */);
  TRACE_POP
}
/*
equation index: 3341
type: SIMPLE_ASSIGN
reactor.gama_ext[8] = 0.01801 * reactor.Pext[8] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3341};
  data->localData[0]->realVars[1089] /* reactor.gama_ext[8] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[785] /* reactor.Pext[8] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3342
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[8] = (reactor.gama_ext[8] - reactor.gama_media[8]) / reactor.R_inter[8]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3342};
  data->localData[0]->realVars[1232] /* reactor.mdot_e_ext[8] variable */ = DIVISION_SIM(data->localData[0]->realVars[1089] /* reactor.gama_ext[8] variable */ - data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */,data->localData[0]->realVars[840] /* reactor.R_inter[8] variable */,"reactor.R_inter[8]",equationIndexes);
  TRACE_POP
}

void residualFunc3351(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3351};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3337(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3338(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3339(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3340(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3341(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3342(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1232] /* reactor.mdot_e_ext[8] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */),"reactor.A_cs * reactor.gama_media[8]",equationIndexes)) - data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3351(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3351(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[8] */
  sysData->nominal[i] = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3351(sysData);
}

void getIterationVarsNLS3351(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
}


/* inner equations */

/*
equation index: 3316
type: SIMPLE_ASSIGN
reactor.Re_vap[9] = abs(2.0 * reactor.gama_media[9] * reactor.v_vap[9] * reactor.dp / (3.0 * reactor.mu_vap[9] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3316};
  data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */) * ((data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1334] /* reactor.mu_vap[9] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[9] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3317
type: SIMPLE_ASSIGN
reactor.frict[9] = if reactor.Re_vap[9] > 1.0 then 172.0 / reactor.Re_vap[9] + 4.36 / reactor.Re_vap[9] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3317};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */, 1.0, 56, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */,"reactor.Re_vap[9]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[9] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1050] /* reactor.frict[9] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3318
type: SIMPLE_ASSIGN
reactor.Dp[9] = 0.1666666666666667 * reactor.frict[9] * reactor.gama_media[9] * reactor.v_vap[9] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3318};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
  data->localData[0]->realVars[691] /* reactor.Dp[9] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1050] /* reactor.frict[9] variable */) * ((data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3319
type: SIMPLE_ASSIGN
reactor.Pext[9] = if reactor.v_vap[9] > 0.0 then reactor.Psat_theo - reactor.Dp[9] else reactor.Psat_theo + reactor.Dp[9]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3319};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */, 0.0, 57, Greater);
  data->localData[0]->realVars[786] /* reactor.Pext[9] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[691] /* reactor.Dp[9] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[691] /* reactor.Dp[9] variable */);
  TRACE_POP
}
/*
equation index: 3320
type: SIMPLE_ASSIGN
reactor.gama_ext[9] = 0.01801 * reactor.Pext[9] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3320};
  data->localData[0]->realVars[1090] /* reactor.gama_ext[9] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[786] /* reactor.Pext[9] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3321
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[9] = (reactor.gama_ext[9] - reactor.gama_media[9]) / reactor.R_inter[9]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3321};
  data->localData[0]->realVars[1233] /* reactor.mdot_e_ext[9] variable */ = DIVISION_SIM(data->localData[0]->realVars[1090] /* reactor.gama_ext[9] variable */ - data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */,data->localData[0]->realVars[841] /* reactor.R_inter[9] variable */,"reactor.R_inter[9]",equationIndexes);
  TRACE_POP
}

void residualFunc3330(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3330};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3316(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3317(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3318(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3319(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3320(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3321(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1233] /* reactor.mdot_e_ext[9] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */),"reactor.A_cs * reactor.gama_media[9]",equationIndexes)) - data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3330(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3330(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[9] */
  sysData->nominal[i] = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3330(sysData);
}

void getIterationVarsNLS3330(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
}


/* inner equations */

/*
equation index: 3295
type: SIMPLE_ASSIGN
reactor.Re_vap[10] = abs(2.0 * reactor.gama_media[10] * reactor.v_vap[10] * reactor.dp / (3.0 * reactor.mu_vap[10] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3295};
  data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */) * ((data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1335] /* reactor.mu_vap[10] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[10] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3296
type: SIMPLE_ASSIGN
reactor.frict[10] = if reactor.Re_vap[10] > 1.0 then 172.0 / reactor.Re_vap[10] + 4.36 / reactor.Re_vap[10] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3296};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */, 1.0, 58, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */,"reactor.Re_vap[10]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[10] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1051] /* reactor.frict[10] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3297
type: SIMPLE_ASSIGN
reactor.Dp[10] = 0.1666666666666667 * reactor.frict[10] * reactor.gama_media[10] * reactor.v_vap[10] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3297};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
  data->localData[0]->realVars[692] /* reactor.Dp[10] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1051] /* reactor.frict[10] variable */) * ((data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3298
type: SIMPLE_ASSIGN
reactor.Pext[10] = if reactor.v_vap[10] > 0.0 then reactor.Psat_theo - reactor.Dp[10] else reactor.Psat_theo + reactor.Dp[10]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3298};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */, 0.0, 59, Greater);
  data->localData[0]->realVars[787] /* reactor.Pext[10] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[692] /* reactor.Dp[10] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[692] /* reactor.Dp[10] variable */);
  TRACE_POP
}
/*
equation index: 3299
type: SIMPLE_ASSIGN
reactor.gama_ext[10] = 0.01801 * reactor.Pext[10] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3299};
  data->localData[0]->realVars[1091] /* reactor.gama_ext[10] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[787] /* reactor.Pext[10] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3300
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[10] = (reactor.gama_ext[10] - reactor.gama_media[10]) / reactor.R_inter[10]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3300};
  data->localData[0]->realVars[1234] /* reactor.mdot_e_ext[10] variable */ = DIVISION_SIM(data->localData[0]->realVars[1091] /* reactor.gama_ext[10] variable */ - data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */,data->localData[0]->realVars[842] /* reactor.R_inter[10] variable */,"reactor.R_inter[10]",equationIndexes);
  TRACE_POP
}

void residualFunc3309(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3309};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3295(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3296(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3297(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3298(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3299(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3300(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1234] /* reactor.mdot_e_ext[10] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */),"reactor.A_cs * reactor.gama_media[10]",equationIndexes)) - data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3309(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3309(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[10] */
  sysData->nominal[i] = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3309(sysData);
}

void getIterationVarsNLS3309(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
}


/* inner equations */

/*
equation index: 3274
type: SIMPLE_ASSIGN
reactor.Re_vap[11] = abs(2.0 * reactor.gama_media[11] * reactor.v_vap[11] * reactor.dp / (3.0 * reactor.mu_vap[11] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3274};
  data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */) * ((data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1336] /* reactor.mu_vap[11] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[11] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3275
type: SIMPLE_ASSIGN
reactor.frict[11] = if reactor.Re_vap[11] > 1.0 then 172.0 / reactor.Re_vap[11] + 4.36 / reactor.Re_vap[11] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3275};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */, 1.0, 60, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */,"reactor.Re_vap[11]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[11] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1052] /* reactor.frict[11] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3276
type: SIMPLE_ASSIGN
reactor.Dp[11] = 0.1666666666666667 * reactor.frict[11] * reactor.gama_media[11] * reactor.v_vap[11] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3276};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
  data->localData[0]->realVars[693] /* reactor.Dp[11] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1052] /* reactor.frict[11] variable */) * ((data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3277
type: SIMPLE_ASSIGN
reactor.Pext[11] = if reactor.v_vap[11] > 0.0 then reactor.Psat_theo - reactor.Dp[11] else reactor.Psat_theo + reactor.Dp[11]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3277};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */, 0.0, 61, Greater);
  data->localData[0]->realVars[788] /* reactor.Pext[11] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[693] /* reactor.Dp[11] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[693] /* reactor.Dp[11] variable */);
  TRACE_POP
}
/*
equation index: 3278
type: SIMPLE_ASSIGN
reactor.gama_ext[11] = 0.01801 * reactor.Pext[11] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3278};
  data->localData[0]->realVars[1092] /* reactor.gama_ext[11] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[788] /* reactor.Pext[11] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3279
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[11] = (reactor.gama_ext[11] - reactor.gama_media[11]) / reactor.R_inter[11]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3279};
  data->localData[0]->realVars[1235] /* reactor.mdot_e_ext[11] variable */ = DIVISION_SIM(data->localData[0]->realVars[1092] /* reactor.gama_ext[11] variable */ - data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */,data->localData[0]->realVars[843] /* reactor.R_inter[11] variable */,"reactor.R_inter[11]",equationIndexes);
  TRACE_POP
}

void residualFunc3288(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3288};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3274(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3275(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3276(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3277(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3278(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3279(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1235] /* reactor.mdot_e_ext[11] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */),"reactor.A_cs * reactor.gama_media[11]",equationIndexes)) - data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3288(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3288(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[11] */
  sysData->nominal[i] = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3288(sysData);
}

void getIterationVarsNLS3288(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
}


/* inner equations */

/*
equation index: 3253
type: SIMPLE_ASSIGN
reactor.Re_vap[12] = abs(2.0 * reactor.gama_media[12] * reactor.v_vap[12] * reactor.dp / (3.0 * reactor.mu_vap[12] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3253};
  data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */) * ((data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1337] /* reactor.mu_vap[12] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[12] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3254
type: SIMPLE_ASSIGN
reactor.frict[12] = if reactor.Re_vap[12] > 1.0 then 172.0 / reactor.Re_vap[12] + 4.36 / reactor.Re_vap[12] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3254};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */, 1.0, 63, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */,"reactor.Re_vap[12]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[12] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1053] /* reactor.frict[12] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3255
type: SIMPLE_ASSIGN
reactor.Dp[12] = 0.1666666666666667 * reactor.frict[12] * reactor.gama_media[12] * reactor.v_vap[12] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3255};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
  data->localData[0]->realVars[694] /* reactor.Dp[12] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1053] /* reactor.frict[12] variable */) * ((data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3256
type: SIMPLE_ASSIGN
reactor.Pext[12] = if reactor.v_vap[12] > 0.0 then reactor.Psat_theo - reactor.Dp[12] else reactor.Psat_theo + reactor.Dp[12]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3256};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */, 0.0, 62, Greater);
  data->localData[0]->realVars[789] /* reactor.Pext[12] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[694] /* reactor.Dp[12] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[694] /* reactor.Dp[12] variable */);
  TRACE_POP
}
/*
equation index: 3257
type: SIMPLE_ASSIGN
reactor.gama_ext[12] = 0.01801 * reactor.Pext[12] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3257};
  data->localData[0]->realVars[1093] /* reactor.gama_ext[12] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[789] /* reactor.Pext[12] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3258
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[12] = (reactor.gama_ext[12] - reactor.gama_media[12]) / reactor.R_inter[12]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3258};
  data->localData[0]->realVars[1236] /* reactor.mdot_e_ext[12] variable */ = DIVISION_SIM(data->localData[0]->realVars[1093] /* reactor.gama_ext[12] variable */ - data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */,data->localData[0]->realVars[844] /* reactor.R_inter[12] variable */,"reactor.R_inter[12]",equationIndexes);
  TRACE_POP
}

void residualFunc3267(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3267};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3253(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3254(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3255(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3256(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3257(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3258(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1236] /* reactor.mdot_e_ext[12] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */),"reactor.A_cs * reactor.gama_media[12]",equationIndexes)) - data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3267(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3267(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[12] */
  sysData->nominal[i] = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3267(sysData);
}

void getIterationVarsNLS3267(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
}


/* inner equations */

/*
equation index: 3232
type: SIMPLE_ASSIGN
reactor.Re_vap[13] = abs(2.0 * reactor.gama_media[13] * reactor.v_vap[13] * reactor.dp / (3.0 * reactor.mu_vap[13] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3232};
  data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */) * ((data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1338] /* reactor.mu_vap[13] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[13] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3233
type: SIMPLE_ASSIGN
reactor.frict[13] = if reactor.Re_vap[13] > 1.0 then 172.0 / reactor.Re_vap[13] + 4.36 / reactor.Re_vap[13] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3233};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */, 1.0, 65, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */,"reactor.Re_vap[13]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[13] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1054] /* reactor.frict[13] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3234
type: SIMPLE_ASSIGN
reactor.Dp[13] = 0.1666666666666667 * reactor.frict[13] * reactor.gama_media[13] * reactor.v_vap[13] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3234};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
  data->localData[0]->realVars[695] /* reactor.Dp[13] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1054] /* reactor.frict[13] variable */) * ((data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3235
type: SIMPLE_ASSIGN
reactor.Pext[13] = if reactor.v_vap[13] > 0.0 then reactor.Psat_theo - reactor.Dp[13] else reactor.Psat_theo + reactor.Dp[13]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3235};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */, 0.0, 64, Greater);
  data->localData[0]->realVars[790] /* reactor.Pext[13] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[695] /* reactor.Dp[13] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[695] /* reactor.Dp[13] variable */);
  TRACE_POP
}
/*
equation index: 3236
type: SIMPLE_ASSIGN
reactor.gama_ext[13] = 0.01801 * reactor.Pext[13] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3236};
  data->localData[0]->realVars[1094] /* reactor.gama_ext[13] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[790] /* reactor.Pext[13] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3237
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[13] = (reactor.gama_ext[13] - reactor.gama_media[13]) / reactor.R_inter[13]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3237};
  data->localData[0]->realVars[1237] /* reactor.mdot_e_ext[13] variable */ = DIVISION_SIM(data->localData[0]->realVars[1094] /* reactor.gama_ext[13] variable */ - data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */,data->localData[0]->realVars[845] /* reactor.R_inter[13] variable */,"reactor.R_inter[13]",equationIndexes);
  TRACE_POP
}

void residualFunc3246(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3246};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3232(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3233(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3234(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3235(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3236(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3237(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1237] /* reactor.mdot_e_ext[13] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */),"reactor.A_cs * reactor.gama_media[13]",equationIndexes)) - data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3246(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3246(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[13] */
  sysData->nominal[i] = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3246(sysData);
}

void getIterationVarsNLS3246(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
}


/* inner equations */

/*
equation index: 3211
type: SIMPLE_ASSIGN
reactor.Re_vap[14] = abs(2.0 * reactor.gama_media[14] * reactor.v_vap[14] * reactor.dp / (3.0 * reactor.mu_vap[14] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3211};
  data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */) * ((data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1339] /* reactor.mu_vap[14] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[14] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3212
type: SIMPLE_ASSIGN
reactor.frict[14] = if reactor.Re_vap[14] > 1.0 then 172.0 / reactor.Re_vap[14] + 4.36 / reactor.Re_vap[14] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3212};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */, 1.0, 67, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */,"reactor.Re_vap[14]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[14] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1055] /* reactor.frict[14] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3213
type: SIMPLE_ASSIGN
reactor.Dp[14] = 0.1666666666666667 * reactor.frict[14] * reactor.gama_media[14] * reactor.v_vap[14] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3213};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
  data->localData[0]->realVars[696] /* reactor.Dp[14] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1055] /* reactor.frict[14] variable */) * ((data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3214
type: SIMPLE_ASSIGN
reactor.Pext[14] = if reactor.v_vap[14] > 0.0 then reactor.Psat_theo - reactor.Dp[14] else reactor.Psat_theo + reactor.Dp[14]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3214};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */, 0.0, 66, Greater);
  data->localData[0]->realVars[791] /* reactor.Pext[14] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[696] /* reactor.Dp[14] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[696] /* reactor.Dp[14] variable */);
  TRACE_POP
}
/*
equation index: 3215
type: SIMPLE_ASSIGN
reactor.gama_ext[14] = 0.01801 * reactor.Pext[14] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3215};
  data->localData[0]->realVars[1095] /* reactor.gama_ext[14] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[791] /* reactor.Pext[14] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3216
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[14] = (reactor.gama_ext[14] - reactor.gama_media[14]) / reactor.R_inter[14]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3216};
  data->localData[0]->realVars[1238] /* reactor.mdot_e_ext[14] variable */ = DIVISION_SIM(data->localData[0]->realVars[1095] /* reactor.gama_ext[14] variable */ - data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */,data->localData[0]->realVars[846] /* reactor.R_inter[14] variable */,"reactor.R_inter[14]",equationIndexes);
  TRACE_POP
}

void residualFunc3225(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3225};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3211(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3212(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3213(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3214(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3215(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3216(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1238] /* reactor.mdot_e_ext[14] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */),"reactor.A_cs * reactor.gama_media[14]",equationIndexes)) - data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3225(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3225(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[14] */
  sysData->nominal[i] = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3225(sysData);
}

void getIterationVarsNLS3225(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
}


/* inner equations */

/*
equation index: 3190
type: SIMPLE_ASSIGN
reactor.Re_vap[15] = abs(2.0 * reactor.gama_media[15] * reactor.v_vap[15] * reactor.dp / (3.0 * reactor.mu_vap[15] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3190};
  data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */) * ((data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1340] /* reactor.mu_vap[15] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[15] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3191
type: SIMPLE_ASSIGN
reactor.frict[15] = if reactor.Re_vap[15] > 1.0 then 172.0 / reactor.Re_vap[15] + 4.36 / reactor.Re_vap[15] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3191};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */, 1.0, 69, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */,"reactor.Re_vap[15]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[15] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1056] /* reactor.frict[15] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3192
type: SIMPLE_ASSIGN
reactor.Dp[15] = 0.1666666666666667 * reactor.frict[15] * reactor.gama_media[15] * reactor.v_vap[15] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3192};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
  data->localData[0]->realVars[697] /* reactor.Dp[15] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1056] /* reactor.frict[15] variable */) * ((data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3193
type: SIMPLE_ASSIGN
reactor.Pext[15] = if reactor.v_vap[15] > 0.0 then reactor.Psat_theo - reactor.Dp[15] else reactor.Psat_theo + reactor.Dp[15]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3193};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */, 0.0, 68, Greater);
  data->localData[0]->realVars[792] /* reactor.Pext[15] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[697] /* reactor.Dp[15] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[697] /* reactor.Dp[15] variable */);
  TRACE_POP
}
/*
equation index: 3194
type: SIMPLE_ASSIGN
reactor.gama_ext[15] = 0.01801 * reactor.Pext[15] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3194};
  data->localData[0]->realVars[1096] /* reactor.gama_ext[15] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[792] /* reactor.Pext[15] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3195
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[15] = (reactor.gama_ext[15] - reactor.gama_media[15]) / reactor.R_inter[15]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3195};
  data->localData[0]->realVars[1239] /* reactor.mdot_e_ext[15] variable */ = DIVISION_SIM(data->localData[0]->realVars[1096] /* reactor.gama_ext[15] variable */ - data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */,data->localData[0]->realVars[847] /* reactor.R_inter[15] variable */,"reactor.R_inter[15]",equationIndexes);
  TRACE_POP
}

void residualFunc3204(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3204};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3190(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3191(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3192(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3193(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3194(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3195(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1239] /* reactor.mdot_e_ext[15] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */),"reactor.A_cs * reactor.gama_media[15]",equationIndexes)) - data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3204(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3204(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[15] */
  sysData->nominal[i] = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3204(sysData);
}

void getIterationVarsNLS3204(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
}


/* inner equations */

/*
equation index: 3169
type: SIMPLE_ASSIGN
reactor.Re_vap[16] = abs(2.0 * reactor.gama_media[16] * reactor.v_vap[16] * reactor.dp / (3.0 * reactor.mu_vap[16] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3169};
  data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */) * ((data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1341] /* reactor.mu_vap[16] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[16] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3170
type: SIMPLE_ASSIGN
reactor.frict[16] = if reactor.Re_vap[16] > 1.0 then 172.0 / reactor.Re_vap[16] + 4.36 / reactor.Re_vap[16] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3170};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */, 1.0, 71, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */,"reactor.Re_vap[16]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[16] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1057] /* reactor.frict[16] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3171
type: SIMPLE_ASSIGN
reactor.Dp[16] = 0.1666666666666667 * reactor.frict[16] * reactor.gama_media[16] * reactor.v_vap[16] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3171};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
  data->localData[0]->realVars[698] /* reactor.Dp[16] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1057] /* reactor.frict[16] variable */) * ((data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3172
type: SIMPLE_ASSIGN
reactor.Pext[16] = if reactor.v_vap[16] > 0.0 then reactor.Psat_theo - reactor.Dp[16] else reactor.Psat_theo + reactor.Dp[16]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3172};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */, 0.0, 70, Greater);
  data->localData[0]->realVars[793] /* reactor.Pext[16] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[698] /* reactor.Dp[16] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[698] /* reactor.Dp[16] variable */);
  TRACE_POP
}
/*
equation index: 3173
type: SIMPLE_ASSIGN
reactor.gama_ext[16] = 0.01801 * reactor.Pext[16] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3173};
  data->localData[0]->realVars[1097] /* reactor.gama_ext[16] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[793] /* reactor.Pext[16] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3174
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[16] = (reactor.gama_ext[16] - reactor.gama_media[16]) / reactor.R_inter[16]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3174};
  data->localData[0]->realVars[1240] /* reactor.mdot_e_ext[16] variable */ = DIVISION_SIM(data->localData[0]->realVars[1097] /* reactor.gama_ext[16] variable */ - data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */,data->localData[0]->realVars[848] /* reactor.R_inter[16] variable */,"reactor.R_inter[16]",equationIndexes);
  TRACE_POP
}

void residualFunc3183(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3183};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3169(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3170(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3171(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3172(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3173(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3174(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1240] /* reactor.mdot_e_ext[16] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */),"reactor.A_cs * reactor.gama_media[16]",equationIndexes)) - data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3183(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3183(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[16] */
  sysData->nominal[i] = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3183(sysData);
}

void getIterationVarsNLS3183(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
}


/* inner equations */

/*
equation index: 3148
type: SIMPLE_ASSIGN
reactor.Re_vap[17] = abs(2.0 * reactor.gama_media[17] * reactor.v_vap[17] * reactor.dp / (3.0 * reactor.mu_vap[17] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3148};
  data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */) * ((data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1342] /* reactor.mu_vap[17] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[17] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3149
type: SIMPLE_ASSIGN
reactor.frict[17] = if reactor.Re_vap[17] > 1.0 then 172.0 / reactor.Re_vap[17] + 4.36 / reactor.Re_vap[17] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3149};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */, 1.0, 73, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */,"reactor.Re_vap[17]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[17] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1058] /* reactor.frict[17] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3150
type: SIMPLE_ASSIGN
reactor.Dp[17] = 0.1666666666666667 * reactor.frict[17] * reactor.gama_media[17] * reactor.v_vap[17] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3150};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
  data->localData[0]->realVars[699] /* reactor.Dp[17] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1058] /* reactor.frict[17] variable */) * ((data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3151
type: SIMPLE_ASSIGN
reactor.Pext[17] = if reactor.v_vap[17] > 0.0 then reactor.Psat_theo - reactor.Dp[17] else reactor.Psat_theo + reactor.Dp[17]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3151};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */, 0.0, 72, Greater);
  data->localData[0]->realVars[794] /* reactor.Pext[17] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[699] /* reactor.Dp[17] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[699] /* reactor.Dp[17] variable */);
  TRACE_POP
}
/*
equation index: 3152
type: SIMPLE_ASSIGN
reactor.gama_ext[17] = 0.01801 * reactor.Pext[17] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3152};
  data->localData[0]->realVars[1098] /* reactor.gama_ext[17] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[794] /* reactor.Pext[17] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3153
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[17] = (reactor.gama_ext[17] - reactor.gama_media[17]) / reactor.R_inter[17]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3153};
  data->localData[0]->realVars[1241] /* reactor.mdot_e_ext[17] variable */ = DIVISION_SIM(data->localData[0]->realVars[1098] /* reactor.gama_ext[17] variable */ - data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */,data->localData[0]->realVars[849] /* reactor.R_inter[17] variable */,"reactor.R_inter[17]",equationIndexes);
  TRACE_POP
}

void residualFunc3162(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3162};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3148(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3149(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3150(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3151(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3152(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3153(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1241] /* reactor.mdot_e_ext[17] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */),"reactor.A_cs * reactor.gama_media[17]",equationIndexes)) - data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3162(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3162(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[17] */
  sysData->nominal[i] = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3162(sysData);
}

void getIterationVarsNLS3162(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
}


/* inner equations */

/*
equation index: 3127
type: SIMPLE_ASSIGN
reactor.Re_vap[18] = abs(2.0 * reactor.gama_media[18] * reactor.v_vap[18] * reactor.dp / (3.0 * reactor.mu_vap[18] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3127};
  data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */) * ((data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1343] /* reactor.mu_vap[18] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[18] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3128
type: SIMPLE_ASSIGN
reactor.frict[18] = if reactor.Re_vap[18] > 1.0 then 172.0 / reactor.Re_vap[18] + 4.36 / reactor.Re_vap[18] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3128};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */, 1.0, 75, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */,"reactor.Re_vap[18]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[18] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1059] /* reactor.frict[18] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3129
type: SIMPLE_ASSIGN
reactor.Dp[18] = 0.1666666666666667 * reactor.frict[18] * reactor.gama_media[18] * reactor.v_vap[18] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3129};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
  data->localData[0]->realVars[700] /* reactor.Dp[18] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1059] /* reactor.frict[18] variable */) * ((data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3130
type: SIMPLE_ASSIGN
reactor.Pext[18] = if reactor.v_vap[18] > 0.0 then reactor.Psat_theo - reactor.Dp[18] else reactor.Psat_theo + reactor.Dp[18]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3130};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */, 0.0, 74, Greater);
  data->localData[0]->realVars[795] /* reactor.Pext[18] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[700] /* reactor.Dp[18] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[700] /* reactor.Dp[18] variable */);
  TRACE_POP
}
/*
equation index: 3131
type: SIMPLE_ASSIGN
reactor.gama_ext[18] = 0.01801 * reactor.Pext[18] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3131};
  data->localData[0]->realVars[1099] /* reactor.gama_ext[18] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[795] /* reactor.Pext[18] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3132
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[18] = (reactor.gama_ext[18] - reactor.gama_media[18]) / reactor.R_inter[18]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3132};
  data->localData[0]->realVars[1242] /* reactor.mdot_e_ext[18] variable */ = DIVISION_SIM(data->localData[0]->realVars[1099] /* reactor.gama_ext[18] variable */ - data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */,data->localData[0]->realVars[850] /* reactor.R_inter[18] variable */,"reactor.R_inter[18]",equationIndexes);
  TRACE_POP
}

void residualFunc3141(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3141};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3127(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3128(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3129(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3130(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3131(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3132(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1242] /* reactor.mdot_e_ext[18] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */),"reactor.A_cs * reactor.gama_media[18]",equationIndexes)) - data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3141(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3141(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[18] */
  sysData->nominal[i] = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3141(sysData);
}

void getIterationVarsNLS3141(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
}


/* inner equations */

/*
equation index: 3106
type: SIMPLE_ASSIGN
reactor.Re_vap[19] = abs(2.0 * reactor.gama_media[19] * reactor.v_vap[19] * reactor.dp / (3.0 * reactor.mu_vap[19] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3106};
  data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */) * ((data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1344] /* reactor.mu_vap[19] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[19] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3107
type: SIMPLE_ASSIGN
reactor.frict[19] = if reactor.Re_vap[19] > 1.0 then 172.0 / reactor.Re_vap[19] + 4.36 / reactor.Re_vap[19] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3107};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */, 1.0, 77, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */,"reactor.Re_vap[19]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[19] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1060] /* reactor.frict[19] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3108
type: SIMPLE_ASSIGN
reactor.Dp[19] = 0.1666666666666667 * reactor.frict[19] * reactor.gama_media[19] * reactor.v_vap[19] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3108};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
  data->localData[0]->realVars[701] /* reactor.Dp[19] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1060] /* reactor.frict[19] variable */) * ((data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3109
type: SIMPLE_ASSIGN
reactor.Pext[19] = if reactor.v_vap[19] > 0.0 then reactor.Psat_theo - reactor.Dp[19] else reactor.Psat_theo + reactor.Dp[19]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3109};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */, 0.0, 76, Greater);
  data->localData[0]->realVars[796] /* reactor.Pext[19] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[701] /* reactor.Dp[19] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[701] /* reactor.Dp[19] variable */);
  TRACE_POP
}
/*
equation index: 3110
type: SIMPLE_ASSIGN
reactor.gama_ext[19] = 0.01801 * reactor.Pext[19] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3110};
  data->localData[0]->realVars[1100] /* reactor.gama_ext[19] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[796] /* reactor.Pext[19] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3111
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[19] = (reactor.gama_ext[19] - reactor.gama_media[19]) / reactor.R_inter[19]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3111};
  data->localData[0]->realVars[1243] /* reactor.mdot_e_ext[19] variable */ = DIVISION_SIM(data->localData[0]->realVars[1100] /* reactor.gama_ext[19] variable */ - data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */,data->localData[0]->realVars[851] /* reactor.R_inter[19] variable */,"reactor.R_inter[19]",equationIndexes);
  TRACE_POP
}

void residualFunc3120(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3120};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3106(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3107(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3108(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3109(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3110(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3111(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1243] /* reactor.mdot_e_ext[19] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */),"reactor.A_cs * reactor.gama_media[19]",equationIndexes)) - data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3120(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3120(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[19] */
  sysData->nominal[i] = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3120(sysData);
}

void getIterationVarsNLS3120(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
}


/* inner equations */

/*
equation index: 3085
type: SIMPLE_ASSIGN
reactor.Re_vap[20] = abs(2.0 * reactor.gama_media[20] * reactor.v_vap[20] * reactor.dp / (3.0 * reactor.mu_vap[20] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3085};
  data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */) * ((data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1345] /* reactor.mu_vap[20] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[20] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 3086
type: SIMPLE_ASSIGN
reactor.frict[20] = if reactor.Re_vap[20] > 1.0 then 172.0 / reactor.Re_vap[20] + 4.36 / reactor.Re_vap[20] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3086};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */, 1.0, 78, Greater);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */,"reactor.Re_vap[20]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[20] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1061] /* reactor.frict[20] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 3087
type: SIMPLE_ASSIGN
reactor.Dp[20] = 0.1666666666666667 * reactor.frict[20] * reactor.gama_media[20] * reactor.v_vap[20] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3087};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
  data->localData[0]->realVars[702] /* reactor.Dp[20] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1061] /* reactor.frict[20] variable */) * ((data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 3088
type: SIMPLE_ASSIGN
reactor.Pext[20] = if reactor.v_vap[20] > 0.0 then reactor.Psat_theo - reactor.Dp[20] else reactor.Psat_theo + reactor.Dp[20]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3088};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */, 0.0, 79, Greater);
  data->localData[0]->realVars[797] /* reactor.Pext[20] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[702] /* reactor.Dp[20] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[702] /* reactor.Dp[20] variable */);
  TRACE_POP
}
/*
equation index: 3089
type: SIMPLE_ASSIGN
reactor.gama_ext[20] = 0.01801 * reactor.Pext[20] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3089};
  data->localData[0]->realVars[1101] /* reactor.gama_ext[20] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[797] /* reactor.Pext[20] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 3090
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[20] = (reactor.gama_ext[20] - reactor.gama_media[20]) / reactor.R_inter[20]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3090};
  data->localData[0]->realVars[1244] /* reactor.mdot_e_ext[20] variable */ = DIVISION_SIM(data->localData[0]->realVars[1101] /* reactor.gama_ext[20] variable */ - data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */,data->localData[0]->realVars[852] /* reactor.R_inter[20] variable */,"reactor.R_inter[20]",equationIndexes);
  TRACE_POP
}

void residualFunc3099(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,3099};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3085(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3086(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3087(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3088(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3089(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_3090(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1244] /* reactor.mdot_e_ext[20] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */),"reactor.A_cs * reactor.gama_media[20]",equationIndexes)) - data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS3099(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS3099(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[20] */
  sysData->nominal[i] = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS3099(sysData);
}

void getIterationVarsNLS3099(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
}


/* inner equations */

/*
equation index: 2891
type: SIMPLE_ASSIGN
reactor.Re_vap[1] = abs(2.0 * reactor.gama_media[1] * reactor.v_vap[1] * reactor.dp / (3.0 * reactor.mu_vap[1] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2891};
  data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */) * ((data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1326] /* reactor.mu_vap[1] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[1] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2892
type: SIMPLE_ASSIGN
reactor.frict[1] = if reactor.Re_vap[1] > 1.0 then 172.0 / reactor.Re_vap[1] + 4.36 / reactor.Re_vap[1] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2892};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[855] /* reactor.Re_vap[1] variable */,"reactor.Re_vap[1]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[1] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1042] /* reactor.frict[1] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2893
type: SIMPLE_ASSIGN
reactor.Dp[1] = 0.1666666666666667 * reactor.frict[1] * reactor.gama_media[1] * reactor.v_vap[1] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2893};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
  data->localData[0]->realVars[683] /* reactor.Dp[1] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1042] /* reactor.frict[1] variable */) * ((data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2894
type: SIMPLE_ASSIGN
reactor.Pext[1] = if reactor.v_vap[1] > 0.0 then reactor.Psat_theo - reactor.Dp[1] else reactor.Psat_theo + reactor.Dp[1]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2894};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */,0.0);
  data->localData[0]->realVars[778] /* reactor.Pext[1] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[683] /* reactor.Dp[1] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[683] /* reactor.Dp[1] variable */);
  TRACE_POP
}
/*
equation index: 2895
type: SIMPLE_ASSIGN
reactor.gama_ext[1] = 0.01801 * reactor.Pext[1] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2895};
  data->localData[0]->realVars[1082] /* reactor.gama_ext[1] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[778] /* reactor.Pext[1] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2896
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[1] = (reactor.gama_ext[1] - reactor.gama_media[1]) / reactor.R_inter[1]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2896};
  data->localData[0]->realVars[1225] /* reactor.mdot_e_ext[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[1082] /* reactor.gama_ext[1] variable */ - data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */,data->localData[0]->realVars[833] /* reactor.R_inter[1] variable */,"reactor.R_inter[1]",equationIndexes);
  TRACE_POP
}

void residualFunc2905(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2905};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2891(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2892(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2893(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2894(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2895(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2896(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1225] /* reactor.mdot_e_ext[1] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[60] /* reactor.gama_media[1] STATE(1) */),"reactor.A_cs * reactor.gama_media[1]",equationIndexes)) - data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2905(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2905(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[1] */
  sysData->nominal[i] = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2593].attribute /* reactor.v_vap[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2905(sysData);
}

void getIterationVarsNLS2905(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2593] /* reactor.v_vap[1] variable */;
}


/* inner equations */

void residualFunc2728(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2728};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */,data->localData[0]->realVars[2127] /* reactor.psat[1] DUMMY_STATE */,"reactor.psat[1]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[1] / reactor.psat[1]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2067] /* reactor.particle[1].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2728(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2728(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[1] */
  sysData->nominal[i] = data->modelData->realVarsData[2147].attribute /* reactor.pvap[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2147].attribute /* reactor.pvap[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2147].attribute /* reactor.pvap[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2728(sysData);
}

void getIterationVarsNLS2728(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2147] /* reactor.pvap[1] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2708
type: SIMPLE_ASSIGN
reactor.Re_vap[2] = abs(2.0 * reactor.gama_media[2] * reactor.v_vap[2] * reactor.dp / (3.0 * reactor.mu_vap[2] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2708};
  data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */) * ((data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1327] /* reactor.mu_vap[2] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[2] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2709
type: SIMPLE_ASSIGN
reactor.frict[2] = if reactor.Re_vap[2] > 1.0 then 172.0 / reactor.Re_vap[2] + 4.36 / reactor.Re_vap[2] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2709};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[856] /* reactor.Re_vap[2] variable */,"reactor.Re_vap[2]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[2] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1043] /* reactor.frict[2] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2710
type: SIMPLE_ASSIGN
reactor.Dp[2] = 0.1666666666666667 * reactor.frict[2] * reactor.gama_media[2] * reactor.v_vap[2] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2710};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
  data->localData[0]->realVars[684] /* reactor.Dp[2] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1043] /* reactor.frict[2] variable */) * ((data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2711
type: SIMPLE_ASSIGN
reactor.Pext[2] = if reactor.v_vap[2] > 0.0 then reactor.Psat_theo - reactor.Dp[2] else reactor.Psat_theo + reactor.Dp[2]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2711};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */,0.0);
  data->localData[0]->realVars[779] /* reactor.Pext[2] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[684] /* reactor.Dp[2] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[684] /* reactor.Dp[2] variable */);
  TRACE_POP
}
/*
equation index: 2712
type: SIMPLE_ASSIGN
reactor.gama_ext[2] = 0.01801 * reactor.Pext[2] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2712};
  data->localData[0]->realVars[1083] /* reactor.gama_ext[2] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[779] /* reactor.Pext[2] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2713
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[2] = (reactor.gama_ext[2] - reactor.gama_media[2]) / reactor.R_inter[2]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2713};
  data->localData[0]->realVars[1226] /* reactor.mdot_e_ext[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[1083] /* reactor.gama_ext[2] variable */ - data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */,data->localData[0]->realVars[834] /* reactor.R_inter[2] variable */,"reactor.R_inter[2]",equationIndexes);
  TRACE_POP
}

void residualFunc2722(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2722};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2708(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2709(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2710(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2711(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2712(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2713(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1226] /* reactor.mdot_e_ext[2] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[61] /* reactor.gama_media[2] STATE(1) */),"reactor.A_cs * reactor.gama_media[2]",equationIndexes)) - data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2722(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2722(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[2] */
  sysData->nominal[i] = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2594].attribute /* reactor.v_vap[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2722(sysData);
}

void getIterationVarsNLS2722(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2594] /* reactor.v_vap[2] variable */;
}


/* inner equations */

void residualFunc2615(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2615};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */,data->localData[0]->realVars[2128] /* reactor.psat[2] DUMMY_STATE */,"reactor.psat[2]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[2] / reactor.psat[2]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2068] /* reactor.particle[2].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2615(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2615(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[2] */
  sysData->nominal[i] = data->modelData->realVarsData[2148].attribute /* reactor.pvap[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2148].attribute /* reactor.pvap[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2148].attribute /* reactor.pvap[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2615(sysData);
}

void getIterationVarsNLS2615(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2148] /* reactor.pvap[2] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2595
type: SIMPLE_ASSIGN
reactor.Re_vap[3] = abs(2.0 * reactor.gama_media[3] * reactor.v_vap[3] * reactor.dp / (3.0 * reactor.mu_vap[3] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2595};
  data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */) * ((data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1328] /* reactor.mu_vap[3] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[3] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2596
type: SIMPLE_ASSIGN
reactor.frict[3] = if reactor.Re_vap[3] > 1.0 then 172.0 / reactor.Re_vap[3] + 4.36 / reactor.Re_vap[3] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2596};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[857] /* reactor.Re_vap[3] variable */,"reactor.Re_vap[3]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[3] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1044] /* reactor.frict[3] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2597
type: SIMPLE_ASSIGN
reactor.Dp[3] = 0.1666666666666667 * reactor.frict[3] * reactor.gama_media[3] * reactor.v_vap[3] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2597};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
  data->localData[0]->realVars[685] /* reactor.Dp[3] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1044] /* reactor.frict[3] variable */) * ((data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2598
type: SIMPLE_ASSIGN
reactor.Pext[3] = if reactor.v_vap[3] > 0.0 then reactor.Psat_theo - reactor.Dp[3] else reactor.Psat_theo + reactor.Dp[3]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2598};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */,0.0);
  data->localData[0]->realVars[780] /* reactor.Pext[3] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[685] /* reactor.Dp[3] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[685] /* reactor.Dp[3] variable */);
  TRACE_POP
}
/*
equation index: 2599
type: SIMPLE_ASSIGN
reactor.gama_ext[3] = 0.01801 * reactor.Pext[3] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2599};
  data->localData[0]->realVars[1084] /* reactor.gama_ext[3] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[780] /* reactor.Pext[3] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2600
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[3] = (reactor.gama_ext[3] - reactor.gama_media[3]) / reactor.R_inter[3]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2600};
  data->localData[0]->realVars[1227] /* reactor.mdot_e_ext[3] variable */ = DIVISION_SIM(data->localData[0]->realVars[1084] /* reactor.gama_ext[3] variable */ - data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */,data->localData[0]->realVars[835] /* reactor.R_inter[3] variable */,"reactor.R_inter[3]",equationIndexes);
  TRACE_POP
}

void residualFunc2609(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2609};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2595(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2596(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2597(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2598(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2599(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2600(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1227] /* reactor.mdot_e_ext[3] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[62] /* reactor.gama_media[3] STATE(1) */),"reactor.A_cs * reactor.gama_media[3]",equationIndexes)) - data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2609(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2609(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[3] */
  sysData->nominal[i] = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2595].attribute /* reactor.v_vap[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2609(sysData);
}

void getIterationVarsNLS2609(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2595] /* reactor.v_vap[3] variable */;
}


/* inner equations */

void residualFunc2502(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2502};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */,data->localData[0]->realVars[2129] /* reactor.psat[3] DUMMY_STATE */,"reactor.psat[3]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[3] / reactor.psat[3]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2069] /* reactor.particle[3].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2502(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2502(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[3] */
  sysData->nominal[i] = data->modelData->realVarsData[2149].attribute /* reactor.pvap[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2149].attribute /* reactor.pvap[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2149].attribute /* reactor.pvap[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2502(sysData);
}

void getIterationVarsNLS2502(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2149] /* reactor.pvap[3] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2482
type: SIMPLE_ASSIGN
reactor.Re_vap[4] = abs(2.0 * reactor.gama_media[4] * reactor.v_vap[4] * reactor.dp / (3.0 * reactor.mu_vap[4] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2482};
  data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */) * ((data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1329] /* reactor.mu_vap[4] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[4] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2483
type: SIMPLE_ASSIGN
reactor.frict[4] = if reactor.Re_vap[4] > 1.0 then 172.0 / reactor.Re_vap[4] + 4.36 / reactor.Re_vap[4] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2483};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[858] /* reactor.Re_vap[4] variable */,"reactor.Re_vap[4]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[4] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1045] /* reactor.frict[4] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2484
type: SIMPLE_ASSIGN
reactor.Dp[4] = 0.1666666666666667 * reactor.frict[4] * reactor.gama_media[4] * reactor.v_vap[4] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2484};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
  data->localData[0]->realVars[686] /* reactor.Dp[4] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1045] /* reactor.frict[4] variable */) * ((data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2485
type: SIMPLE_ASSIGN
reactor.Pext[4] = if reactor.v_vap[4] > 0.0 then reactor.Psat_theo - reactor.Dp[4] else reactor.Psat_theo + reactor.Dp[4]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2485};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */,0.0);
  data->localData[0]->realVars[781] /* reactor.Pext[4] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[686] /* reactor.Dp[4] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[686] /* reactor.Dp[4] variable */);
  TRACE_POP
}
/*
equation index: 2486
type: SIMPLE_ASSIGN
reactor.gama_ext[4] = 0.01801 * reactor.Pext[4] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2486};
  data->localData[0]->realVars[1085] /* reactor.gama_ext[4] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[781] /* reactor.Pext[4] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2487
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[4] = (reactor.gama_ext[4] - reactor.gama_media[4]) / reactor.R_inter[4]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2487};
  data->localData[0]->realVars[1228] /* reactor.mdot_e_ext[4] variable */ = DIVISION_SIM(data->localData[0]->realVars[1085] /* reactor.gama_ext[4] variable */ - data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */,data->localData[0]->realVars[836] /* reactor.R_inter[4] variable */,"reactor.R_inter[4]",equationIndexes);
  TRACE_POP
}

void residualFunc2496(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2496};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2482(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2483(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2484(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2485(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2486(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2487(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1228] /* reactor.mdot_e_ext[4] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[63] /* reactor.gama_media[4] STATE(1) */),"reactor.A_cs * reactor.gama_media[4]",equationIndexes)) - data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2496(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2496(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[4] */
  sysData->nominal[i] = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2596].attribute /* reactor.v_vap[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2496(sysData);
}

void getIterationVarsNLS2496(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2596] /* reactor.v_vap[4] variable */;
}


/* inner equations */

void residualFunc2389(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2389};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */,data->localData[0]->realVars[2130] /* reactor.psat[4] DUMMY_STATE */,"reactor.psat[4]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[4] / reactor.psat[4]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2070] /* reactor.particle[4].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2389(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2389(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[4] */
  sysData->nominal[i] = data->modelData->realVarsData[2150].attribute /* reactor.pvap[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2150].attribute /* reactor.pvap[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2150].attribute /* reactor.pvap[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2389(sysData);
}

void getIterationVarsNLS2389(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2150] /* reactor.pvap[4] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2369
type: SIMPLE_ASSIGN
reactor.Re_vap[5] = abs(2.0 * reactor.gama_media[5] * reactor.v_vap[5] * reactor.dp / (3.0 * reactor.mu_vap[5] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2369};
  data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */) * ((data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1330] /* reactor.mu_vap[5] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[5] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2370
type: SIMPLE_ASSIGN
reactor.frict[5] = if reactor.Re_vap[5] > 1.0 then 172.0 / reactor.Re_vap[5] + 4.36 / reactor.Re_vap[5] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2370};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[859] /* reactor.Re_vap[5] variable */,"reactor.Re_vap[5]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[5] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1046] /* reactor.frict[5] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2371
type: SIMPLE_ASSIGN
reactor.Dp[5] = 0.1666666666666667 * reactor.frict[5] * reactor.gama_media[5] * reactor.v_vap[5] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2371};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
  data->localData[0]->realVars[687] /* reactor.Dp[5] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1046] /* reactor.frict[5] variable */) * ((data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2372
type: SIMPLE_ASSIGN
reactor.Pext[5] = if reactor.v_vap[5] > 0.0 then reactor.Psat_theo - reactor.Dp[5] else reactor.Psat_theo + reactor.Dp[5]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2372};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */,0.0);
  data->localData[0]->realVars[782] /* reactor.Pext[5] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[687] /* reactor.Dp[5] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[687] /* reactor.Dp[5] variable */);
  TRACE_POP
}
/*
equation index: 2373
type: SIMPLE_ASSIGN
reactor.gama_ext[5] = 0.01801 * reactor.Pext[5] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2373};
  data->localData[0]->realVars[1086] /* reactor.gama_ext[5] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[782] /* reactor.Pext[5] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2374
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[5] = (reactor.gama_ext[5] - reactor.gama_media[5]) / reactor.R_inter[5]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2374};
  data->localData[0]->realVars[1229] /* reactor.mdot_e_ext[5] variable */ = DIVISION_SIM(data->localData[0]->realVars[1086] /* reactor.gama_ext[5] variable */ - data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */,data->localData[0]->realVars[837] /* reactor.R_inter[5] variable */,"reactor.R_inter[5]",equationIndexes);
  TRACE_POP
}

void residualFunc2383(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2383};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2369(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2370(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2371(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2372(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2373(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2374(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1229] /* reactor.mdot_e_ext[5] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[64] /* reactor.gama_media[5] STATE(1) */),"reactor.A_cs * reactor.gama_media[5]",equationIndexes)) - data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2383(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2383(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[5] */
  sysData->nominal[i] = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2597].attribute /* reactor.v_vap[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2383(sysData);
}

void getIterationVarsNLS2383(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2597] /* reactor.v_vap[5] variable */;
}


/* inner equations */

void residualFunc2276(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2276};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */,data->localData[0]->realVars[2131] /* reactor.psat[5] DUMMY_STATE */,"reactor.psat[5]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[5] / reactor.psat[5]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2071] /* reactor.particle[5].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2276(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2276(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[5] */
  sysData->nominal[i] = data->modelData->realVarsData[2151].attribute /* reactor.pvap[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2151].attribute /* reactor.pvap[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2151].attribute /* reactor.pvap[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2276(sysData);
}

void getIterationVarsNLS2276(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2151] /* reactor.pvap[5] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2256
type: SIMPLE_ASSIGN
reactor.Re_vap[6] = abs(2.0 * reactor.gama_media[6] * reactor.v_vap[6] * reactor.dp / (3.0 * reactor.mu_vap[6] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */) * ((data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1331] /* reactor.mu_vap[6] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[6] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2257
type: SIMPLE_ASSIGN
reactor.frict[6] = if reactor.Re_vap[6] > 1.0 then 172.0 / reactor.Re_vap[6] + 4.36 / reactor.Re_vap[6] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[860] /* reactor.Re_vap[6] variable */,"reactor.Re_vap[6]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[6] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1047] /* reactor.frict[6] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2258
type: SIMPLE_ASSIGN
reactor.Dp[6] = 0.1666666666666667 * reactor.frict[6] * reactor.gama_media[6] * reactor.v_vap[6] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
  data->localData[0]->realVars[688] /* reactor.Dp[6] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1047] /* reactor.frict[6] variable */) * ((data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2259
type: SIMPLE_ASSIGN
reactor.Pext[6] = if reactor.v_vap[6] > 0.0 then reactor.Psat_theo - reactor.Dp[6] else reactor.Psat_theo + reactor.Dp[6]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */,0.0);
  data->localData[0]->realVars[783] /* reactor.Pext[6] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[688] /* reactor.Dp[6] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[688] /* reactor.Dp[6] variable */);
  TRACE_POP
}
/*
equation index: 2260
type: SIMPLE_ASSIGN
reactor.gama_ext[6] = 0.01801 * reactor.Pext[6] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  data->localData[0]->realVars[1087] /* reactor.gama_ext[6] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[783] /* reactor.Pext[6] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2261
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[6] = (reactor.gama_ext[6] - reactor.gama_media[6]) / reactor.R_inter[6]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  data->localData[0]->realVars[1230] /* reactor.mdot_e_ext[6] variable */ = DIVISION_SIM(data->localData[0]->realVars[1087] /* reactor.gama_ext[6] variable */ - data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */,data->localData[0]->realVars[838] /* reactor.R_inter[6] variable */,"reactor.R_inter[6]",equationIndexes);
  TRACE_POP
}

void residualFunc2270(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2270};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2256(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2257(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2258(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2259(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2260(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2261(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1230] /* reactor.mdot_e_ext[6] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[65] /* reactor.gama_media[6] STATE(1) */),"reactor.A_cs * reactor.gama_media[6]",equationIndexes)) - data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2270(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2270(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[6] */
  sysData->nominal[i] = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2598].attribute /* reactor.v_vap[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2270(sysData);
}

void getIterationVarsNLS2270(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2598] /* reactor.v_vap[6] variable */;
}


/* inner equations */

void residualFunc2163(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2163};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */,data->localData[0]->realVars[2132] /* reactor.psat[6] DUMMY_STATE */,"reactor.psat[6]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[6] / reactor.psat[6]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2072] /* reactor.particle[6].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2163(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2163(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[6] */
  sysData->nominal[i] = data->modelData->realVarsData[2152].attribute /* reactor.pvap[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2152].attribute /* reactor.pvap[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2152].attribute /* reactor.pvap[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2163(sysData);
}

void getIterationVarsNLS2163(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2152] /* reactor.pvap[6] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2143
type: SIMPLE_ASSIGN
reactor.Re_vap[7] = abs(2.0 * reactor.gama_media[7] * reactor.v_vap[7] * reactor.dp / (3.0 * reactor.mu_vap[7] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */) * ((data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1332] /* reactor.mu_vap[7] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[7] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2144
type: SIMPLE_ASSIGN
reactor.frict[7] = if reactor.Re_vap[7] > 1.0 then 172.0 / reactor.Re_vap[7] + 4.36 / reactor.Re_vap[7] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[861] /* reactor.Re_vap[7] variable */,"reactor.Re_vap[7]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[7] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1048] /* reactor.frict[7] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2145
type: SIMPLE_ASSIGN
reactor.Dp[7] = 0.1666666666666667 * reactor.frict[7] * reactor.gama_media[7] * reactor.v_vap[7] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
  data->localData[0]->realVars[689] /* reactor.Dp[7] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1048] /* reactor.frict[7] variable */) * ((data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2146
type: SIMPLE_ASSIGN
reactor.Pext[7] = if reactor.v_vap[7] > 0.0 then reactor.Psat_theo - reactor.Dp[7] else reactor.Psat_theo + reactor.Dp[7]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */,0.0);
  data->localData[0]->realVars[784] /* reactor.Pext[7] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[689] /* reactor.Dp[7] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[689] /* reactor.Dp[7] variable */);
  TRACE_POP
}
/*
equation index: 2147
type: SIMPLE_ASSIGN
reactor.gama_ext[7] = 0.01801 * reactor.Pext[7] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  data->localData[0]->realVars[1088] /* reactor.gama_ext[7] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[784] /* reactor.Pext[7] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2148
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[7] = (reactor.gama_ext[7] - reactor.gama_media[7]) / reactor.R_inter[7]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  data->localData[0]->realVars[1231] /* reactor.mdot_e_ext[7] variable */ = DIVISION_SIM(data->localData[0]->realVars[1088] /* reactor.gama_ext[7] variable */ - data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */,data->localData[0]->realVars[839] /* reactor.R_inter[7] variable */,"reactor.R_inter[7]",equationIndexes);
  TRACE_POP
}

void residualFunc2157(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2157};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2143(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2144(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2145(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2146(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2147(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2148(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1231] /* reactor.mdot_e_ext[7] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[66] /* reactor.gama_media[7] STATE(1) */),"reactor.A_cs * reactor.gama_media[7]",equationIndexes)) - data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2157(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2157(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[7] */
  sysData->nominal[i] = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2599].attribute /* reactor.v_vap[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2157(sysData);
}

void getIterationVarsNLS2157(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2599] /* reactor.v_vap[7] variable */;
}


/* inner equations */

void residualFunc2050(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2050};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */,data->localData[0]->realVars[2133] /* reactor.psat[7] DUMMY_STATE */,"reactor.psat[7]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[7] / reactor.psat[7]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2073] /* reactor.particle[7].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2050(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS2050(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[7] */
  sysData->nominal[i] = data->modelData->realVarsData[2153].attribute /* reactor.pvap[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2153].attribute /* reactor.pvap[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2153].attribute /* reactor.pvap[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2050(sysData);
}

void getIterationVarsNLS2050(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2153] /* reactor.pvap[7] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 2030
type: SIMPLE_ASSIGN
reactor.Re_vap[8] = abs(2.0 * reactor.gama_media[8] * reactor.v_vap[8] * reactor.dp / (3.0 * reactor.mu_vap[8] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2030};
  data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */) * ((data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1333] /* reactor.mu_vap[8] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[8] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 2031
type: SIMPLE_ASSIGN
reactor.frict[8] = if reactor.Re_vap[8] > 1.0 then 172.0 / reactor.Re_vap[8] + 4.36 / reactor.Re_vap[8] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[862] /* reactor.Re_vap[8] variable */,"reactor.Re_vap[8]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[8] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1049] /* reactor.frict[8] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 2032
type: SIMPLE_ASSIGN
reactor.Dp[8] = 0.1666666666666667 * reactor.frict[8] * reactor.gama_media[8] * reactor.v_vap[8] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
  data->localData[0]->realVars[690] /* reactor.Dp[8] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1049] /* reactor.frict[8] variable */) * ((data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 2033
type: SIMPLE_ASSIGN
reactor.Pext[8] = if reactor.v_vap[8] > 0.0 then reactor.Psat_theo - reactor.Dp[8] else reactor.Psat_theo + reactor.Dp[8]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */,0.0);
  data->localData[0]->realVars[785] /* reactor.Pext[8] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[690] /* reactor.Dp[8] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[690] /* reactor.Dp[8] variable */);
  TRACE_POP
}
/*
equation index: 2034
type: SIMPLE_ASSIGN
reactor.gama_ext[8] = 0.01801 * reactor.Pext[8] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  data->localData[0]->realVars[1089] /* reactor.gama_ext[8] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[785] /* reactor.Pext[8] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 2035
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[8] = (reactor.gama_ext[8] - reactor.gama_media[8]) / reactor.R_inter[8]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  data->localData[0]->realVars[1232] /* reactor.mdot_e_ext[8] variable */ = DIVISION_SIM(data->localData[0]->realVars[1089] /* reactor.gama_ext[8] variable */ - data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */,data->localData[0]->realVars[840] /* reactor.R_inter[8] variable */,"reactor.R_inter[8]",equationIndexes);
  TRACE_POP
}

void residualFunc2044(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,2044};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2030(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2031(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2032(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2033(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2034(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_2035(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1232] /* reactor.mdot_e_ext[8] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[67] /* reactor.gama_media[8] STATE(1) */),"reactor.A_cs * reactor.gama_media[8]",equationIndexes)) - data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS2044(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS2044(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[8] */
  sysData->nominal[i] = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2600].attribute /* reactor.v_vap[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS2044(sysData);
}

void getIterationVarsNLS2044(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2600] /* reactor.v_vap[8] variable */;
}


/* inner equations */

void residualFunc1937(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1937};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */,data->localData[0]->realVars[2134] /* reactor.psat[8] DUMMY_STATE */,"reactor.psat[8]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[8] / reactor.psat[8]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2074] /* reactor.particle[8].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1937(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1937(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[8] */
  sysData->nominal[i] = data->modelData->realVarsData[2154].attribute /* reactor.pvap[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2154].attribute /* reactor.pvap[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2154].attribute /* reactor.pvap[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1937(sysData);
}

void getIterationVarsNLS1937(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2154] /* reactor.pvap[8] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1917
type: SIMPLE_ASSIGN
reactor.Re_vap[9] = abs(2.0 * reactor.gama_media[9] * reactor.v_vap[9] * reactor.dp / (3.0 * reactor.mu_vap[9] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1917};
  data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */) * ((data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1334] /* reactor.mu_vap[9] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[9] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1918
type: SIMPLE_ASSIGN
reactor.frict[9] = if reactor.Re_vap[9] > 1.0 then 172.0 / reactor.Re_vap[9] + 4.36 / reactor.Re_vap[9] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1918};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[863] /* reactor.Re_vap[9] variable */,"reactor.Re_vap[9]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[9] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1050] /* reactor.frict[9] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1919
type: SIMPLE_ASSIGN
reactor.Dp[9] = 0.1666666666666667 * reactor.frict[9] * reactor.gama_media[9] * reactor.v_vap[9] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1919};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
  data->localData[0]->realVars[691] /* reactor.Dp[9] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1050] /* reactor.frict[9] variable */) * ((data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1920
type: SIMPLE_ASSIGN
reactor.Pext[9] = if reactor.v_vap[9] > 0.0 then reactor.Psat_theo - reactor.Dp[9] else reactor.Psat_theo + reactor.Dp[9]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1920};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */,0.0);
  data->localData[0]->realVars[786] /* reactor.Pext[9] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[691] /* reactor.Dp[9] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[691] /* reactor.Dp[9] variable */);
  TRACE_POP
}
/*
equation index: 1921
type: SIMPLE_ASSIGN
reactor.gama_ext[9] = 0.01801 * reactor.Pext[9] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1921};
  data->localData[0]->realVars[1090] /* reactor.gama_ext[9] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[786] /* reactor.Pext[9] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1922
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[9] = (reactor.gama_ext[9] - reactor.gama_media[9]) / reactor.R_inter[9]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1922};
  data->localData[0]->realVars[1233] /* reactor.mdot_e_ext[9] variable */ = DIVISION_SIM(data->localData[0]->realVars[1090] /* reactor.gama_ext[9] variable */ - data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */,data->localData[0]->realVars[841] /* reactor.R_inter[9] variable */,"reactor.R_inter[9]",equationIndexes);
  TRACE_POP
}

void residualFunc1931(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1931};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1917(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1918(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1919(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1920(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1921(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1922(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1233] /* reactor.mdot_e_ext[9] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[68] /* reactor.gama_media[9] STATE(1) */),"reactor.A_cs * reactor.gama_media[9]",equationIndexes)) - data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1931(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1931(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[9] */
  sysData->nominal[i] = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2601].attribute /* reactor.v_vap[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1931(sysData);
}

void getIterationVarsNLS1931(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2601] /* reactor.v_vap[9] variable */;
}


/* inner equations */

void residualFunc1824(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1824};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */,data->localData[0]->realVars[2135] /* reactor.psat[9] DUMMY_STATE */,"reactor.psat[9]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[9] / reactor.psat[9]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2075] /* reactor.particle[9].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1824(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1824(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[9] */
  sysData->nominal[i] = data->modelData->realVarsData[2155].attribute /* reactor.pvap[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2155].attribute /* reactor.pvap[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2155].attribute /* reactor.pvap[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1824(sysData);
}

void getIterationVarsNLS1824(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2155] /* reactor.pvap[9] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1804
type: SIMPLE_ASSIGN
reactor.Re_vap[10] = abs(2.0 * reactor.gama_media[10] * reactor.v_vap[10] * reactor.dp / (3.0 * reactor.mu_vap[10] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */) * ((data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1335] /* reactor.mu_vap[10] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[10] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1805
type: SIMPLE_ASSIGN
reactor.frict[10] = if reactor.Re_vap[10] > 1.0 then 172.0 / reactor.Re_vap[10] + 4.36 / reactor.Re_vap[10] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[864] /* reactor.Re_vap[10] variable */,"reactor.Re_vap[10]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[10] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1051] /* reactor.frict[10] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1806
type: SIMPLE_ASSIGN
reactor.Dp[10] = 0.1666666666666667 * reactor.frict[10] * reactor.gama_media[10] * reactor.v_vap[10] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
  data->localData[0]->realVars[692] /* reactor.Dp[10] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1051] /* reactor.frict[10] variable */) * ((data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1807
type: SIMPLE_ASSIGN
reactor.Pext[10] = if reactor.v_vap[10] > 0.0 then reactor.Psat_theo - reactor.Dp[10] else reactor.Psat_theo + reactor.Dp[10]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */,0.0);
  data->localData[0]->realVars[787] /* reactor.Pext[10] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[692] /* reactor.Dp[10] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[692] /* reactor.Dp[10] variable */);
  TRACE_POP
}
/*
equation index: 1808
type: SIMPLE_ASSIGN
reactor.gama_ext[10] = 0.01801 * reactor.Pext[10] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  data->localData[0]->realVars[1091] /* reactor.gama_ext[10] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[787] /* reactor.Pext[10] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1809
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[10] = (reactor.gama_ext[10] - reactor.gama_media[10]) / reactor.R_inter[10]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  data->localData[0]->realVars[1234] /* reactor.mdot_e_ext[10] variable */ = DIVISION_SIM(data->localData[0]->realVars[1091] /* reactor.gama_ext[10] variable */ - data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */,data->localData[0]->realVars[842] /* reactor.R_inter[10] variable */,"reactor.R_inter[10]",equationIndexes);
  TRACE_POP
}

void residualFunc1818(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1818};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1804(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1805(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1806(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1807(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1808(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1809(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1234] /* reactor.mdot_e_ext[10] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[69] /* reactor.gama_media[10] STATE(1) */),"reactor.A_cs * reactor.gama_media[10]",equationIndexes)) - data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1818(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1818(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[10] */
  sysData->nominal[i] = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2602].attribute /* reactor.v_vap[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1818(sysData);
}

void getIterationVarsNLS1818(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2602] /* reactor.v_vap[10] variable */;
}


/* inner equations */

void residualFunc1711(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1711};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */,data->localData[0]->realVars[2136] /* reactor.psat[10] DUMMY_STATE */,"reactor.psat[10]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[10] / reactor.psat[10]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2076] /* reactor.particle[10].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1711(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1711(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[10] */
  sysData->nominal[i] = data->modelData->realVarsData[2156].attribute /* reactor.pvap[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2156].attribute /* reactor.pvap[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2156].attribute /* reactor.pvap[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1711(sysData);
}

void getIterationVarsNLS1711(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2156] /* reactor.pvap[10] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1691
type: SIMPLE_ASSIGN
reactor.Re_vap[11] = abs(2.0 * reactor.gama_media[11] * reactor.v_vap[11] * reactor.dp / (3.0 * reactor.mu_vap[11] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */) * ((data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1336] /* reactor.mu_vap[11] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[11] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1692
type: SIMPLE_ASSIGN
reactor.frict[11] = if reactor.Re_vap[11] > 1.0 then 172.0 / reactor.Re_vap[11] + 4.36 / reactor.Re_vap[11] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[865] /* reactor.Re_vap[11] variable */,"reactor.Re_vap[11]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[11] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1052] /* reactor.frict[11] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1693
type: SIMPLE_ASSIGN
reactor.Dp[11] = 0.1666666666666667 * reactor.frict[11] * reactor.gama_media[11] * reactor.v_vap[11] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
  data->localData[0]->realVars[693] /* reactor.Dp[11] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1052] /* reactor.frict[11] variable */) * ((data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1694
type: SIMPLE_ASSIGN
reactor.Pext[11] = if reactor.v_vap[11] > 0.0 then reactor.Psat_theo - reactor.Dp[11] else reactor.Psat_theo + reactor.Dp[11]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */,0.0);
  data->localData[0]->realVars[788] /* reactor.Pext[11] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[693] /* reactor.Dp[11] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[693] /* reactor.Dp[11] variable */);
  TRACE_POP
}
/*
equation index: 1695
type: SIMPLE_ASSIGN
reactor.gama_ext[11] = 0.01801 * reactor.Pext[11] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  data->localData[0]->realVars[1092] /* reactor.gama_ext[11] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[788] /* reactor.Pext[11] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1696
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[11] = (reactor.gama_ext[11] - reactor.gama_media[11]) / reactor.R_inter[11]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  data->localData[0]->realVars[1235] /* reactor.mdot_e_ext[11] variable */ = DIVISION_SIM(data->localData[0]->realVars[1092] /* reactor.gama_ext[11] variable */ - data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */,data->localData[0]->realVars[843] /* reactor.R_inter[11] variable */,"reactor.R_inter[11]",equationIndexes);
  TRACE_POP
}

void residualFunc1705(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1705};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1691(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1692(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1693(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1694(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1695(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1696(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1235] /* reactor.mdot_e_ext[11] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[70] /* reactor.gama_media[11] STATE(1) */),"reactor.A_cs * reactor.gama_media[11]",equationIndexes)) - data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1705(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1705(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[11] */
  sysData->nominal[i] = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2603].attribute /* reactor.v_vap[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1705(sysData);
}

void getIterationVarsNLS1705(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2603] /* reactor.v_vap[11] variable */;
}


/* inner equations */

void residualFunc1598(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1598};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */,data->localData[0]->realVars[2137] /* reactor.psat[11] DUMMY_STATE */,"reactor.psat[11]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[11] / reactor.psat[11]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2077] /* reactor.particle[11].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1598(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1598(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[11] */
  sysData->nominal[i] = data->modelData->realVarsData[2157].attribute /* reactor.pvap[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2157].attribute /* reactor.pvap[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2157].attribute /* reactor.pvap[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1598(sysData);
}

void getIterationVarsNLS1598(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2157] /* reactor.pvap[11] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1578
type: SIMPLE_ASSIGN
reactor.Re_vap[12] = abs(2.0 * reactor.gama_media[12] * reactor.v_vap[12] * reactor.dp / (3.0 * reactor.mu_vap[12] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */) * ((data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1337] /* reactor.mu_vap[12] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[12] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1579
type: SIMPLE_ASSIGN
reactor.frict[12] = if reactor.Re_vap[12] > 1.0 then 172.0 / reactor.Re_vap[12] + 4.36 / reactor.Re_vap[12] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[866] /* reactor.Re_vap[12] variable */,"reactor.Re_vap[12]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[12] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1053] /* reactor.frict[12] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1580
type: SIMPLE_ASSIGN
reactor.Dp[12] = 0.1666666666666667 * reactor.frict[12] * reactor.gama_media[12] * reactor.v_vap[12] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
  data->localData[0]->realVars[694] /* reactor.Dp[12] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1053] /* reactor.frict[12] variable */) * ((data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1581
type: SIMPLE_ASSIGN
reactor.Pext[12] = if reactor.v_vap[12] > 0.0 then reactor.Psat_theo - reactor.Dp[12] else reactor.Psat_theo + reactor.Dp[12]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */,0.0);
  data->localData[0]->realVars[789] /* reactor.Pext[12] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[694] /* reactor.Dp[12] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[694] /* reactor.Dp[12] variable */);
  TRACE_POP
}
/*
equation index: 1582
type: SIMPLE_ASSIGN
reactor.gama_ext[12] = 0.01801 * reactor.Pext[12] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  data->localData[0]->realVars[1093] /* reactor.gama_ext[12] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[789] /* reactor.Pext[12] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1583
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[12] = (reactor.gama_ext[12] - reactor.gama_media[12]) / reactor.R_inter[12]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  data->localData[0]->realVars[1236] /* reactor.mdot_e_ext[12] variable */ = DIVISION_SIM(data->localData[0]->realVars[1093] /* reactor.gama_ext[12] variable */ - data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */,data->localData[0]->realVars[844] /* reactor.R_inter[12] variable */,"reactor.R_inter[12]",equationIndexes);
  TRACE_POP
}

void residualFunc1592(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1592};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1578(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1579(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1580(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1581(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1582(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1583(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1236] /* reactor.mdot_e_ext[12] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[71] /* reactor.gama_media[12] STATE(1) */),"reactor.A_cs * reactor.gama_media[12]",equationIndexes)) - data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1592(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1592(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[12] */
  sysData->nominal[i] = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2604].attribute /* reactor.v_vap[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1592(sysData);
}

void getIterationVarsNLS1592(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2604] /* reactor.v_vap[12] variable */;
}


/* inner equations */

void residualFunc1485(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1485};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */,data->localData[0]->realVars[2138] /* reactor.psat[12] DUMMY_STATE */,"reactor.psat[12]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[12] / reactor.psat[12]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2078] /* reactor.particle[12].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1485(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1485(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[12] */
  sysData->nominal[i] = data->modelData->realVarsData[2158].attribute /* reactor.pvap[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2158].attribute /* reactor.pvap[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2158].attribute /* reactor.pvap[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1485(sysData);
}

void getIterationVarsNLS1485(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2158] /* reactor.pvap[12] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1465
type: SIMPLE_ASSIGN
reactor.Re_vap[13] = abs(2.0 * reactor.gama_media[13] * reactor.v_vap[13] * reactor.dp / (3.0 * reactor.mu_vap[13] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */) * ((data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1338] /* reactor.mu_vap[13] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[13] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1466
type: SIMPLE_ASSIGN
reactor.frict[13] = if reactor.Re_vap[13] > 1.0 then 172.0 / reactor.Re_vap[13] + 4.36 / reactor.Re_vap[13] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[867] /* reactor.Re_vap[13] variable */,"reactor.Re_vap[13]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[13] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1054] /* reactor.frict[13] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1467
type: SIMPLE_ASSIGN
reactor.Dp[13] = 0.1666666666666667 * reactor.frict[13] * reactor.gama_media[13] * reactor.v_vap[13] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
  data->localData[0]->realVars[695] /* reactor.Dp[13] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1054] /* reactor.frict[13] variable */) * ((data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1468
type: SIMPLE_ASSIGN
reactor.Pext[13] = if reactor.v_vap[13] > 0.0 then reactor.Psat_theo - reactor.Dp[13] else reactor.Psat_theo + reactor.Dp[13]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */,0.0);
  data->localData[0]->realVars[790] /* reactor.Pext[13] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[695] /* reactor.Dp[13] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[695] /* reactor.Dp[13] variable */);
  TRACE_POP
}
/*
equation index: 1469
type: SIMPLE_ASSIGN
reactor.gama_ext[13] = 0.01801 * reactor.Pext[13] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  data->localData[0]->realVars[1094] /* reactor.gama_ext[13] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[790] /* reactor.Pext[13] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1470
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[13] = (reactor.gama_ext[13] - reactor.gama_media[13]) / reactor.R_inter[13]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  data->localData[0]->realVars[1237] /* reactor.mdot_e_ext[13] variable */ = DIVISION_SIM(data->localData[0]->realVars[1094] /* reactor.gama_ext[13] variable */ - data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */,data->localData[0]->realVars[845] /* reactor.R_inter[13] variable */,"reactor.R_inter[13]",equationIndexes);
  TRACE_POP
}

void residualFunc1479(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1479};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1465(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1466(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1467(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1468(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1469(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1470(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1237] /* reactor.mdot_e_ext[13] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[72] /* reactor.gama_media[13] STATE(1) */),"reactor.A_cs * reactor.gama_media[13]",equationIndexes)) - data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1479(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1479(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[13] */
  sysData->nominal[i] = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2605].attribute /* reactor.v_vap[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1479(sysData);
}

void getIterationVarsNLS1479(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2605] /* reactor.v_vap[13] variable */;
}


/* inner equations */

void residualFunc1372(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1372};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */,data->localData[0]->realVars[2139] /* reactor.psat[13] DUMMY_STATE */,"reactor.psat[13]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[13] / reactor.psat[13]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2079] /* reactor.particle[13].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1372(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1372(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[13] */
  sysData->nominal[i] = data->modelData->realVarsData[2159].attribute /* reactor.pvap[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2159].attribute /* reactor.pvap[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2159].attribute /* reactor.pvap[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1372(sysData);
}

void getIterationVarsNLS1372(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2159] /* reactor.pvap[13] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1352
type: SIMPLE_ASSIGN
reactor.Re_vap[14] = abs(2.0 * reactor.gama_media[14] * reactor.v_vap[14] * reactor.dp / (3.0 * reactor.mu_vap[14] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */) * ((data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1339] /* reactor.mu_vap[14] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[14] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1353
type: SIMPLE_ASSIGN
reactor.frict[14] = if reactor.Re_vap[14] > 1.0 then 172.0 / reactor.Re_vap[14] + 4.36 / reactor.Re_vap[14] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[868] /* reactor.Re_vap[14] variable */,"reactor.Re_vap[14]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[14] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1055] /* reactor.frict[14] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1354
type: SIMPLE_ASSIGN
reactor.Dp[14] = 0.1666666666666667 * reactor.frict[14] * reactor.gama_media[14] * reactor.v_vap[14] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
  data->localData[0]->realVars[696] /* reactor.Dp[14] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1055] /* reactor.frict[14] variable */) * ((data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
reactor.Pext[14] = if reactor.v_vap[14] > 0.0 then reactor.Psat_theo - reactor.Dp[14] else reactor.Psat_theo + reactor.Dp[14]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */,0.0);
  data->localData[0]->realVars[791] /* reactor.Pext[14] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[696] /* reactor.Dp[14] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[696] /* reactor.Dp[14] variable */);
  TRACE_POP
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
reactor.gama_ext[14] = 0.01801 * reactor.Pext[14] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  data->localData[0]->realVars[1095] /* reactor.gama_ext[14] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[791] /* reactor.Pext[14] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1357
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[14] = (reactor.gama_ext[14] - reactor.gama_media[14]) / reactor.R_inter[14]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  data->localData[0]->realVars[1238] /* reactor.mdot_e_ext[14] variable */ = DIVISION_SIM(data->localData[0]->realVars[1095] /* reactor.gama_ext[14] variable */ - data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */,data->localData[0]->realVars[846] /* reactor.R_inter[14] variable */,"reactor.R_inter[14]",equationIndexes);
  TRACE_POP
}

void residualFunc1366(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1366};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1352(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1353(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1354(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1355(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1356(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1357(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1238] /* reactor.mdot_e_ext[14] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[73] /* reactor.gama_media[14] STATE(1) */),"reactor.A_cs * reactor.gama_media[14]",equationIndexes)) - data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1366(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1366(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[14] */
  sysData->nominal[i] = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2606].attribute /* reactor.v_vap[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1366(sysData);
}

void getIterationVarsNLS1366(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2606] /* reactor.v_vap[14] variable */;
}


/* inner equations */

void residualFunc1259(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1259};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */,data->localData[0]->realVars[2140] /* reactor.psat[14] DUMMY_STATE */,"reactor.psat[14]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[14] / reactor.psat[14]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2080] /* reactor.particle[14].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1259(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1259(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[14] */
  sysData->nominal[i] = data->modelData->realVarsData[2160].attribute /* reactor.pvap[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2160].attribute /* reactor.pvap[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2160].attribute /* reactor.pvap[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1259(sysData);
}

void getIterationVarsNLS1259(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2160] /* reactor.pvap[14] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1239
type: SIMPLE_ASSIGN
reactor.Re_vap[15] = abs(2.0 * reactor.gama_media[15] * reactor.v_vap[15] * reactor.dp / (3.0 * reactor.mu_vap[15] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */) * ((data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1340] /* reactor.mu_vap[15] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[15] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
reactor.frict[15] = if reactor.Re_vap[15] > 1.0 then 172.0 / reactor.Re_vap[15] + 4.36 / reactor.Re_vap[15] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[869] /* reactor.Re_vap[15] variable */,"reactor.Re_vap[15]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[15] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1056] /* reactor.frict[15] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
reactor.Dp[15] = 0.1666666666666667 * reactor.frict[15] * reactor.gama_media[15] * reactor.v_vap[15] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
  data->localData[0]->realVars[697] /* reactor.Dp[15] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1056] /* reactor.frict[15] variable */) * ((data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
reactor.Pext[15] = if reactor.v_vap[15] > 0.0 then reactor.Psat_theo - reactor.Dp[15] else reactor.Psat_theo + reactor.Dp[15]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */,0.0);
  data->localData[0]->realVars[792] /* reactor.Pext[15] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[697] /* reactor.Dp[15] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[697] /* reactor.Dp[15] variable */);
  TRACE_POP
}
/*
equation index: 1243
type: SIMPLE_ASSIGN
reactor.gama_ext[15] = 0.01801 * reactor.Pext[15] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  data->localData[0]->realVars[1096] /* reactor.gama_ext[15] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[792] /* reactor.Pext[15] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[15] = (reactor.gama_ext[15] - reactor.gama_media[15]) / reactor.R_inter[15]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  data->localData[0]->realVars[1239] /* reactor.mdot_e_ext[15] variable */ = DIVISION_SIM(data->localData[0]->realVars[1096] /* reactor.gama_ext[15] variable */ - data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */,data->localData[0]->realVars[847] /* reactor.R_inter[15] variable */,"reactor.R_inter[15]",equationIndexes);
  TRACE_POP
}

void residualFunc1253(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1253};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1239(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1240(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1241(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1242(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1243(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1244(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1239] /* reactor.mdot_e_ext[15] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[74] /* reactor.gama_media[15] STATE(1) */),"reactor.A_cs * reactor.gama_media[15]",equationIndexes)) - data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1253(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1253(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[15] */
  sysData->nominal[i] = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2607].attribute /* reactor.v_vap[15] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1253(sysData);
}

void getIterationVarsNLS1253(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2607] /* reactor.v_vap[15] variable */;
}


/* inner equations */

void residualFunc1146(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1146};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */,data->localData[0]->realVars[2141] /* reactor.psat[15] DUMMY_STATE */,"reactor.psat[15]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[15] / reactor.psat[15]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2081] /* reactor.particle[15].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1146(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1146(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[15] */
  sysData->nominal[i] = data->modelData->realVarsData[2161].attribute /* reactor.pvap[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2161].attribute /* reactor.pvap[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2161].attribute /* reactor.pvap[15] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1146(sysData);
}

void getIterationVarsNLS1146(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2161] /* reactor.pvap[15] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1126
type: SIMPLE_ASSIGN
reactor.Re_vap[16] = abs(2.0 * reactor.gama_media[16] * reactor.v_vap[16] * reactor.dp / (3.0 * reactor.mu_vap[16] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */) * ((data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1341] /* reactor.mu_vap[16] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[16] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1127
type: SIMPLE_ASSIGN
reactor.frict[16] = if reactor.Re_vap[16] > 1.0 then 172.0 / reactor.Re_vap[16] + 4.36 / reactor.Re_vap[16] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[870] /* reactor.Re_vap[16] variable */,"reactor.Re_vap[16]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[16] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1057] /* reactor.frict[16] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1128
type: SIMPLE_ASSIGN
reactor.Dp[16] = 0.1666666666666667 * reactor.frict[16] * reactor.gama_media[16] * reactor.v_vap[16] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
  data->localData[0]->realVars[698] /* reactor.Dp[16] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1057] /* reactor.frict[16] variable */) * ((data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1129
type: SIMPLE_ASSIGN
reactor.Pext[16] = if reactor.v_vap[16] > 0.0 then reactor.Psat_theo - reactor.Dp[16] else reactor.Psat_theo + reactor.Dp[16]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */,0.0);
  data->localData[0]->realVars[793] /* reactor.Pext[16] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[698] /* reactor.Dp[16] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[698] /* reactor.Dp[16] variable */);
  TRACE_POP
}
/*
equation index: 1130
type: SIMPLE_ASSIGN
reactor.gama_ext[16] = 0.01801 * reactor.Pext[16] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  data->localData[0]->realVars[1097] /* reactor.gama_ext[16] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[793] /* reactor.Pext[16] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1131
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[16] = (reactor.gama_ext[16] - reactor.gama_media[16]) / reactor.R_inter[16]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  data->localData[0]->realVars[1240] /* reactor.mdot_e_ext[16] variable */ = DIVISION_SIM(data->localData[0]->realVars[1097] /* reactor.gama_ext[16] variable */ - data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */,data->localData[0]->realVars[848] /* reactor.R_inter[16] variable */,"reactor.R_inter[16]",equationIndexes);
  TRACE_POP
}

void residualFunc1140(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1140};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1126(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1127(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1128(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1129(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1130(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1131(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1240] /* reactor.mdot_e_ext[16] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[75] /* reactor.gama_media[16] STATE(1) */),"reactor.A_cs * reactor.gama_media[16]",equationIndexes)) - data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1140(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1140(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[16] */
  sysData->nominal[i] = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2608].attribute /* reactor.v_vap[16] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1140(sysData);
}

void getIterationVarsNLS1140(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2608] /* reactor.v_vap[16] variable */;
}


/* inner equations */

void residualFunc1033(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1033};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */,data->localData[0]->realVars[2142] /* reactor.psat[16] DUMMY_STATE */,"reactor.psat[16]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[16] / reactor.psat[16]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2082] /* reactor.particle[16].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1033(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS1033(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[16] */
  sysData->nominal[i] = data->modelData->realVarsData[2162].attribute /* reactor.pvap[16] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2162].attribute /* reactor.pvap[16] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2162].attribute /* reactor.pvap[16] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1033(sysData);
}

void getIterationVarsNLS1033(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2162] /* reactor.pvap[16] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 1013
type: SIMPLE_ASSIGN
reactor.Re_vap[17] = abs(2.0 * reactor.gama_media[17] * reactor.v_vap[17] * reactor.dp / (3.0 * reactor.mu_vap[17] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */) * ((data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1342] /* reactor.mu_vap[17] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[17] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
reactor.frict[17] = if reactor.Re_vap[17] > 1.0 then 172.0 / reactor.Re_vap[17] + 4.36 / reactor.Re_vap[17] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[871] /* reactor.Re_vap[17] variable */,"reactor.Re_vap[17]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[17] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1058] /* reactor.frict[17] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
reactor.Dp[17] = 0.1666666666666667 * reactor.frict[17] * reactor.gama_media[17] * reactor.v_vap[17] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
  data->localData[0]->realVars[699] /* reactor.Dp[17] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1058] /* reactor.frict[17] variable */) * ((data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
reactor.Pext[17] = if reactor.v_vap[17] > 0.0 then reactor.Psat_theo - reactor.Dp[17] else reactor.Psat_theo + reactor.Dp[17]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */,0.0);
  data->localData[0]->realVars[794] /* reactor.Pext[17] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[699] /* reactor.Dp[17] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[699] /* reactor.Dp[17] variable */);
  TRACE_POP
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
reactor.gama_ext[17] = 0.01801 * reactor.Pext[17] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->localData[0]->realVars[1098] /* reactor.gama_ext[17] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[794] /* reactor.Pext[17] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[17] = (reactor.gama_ext[17] - reactor.gama_media[17]) / reactor.R_inter[17]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->localData[0]->realVars[1241] /* reactor.mdot_e_ext[17] variable */ = DIVISION_SIM(data->localData[0]->realVars[1098] /* reactor.gama_ext[17] variable */ - data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */,data->localData[0]->realVars[849] /* reactor.R_inter[17] variable */,"reactor.R_inter[17]",equationIndexes);
  TRACE_POP
}

void residualFunc1027(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1027};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1013(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1014(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1015(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1016(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1017(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_1018(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1241] /* reactor.mdot_e_ext[17] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[76] /* reactor.gama_media[17] STATE(1) */),"reactor.A_cs * reactor.gama_media[17]",equationIndexes)) - data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1027(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1027(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[17] */
  sysData->nominal[i] = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2609].attribute /* reactor.v_vap[17] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1027(sysData);
}

void getIterationVarsNLS1027(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2609] /* reactor.v_vap[17] variable */;
}


/* inner equations */

void residualFunc920(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,920};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */,data->localData[0]->realVars[2143] /* reactor.psat[17] DUMMY_STATE */,"reactor.psat[17]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[17] / reactor.psat[17]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2083] /* reactor.particle[17].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS920(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS920(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[17] */
  sysData->nominal[i] = data->modelData->realVarsData[2163].attribute /* reactor.pvap[17] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2163].attribute /* reactor.pvap[17] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2163].attribute /* reactor.pvap[17] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS920(sysData);
}

void getIterationVarsNLS920(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2163] /* reactor.pvap[17] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 900
type: SIMPLE_ASSIGN
reactor.Re_vap[18] = abs(2.0 * reactor.gama_media[18] * reactor.v_vap[18] * reactor.dp / (3.0 * reactor.mu_vap[18] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */) * ((data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1343] /* reactor.mu_vap[18] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[18] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
reactor.frict[18] = if reactor.Re_vap[18] > 1.0 then 172.0 / reactor.Re_vap[18] + 4.36 / reactor.Re_vap[18] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[872] /* reactor.Re_vap[18] variable */,"reactor.Re_vap[18]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[18] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1059] /* reactor.frict[18] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
reactor.Dp[18] = 0.1666666666666667 * reactor.frict[18] * reactor.gama_media[18] * reactor.v_vap[18] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
  data->localData[0]->realVars[700] /* reactor.Dp[18] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1059] /* reactor.frict[18] variable */) * ((data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
reactor.Pext[18] = if reactor.v_vap[18] > 0.0 then reactor.Psat_theo - reactor.Dp[18] else reactor.Psat_theo + reactor.Dp[18]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */,0.0);
  data->localData[0]->realVars[795] /* reactor.Pext[18] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[700] /* reactor.Dp[18] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[700] /* reactor.Dp[18] variable */);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
reactor.gama_ext[18] = 0.01801 * reactor.Pext[18] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[1099] /* reactor.gama_ext[18] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[795] /* reactor.Pext[18] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[18] = (reactor.gama_ext[18] - reactor.gama_media[18]) / reactor.R_inter[18]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[1242] /* reactor.mdot_e_ext[18] variable */ = DIVISION_SIM(data->localData[0]->realVars[1099] /* reactor.gama_ext[18] variable */ - data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */,data->localData[0]->realVars[850] /* reactor.R_inter[18] variable */,"reactor.R_inter[18]",equationIndexes);
  TRACE_POP
}

void residualFunc914(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,914};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_900(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_901(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_902(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_903(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_904(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_905(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1242] /* reactor.mdot_e_ext[18] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[77] /* reactor.gama_media[18] STATE(1) */),"reactor.A_cs * reactor.gama_media[18]",equationIndexes)) - data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS914(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS914(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[18] */
  sysData->nominal[i] = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2610].attribute /* reactor.v_vap[18] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS914(sysData);
}

void getIterationVarsNLS914(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2610] /* reactor.v_vap[18] variable */;
}


/* inner equations */

void residualFunc807(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,807};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */,data->localData[0]->realVars[2144] /* reactor.psat[18] DUMMY_STATE */,"reactor.psat[18]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[18] / reactor.psat[18]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2084] /* reactor.particle[18].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS807(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS807(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[18] */
  sysData->nominal[i] = data->modelData->realVarsData[2164].attribute /* reactor.pvap[18] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2164].attribute /* reactor.pvap[18] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2164].attribute /* reactor.pvap[18] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS807(sysData);
}

void getIterationVarsNLS807(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2164] /* reactor.pvap[18] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 787
type: SIMPLE_ASSIGN
reactor.Re_vap[19] = abs(2.0 * reactor.gama_media[19] * reactor.v_vap[19] * reactor.dp / (3.0 * reactor.mu_vap[19] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */) * ((data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1344] /* reactor.mu_vap[19] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[19] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
reactor.frict[19] = if reactor.Re_vap[19] > 1.0 then 172.0 / reactor.Re_vap[19] + 4.36 / reactor.Re_vap[19] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[873] /* reactor.Re_vap[19] variable */,"reactor.Re_vap[19]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[19] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1060] /* reactor.frict[19] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
reactor.Dp[19] = 0.1666666666666667 * reactor.frict[19] * reactor.gama_media[19] * reactor.v_vap[19] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
  data->localData[0]->realVars[701] /* reactor.Dp[19] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1060] /* reactor.frict[19] variable */) * ((data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
reactor.Pext[19] = if reactor.v_vap[19] > 0.0 then reactor.Psat_theo - reactor.Dp[19] else reactor.Psat_theo + reactor.Dp[19]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */,0.0);
  data->localData[0]->realVars[796] /* reactor.Pext[19] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[701] /* reactor.Dp[19] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[701] /* reactor.Dp[19] variable */);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
reactor.gama_ext[19] = 0.01801 * reactor.Pext[19] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->localData[0]->realVars[1100] /* reactor.gama_ext[19] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[796] /* reactor.Pext[19] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[19] = (reactor.gama_ext[19] - reactor.gama_media[19]) / reactor.R_inter[19]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->localData[0]->realVars[1243] /* reactor.mdot_e_ext[19] variable */ = DIVISION_SIM(data->localData[0]->realVars[1100] /* reactor.gama_ext[19] variable */ - data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */,data->localData[0]->realVars[851] /* reactor.R_inter[19] variable */,"reactor.R_inter[19]",equationIndexes);
  TRACE_POP
}

void residualFunc801(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,801};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_787(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_788(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_789(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_790(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_791(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_792(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1243] /* reactor.mdot_e_ext[19] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[78] /* reactor.gama_media[19] STATE(1) */),"reactor.A_cs * reactor.gama_media[19]",equationIndexes)) - data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS801(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS801(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[19] */
  sysData->nominal[i] = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2611].attribute /* reactor.v_vap[19] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS801(sysData);
}

void getIterationVarsNLS801(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2611] /* reactor.v_vap[19] variable */;
}


/* inner equations */

void residualFunc694(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,694};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */,data->localData[0]->realVars[2145] /* reactor.psat[19] DUMMY_STATE */,"reactor.psat[19]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[19] / reactor.psat[19]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2085] /* reactor.particle[19].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS694(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS694(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[19] */
  sysData->nominal[i] = data->modelData->realVarsData[2165].attribute /* reactor.pvap[19] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2165].attribute /* reactor.pvap[19] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2165].attribute /* reactor.pvap[19] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS694(sysData);
}

void getIterationVarsNLS694(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2165] /* reactor.pvap[19] DUMMY_STATE */;
}


/* inner equations */

/*
equation index: 674
type: SIMPLE_ASSIGN
reactor.Re_vap[20] = abs(2.0 * reactor.gama_media[20] * reactor.v_vap[20] * reactor.dp / (3.0 * reactor.mu_vap[20] * f_p))
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */ = fabs(DIVISION_SIM((2.0) * ((data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */) * ((data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */) * (data->simulationInfo->realParameter[78] /* reactor.dp PARAM */))),(3.0) * ((data->localData[0]->realVars[1345] /* reactor.mu_vap[20] variable */) * (data->simulationInfo->realParameter[19] /* f_p PARAM */)),"3.0 * reactor.mu_vap[20] * f_p",equationIndexes));
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
reactor.frict[20] = if reactor.Re_vap[20] > 1.0 then 172.0 / reactor.Re_vap[20] + 4.36 / reactor.Re_vap[20] ^ 0.12 else 1.0
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Greater(data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */,1.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp1 = data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */;
    tmp2 = 0.12;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = DIVISION_SIM(172.0,data->localData[0]->realVars[874] /* reactor.Re_vap[20] variable */,"reactor.Re_vap[20]",equationIndexes) + DIVISION_SIM(4.36,tmp3,"reactor.Re_vap[20] ^ 0.12",equationIndexes);
  }
  else
  {
    tmp9 = 1.0;
  }
  data->localData[0]->realVars[1061] /* reactor.frict[20] variable */ = tmp9;
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
reactor.Dp[20] = 0.1666666666666667 * reactor.frict[20] * reactor.gama_media[20] * reactor.v_vap[20] ^ 2.0 * (reactor.Do - reactor.Di)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
  data->localData[0]->realVars[702] /* reactor.Dp[20] variable */ = (0.1666666666666667) * ((data->localData[0]->realVars[1061] /* reactor.frict[20] variable */) * ((data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */) * (((tmp0 * tmp0)) * (data->simulationInfo->realParameter[26] /* reactor.Do PARAM */ - data->simulationInfo->realParameter[24] /* reactor.Di PARAM */))));
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
reactor.Pext[20] = if reactor.v_vap[20] > 0.0 then reactor.Psat_theo - reactor.Dp[20] else reactor.Psat_theo + reactor.Dp[20]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */,0.0);
  data->localData[0]->realVars[797] /* reactor.Pext[20] variable */ = (tmp0?data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ - data->localData[0]->realVars[702] /* reactor.Dp[20] variable */:data->simulationInfo->realParameter[29] /* reactor.Psat_theo PARAM */ + data->localData[0]->realVars[702] /* reactor.Dp[20] variable */);
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
reactor.gama_ext[20] = 0.01801 * reactor.Pext[20] / (8.31446261815324 * reactor.T2)
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[1101] /* reactor.gama_ext[20] variable */ = DIVISION_SIM((0.01801) * (data->localData[0]->realVars[797] /* reactor.Pext[20] variable */),(8.31446261815324) * (data->simulationInfo->realParameter[31] /* reactor.T2 PARAM */),"8.31446261815324 * reactor.T2",equationIndexes);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
reactor.mdot_e_ext[20] = (reactor.gama_ext[20] - reactor.gama_media[20]) / reactor.R_inter[20]
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[1244] /* reactor.mdot_e_ext[20] variable */ = DIVISION_SIM(data->localData[0]->realVars[1101] /* reactor.gama_ext[20] variable */ - data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */,data->localData[0]->realVars[852] /* reactor.R_inter[20] variable */,"reactor.R_inter[20]",equationIndexes);
  TRACE_POP
}

void residualFunc688(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,688};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_674(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_675(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_676(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_677(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_678(data, threadData);

  /* local constraints */
  MOSES_Simulations_ACTS_adsorption_eqFunction_679(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[1034] /* reactor.dN variable */) * (DIVISION_SIM(data->localData[0]->realVars[1244] /* reactor.mdot_e_ext[20] variable */,(data->localData[0]->realVars[657] /* reactor.A_cs variable */) * (data->localData[0]->realVars[79] /* reactor.gama_media[20] STATE(1) */),"reactor.A_cs * reactor.gama_media[20]",equationIndexes)) - data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS688(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS688(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.v_vap[20] */
  sysData->nominal[i] = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2612].attribute /* reactor.v_vap[20] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS688(sysData);
}

void getIterationVarsNLS688(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2612] /* reactor.v_vap[20] variable */;
}


/* inner equations */

void residualFunc636(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,636};
  int i;
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = GreaterEq(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */,data->localData[0]->realVars[2146] /* reactor.psat[20] DUMMY_STATE */,"reactor.psat[20]",equationIndexes);
    if(!(tmp1 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(reactor.pvap[20] / reactor.psat[20]) was %g should be > 0", tmp1);
    }
    tmp3 = (-8.31446261815324) * ((data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */) * (log(tmp1)));
  }
  res[0] = data->localData[0]->realVars[2086] /* reactor.particle[20].particle_Radu2017_085.sorbent.A DUMMY_STATE */ - (tmp3);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS636(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS636(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for reactor.pvap[20] */
  sysData->nominal[i] = data->modelData->realVarsData[2166].attribute /* reactor.pvap[20] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[2166].attribute /* reactor.pvap[20] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[2166].attribute /* reactor.pvap[20] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS636(sysData);
}

void getIterationVarsNLS636(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[2166] /* reactor.pvap[20] DUMMY_STATE */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void MOSES_Simulations_ACTS_adsorption_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[59].equationIndex = 3498;
  nonLinearSystemData[59].size = 1;
  nonLinearSystemData[59].homotopySupport = 0;
  nonLinearSystemData[59].mixedSystem = 1;
  nonLinearSystemData[59].residualFunc = residualFunc3498;
  nonLinearSystemData[59].strictTearingFunctionCall = NULL;
  nonLinearSystemData[59].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac239_column;
  nonLinearSystemData[59].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac239;
  nonLinearSystemData[59].jacobianIndex = 79 /*jacInx*/;
  nonLinearSystemData[59].initializeStaticNLSData = initializeStaticDataNLS3498;
  nonLinearSystemData[59].getIterationVars = getIterationVarsNLS3498;
  nonLinearSystemData[59].checkConstraints = NULL;
  
  
  nonLinearSystemData[58].equationIndex = 3477;
  nonLinearSystemData[58].size = 1;
  nonLinearSystemData[58].homotopySupport = 0;
  nonLinearSystemData[58].mixedSystem = 1;
  nonLinearSystemData[58].residualFunc = residualFunc3477;
  nonLinearSystemData[58].strictTearingFunctionCall = NULL;
  nonLinearSystemData[58].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac238_column;
  nonLinearSystemData[58].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac238;
  nonLinearSystemData[58].jacobianIndex = 78 /*jacInx*/;
  nonLinearSystemData[58].initializeStaticNLSData = initializeStaticDataNLS3477;
  nonLinearSystemData[58].getIterationVars = getIterationVarsNLS3477;
  nonLinearSystemData[58].checkConstraints = NULL;
  
  
  nonLinearSystemData[57].equationIndex = 3456;
  nonLinearSystemData[57].size = 1;
  nonLinearSystemData[57].homotopySupport = 0;
  nonLinearSystemData[57].mixedSystem = 1;
  nonLinearSystemData[57].residualFunc = residualFunc3456;
  nonLinearSystemData[57].strictTearingFunctionCall = NULL;
  nonLinearSystemData[57].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac237_column;
  nonLinearSystemData[57].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac237;
  nonLinearSystemData[57].jacobianIndex = 77 /*jacInx*/;
  nonLinearSystemData[57].initializeStaticNLSData = initializeStaticDataNLS3456;
  nonLinearSystemData[57].getIterationVars = getIterationVarsNLS3456;
  nonLinearSystemData[57].checkConstraints = NULL;
  
  
  nonLinearSystemData[56].equationIndex = 3435;
  nonLinearSystemData[56].size = 1;
  nonLinearSystemData[56].homotopySupport = 0;
  nonLinearSystemData[56].mixedSystem = 1;
  nonLinearSystemData[56].residualFunc = residualFunc3435;
  nonLinearSystemData[56].strictTearingFunctionCall = NULL;
  nonLinearSystemData[56].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac236_column;
  nonLinearSystemData[56].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac236;
  nonLinearSystemData[56].jacobianIndex = 76 /*jacInx*/;
  nonLinearSystemData[56].initializeStaticNLSData = initializeStaticDataNLS3435;
  nonLinearSystemData[56].getIterationVars = getIterationVarsNLS3435;
  nonLinearSystemData[56].checkConstraints = NULL;
  
  
  nonLinearSystemData[55].equationIndex = 3414;
  nonLinearSystemData[55].size = 1;
  nonLinearSystemData[55].homotopySupport = 0;
  nonLinearSystemData[55].mixedSystem = 1;
  nonLinearSystemData[55].residualFunc = residualFunc3414;
  nonLinearSystemData[55].strictTearingFunctionCall = NULL;
  nonLinearSystemData[55].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac235_column;
  nonLinearSystemData[55].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac235;
  nonLinearSystemData[55].jacobianIndex = 75 /*jacInx*/;
  nonLinearSystemData[55].initializeStaticNLSData = initializeStaticDataNLS3414;
  nonLinearSystemData[55].getIterationVars = getIterationVarsNLS3414;
  nonLinearSystemData[55].checkConstraints = NULL;
  
  
  nonLinearSystemData[54].equationIndex = 3393;
  nonLinearSystemData[54].size = 1;
  nonLinearSystemData[54].homotopySupport = 0;
  nonLinearSystemData[54].mixedSystem = 1;
  nonLinearSystemData[54].residualFunc = residualFunc3393;
  nonLinearSystemData[54].strictTearingFunctionCall = NULL;
  nonLinearSystemData[54].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac234_column;
  nonLinearSystemData[54].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac234;
  nonLinearSystemData[54].jacobianIndex = 74 /*jacInx*/;
  nonLinearSystemData[54].initializeStaticNLSData = initializeStaticDataNLS3393;
  nonLinearSystemData[54].getIterationVars = getIterationVarsNLS3393;
  nonLinearSystemData[54].checkConstraints = NULL;
  
  
  nonLinearSystemData[53].equationIndex = 3372;
  nonLinearSystemData[53].size = 1;
  nonLinearSystemData[53].homotopySupport = 0;
  nonLinearSystemData[53].mixedSystem = 1;
  nonLinearSystemData[53].residualFunc = residualFunc3372;
  nonLinearSystemData[53].strictTearingFunctionCall = NULL;
  nonLinearSystemData[53].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac233_column;
  nonLinearSystemData[53].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac233;
  nonLinearSystemData[53].jacobianIndex = 73 /*jacInx*/;
  nonLinearSystemData[53].initializeStaticNLSData = initializeStaticDataNLS3372;
  nonLinearSystemData[53].getIterationVars = getIterationVarsNLS3372;
  nonLinearSystemData[53].checkConstraints = NULL;
  
  
  nonLinearSystemData[52].equationIndex = 3351;
  nonLinearSystemData[52].size = 1;
  nonLinearSystemData[52].homotopySupport = 0;
  nonLinearSystemData[52].mixedSystem = 1;
  nonLinearSystemData[52].residualFunc = residualFunc3351;
  nonLinearSystemData[52].strictTearingFunctionCall = NULL;
  nonLinearSystemData[52].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac232_column;
  nonLinearSystemData[52].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac232;
  nonLinearSystemData[52].jacobianIndex = 72 /*jacInx*/;
  nonLinearSystemData[52].initializeStaticNLSData = initializeStaticDataNLS3351;
  nonLinearSystemData[52].getIterationVars = getIterationVarsNLS3351;
  nonLinearSystemData[52].checkConstraints = NULL;
  
  
  nonLinearSystemData[51].equationIndex = 3330;
  nonLinearSystemData[51].size = 1;
  nonLinearSystemData[51].homotopySupport = 0;
  nonLinearSystemData[51].mixedSystem = 1;
  nonLinearSystemData[51].residualFunc = residualFunc3330;
  nonLinearSystemData[51].strictTearingFunctionCall = NULL;
  nonLinearSystemData[51].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac231_column;
  nonLinearSystemData[51].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac231;
  nonLinearSystemData[51].jacobianIndex = 71 /*jacInx*/;
  nonLinearSystemData[51].initializeStaticNLSData = initializeStaticDataNLS3330;
  nonLinearSystemData[51].getIterationVars = getIterationVarsNLS3330;
  nonLinearSystemData[51].checkConstraints = NULL;
  
  
  nonLinearSystemData[50].equationIndex = 3309;
  nonLinearSystemData[50].size = 1;
  nonLinearSystemData[50].homotopySupport = 0;
  nonLinearSystemData[50].mixedSystem = 1;
  nonLinearSystemData[50].residualFunc = residualFunc3309;
  nonLinearSystemData[50].strictTearingFunctionCall = NULL;
  nonLinearSystemData[50].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac230_column;
  nonLinearSystemData[50].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac230;
  nonLinearSystemData[50].jacobianIndex = 70 /*jacInx*/;
  nonLinearSystemData[50].initializeStaticNLSData = initializeStaticDataNLS3309;
  nonLinearSystemData[50].getIterationVars = getIterationVarsNLS3309;
  nonLinearSystemData[50].checkConstraints = NULL;
  
  
  nonLinearSystemData[49].equationIndex = 3288;
  nonLinearSystemData[49].size = 1;
  nonLinearSystemData[49].homotopySupport = 0;
  nonLinearSystemData[49].mixedSystem = 1;
  nonLinearSystemData[49].residualFunc = residualFunc3288;
  nonLinearSystemData[49].strictTearingFunctionCall = NULL;
  nonLinearSystemData[49].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac229_column;
  nonLinearSystemData[49].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac229;
  nonLinearSystemData[49].jacobianIndex = 69 /*jacInx*/;
  nonLinearSystemData[49].initializeStaticNLSData = initializeStaticDataNLS3288;
  nonLinearSystemData[49].getIterationVars = getIterationVarsNLS3288;
  nonLinearSystemData[49].checkConstraints = NULL;
  
  
  nonLinearSystemData[48].equationIndex = 3267;
  nonLinearSystemData[48].size = 1;
  nonLinearSystemData[48].homotopySupport = 0;
  nonLinearSystemData[48].mixedSystem = 1;
  nonLinearSystemData[48].residualFunc = residualFunc3267;
  nonLinearSystemData[48].strictTearingFunctionCall = NULL;
  nonLinearSystemData[48].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac228_column;
  nonLinearSystemData[48].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac228;
  nonLinearSystemData[48].jacobianIndex = 68 /*jacInx*/;
  nonLinearSystemData[48].initializeStaticNLSData = initializeStaticDataNLS3267;
  nonLinearSystemData[48].getIterationVars = getIterationVarsNLS3267;
  nonLinearSystemData[48].checkConstraints = NULL;
  
  
  nonLinearSystemData[47].equationIndex = 3246;
  nonLinearSystemData[47].size = 1;
  nonLinearSystemData[47].homotopySupport = 0;
  nonLinearSystemData[47].mixedSystem = 1;
  nonLinearSystemData[47].residualFunc = residualFunc3246;
  nonLinearSystemData[47].strictTearingFunctionCall = NULL;
  nonLinearSystemData[47].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac227_column;
  nonLinearSystemData[47].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac227;
  nonLinearSystemData[47].jacobianIndex = 67 /*jacInx*/;
  nonLinearSystemData[47].initializeStaticNLSData = initializeStaticDataNLS3246;
  nonLinearSystemData[47].getIterationVars = getIterationVarsNLS3246;
  nonLinearSystemData[47].checkConstraints = NULL;
  
  
  nonLinearSystemData[46].equationIndex = 3225;
  nonLinearSystemData[46].size = 1;
  nonLinearSystemData[46].homotopySupport = 0;
  nonLinearSystemData[46].mixedSystem = 1;
  nonLinearSystemData[46].residualFunc = residualFunc3225;
  nonLinearSystemData[46].strictTearingFunctionCall = NULL;
  nonLinearSystemData[46].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac226_column;
  nonLinearSystemData[46].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac226;
  nonLinearSystemData[46].jacobianIndex = 66 /*jacInx*/;
  nonLinearSystemData[46].initializeStaticNLSData = initializeStaticDataNLS3225;
  nonLinearSystemData[46].getIterationVars = getIterationVarsNLS3225;
  nonLinearSystemData[46].checkConstraints = NULL;
  
  
  nonLinearSystemData[45].equationIndex = 3204;
  nonLinearSystemData[45].size = 1;
  nonLinearSystemData[45].homotopySupport = 0;
  nonLinearSystemData[45].mixedSystem = 1;
  nonLinearSystemData[45].residualFunc = residualFunc3204;
  nonLinearSystemData[45].strictTearingFunctionCall = NULL;
  nonLinearSystemData[45].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac225_column;
  nonLinearSystemData[45].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac225;
  nonLinearSystemData[45].jacobianIndex = 65 /*jacInx*/;
  nonLinearSystemData[45].initializeStaticNLSData = initializeStaticDataNLS3204;
  nonLinearSystemData[45].getIterationVars = getIterationVarsNLS3204;
  nonLinearSystemData[45].checkConstraints = NULL;
  
  
  nonLinearSystemData[44].equationIndex = 3183;
  nonLinearSystemData[44].size = 1;
  nonLinearSystemData[44].homotopySupport = 0;
  nonLinearSystemData[44].mixedSystem = 1;
  nonLinearSystemData[44].residualFunc = residualFunc3183;
  nonLinearSystemData[44].strictTearingFunctionCall = NULL;
  nonLinearSystemData[44].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac224_column;
  nonLinearSystemData[44].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac224;
  nonLinearSystemData[44].jacobianIndex = 64 /*jacInx*/;
  nonLinearSystemData[44].initializeStaticNLSData = initializeStaticDataNLS3183;
  nonLinearSystemData[44].getIterationVars = getIterationVarsNLS3183;
  nonLinearSystemData[44].checkConstraints = NULL;
  
  
  nonLinearSystemData[43].equationIndex = 3162;
  nonLinearSystemData[43].size = 1;
  nonLinearSystemData[43].homotopySupport = 0;
  nonLinearSystemData[43].mixedSystem = 1;
  nonLinearSystemData[43].residualFunc = residualFunc3162;
  nonLinearSystemData[43].strictTearingFunctionCall = NULL;
  nonLinearSystemData[43].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac223_column;
  nonLinearSystemData[43].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac223;
  nonLinearSystemData[43].jacobianIndex = 63 /*jacInx*/;
  nonLinearSystemData[43].initializeStaticNLSData = initializeStaticDataNLS3162;
  nonLinearSystemData[43].getIterationVars = getIterationVarsNLS3162;
  nonLinearSystemData[43].checkConstraints = NULL;
  
  
  nonLinearSystemData[42].equationIndex = 3141;
  nonLinearSystemData[42].size = 1;
  nonLinearSystemData[42].homotopySupport = 0;
  nonLinearSystemData[42].mixedSystem = 1;
  nonLinearSystemData[42].residualFunc = residualFunc3141;
  nonLinearSystemData[42].strictTearingFunctionCall = NULL;
  nonLinearSystemData[42].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac222_column;
  nonLinearSystemData[42].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac222;
  nonLinearSystemData[42].jacobianIndex = 62 /*jacInx*/;
  nonLinearSystemData[42].initializeStaticNLSData = initializeStaticDataNLS3141;
  nonLinearSystemData[42].getIterationVars = getIterationVarsNLS3141;
  nonLinearSystemData[42].checkConstraints = NULL;
  
  
  nonLinearSystemData[41].equationIndex = 3120;
  nonLinearSystemData[41].size = 1;
  nonLinearSystemData[41].homotopySupport = 0;
  nonLinearSystemData[41].mixedSystem = 1;
  nonLinearSystemData[41].residualFunc = residualFunc3120;
  nonLinearSystemData[41].strictTearingFunctionCall = NULL;
  nonLinearSystemData[41].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac221_column;
  nonLinearSystemData[41].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac221;
  nonLinearSystemData[41].jacobianIndex = 61 /*jacInx*/;
  nonLinearSystemData[41].initializeStaticNLSData = initializeStaticDataNLS3120;
  nonLinearSystemData[41].getIterationVars = getIterationVarsNLS3120;
  nonLinearSystemData[41].checkConstraints = NULL;
  
  
  nonLinearSystemData[40].equationIndex = 3099;
  nonLinearSystemData[40].size = 1;
  nonLinearSystemData[40].homotopySupport = 0;
  nonLinearSystemData[40].mixedSystem = 1;
  nonLinearSystemData[40].residualFunc = residualFunc3099;
  nonLinearSystemData[40].strictTearingFunctionCall = NULL;
  nonLinearSystemData[40].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac220_column;
  nonLinearSystemData[40].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac220;
  nonLinearSystemData[40].jacobianIndex = 60 /*jacInx*/;
  nonLinearSystemData[40].initializeStaticNLSData = initializeStaticDataNLS3099;
  nonLinearSystemData[40].getIterationVars = getIterationVarsNLS3099;
  nonLinearSystemData[40].checkConstraints = NULL;
  
  
  nonLinearSystemData[39].equationIndex = 2905;
  nonLinearSystemData[39].size = 1;
  nonLinearSystemData[39].homotopySupport = 0;
  nonLinearSystemData[39].mixedSystem = 1;
  nonLinearSystemData[39].residualFunc = residualFunc2905;
  nonLinearSystemData[39].strictTearingFunctionCall = NULL;
  nonLinearSystemData[39].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac219_column;
  nonLinearSystemData[39].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac219;
  nonLinearSystemData[39].jacobianIndex = 59 /*jacInx*/;
  nonLinearSystemData[39].initializeStaticNLSData = initializeStaticDataNLS2905;
  nonLinearSystemData[39].getIterationVars = getIterationVarsNLS2905;
  nonLinearSystemData[39].checkConstraints = NULL;
  
  
  nonLinearSystemData[38].equationIndex = 2728;
  nonLinearSystemData[38].size = 1;
  nonLinearSystemData[38].homotopySupport = 0;
  nonLinearSystemData[38].mixedSystem = 0;
  nonLinearSystemData[38].residualFunc = residualFunc2728;
  nonLinearSystemData[38].strictTearingFunctionCall = NULL;
  nonLinearSystemData[38].analyticalJacobianColumn = NULL;
  nonLinearSystemData[38].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[38].jacobianIndex = -1;
  nonLinearSystemData[38].initializeStaticNLSData = initializeStaticDataNLS2728;
  nonLinearSystemData[38].getIterationVars = getIterationVarsNLS2728;
  nonLinearSystemData[38].checkConstraints = NULL;
  
  
  nonLinearSystemData[37].equationIndex = 2722;
  nonLinearSystemData[37].size = 1;
  nonLinearSystemData[37].homotopySupport = 0;
  nonLinearSystemData[37].mixedSystem = 1;
  nonLinearSystemData[37].residualFunc = residualFunc2722;
  nonLinearSystemData[37].strictTearingFunctionCall = NULL;
  nonLinearSystemData[37].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac214_column;
  nonLinearSystemData[37].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac214;
  nonLinearSystemData[37].jacobianIndex = 55 /*jacInx*/;
  nonLinearSystemData[37].initializeStaticNLSData = initializeStaticDataNLS2722;
  nonLinearSystemData[37].getIterationVars = getIterationVarsNLS2722;
  nonLinearSystemData[37].checkConstraints = NULL;
  
  
  nonLinearSystemData[36].equationIndex = 2615;
  nonLinearSystemData[36].size = 1;
  nonLinearSystemData[36].homotopySupport = 0;
  nonLinearSystemData[36].mixedSystem = 0;
  nonLinearSystemData[36].residualFunc = residualFunc2615;
  nonLinearSystemData[36].strictTearingFunctionCall = NULL;
  nonLinearSystemData[36].analyticalJacobianColumn = NULL;
  nonLinearSystemData[36].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[36].jacobianIndex = -1;
  nonLinearSystemData[36].initializeStaticNLSData = initializeStaticDataNLS2615;
  nonLinearSystemData[36].getIterationVars = getIterationVarsNLS2615;
  nonLinearSystemData[36].checkConstraints = NULL;
  
  
  nonLinearSystemData[35].equationIndex = 2609;
  nonLinearSystemData[35].size = 1;
  nonLinearSystemData[35].homotopySupport = 0;
  nonLinearSystemData[35].mixedSystem = 1;
  nonLinearSystemData[35].residualFunc = residualFunc2609;
  nonLinearSystemData[35].strictTearingFunctionCall = NULL;
  nonLinearSystemData[35].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac210_column;
  nonLinearSystemData[35].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac210;
  nonLinearSystemData[35].jacobianIndex = 52 /*jacInx*/;
  nonLinearSystemData[35].initializeStaticNLSData = initializeStaticDataNLS2609;
  nonLinearSystemData[35].getIterationVars = getIterationVarsNLS2609;
  nonLinearSystemData[35].checkConstraints = NULL;
  
  
  nonLinearSystemData[34].equationIndex = 2502;
  nonLinearSystemData[34].size = 1;
  nonLinearSystemData[34].homotopySupport = 0;
  nonLinearSystemData[34].mixedSystem = 0;
  nonLinearSystemData[34].residualFunc = residualFunc2502;
  nonLinearSystemData[34].strictTearingFunctionCall = NULL;
  nonLinearSystemData[34].analyticalJacobianColumn = NULL;
  nonLinearSystemData[34].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[34].jacobianIndex = -1;
  nonLinearSystemData[34].initializeStaticNLSData = initializeStaticDataNLS2502;
  nonLinearSystemData[34].getIterationVars = getIterationVarsNLS2502;
  nonLinearSystemData[34].checkConstraints = NULL;
  
  
  nonLinearSystemData[33].equationIndex = 2496;
  nonLinearSystemData[33].size = 1;
  nonLinearSystemData[33].homotopySupport = 0;
  nonLinearSystemData[33].mixedSystem = 1;
  nonLinearSystemData[33].residualFunc = residualFunc2496;
  nonLinearSystemData[33].strictTearingFunctionCall = NULL;
  nonLinearSystemData[33].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac206_column;
  nonLinearSystemData[33].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac206;
  nonLinearSystemData[33].jacobianIndex = 49 /*jacInx*/;
  nonLinearSystemData[33].initializeStaticNLSData = initializeStaticDataNLS2496;
  nonLinearSystemData[33].getIterationVars = getIterationVarsNLS2496;
  nonLinearSystemData[33].checkConstraints = NULL;
  
  
  nonLinearSystemData[32].equationIndex = 2389;
  nonLinearSystemData[32].size = 1;
  nonLinearSystemData[32].homotopySupport = 0;
  nonLinearSystemData[32].mixedSystem = 0;
  nonLinearSystemData[32].residualFunc = residualFunc2389;
  nonLinearSystemData[32].strictTearingFunctionCall = NULL;
  nonLinearSystemData[32].analyticalJacobianColumn = NULL;
  nonLinearSystemData[32].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[32].jacobianIndex = -1;
  nonLinearSystemData[32].initializeStaticNLSData = initializeStaticDataNLS2389;
  nonLinearSystemData[32].getIterationVars = getIterationVarsNLS2389;
  nonLinearSystemData[32].checkConstraints = NULL;
  
  
  nonLinearSystemData[31].equationIndex = 2383;
  nonLinearSystemData[31].size = 1;
  nonLinearSystemData[31].homotopySupport = 0;
  nonLinearSystemData[31].mixedSystem = 1;
  nonLinearSystemData[31].residualFunc = residualFunc2383;
  nonLinearSystemData[31].strictTearingFunctionCall = NULL;
  nonLinearSystemData[31].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac202_column;
  nonLinearSystemData[31].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac202;
  nonLinearSystemData[31].jacobianIndex = 46 /*jacInx*/;
  nonLinearSystemData[31].initializeStaticNLSData = initializeStaticDataNLS2383;
  nonLinearSystemData[31].getIterationVars = getIterationVarsNLS2383;
  nonLinearSystemData[31].checkConstraints = NULL;
  
  
  nonLinearSystemData[30].equationIndex = 2276;
  nonLinearSystemData[30].size = 1;
  nonLinearSystemData[30].homotopySupport = 0;
  nonLinearSystemData[30].mixedSystem = 0;
  nonLinearSystemData[30].residualFunc = residualFunc2276;
  nonLinearSystemData[30].strictTearingFunctionCall = NULL;
  nonLinearSystemData[30].analyticalJacobianColumn = NULL;
  nonLinearSystemData[30].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[30].jacobianIndex = -1;
  nonLinearSystemData[30].initializeStaticNLSData = initializeStaticDataNLS2276;
  nonLinearSystemData[30].getIterationVars = getIterationVarsNLS2276;
  nonLinearSystemData[30].checkConstraints = NULL;
  
  
  nonLinearSystemData[29].equationIndex = 2270;
  nonLinearSystemData[29].size = 1;
  nonLinearSystemData[29].homotopySupport = 0;
  nonLinearSystemData[29].mixedSystem = 1;
  nonLinearSystemData[29].residualFunc = residualFunc2270;
  nonLinearSystemData[29].strictTearingFunctionCall = NULL;
  nonLinearSystemData[29].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac198_column;
  nonLinearSystemData[29].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac198;
  nonLinearSystemData[29].jacobianIndex = 43 /*jacInx*/;
  nonLinearSystemData[29].initializeStaticNLSData = initializeStaticDataNLS2270;
  nonLinearSystemData[29].getIterationVars = getIterationVarsNLS2270;
  nonLinearSystemData[29].checkConstraints = NULL;
  
  
  nonLinearSystemData[28].equationIndex = 2163;
  nonLinearSystemData[28].size = 1;
  nonLinearSystemData[28].homotopySupport = 0;
  nonLinearSystemData[28].mixedSystem = 0;
  nonLinearSystemData[28].residualFunc = residualFunc2163;
  nonLinearSystemData[28].strictTearingFunctionCall = NULL;
  nonLinearSystemData[28].analyticalJacobianColumn = NULL;
  nonLinearSystemData[28].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[28].jacobianIndex = -1;
  nonLinearSystemData[28].initializeStaticNLSData = initializeStaticDataNLS2163;
  nonLinearSystemData[28].getIterationVars = getIterationVarsNLS2163;
  nonLinearSystemData[28].checkConstraints = NULL;
  
  
  nonLinearSystemData[27].equationIndex = 2157;
  nonLinearSystemData[27].size = 1;
  nonLinearSystemData[27].homotopySupport = 0;
  nonLinearSystemData[27].mixedSystem = 1;
  nonLinearSystemData[27].residualFunc = residualFunc2157;
  nonLinearSystemData[27].strictTearingFunctionCall = NULL;
  nonLinearSystemData[27].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac194_column;
  nonLinearSystemData[27].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac194;
  nonLinearSystemData[27].jacobianIndex = 40 /*jacInx*/;
  nonLinearSystemData[27].initializeStaticNLSData = initializeStaticDataNLS2157;
  nonLinearSystemData[27].getIterationVars = getIterationVarsNLS2157;
  nonLinearSystemData[27].checkConstraints = NULL;
  
  
  nonLinearSystemData[26].equationIndex = 2050;
  nonLinearSystemData[26].size = 1;
  nonLinearSystemData[26].homotopySupport = 0;
  nonLinearSystemData[26].mixedSystem = 0;
  nonLinearSystemData[26].residualFunc = residualFunc2050;
  nonLinearSystemData[26].strictTearingFunctionCall = NULL;
  nonLinearSystemData[26].analyticalJacobianColumn = NULL;
  nonLinearSystemData[26].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[26].jacobianIndex = -1;
  nonLinearSystemData[26].initializeStaticNLSData = initializeStaticDataNLS2050;
  nonLinearSystemData[26].getIterationVars = getIterationVarsNLS2050;
  nonLinearSystemData[26].checkConstraints = NULL;
  
  
  nonLinearSystemData[25].equationIndex = 2044;
  nonLinearSystemData[25].size = 1;
  nonLinearSystemData[25].homotopySupport = 0;
  nonLinearSystemData[25].mixedSystem = 1;
  nonLinearSystemData[25].residualFunc = residualFunc2044;
  nonLinearSystemData[25].strictTearingFunctionCall = NULL;
  nonLinearSystemData[25].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac190_column;
  nonLinearSystemData[25].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac190;
  nonLinearSystemData[25].jacobianIndex = 37 /*jacInx*/;
  nonLinearSystemData[25].initializeStaticNLSData = initializeStaticDataNLS2044;
  nonLinearSystemData[25].getIterationVars = getIterationVarsNLS2044;
  nonLinearSystemData[25].checkConstraints = NULL;
  
  
  nonLinearSystemData[24].equationIndex = 1937;
  nonLinearSystemData[24].size = 1;
  nonLinearSystemData[24].homotopySupport = 0;
  nonLinearSystemData[24].mixedSystem = 0;
  nonLinearSystemData[24].residualFunc = residualFunc1937;
  nonLinearSystemData[24].strictTearingFunctionCall = NULL;
  nonLinearSystemData[24].analyticalJacobianColumn = NULL;
  nonLinearSystemData[24].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[24].jacobianIndex = -1;
  nonLinearSystemData[24].initializeStaticNLSData = initializeStaticDataNLS1937;
  nonLinearSystemData[24].getIterationVars = getIterationVarsNLS1937;
  nonLinearSystemData[24].checkConstraints = NULL;
  
  
  nonLinearSystemData[23].equationIndex = 1931;
  nonLinearSystemData[23].size = 1;
  nonLinearSystemData[23].homotopySupport = 0;
  nonLinearSystemData[23].mixedSystem = 1;
  nonLinearSystemData[23].residualFunc = residualFunc1931;
  nonLinearSystemData[23].strictTearingFunctionCall = NULL;
  nonLinearSystemData[23].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac186_column;
  nonLinearSystemData[23].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac186;
  nonLinearSystemData[23].jacobianIndex = 34 /*jacInx*/;
  nonLinearSystemData[23].initializeStaticNLSData = initializeStaticDataNLS1931;
  nonLinearSystemData[23].getIterationVars = getIterationVarsNLS1931;
  nonLinearSystemData[23].checkConstraints = NULL;
  
  
  nonLinearSystemData[22].equationIndex = 1824;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0;
  nonLinearSystemData[22].mixedSystem = 0;
  nonLinearSystemData[22].residualFunc = residualFunc1824;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS1824;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS1824;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  
  nonLinearSystemData[21].equationIndex = 1818;
  nonLinearSystemData[21].size = 1;
  nonLinearSystemData[21].homotopySupport = 0;
  nonLinearSystemData[21].mixedSystem = 1;
  nonLinearSystemData[21].residualFunc = residualFunc1818;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac182_column;
  nonLinearSystemData[21].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac182;
  nonLinearSystemData[21].jacobianIndex = 31 /*jacInx*/;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS1818;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS1818;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  
  nonLinearSystemData[20].equationIndex = 1711;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0;
  nonLinearSystemData[20].mixedSystem = 0;
  nonLinearSystemData[20].residualFunc = residualFunc1711;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS1711;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS1711;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  
  nonLinearSystemData[19].equationIndex = 1705;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0;
  nonLinearSystemData[19].mixedSystem = 1;
  nonLinearSystemData[19].residualFunc = residualFunc1705;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac178_column;
  nonLinearSystemData[19].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac178;
  nonLinearSystemData[19].jacobianIndex = 28 /*jacInx*/;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS1705;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS1705;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  
  nonLinearSystemData[18].equationIndex = 1598;
  nonLinearSystemData[18].size = 1;
  nonLinearSystemData[18].homotopySupport = 0;
  nonLinearSystemData[18].mixedSystem = 0;
  nonLinearSystemData[18].residualFunc = residualFunc1598;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = NULL;
  nonLinearSystemData[18].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[18].jacobianIndex = -1;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS1598;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS1598;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  
  nonLinearSystemData[17].equationIndex = 1592;
  nonLinearSystemData[17].size = 1;
  nonLinearSystemData[17].homotopySupport = 0;
  nonLinearSystemData[17].mixedSystem = 1;
  nonLinearSystemData[17].residualFunc = residualFunc1592;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac174_column;
  nonLinearSystemData[17].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac174;
  nonLinearSystemData[17].jacobianIndex = 25 /*jacInx*/;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS1592;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS1592;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  
  nonLinearSystemData[16].equationIndex = 1485;
  nonLinearSystemData[16].size = 1;
  nonLinearSystemData[16].homotopySupport = 0;
  nonLinearSystemData[16].mixedSystem = 0;
  nonLinearSystemData[16].residualFunc = residualFunc1485;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS1485;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS1485;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  
  nonLinearSystemData[15].equationIndex = 1479;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0;
  nonLinearSystemData[15].mixedSystem = 1;
  nonLinearSystemData[15].residualFunc = residualFunc1479;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac170_column;
  nonLinearSystemData[15].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac170;
  nonLinearSystemData[15].jacobianIndex = 22 /*jacInx*/;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS1479;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS1479;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  
  nonLinearSystemData[14].equationIndex = 1372;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0;
  nonLinearSystemData[14].mixedSystem = 0;
  nonLinearSystemData[14].residualFunc = residualFunc1372;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS1372;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS1372;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  
  nonLinearSystemData[13].equationIndex = 1366;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0;
  nonLinearSystemData[13].mixedSystem = 1;
  nonLinearSystemData[13].residualFunc = residualFunc1366;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac166_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac166;
  nonLinearSystemData[13].jacobianIndex = 19 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS1366;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS1366;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  
  nonLinearSystemData[12].equationIndex = 1259;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0;
  nonLinearSystemData[12].mixedSystem = 0;
  nonLinearSystemData[12].residualFunc = residualFunc1259;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS1259;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS1259;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  
  nonLinearSystemData[11].equationIndex = 1253;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0;
  nonLinearSystemData[11].mixedSystem = 1;
  nonLinearSystemData[11].residualFunc = residualFunc1253;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac162_column;
  nonLinearSystemData[11].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac162;
  nonLinearSystemData[11].jacobianIndex = 16 /*jacInx*/;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS1253;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS1253;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  
  nonLinearSystemData[10].equationIndex = 1146;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0;
  nonLinearSystemData[10].mixedSystem = 0;
  nonLinearSystemData[10].residualFunc = residualFunc1146;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1146;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1146;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  
  nonLinearSystemData[9].equationIndex = 1140;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 1;
  nonLinearSystemData[9].residualFunc = residualFunc1140;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac158_column;
  nonLinearSystemData[9].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac158;
  nonLinearSystemData[9].jacobianIndex = 13 /*jacInx*/;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS1140;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS1140;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 1033;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 0;
  nonLinearSystemData[8].residualFunc = residualFunc1033;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS1033;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS1033;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 1027;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 1;
  nonLinearSystemData[7].residualFunc = residualFunc1027;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac154_column;
  nonLinearSystemData[7].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac154;
  nonLinearSystemData[7].jacobianIndex = 10 /*jacInx*/;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS1027;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS1027;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 920;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc920;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS920;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS920;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 914;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc914;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac150_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac150;
  nonLinearSystemData[5].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS914;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS914;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 807;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc807;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS807;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS807;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 801;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc801;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac146_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac146;
  nonLinearSystemData[3].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS801;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS801;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 694;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc694;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS694;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS694;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 688;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc688;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = MOSES_Simulations_ACTS_adsorption_functionJacNLSJac142_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = MOSES_Simulations_ACTS_adsorption_initialAnalyticJacobianNLSJac142;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS688;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS688;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 636;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc636;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS636;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS636;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

