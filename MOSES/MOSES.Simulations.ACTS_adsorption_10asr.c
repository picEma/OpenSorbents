/* Asserts */
#include "MOSES.Simulations.ACTS_adsorption_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 7002
type: ALGORITHM

  assert(reactor.M_v[1] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[1], has value: " + String(reactor.M_v[1], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7002};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,69,"Variable violating min constraint: 0.0 <= reactor.M_v[1], has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[735] /* reactor.M_v[1] DUMMY_STATE */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[735] /* reactor.M_v[1] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7003
type: ALGORITHM

  assert(reactor.M_v[2] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[2], has value: " + String(reactor.M_v[2], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7003};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,69,"Variable violating min constraint: 0.0 <= reactor.M_v[2], has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[736] /* reactor.M_v[2] DUMMY_STATE */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[736] /* reactor.M_v[2] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7004
type: ALGORITHM

  assert(reactor.M_v[3] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[3], has value: " + String(reactor.M_v[3], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7004};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,69,"Variable violating min constraint: 0.0 <= reactor.M_v[3], has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->localData[0]->realVars[737] /* reactor.M_v[3] DUMMY_STATE */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[737] /* reactor.M_v[3] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7005
type: ALGORITHM

  assert(reactor.M_v[4] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[4], has value: " + String(reactor.M_v[4], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7005};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,69,"Variable violating min constraint: 0.0 <= reactor.M_v[4], has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->localData[0]->realVars[738] /* reactor.M_v[4] DUMMY_STATE */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[738] /* reactor.M_v[4] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7006
type: ALGORITHM

  assert(reactor.M_v[5] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[5], has value: " + String(reactor.M_v[5], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7006};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,69,"Variable violating min constraint: 0.0 <= reactor.M_v[5], has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->localData[0]->realVars[739] /* reactor.M_v[5] DUMMY_STATE */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[739] /* reactor.M_v[5] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7007
type: ALGORITHM

  assert(reactor.M_v[6] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[6], has value: " + String(reactor.M_v[6], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7007};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,69,"Variable violating min constraint: 0.0 <= reactor.M_v[6], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[740] /* reactor.M_v[6] DUMMY_STATE */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[740] /* reactor.M_v[6] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[6] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7008
type: ALGORITHM

  assert(reactor.M_v[7] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[7], has value: " + String(reactor.M_v[7], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7008};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,69,"Variable violating min constraint: 0.0 <= reactor.M_v[7], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[741] /* reactor.M_v[7] DUMMY_STATE */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[741] /* reactor.M_v[7] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[7] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7009
type: ALGORITHM

  assert(reactor.M_v[8] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[8], has value: " + String(reactor.M_v[8], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7009};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,69,"Variable violating min constraint: 0.0 <= reactor.M_v[8], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[742] /* reactor.M_v[8] DUMMY_STATE */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[742] /* reactor.M_v[8] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[8] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7010
type: ALGORITHM

  assert(reactor.M_v[9] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[9], has value: " + String(reactor.M_v[9], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7010};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,69,"Variable violating min constraint: 0.0 <= reactor.M_v[9], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[743] /* reactor.M_v[9] DUMMY_STATE */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[743] /* reactor.M_v[9] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[9] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7011
type: ALGORITHM

  assert(reactor.M_v[10] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[10], has value: " + String(reactor.M_v[10], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7011};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,70,"Variable violating min constraint: 0.0 <= reactor.M_v[10], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[744] /* reactor.M_v[10] DUMMY_STATE */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[744] /* reactor.M_v[10] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[10] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7012
type: ALGORITHM

  assert(reactor.M_v[11] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[11], has value: " + String(reactor.M_v[11], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7012};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,70,"Variable violating min constraint: 0.0 <= reactor.M_v[11], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[745] /* reactor.M_v[11] DUMMY_STATE */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[745] /* reactor.M_v[11] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[11] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7013
type: ALGORITHM

  assert(reactor.M_v[12] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[12], has value: " + String(reactor.M_v[12], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7013};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,70,"Variable violating min constraint: 0.0 <= reactor.M_v[12], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[746] /* reactor.M_v[12] DUMMY_STATE */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[746] /* reactor.M_v[12] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[12] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7014
type: ALGORITHM

  assert(reactor.M_v[13] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[13], has value: " + String(reactor.M_v[13], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7014};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,70,"Variable violating min constraint: 0.0 <= reactor.M_v[13], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[747] /* reactor.M_v[13] DUMMY_STATE */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[747] /* reactor.M_v[13] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[13] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7015
type: ALGORITHM

  assert(reactor.M_v[14] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[14], has value: " + String(reactor.M_v[14], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7015};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,70,"Variable violating min constraint: 0.0 <= reactor.M_v[14], has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[748] /* reactor.M_v[14] DUMMY_STATE */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[748] /* reactor.M_v[14] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[14] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7016
type: ALGORITHM

  assert(reactor.M_v[15] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[15], has value: " + String(reactor.M_v[15], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7016};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,70,"Variable violating min constraint: 0.0 <= reactor.M_v[15], has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[749] /* reactor.M_v[15] DUMMY_STATE */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[749] /* reactor.M_v[15] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[15] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7017
type: ALGORITHM

  assert(reactor.M_v[16] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[16], has value: " + String(reactor.M_v[16], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7017};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,70,"Variable violating min constraint: 0.0 <= reactor.M_v[16], has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp60 = GreaterEq(data->localData[0]->realVars[750] /* reactor.M_v[16] DUMMY_STATE */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[750] /* reactor.M_v[16] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[16] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7018
type: ALGORITHM

  assert(reactor.M_v[17] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[17], has value: " + String(reactor.M_v[17], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7018};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,70,"Variable violating min constraint: 0.0 <= reactor.M_v[17], has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[751] /* reactor.M_v[17] DUMMY_STATE */,0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[751] /* reactor.M_v[17] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[17] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7019
type: ALGORITHM

  assert(reactor.M_v[18] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[18], has value: " + String(reactor.M_v[18], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7019};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,70,"Variable violating min constraint: 0.0 <= reactor.M_v[18], has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp68 = GreaterEq(data->localData[0]->realVars[752] /* reactor.M_v[18] DUMMY_STATE */,0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[752] /* reactor.M_v[18] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[18] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7020
type: ALGORITHM

  assert(reactor.M_v[19] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[19], has value: " + String(reactor.M_v[19], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7020};
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,70,"Variable violating min constraint: 0.0 <= reactor.M_v[19], has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[753] /* reactor.M_v[19] DUMMY_STATE */,0.0);
    if(!tmp72)
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[753] /* reactor.M_v[19] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[19] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7021
type: ALGORITHM

  assert(reactor.M_v[20] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_v[20], has value: " + String(reactor.M_v[20], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7021};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,70,"Variable violating min constraint: 0.0 <= reactor.M_v[20], has value: ");
  modelica_string tmp78;
  static int tmp79 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp79)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[754] /* reactor.M_v[20] DUMMY_STATE */,0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[754] /* reactor.M_v[20] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",97,3,97,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_v[20] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp79 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7022
type: ALGORITHM

  assert(reactor.T_c[1] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[1], has value: " + String(reactor.T_c[1], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7022};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,69,"Variable violating min constraint: 0.0 <= reactor.T_c[1], has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp80 = GreaterEq(data->localData[0]->realVars[881] /* reactor.T_c[1] variable */,0.0);
    if(!tmp80)
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[881] /* reactor.T_c[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7023
type: ALGORITHM

  assert(reactor.T_c[2] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[2], has value: " + String(reactor.T_c[2], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7023};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,69,"Variable violating min constraint: 0.0 <= reactor.T_c[2], has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[882] /* reactor.T_c[2] variable */,0.0);
    if(!tmp84)
    {
      tmp86 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[882] /* reactor.T_c[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7024
type: ALGORITHM

  assert(reactor.T_c[3] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[3], has value: " + String(reactor.T_c[3], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7024};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,69,"Variable violating min constraint: 0.0 <= reactor.T_c[3], has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp88 = GreaterEq(data->localData[0]->realVars[883] /* reactor.T_c[3] variable */,0.0);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[883] /* reactor.T_c[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7025
type: ALGORITHM

  assert(reactor.T_c[4] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[4], has value: " + String(reactor.T_c[4], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7025};
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,69,"Variable violating min constraint: 0.0 <= reactor.T_c[4], has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[884] /* reactor.T_c[4] variable */,0.0);
    if(!tmp92)
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[884] /* reactor.T_c[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7026
type: ALGORITHM

  assert(reactor.T_c[5] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[5], has value: " + String(reactor.T_c[5], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7026};
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,69,"Variable violating min constraint: 0.0 <= reactor.T_c[5], has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[885] /* reactor.T_c[5] variable */,0.0);
    if(!tmp96)
    {
      tmp98 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[885] /* reactor.T_c[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7027
type: ALGORITHM

  assert(reactor.T_c[6] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[6], has value: " + String(reactor.T_c[6], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7027};
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,69,"Variable violating min constraint: 0.0 <= reactor.T_c[6], has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp100 = GreaterEq(data->localData[0]->realVars[886] /* reactor.T_c[6] variable */,0.0);
    if(!tmp100)
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[886] /* reactor.T_c[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[6] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7028
type: ALGORITHM

  assert(reactor.T_c[7] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[7], has value: " + String(reactor.T_c[7], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7028};
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,69,"Variable violating min constraint: 0.0 <= reactor.T_c[7], has value: ");
  modelica_string tmp106;
  static int tmp107 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp107)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[887] /* reactor.T_c[7] variable */,0.0);
    if(!tmp104)
    {
      tmp106 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[887] /* reactor.T_c[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[7] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp107 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7029
type: ALGORITHM

  assert(reactor.T_c[8] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[8], has value: " + String(reactor.T_c[8], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7029};
  modelica_boolean tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,69,"Variable violating min constraint: 0.0 <= reactor.T_c[8], has value: ");
  modelica_string tmp110;
  static int tmp111 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp111)
  {
    tmp108 = GreaterEq(data->localData[0]->realVars[888] /* reactor.T_c[8] variable */,0.0);
    if(!tmp108)
    {
      tmp110 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[888] /* reactor.T_c[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp109),tmp110);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[8] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp111 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7030
type: ALGORITHM

  assert(reactor.T_c[9] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[9], has value: " + String(reactor.T_c[9], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7030};
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,69,"Variable violating min constraint: 0.0 <= reactor.T_c[9], has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp112 = GreaterEq(data->localData[0]->realVars[889] /* reactor.T_c[9] variable */,0.0);
    if(!tmp112)
    {
      tmp114 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[889] /* reactor.T_c[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[9] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7031
type: ALGORITHM

  assert(reactor.T_c[10] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[10], has value: " + String(reactor.T_c[10], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7031};
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,70,"Variable violating min constraint: 0.0 <= reactor.T_c[10], has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp116 = GreaterEq(data->localData[0]->realVars[890] /* reactor.T_c[10] variable */,0.0);
    if(!tmp116)
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[890] /* reactor.T_c[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[10] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7032
type: ALGORITHM

  assert(reactor.T_c[11] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[11], has value: " + String(reactor.T_c[11], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7032};
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,70,"Variable violating min constraint: 0.0 <= reactor.T_c[11], has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[891] /* reactor.T_c[11] variable */,0.0);
    if(!tmp120)
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[891] /* reactor.T_c[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[11] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7033
type: ALGORITHM

  assert(reactor.T_c[12] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[12], has value: " + String(reactor.T_c[12], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7033};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,70,"Variable violating min constraint: 0.0 <= reactor.T_c[12], has value: ");
  modelica_string tmp126;
  static int tmp127 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp127)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[892] /* reactor.T_c[12] variable */,0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[892] /* reactor.T_c[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[12] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7034
type: ALGORITHM

  assert(reactor.T_c[13] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[13], has value: " + String(reactor.T_c[13], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7034};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,70,"Variable violating min constraint: 0.0 <= reactor.T_c[13], has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp128 = GreaterEq(data->localData[0]->realVars[893] /* reactor.T_c[13] variable */,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[893] /* reactor.T_c[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[13] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7035
type: ALGORITHM

  assert(reactor.T_c[14] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[14], has value: " + String(reactor.T_c[14], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7035};
  modelica_boolean tmp132;
  static const MMC_DEFSTRINGLIT(tmp133,70,"Variable violating min constraint: 0.0 <= reactor.T_c[14], has value: ");
  modelica_string tmp134;
  static int tmp135 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[894] /* reactor.T_c[14] variable */,0.0);
    if(!tmp132)
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[894] /* reactor.T_c[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[14] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7036
type: ALGORITHM

  assert(reactor.T_c[15] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[15], has value: " + String(reactor.T_c[15], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7036};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,70,"Variable violating min constraint: 0.0 <= reactor.T_c[15], has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp136 = GreaterEq(data->localData[0]->realVars[895] /* reactor.T_c[15] variable */,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[895] /* reactor.T_c[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[15] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7037
type: ALGORITHM

  assert(reactor.T_c[16] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[16], has value: " + String(reactor.T_c[16], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7037};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,70,"Variable violating min constraint: 0.0 <= reactor.T_c[16], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[896] /* reactor.T_c[16] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[896] /* reactor.T_c[16] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[16] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7038
type: ALGORITHM

  assert(reactor.T_c[17] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[17], has value: " + String(reactor.T_c[17], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7038};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,70,"Variable violating min constraint: 0.0 <= reactor.T_c[17], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[897] /* reactor.T_c[17] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[897] /* reactor.T_c[17] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[17] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7039
type: ALGORITHM

  assert(reactor.T_c[18] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[18], has value: " + String(reactor.T_c[18], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7039};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,70,"Variable violating min constraint: 0.0 <= reactor.T_c[18], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[898] /* reactor.T_c[18] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[898] /* reactor.T_c[18] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[18] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7040
type: ALGORITHM

  assert(reactor.T_c[19] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[19], has value: " + String(reactor.T_c[19], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7040};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,70,"Variable violating min constraint: 0.0 <= reactor.T_c[19], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[899] /* reactor.T_c[19] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[899] /* reactor.T_c[19] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[19] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7041
type: ALGORITHM

  assert(reactor.T_c[20] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_c[20], has value: " + String(reactor.T_c[20], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7041};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,70,"Variable violating min constraint: 0.0 <= reactor.T_c[20], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[900] /* reactor.T_c[20] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[900] /* reactor.T_c[20] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",144,3,144,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_c[20] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7042
type: ALGORITHM

  assert(reactor.T_b[1] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[1], has value: " + String(reactor.T_b[1], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7042};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,69,"Variable violating min constraint: 0.0 <= reactor.T_b[1], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* reactor.T_b[1] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7043
type: ALGORITHM

  assert(reactor.T_b[2] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[2], has value: " + String(reactor.T_b[2], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7043};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,69,"Variable violating min constraint: 0.0 <= reactor.T_b[2], has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */,0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* reactor.T_b[2] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7044
type: ALGORITHM

  assert(reactor.T_b[3] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[3], has value: " + String(reactor.T_b[3], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7044};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,69,"Variable violating min constraint: 0.0 <= reactor.T_b[3], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* reactor.T_b[3] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7045
type: ALGORITHM

  assert(reactor.T_b[4] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[4], has value: " + String(reactor.T_b[4], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7045};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,69,"Variable violating min constraint: 0.0 <= reactor.T_b[4], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* reactor.T_b[4] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7046
type: ALGORITHM

  assert(reactor.T_b[5] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[5], has value: " + String(reactor.T_b[5], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7046};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,69,"Variable violating min constraint: 0.0 <= reactor.T_b[5], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* reactor.T_b[5] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7047
type: ALGORITHM

  assert(reactor.T_b[6] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[6], has value: " + String(reactor.T_b[6], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7047};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,69,"Variable violating min constraint: 0.0 <= reactor.T_b[6], has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */,0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[5] /* reactor.T_b[6] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[6] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7048
type: ALGORITHM

  assert(reactor.T_b[7] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[7], has value: " + String(reactor.T_b[7], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7048};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,69,"Variable violating min constraint: 0.0 <= reactor.T_b[7], has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */,0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* reactor.T_b[7] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[7] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7049
type: ALGORITHM

  assert(reactor.T_b[8] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[8], has value: " + String(reactor.T_b[8], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7049};
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,69,"Variable violating min constraint: 0.0 <= reactor.T_b[8], has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp188 = GreaterEq(data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */,0.0);
    if(!tmp188)
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* reactor.T_b[8] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[8] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7050
type: ALGORITHM

  assert(reactor.T_b[9] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[9], has value: " + String(reactor.T_b[9], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7050};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,69,"Variable violating min constraint: 0.0 <= reactor.T_b[9], has value: ");
  modelica_string tmp194;
  static int tmp195 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp195)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */,0.0);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* reactor.T_b[9] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[9] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7051
type: ALGORITHM

  assert(reactor.T_b[10] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[10], has value: " + String(reactor.T_b[10], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7051};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,70,"Variable violating min constraint: 0.0 <= reactor.T_b[10], has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp196 = GreaterEq(data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */,0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* reactor.T_b[10] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[10] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7052
type: ALGORITHM

  assert(reactor.T_b[11] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[11], has value: " + String(reactor.T_b[11], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7052};
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,70,"Variable violating min constraint: 0.0 <= reactor.T_b[11], has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */,0.0);
    if(!tmp200)
    {
      tmp202 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* reactor.T_b[11] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[11] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7053
type: ALGORITHM

  assert(reactor.T_b[12] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[12], has value: " + String(reactor.T_b[12], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7053};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,70,"Variable violating min constraint: 0.0 <= reactor.T_b[12], has value: ");
  modelica_string tmp206;
  static int tmp207 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp207)
  {
    tmp204 = GreaterEq(data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */,0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* reactor.T_b[12] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[12] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp207 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7054
type: ALGORITHM

  assert(reactor.T_b[13] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[13], has value: " + String(reactor.T_b[13], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7054};
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,70,"Variable violating min constraint: 0.0 <= reactor.T_b[13], has value: ");
  modelica_string tmp210;
  static int tmp211 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp211)
  {
    tmp208 = GreaterEq(data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */,0.0);
    if(!tmp208)
    {
      tmp210 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* reactor.T_b[13] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[13] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7055
type: ALGORITHM

  assert(reactor.T_b[14] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[14], has value: " + String(reactor.T_b[14], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7055};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,70,"Variable violating min constraint: 0.0 <= reactor.T_b[14], has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp212 = GreaterEq(data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */,0.0);
    if(!tmp212)
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* reactor.T_b[14] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[14] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7056
type: ALGORITHM

  assert(reactor.T_b[15] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[15], has value: " + String(reactor.T_b[15], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7056};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,70,"Variable violating min constraint: 0.0 <= reactor.T_b[15], has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */,0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* reactor.T_b[15] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[15] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7057
type: ALGORITHM

  assert(reactor.T_b[16] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[16], has value: " + String(reactor.T_b[16], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7057};
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,70,"Variable violating min constraint: 0.0 <= reactor.T_b[16], has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */,0.0);
    if(!tmp220)
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* reactor.T_b[16] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[16] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7058
type: ALGORITHM

  assert(reactor.T_b[17] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[17], has value: " + String(reactor.T_b[17], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7058};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,70,"Variable violating min constraint: 0.0 <= reactor.T_b[17], has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* reactor.T_b[17] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[17] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7059
type: ALGORITHM

  assert(reactor.T_b[18] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[18], has value: " + String(reactor.T_b[18], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7059};
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,70,"Variable violating min constraint: 0.0 <= reactor.T_b[18], has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */,0.0);
    if(!tmp228)
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* reactor.T_b[18] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[18] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7060
type: ALGORITHM

  assert(reactor.T_b[19] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[19], has value: " + String(reactor.T_b[19], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7060};
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,70,"Variable violating min constraint: 0.0 <= reactor.T_b[19], has value: ");
  modelica_string tmp234;
  static int tmp235 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp235)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */,0.0);
    if(!tmp232)
    {
      tmp234 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* reactor.T_b[19] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[19] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7061
type: ALGORITHM

  assert(reactor.T_b[20] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.T_b[20], has value: " + String(reactor.T_b[20], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7061};
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,70,"Variable violating min constraint: 0.0 <= reactor.T_b[20], has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp236 = GreaterEq(data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */,0.0);
    if(!tmp236)
    {
      tmp238 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* reactor.T_b[20] STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",145,3,145,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.T_b[20] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7062
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[1].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7062};
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,100,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp242;
  static int tmp243 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp243)
  {
    tmp240 = GreaterEq(data->localData[0]->realVars[1467] /* reactor.particle[1].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp240)
    {
      tmp242 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1467] /* reactor.particle[1].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7063
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[1].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7063};
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,106,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp244 = GreaterEq(data->localData[0]->realVars[1827] /* reactor.particle[1].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp244)
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1827] /* reactor.particle[1].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7064
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[1].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7064};
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,105,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[1727] /* reactor.particle[1].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp248)
    {
      tmp250 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1727] /* reactor.particle[1].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7065
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7065};
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,131,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp254;
  static int tmp255 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp255)
  {
    tmp252 = GreaterEq(data->localData[0]->realVars[1687] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp252)
    {
      tmp254 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1687] /* reactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7066
type: ALGORITHM

  assert(reactor.particle[1].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[1].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7066};
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,103,"Variable violating min constraint: 0.0 <= reactor.particle[1].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp256 = GreaterEq(data->localData[0]->realVars[1407] /* reactor.particle[1].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp256)
    {
      tmp258 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1407] /* reactor.particle[1].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7067
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[2].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7067};
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,100,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp262;
  static int tmp263 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp263)
  {
    tmp260 = GreaterEq(data->localData[0]->realVars[1468] /* reactor.particle[2].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp260)
    {
      tmp262 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1468] /* reactor.particle[2].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7068
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[2].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7068};
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,106,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp266;
  static int tmp267 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp267)
  {
    tmp264 = GreaterEq(data->localData[0]->realVars[1828] /* reactor.particle[2].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp264)
    {
      tmp266 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1828] /* reactor.particle[2].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp267 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7069
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[2].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7069};
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,105,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp268 = GreaterEq(data->localData[0]->realVars[1728] /* reactor.particle[2].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp268)
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1728] /* reactor.particle[2].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7070
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7070};
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,131,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[1688] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp272)
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1688] /* reactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7071
type: ALGORITHM

  assert(reactor.particle[2].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[2].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7071};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,103,"Variable violating min constraint: 0.0 <= reactor.particle[2].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp278;
  static int tmp279 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp279)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[1408] /* reactor.particle[2].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp276)
    {
      tmp278 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1408] /* reactor.particle[2].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7072
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[3].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7072};
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,100,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp282;
  static int tmp283 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp283)
  {
    tmp280 = GreaterEq(data->localData[0]->realVars[1469] /* reactor.particle[3].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp280)
    {
      tmp282 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1469] /* reactor.particle[3].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp283 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7073
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[3].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7073};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,106,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp284 = GreaterEq(data->localData[0]->realVars[1829] /* reactor.particle[3].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1829] /* reactor.particle[3].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp287 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7074
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[3].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7074};
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,105,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp288 = GreaterEq(data->localData[0]->realVars[1729] /* reactor.particle[3].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp288)
    {
      tmp290 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1729] /* reactor.particle[3].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7075
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7075};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,131,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp292 = GreaterEq(data->localData[0]->realVars[1689] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1689] /* reactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp295 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7076
type: ALGORITHM

  assert(reactor.particle[3].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[3].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7076};
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,103,"Variable violating min constraint: 0.0 <= reactor.particle[3].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[1409] /* reactor.particle[3].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp296)
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1409] /* reactor.particle[3].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp299 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7077
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[4].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7077};
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,100,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp302;
  static int tmp303 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp303)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[1470] /* reactor.particle[4].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp300)
    {
      tmp302 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1470] /* reactor.particle[4].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp303 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7078
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[4].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7078};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,106,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp304 = GreaterEq(data->localData[0]->realVars[1830] /* reactor.particle[4].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1830] /* reactor.particle[4].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp307 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7079
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[4].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7079};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,105,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[1730] /* reactor.particle[4].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1730] /* reactor.particle[4].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7080
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7080};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,131,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[1690] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1690] /* reactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7081
type: ALGORITHM

  assert(reactor.particle[4].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[4].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7081};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,103,"Variable violating min constraint: 0.0 <= reactor.particle[4].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[1410] /* reactor.particle[4].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1410] /* reactor.particle[4].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7082
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[5].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7082};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,100,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[1471] /* reactor.particle[5].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1471] /* reactor.particle[5].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7083
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[5].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7083};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,106,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[1831] /* reactor.particle[5].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1831] /* reactor.particle[5].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7084
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[5].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7084};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,105,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[1731] /* reactor.particle[5].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1731] /* reactor.particle[5].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7085
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7085};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,131,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp332 = GreaterEq(data->localData[0]->realVars[1691] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1691] /* reactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7086
type: ALGORITHM

  assert(reactor.particle[5].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[5].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7086};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,103,"Variable violating min constraint: 0.0 <= reactor.particle[5].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp336 = GreaterEq(data->localData[0]->realVars[1411] /* reactor.particle[5].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1411] /* reactor.particle[5].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7087
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[6].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7087};
  modelica_boolean tmp340;
  static const MMC_DEFSTRINGLIT(tmp341,100,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp342;
  static int tmp343 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp343)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[1472] /* reactor.particle[6].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp340)
    {
      tmp342 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1472] /* reactor.particle[6].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp341),tmp342);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp343 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7088
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[6].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7088};
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,106,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp346;
  static int tmp347 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp347)
  {
    tmp344 = GreaterEq(data->localData[0]->realVars[1832] /* reactor.particle[6].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp344)
    {
      tmp346 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1832] /* reactor.particle[6].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp347 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7089
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[6].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7089};
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,105,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp350;
  static int tmp351 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp351)
  {
    tmp348 = GreaterEq(data->localData[0]->realVars[1732] /* reactor.particle[6].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp348)
    {
      tmp350 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1732] /* reactor.particle[6].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7090
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7090};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,131,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp354;
  static int tmp355 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp355)
  {
    tmp352 = GreaterEq(data->localData[0]->realVars[1692] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp352)
    {
      tmp354 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1692] /* reactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp355 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7091
type: ALGORITHM

  assert(reactor.particle[6].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[6].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7091};
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,103,"Variable violating min constraint: 0.0 <= reactor.particle[6].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp356 = GreaterEq(data->localData[0]->realVars[1412] /* reactor.particle[6].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp356)
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1412] /* reactor.particle[6].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7092
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[7].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7092};
  modelica_boolean tmp360;
  static const MMC_DEFSTRINGLIT(tmp361,100,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp362;
  static int tmp363 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp363)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[1473] /* reactor.particle[7].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp360)
    {
      tmp362 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1473] /* reactor.particle[7].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp361),tmp362);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp363 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7093
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[7].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7093};
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,106,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp366;
  static int tmp367 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp367)
  {
    tmp364 = GreaterEq(data->localData[0]->realVars[1833] /* reactor.particle[7].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp364)
    {
      tmp366 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1833] /* reactor.particle[7].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp367 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7094
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[7].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7094};
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,105,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp368 = GreaterEq(data->localData[0]->realVars[1733] /* reactor.particle[7].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp368)
    {
      tmp370 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1733] /* reactor.particle[7].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7095
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7095};
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,131,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp374;
  static int tmp375 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp375)
  {
    tmp372 = GreaterEq(data->localData[0]->realVars[1693] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp372)
    {
      tmp374 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1693] /* reactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7096
type: ALGORITHM

  assert(reactor.particle[7].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[7].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7096};
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,103,"Variable violating min constraint: 0.0 <= reactor.particle[7].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp376 = GreaterEq(data->localData[0]->realVars[1413] /* reactor.particle[7].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp376)
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1413] /* reactor.particle[7].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7097
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[8].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7097};
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,100,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp382;
  static int tmp383 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp383)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[1474] /* reactor.particle[8].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp380)
    {
      tmp382 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1474] /* reactor.particle[8].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp383 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7098
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[8].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7098};
  modelica_boolean tmp384;
  static const MMC_DEFSTRINGLIT(tmp385,106,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp386;
  static int tmp387 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp387)
  {
    tmp384 = GreaterEq(data->localData[0]->realVars[1834] /* reactor.particle[8].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp384)
    {
      tmp386 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1834] /* reactor.particle[8].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp385),tmp386);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp387 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7099
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[8].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7099};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,105,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp388 = GreaterEq(data->localData[0]->realVars[1734] /* reactor.particle[8].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1734] /* reactor.particle[8].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7100
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7100};
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,131,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp394;
  static int tmp395 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp395)
  {
    tmp392 = GreaterEq(data->localData[0]->realVars[1694] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp392)
    {
      tmp394 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1694] /* reactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp395 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7101
type: ALGORITHM

  assert(reactor.particle[8].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[8].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7101};
  modelica_boolean tmp396;
  static const MMC_DEFSTRINGLIT(tmp397,103,"Variable violating min constraint: 0.0 <= reactor.particle[8].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp398;
  static int tmp399 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp399)
  {
    tmp396 = GreaterEq(data->localData[0]->realVars[1414] /* reactor.particle[8].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp396)
    {
      tmp398 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1414] /* reactor.particle[8].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp397),tmp398);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp399 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7102
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[9].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7102};
  modelica_boolean tmp400;
  static const MMC_DEFSTRINGLIT(tmp401,100,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp402;
  static int tmp403 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp403)
  {
    tmp400 = GreaterEq(data->localData[0]->realVars[1475] /* reactor.particle[9].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp400)
    {
      tmp402 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1475] /* reactor.particle[9].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp401),tmp402);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp403 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7103
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[9].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7103};
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,106,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp406;
  static int tmp407 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp407)
  {
    tmp404 = GreaterEq(data->localData[0]->realVars[1835] /* reactor.particle[9].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp404)
    {
      tmp406 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1835] /* reactor.particle[9].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp407 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7104
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[9].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7104};
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,105,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp410;
  static int tmp411 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp411)
  {
    tmp408 = GreaterEq(data->localData[0]->realVars[1735] /* reactor.particle[9].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp408)
    {
      tmp410 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1735] /* reactor.particle[9].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp411 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7105
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7105};
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,131,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp414;
  static int tmp415 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp415)
  {
    tmp412 = GreaterEq(data->localData[0]->realVars[1695] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp412)
    {
      tmp414 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1695] /* reactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp415 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7106
type: ALGORITHM

  assert(reactor.particle[9].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[9].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7106};
  modelica_boolean tmp416;
  static const MMC_DEFSTRINGLIT(tmp417,103,"Variable violating min constraint: 0.0 <= reactor.particle[9].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp418;
  static int tmp419 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp419)
  {
    tmp416 = GreaterEq(data->localData[0]->realVars[1415] /* reactor.particle[9].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp416)
    {
      tmp418 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1415] /* reactor.particle[9].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp417),tmp418);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp419 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7107
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[10].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7107};
  modelica_boolean tmp420;
  static const MMC_DEFSTRINGLIT(tmp421,101,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp422;
  static int tmp423 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp423)
  {
    tmp420 = GreaterEq(data->localData[0]->realVars[1476] /* reactor.particle[10].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp420)
    {
      tmp422 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1476] /* reactor.particle[10].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp421),tmp422);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp423 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7108
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[10].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7108};
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,107,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp426;
  static int tmp427 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp427)
  {
    tmp424 = GreaterEq(data->localData[0]->realVars[1836] /* reactor.particle[10].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp424)
    {
      tmp426 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1836] /* reactor.particle[10].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp427 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7109
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[10].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7109};
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,106,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp430;
  static int tmp431 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp431)
  {
    tmp428 = GreaterEq(data->localData[0]->realVars[1736] /* reactor.particle[10].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp428)
    {
      tmp430 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1736] /* reactor.particle[10].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp431 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7110
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7110};
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,132,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp432 = GreaterEq(data->localData[0]->realVars[1696] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp432)
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1696] /* reactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp435 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7111
type: ALGORITHM

  assert(reactor.particle[10].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[10].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7111};
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,104,"Variable violating min constraint: 0.0 <= reactor.particle[10].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp438;
  static int tmp439 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp439)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[1416] /* reactor.particle[10].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp436)
    {
      tmp438 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1416] /* reactor.particle[10].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7112
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[11].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7112};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,101,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp442;
  static int tmp443 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp443)
  {
    tmp440 = GreaterEq(data->localData[0]->realVars[1477] /* reactor.particle[11].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1477] /* reactor.particle[11].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp443 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7113
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[11].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7113};
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,107,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp446;
  static int tmp447 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp447)
  {
    tmp444 = GreaterEq(data->localData[0]->realVars[1837] /* reactor.particle[11].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp444)
    {
      tmp446 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1837] /* reactor.particle[11].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp447 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7114
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[11].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7114};
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,106,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp450;
  static int tmp451 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp451)
  {
    tmp448 = GreaterEq(data->localData[0]->realVars[1737] /* reactor.particle[11].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp448)
    {
      tmp450 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1737] /* reactor.particle[11].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp451 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7115
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7115};
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,132,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp454;
  static int tmp455 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp455)
  {
    tmp452 = GreaterEq(data->localData[0]->realVars[1697] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp452)
    {
      tmp454 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1697] /* reactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp455 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7116
type: ALGORITHM

  assert(reactor.particle[11].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[11].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7116};
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,104,"Variable violating min constraint: 0.0 <= reactor.particle[11].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp458;
  static int tmp459 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp459)
  {
    tmp456 = GreaterEq(data->localData[0]->realVars[1417] /* reactor.particle[11].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp456)
    {
      tmp458 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1417] /* reactor.particle[11].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp459 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7117
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[12].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7117};
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,101,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp462;
  static int tmp463 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp463)
  {
    tmp460 = GreaterEq(data->localData[0]->realVars[1478] /* reactor.particle[12].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp460)
    {
      tmp462 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1478] /* reactor.particle[12].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp463 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7118
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[12].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7118};
  modelica_boolean tmp464;
  static const MMC_DEFSTRINGLIT(tmp465,107,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp466;
  static int tmp467 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp467)
  {
    tmp464 = GreaterEq(data->localData[0]->realVars[1838] /* reactor.particle[12].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp464)
    {
      tmp466 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1838] /* reactor.particle[12].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp465),tmp466);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp467 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7119
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[12].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7119};
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,106,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp470;
  static int tmp471 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp471)
  {
    tmp468 = GreaterEq(data->localData[0]->realVars[1738] /* reactor.particle[12].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp468)
    {
      tmp470 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1738] /* reactor.particle[12].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp471 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7120
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7120};
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,132,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp474;
  static int tmp475 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp475)
  {
    tmp472 = GreaterEq(data->localData[0]->realVars[1698] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp472)
    {
      tmp474 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1698] /* reactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp475 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7121
type: ALGORITHM

  assert(reactor.particle[12].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[12].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7121};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,104,"Variable violating min constraint: 0.0 <= reactor.particle[12].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp478;
  static int tmp479 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp479)
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[1418] /* reactor.particle[12].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1418] /* reactor.particle[12].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp479 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7122
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[13].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7122};
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,101,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp482;
  static int tmp483 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp483)
  {
    tmp480 = GreaterEq(data->localData[0]->realVars[1479] /* reactor.particle[13].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp480)
    {
      tmp482 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1479] /* reactor.particle[13].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp481),tmp482);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp483 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7123
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[13].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7123};
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,107,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp486;
  static int tmp487 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp487)
  {
    tmp484 = GreaterEq(data->localData[0]->realVars[1839] /* reactor.particle[13].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp484)
    {
      tmp486 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1839] /* reactor.particle[13].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp487 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7124
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[13].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7124};
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,106,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp490;
  static int tmp491 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp491)
  {
    tmp488 = GreaterEq(data->localData[0]->realVars[1739] /* reactor.particle[13].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp488)
    {
      tmp490 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1739] /* reactor.particle[13].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp491 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7125
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7125};
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,132,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp494;
  static int tmp495 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp495)
  {
    tmp492 = GreaterEq(data->localData[0]->realVars[1699] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp492)
    {
      tmp494 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1699] /* reactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp495 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7126
type: ALGORITHM

  assert(reactor.particle[13].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[13].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7126};
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,104,"Variable violating min constraint: 0.0 <= reactor.particle[13].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[1419] /* reactor.particle[13].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp496)
    {
      tmp498 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1419] /* reactor.particle[13].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp499 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7127
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[14].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7127};
  modelica_boolean tmp500;
  static const MMC_DEFSTRINGLIT(tmp501,101,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp502;
  static int tmp503 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp503)
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[1480] /* reactor.particle[14].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp500)
    {
      tmp502 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1480] /* reactor.particle[14].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp501),tmp502);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp503 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7128
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[14].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7128};
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,107,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp506;
  static int tmp507 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp507)
  {
    tmp504 = GreaterEq(data->localData[0]->realVars[1840] /* reactor.particle[14].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp504)
    {
      tmp506 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1840] /* reactor.particle[14].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp505),tmp506);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7129
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[14].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7129};
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,106,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp510;
  static int tmp511 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp511)
  {
    tmp508 = GreaterEq(data->localData[0]->realVars[1740] /* reactor.particle[14].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp508)
    {
      tmp510 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1740] /* reactor.particle[14].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp511 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7130
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7130};
  modelica_boolean tmp512;
  static const MMC_DEFSTRINGLIT(tmp513,132,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp514;
  static int tmp515 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp515)
  {
    tmp512 = GreaterEq(data->localData[0]->realVars[1700] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp512)
    {
      tmp514 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1700] /* reactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp513),tmp514);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp515 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7131
type: ALGORITHM

  assert(reactor.particle[14].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[14].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7131};
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,104,"Variable violating min constraint: 0.0 <= reactor.particle[14].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp518;
  static int tmp519 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp519)
  {
    tmp516 = GreaterEq(data->localData[0]->realVars[1420] /* reactor.particle[14].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp516)
    {
      tmp518 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1420] /* reactor.particle[14].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp517),tmp518);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp519 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7132
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[15].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7132};
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,101,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp522;
  static int tmp523 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp523)
  {
    tmp520 = GreaterEq(data->localData[0]->realVars[1481] /* reactor.particle[15].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp520)
    {
      tmp522 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1481] /* reactor.particle[15].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp523 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7133
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[15].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7133};
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,107,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp526;
  static int tmp527 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp527)
  {
    tmp524 = GreaterEq(data->localData[0]->realVars[1841] /* reactor.particle[15].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp524)
    {
      tmp526 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1841] /* reactor.particle[15].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp527 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7134
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[15].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7134};
  modelica_boolean tmp528;
  static const MMC_DEFSTRINGLIT(tmp529,106,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp530;
  static int tmp531 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp531)
  {
    tmp528 = GreaterEq(data->localData[0]->realVars[1741] /* reactor.particle[15].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp528)
    {
      tmp530 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1741] /* reactor.particle[15].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp529),tmp530);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp531 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7135
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7135};
  modelica_boolean tmp532;
  static const MMC_DEFSTRINGLIT(tmp533,132,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp534;
  static int tmp535 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp535)
  {
    tmp532 = GreaterEq(data->localData[0]->realVars[1701] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp532)
    {
      tmp534 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1701] /* reactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp533),tmp534);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp535 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7136
type: ALGORITHM

  assert(reactor.particle[15].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[15].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7136};
  modelica_boolean tmp536;
  static const MMC_DEFSTRINGLIT(tmp537,104,"Variable violating min constraint: 0.0 <= reactor.particle[15].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp538;
  static int tmp539 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp539)
  {
    tmp536 = GreaterEq(data->localData[0]->realVars[1421] /* reactor.particle[15].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp536)
    {
      tmp538 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1421] /* reactor.particle[15].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp537),tmp538);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp539 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7137
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[16].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7137};
  modelica_boolean tmp540;
  static const MMC_DEFSTRINGLIT(tmp541,101,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp542;
  static int tmp543 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp543)
  {
    tmp540 = GreaterEq(data->localData[0]->realVars[1482] /* reactor.particle[16].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp540)
    {
      tmp542 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1482] /* reactor.particle[16].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp541),tmp542);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp543 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7138
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[16].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7138};
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,107,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp546;
  static int tmp547 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp547)
  {
    tmp544 = GreaterEq(data->localData[0]->realVars[1842] /* reactor.particle[16].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp544)
    {
      tmp546 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1842] /* reactor.particle[16].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp547 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7139
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[16].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7139};
  modelica_boolean tmp548;
  static const MMC_DEFSTRINGLIT(tmp549,106,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp550;
  static int tmp551 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp551)
  {
    tmp548 = GreaterEq(data->localData[0]->realVars[1742] /* reactor.particle[16].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp548)
    {
      tmp550 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1742] /* reactor.particle[16].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp549),tmp550);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp551 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7140
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7140};
  modelica_boolean tmp552;
  static const MMC_DEFSTRINGLIT(tmp553,132,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp554;
  static int tmp555 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp555)
  {
    tmp552 = GreaterEq(data->localData[0]->realVars[1702] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp552)
    {
      tmp554 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1702] /* reactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp553),tmp554);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp555 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7141
type: ALGORITHM

  assert(reactor.particle[16].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[16].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7141};
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,104,"Variable violating min constraint: 0.0 <= reactor.particle[16].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp558;
  static int tmp559 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp559)
  {
    tmp556 = GreaterEq(data->localData[0]->realVars[1422] /* reactor.particle[16].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp556)
    {
      tmp558 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1422] /* reactor.particle[16].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp557),tmp558);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp559 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7142
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[17].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7142};
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,101,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp562;
  static int tmp563 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp563)
  {
    tmp560 = GreaterEq(data->localData[0]->realVars[1483] /* reactor.particle[17].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp560)
    {
      tmp562 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1483] /* reactor.particle[17].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7143
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[17].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7143};
  modelica_boolean tmp564;
  static const MMC_DEFSTRINGLIT(tmp565,107,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp566;
  static int tmp567 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp567)
  {
    tmp564 = GreaterEq(data->localData[0]->realVars[1843] /* reactor.particle[17].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp564)
    {
      tmp566 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1843] /* reactor.particle[17].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp565),tmp566);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp567 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7144
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[17].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7144};
  modelica_boolean tmp568;
  static const MMC_DEFSTRINGLIT(tmp569,106,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp570;
  static int tmp571 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp571)
  {
    tmp568 = GreaterEq(data->localData[0]->realVars[1743] /* reactor.particle[17].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp568)
    {
      tmp570 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1743] /* reactor.particle[17].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp569),tmp570);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp571 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7145
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7145};
  modelica_boolean tmp572;
  static const MMC_DEFSTRINGLIT(tmp573,132,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp574;
  static int tmp575 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp575)
  {
    tmp572 = GreaterEq(data->localData[0]->realVars[1703] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp572)
    {
      tmp574 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1703] /* reactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp573),tmp574);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp575 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7146
type: ALGORITHM

  assert(reactor.particle[17].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[17].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7146};
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,104,"Variable violating min constraint: 0.0 <= reactor.particle[17].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp578;
  static int tmp579 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp579)
  {
    tmp576 = GreaterEq(data->localData[0]->realVars[1423] /* reactor.particle[17].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp576)
    {
      tmp578 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1423] /* reactor.particle[17].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp579 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7147
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[18].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7147};
  modelica_boolean tmp580;
  static const MMC_DEFSTRINGLIT(tmp581,101,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp582;
  static int tmp583 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp583)
  {
    tmp580 = GreaterEq(data->localData[0]->realVars[1484] /* reactor.particle[18].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp580)
    {
      tmp582 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1484] /* reactor.particle[18].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp581),tmp582);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp583 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7148
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[18].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7148};
  modelica_boolean tmp584;
  static const MMC_DEFSTRINGLIT(tmp585,107,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp586;
  static int tmp587 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp587)
  {
    tmp584 = GreaterEq(data->localData[0]->realVars[1844] /* reactor.particle[18].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp584)
    {
      tmp586 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1844] /* reactor.particle[18].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp585),tmp586);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp587 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7149
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[18].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7149};
  modelica_boolean tmp588;
  static const MMC_DEFSTRINGLIT(tmp589,106,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp590;
  static int tmp591 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp591)
  {
    tmp588 = GreaterEq(data->localData[0]->realVars[1744] /* reactor.particle[18].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp588)
    {
      tmp590 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1744] /* reactor.particle[18].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp589),tmp590);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp591 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7150
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7150};
  modelica_boolean tmp592;
  static const MMC_DEFSTRINGLIT(tmp593,132,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp594;
  static int tmp595 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp595)
  {
    tmp592 = GreaterEq(data->localData[0]->realVars[1704] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp592)
    {
      tmp594 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1704] /* reactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp593),tmp594);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp595 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7151
type: ALGORITHM

  assert(reactor.particle[18].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[18].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7151};
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,104,"Variable violating min constraint: 0.0 <= reactor.particle[18].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp596 = GreaterEq(data->localData[0]->realVars[1424] /* reactor.particle[18].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp596)
    {
      tmp598 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1424] /* reactor.particle[18].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7152
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[19].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7152};
  modelica_boolean tmp600;
  static const MMC_DEFSTRINGLIT(tmp601,101,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp602;
  static int tmp603 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp603)
  {
    tmp600 = GreaterEq(data->localData[0]->realVars[1485] /* reactor.particle[19].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp600)
    {
      tmp602 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1485] /* reactor.particle[19].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp601),tmp602);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp603 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7153
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[19].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7153};
  modelica_boolean tmp604;
  static const MMC_DEFSTRINGLIT(tmp605,107,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp606;
  static int tmp607 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp607)
  {
    tmp604 = GreaterEq(data->localData[0]->realVars[1845] /* reactor.particle[19].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp604)
    {
      tmp606 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1845] /* reactor.particle[19].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp605),tmp606);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp607 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7154
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[19].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7154};
  modelica_boolean tmp608;
  static const MMC_DEFSTRINGLIT(tmp609,106,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp610;
  static int tmp611 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp611)
  {
    tmp608 = GreaterEq(data->localData[0]->realVars[1745] /* reactor.particle[19].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp608)
    {
      tmp610 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1745] /* reactor.particle[19].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp609),tmp610);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp611 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7155
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7155};
  modelica_boolean tmp612;
  static const MMC_DEFSTRINGLIT(tmp613,132,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp614;
  static int tmp615 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp615)
  {
    tmp612 = GreaterEq(data->localData[0]->realVars[1705] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp612)
    {
      tmp614 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1705] /* reactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp613),tmp614);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp615 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7156
type: ALGORITHM

  assert(reactor.particle[19].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[19].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7156};
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,104,"Variable violating min constraint: 0.0 <= reactor.particle[19].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp618;
  static int tmp619 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp619)
  {
    tmp616 = GreaterEq(data->localData[0]->realVars[1425] /* reactor.particle[19].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp616)
    {
      tmp618 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1425] /* reactor.particle[19].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp619 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7157
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.M_l >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.M_l, has value: " + String(reactor.particle[20].particle_Radu2017_085.M_l, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7157};
  modelica_boolean tmp620;
  static const MMC_DEFSTRINGLIT(tmp621,101,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.M_l, has value: ");
  modelica_string tmp622;
  static int tmp623 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp623)
  {
    tmp620 = GreaterEq(data->localData[0]->realVars[1486] /* reactor.particle[20].particle_Radu2017_085.M_l DUMMY_STATE */,0.0);
    if(!tmp620)
    {
      tmp622 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1486] /* reactor.particle[20].particle_Radu2017_085.M_l DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp621),tmp622);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",40,3,40,11,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.M_l >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp623 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7158
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.fluid.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.fluid.rho, has value: " + String(reactor.particle[20].particle_Radu2017_085.fluid.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7158};
  modelica_boolean tmp624;
  static const MMC_DEFSTRINGLIT(tmp625,107,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.fluid.rho, has value: ");
  modelica_string tmp626;
  static int tmp627 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp627)
  {
    tmp624 = GreaterEq(data->localData[0]->realVars[1846] /* reactor.particle[20].particle_Radu2017_085.fluid.rho variable */,0.0);
    if(!tmp624)
    {
      tmp626 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1846] /* reactor.particle[20].particle_Radu2017_085.fluid.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp625),tmp626);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",9,3,9,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.fluid.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp627 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7159
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.fluid.DV >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.fluid.DV, has value: " + String(reactor.particle[20].particle_Radu2017_085.fluid.DV, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7159};
  modelica_boolean tmp628;
  static const MMC_DEFSTRINGLIT(tmp629,106,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.fluid.DV, has value: ");
  modelica_string tmp630;
  static int tmp631 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp631)
  {
    tmp628 = GreaterEq(data->localData[0]->realVars[1746] /* reactor.particle[20].particle_Radu2017_085.fluid.DV variable */,0.0);
    if(!tmp628)
    {
      tmp630 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1746] /* reactor.particle[20].particle_Radu2017_085.fluid.DV variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp629),tmp630);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Fluids/GeneralSatFluid.mo",11,3,11,22,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.fluid.DV >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp631 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7160
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: " + String(reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7160};
  modelica_boolean tmp632;
  static const MMC_DEFSTRINGLIT(tmp633,132,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text, has value: ");
  modelica_string tmp634;
  static int tmp635 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp635)
  {
    tmp632 = GreaterEq(data->localData[0]->realVars[1706] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */,0.0);
    if(!tmp632)
    {
      tmp634 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1706] /* reactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp633),tmp634);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/MassTransfer/Diffusion_CarslawJaeger_WaterSteadyState.mo",16,3,16,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.diffusion_CarslawJaeger_Water.Text >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp635 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7161
type: ALGORITHM

  assert(reactor.particle[20].contactResistance_SiuLee.rho >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].contactResistance_SiuLee.rho, has value: " + String(reactor.particle[20].contactResistance_SiuLee.rho, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7161};
  modelica_boolean tmp636;
  static const MMC_DEFSTRINGLIT(tmp637,104,"Variable violating min constraint: 0.0 <= reactor.particle[20].contactResistance_SiuLee.rho, has value: ");
  modelica_string tmp638;
  static int tmp639 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp639)
  {
    tmp636 = GreaterEq(data->localData[0]->realVars[1426] /* reactor.particle[20].contactResistance_SiuLee.rho variable */,0.0);
    if(!tmp636)
    {
      tmp638 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1426] /* reactor.particle[20].contactResistance_SiuLee.rho variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp637),tmp638);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/HeatTransfer.mo",270,5,270,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].contactResistance_SiuLee.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp639 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7001
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[1].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7001};
  modelica_boolean tmp640;
  static const MMC_DEFSTRINGLIT(tmp641,99,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp642;
  static int tmp643 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp643)
  {
    tmp640 = GreaterEq(data->localData[0]->realVars[1587] /* reactor.particle[1].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp640)
    {
      tmp642 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1587] /* reactor.particle[1].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp641),tmp642);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp643 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 7000
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[2].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_7000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7000};
  modelica_boolean tmp644;
  static const MMC_DEFSTRINGLIT(tmp645,99,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp646;
  static int tmp647 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp647)
  {
    tmp644 = GreaterEq(data->localData[0]->realVars[1588] /* reactor.particle[2].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp644)
    {
      tmp646 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1588] /* reactor.particle[2].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp645),tmp646);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp647 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6999
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[3].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6999};
  modelica_boolean tmp648;
  static const MMC_DEFSTRINGLIT(tmp649,99,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp650;
  static int tmp651 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp651)
  {
    tmp648 = GreaterEq(data->localData[0]->realVars[1589] /* reactor.particle[3].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp648)
    {
      tmp650 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1589] /* reactor.particle[3].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp649),tmp650);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp651 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6998
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[4].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6998};
  modelica_boolean tmp652;
  static const MMC_DEFSTRINGLIT(tmp653,99,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp654;
  static int tmp655 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp655)
  {
    tmp652 = GreaterEq(data->localData[0]->realVars[1590] /* reactor.particle[4].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp652)
    {
      tmp654 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1590] /* reactor.particle[4].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp653),tmp654);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp655 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6997
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[5].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6997};
  modelica_boolean tmp656;
  static const MMC_DEFSTRINGLIT(tmp657,99,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp658;
  static int tmp659 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp659)
  {
    tmp656 = GreaterEq(data->localData[0]->realVars[1591] /* reactor.particle[5].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp656)
    {
      tmp658 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1591] /* reactor.particle[5].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp657),tmp658);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp659 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6996
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[6].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6996};
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,99,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp662;
  static int tmp663 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp663)
  {
    tmp660 = GreaterEq(data->localData[0]->realVars[1592] /* reactor.particle[6].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp660)
    {
      tmp662 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1592] /* reactor.particle[6].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp663 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6995
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[7].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6995};
  modelica_boolean tmp664;
  static const MMC_DEFSTRINGLIT(tmp665,99,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp666;
  static int tmp667 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp667)
  {
    tmp664 = GreaterEq(data->localData[0]->realVars[1593] /* reactor.particle[7].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp664)
    {
      tmp666 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1593] /* reactor.particle[7].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp665),tmp666);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp667 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6994
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[8].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6994};
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,99,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp670;
  static int tmp671 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp671)
  {
    tmp668 = GreaterEq(data->localData[0]->realVars[1594] /* reactor.particle[8].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp668)
    {
      tmp670 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1594] /* reactor.particle[8].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp671 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6993
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[9].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6993};
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,99,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp674;
  static int tmp675 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp675)
  {
    tmp672 = GreaterEq(data->localData[0]->realVars[1595] /* reactor.particle[9].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp672)
    {
      tmp674 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1595] /* reactor.particle[9].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp675 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6992
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[10].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6992};
  modelica_boolean tmp676;
  static const MMC_DEFSTRINGLIT(tmp677,100,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp678;
  static int tmp679 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp679)
  {
    tmp676 = GreaterEq(data->localData[0]->realVars[1596] /* reactor.particle[10].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp676)
    {
      tmp678 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1596] /* reactor.particle[10].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp677),tmp678);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp679 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6991
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[11].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6991};
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,100,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp682;
  static int tmp683 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp683)
  {
    tmp680 = GreaterEq(data->localData[0]->realVars[1597] /* reactor.particle[11].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp680)
    {
      tmp682 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1597] /* reactor.particle[11].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp683 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6990
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[12].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6990};
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,100,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp686;
  static int tmp687 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp687)
  {
    tmp684 = GreaterEq(data->localData[0]->realVars[1598] /* reactor.particle[12].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp684)
    {
      tmp686 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1598] /* reactor.particle[12].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp687 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6989
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[13].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6989};
  modelica_boolean tmp688;
  static const MMC_DEFSTRINGLIT(tmp689,100,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp690;
  static int tmp691 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp691)
  {
    tmp688 = GreaterEq(data->localData[0]->realVars[1599] /* reactor.particle[13].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp688)
    {
      tmp690 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1599] /* reactor.particle[13].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp689),tmp690);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp691 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6988
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[14].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6988};
  modelica_boolean tmp692;
  static const MMC_DEFSTRINGLIT(tmp693,100,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp694;
  static int tmp695 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp695)
  {
    tmp692 = GreaterEq(data->localData[0]->realVars[1600] /* reactor.particle[14].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp692)
    {
      tmp694 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1600] /* reactor.particle[14].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp693),tmp694);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp695 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6987
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[15].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6987};
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,100,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp698;
  static int tmp699 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp699)
  {
    tmp696 = GreaterEq(data->localData[0]->realVars[1601] /* reactor.particle[15].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp696)
    {
      tmp698 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1601] /* reactor.particle[15].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6986
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[16].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6986};
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,100,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp702;
  static int tmp703 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp703)
  {
    tmp700 = GreaterEq(data->localData[0]->realVars[1602] /* reactor.particle[16].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp700)
    {
      tmp702 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1602] /* reactor.particle[16].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6985
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[17].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6985};
  modelica_boolean tmp704;
  static const MMC_DEFSTRINGLIT(tmp705,100,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp706;
  static int tmp707 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp707)
  {
    tmp704 = GreaterEq(data->localData[0]->realVars[1603] /* reactor.particle[17].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp704)
    {
      tmp706 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1603] /* reactor.particle[17].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp705),tmp706);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp707 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6984
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[18].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6984};
  modelica_boolean tmp708;
  static const MMC_DEFSTRINGLIT(tmp709,100,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp710;
  static int tmp711 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp711)
  {
    tmp708 = GreaterEq(data->localData[0]->realVars[1604] /* reactor.particle[18].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp708)
    {
      tmp710 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1604] /* reactor.particle[18].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp709),tmp710);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp711 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6983
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[19].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6983};
  modelica_boolean tmp712;
  static const MMC_DEFSTRINGLIT(tmp713,100,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp714;
  static int tmp715 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp715)
  {
    tmp712 = GreaterEq(data->localData[0]->realVars[1605] /* reactor.particle[19].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp712)
    {
      tmp714 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1605] /* reactor.particle[19].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp713),tmp714);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp715 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6982
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.Ti >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.Ti, has value: " + String(reactor.particle[20].particle_Radu2017_085.Ti, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6982};
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,100,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.Ti, has value: ");
  modelica_string tmp718;
  static int tmp719 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp719)
  {
    tmp716 = GreaterEq(data->localData[0]->realVars[1606] /* reactor.particle[20].particle_Radu2017_085.Ti variable */,0.0);
    if(!tmp716)
    {
      tmp718 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1606] /* reactor.particle[20].particle_Radu2017_085.Ti variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",24,3,24,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.Ti >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6981
type: ALGORITHM

  assert(reactor.particle[20].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[20].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6981};
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,101,"Variable violating min constraint: 0.0 <= reactor.particle[20].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp720 = GreaterEq(data->localData[0]->realVars[1586] /* reactor.particle[20].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp720)
    {
      tmp722 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1586] /* reactor.particle[20].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[20].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6980
type: ALGORITHM

  assert(reactor.particle[19].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[19].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6980};
  modelica_boolean tmp724;
  static const MMC_DEFSTRINGLIT(tmp725,101,"Variable violating min constraint: 0.0 <= reactor.particle[19].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp726;
  static int tmp727 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp727)
  {
    tmp724 = GreaterEq(data->localData[0]->realVars[1585] /* reactor.particle[19].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp724)
    {
      tmp726 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1585] /* reactor.particle[19].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp725),tmp726);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[19].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp727 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6979
type: ALGORITHM

  assert(reactor.particle[18].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[18].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6979};
  modelica_boolean tmp728;
  static const MMC_DEFSTRINGLIT(tmp729,101,"Variable violating min constraint: 0.0 <= reactor.particle[18].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp730;
  static int tmp731 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp731)
  {
    tmp728 = GreaterEq(data->localData[0]->realVars[1584] /* reactor.particle[18].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp728)
    {
      tmp730 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1584] /* reactor.particle[18].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp729),tmp730);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[18].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp731 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6978
type: ALGORITHM

  assert(reactor.particle[17].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[17].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6978};
  modelica_boolean tmp732;
  static const MMC_DEFSTRINGLIT(tmp733,101,"Variable violating min constraint: 0.0 <= reactor.particle[17].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp734;
  static int tmp735 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp735)
  {
    tmp732 = GreaterEq(data->localData[0]->realVars[1583] /* reactor.particle[17].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp732)
    {
      tmp734 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1583] /* reactor.particle[17].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp733),tmp734);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[17].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp735 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6977
type: ALGORITHM

  assert(reactor.particle[16].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[16].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6977};
  modelica_boolean tmp736;
  static const MMC_DEFSTRINGLIT(tmp737,101,"Variable violating min constraint: 0.0 <= reactor.particle[16].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp738;
  static int tmp739 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp739)
  {
    tmp736 = GreaterEq(data->localData[0]->realVars[1582] /* reactor.particle[16].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp736)
    {
      tmp738 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1582] /* reactor.particle[16].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp737),tmp738);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[16].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp739 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6976
type: ALGORITHM

  assert(reactor.particle[15].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[15].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6976};
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,101,"Variable violating min constraint: 0.0 <= reactor.particle[15].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp742;
  static int tmp743 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp743)
  {
    tmp740 = GreaterEq(data->localData[0]->realVars[1581] /* reactor.particle[15].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp740)
    {
      tmp742 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1581] /* reactor.particle[15].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[15].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp743 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6975
type: ALGORITHM

  assert(reactor.particle[14].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[14].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6975};
  modelica_boolean tmp744;
  static const MMC_DEFSTRINGLIT(tmp745,101,"Variable violating min constraint: 0.0 <= reactor.particle[14].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp746;
  static int tmp747 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp747)
  {
    tmp744 = GreaterEq(data->localData[0]->realVars[1580] /* reactor.particle[14].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp744)
    {
      tmp746 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1580] /* reactor.particle[14].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp745),tmp746);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[14].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp747 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6974
type: ALGORITHM

  assert(reactor.particle[13].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[13].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6974};
  modelica_boolean tmp748;
  static const MMC_DEFSTRINGLIT(tmp749,101,"Variable violating min constraint: 0.0 <= reactor.particle[13].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp750;
  static int tmp751 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp751)
  {
    tmp748 = GreaterEq(data->localData[0]->realVars[1579] /* reactor.particle[13].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp748)
    {
      tmp750 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1579] /* reactor.particle[13].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp749),tmp750);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[13].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp751 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6973
type: ALGORITHM

  assert(reactor.particle[12].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[12].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6973};
  modelica_boolean tmp752;
  static const MMC_DEFSTRINGLIT(tmp753,101,"Variable violating min constraint: 0.0 <= reactor.particle[12].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp754;
  static int tmp755 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp755)
  {
    tmp752 = GreaterEq(data->localData[0]->realVars[1578] /* reactor.particle[12].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp752)
    {
      tmp754 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1578] /* reactor.particle[12].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp753),tmp754);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[12].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp755 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6972
type: ALGORITHM

  assert(reactor.particle[11].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[11].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6972};
  modelica_boolean tmp756;
  static const MMC_DEFSTRINGLIT(tmp757,101,"Variable violating min constraint: 0.0 <= reactor.particle[11].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp758;
  static int tmp759 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp759)
  {
    tmp756 = GreaterEq(data->localData[0]->realVars[1577] /* reactor.particle[11].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp756)
    {
      tmp758 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1577] /* reactor.particle[11].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp757),tmp758);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[11].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp759 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6971
type: ALGORITHM

  assert(reactor.particle[10].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[10].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6971};
  modelica_boolean tmp760;
  static const MMC_DEFSTRINGLIT(tmp761,101,"Variable violating min constraint: 0.0 <= reactor.particle[10].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp762;
  static int tmp763 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp763)
  {
    tmp760 = GreaterEq(data->localData[0]->realVars[1576] /* reactor.particle[10].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp760)
    {
      tmp762 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1576] /* reactor.particle[10].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp761),tmp762);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[10].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp763 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6970
type: ALGORITHM

  assert(reactor.particle[9].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[9].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6970};
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,100,"Variable violating min constraint: 0.0 <= reactor.particle[9].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp766;
  static int tmp767 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp767)
  {
    tmp764 = GreaterEq(data->localData[0]->realVars[1575] /* reactor.particle[9].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp764)
    {
      tmp766 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1575] /* reactor.particle[9].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[9].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp767 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6969
type: ALGORITHM

  assert(reactor.particle[8].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[8].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6969};
  modelica_boolean tmp768;
  static const MMC_DEFSTRINGLIT(tmp769,100,"Variable violating min constraint: 0.0 <= reactor.particle[8].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp770;
  static int tmp771 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp771)
  {
    tmp768 = GreaterEq(data->localData[0]->realVars[1574] /* reactor.particle[8].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp768)
    {
      tmp770 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1574] /* reactor.particle[8].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp769),tmp770);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[8].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp771 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6968
type: ALGORITHM

  assert(reactor.particle[7].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[7].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6968};
  modelica_boolean tmp772;
  static const MMC_DEFSTRINGLIT(tmp773,100,"Variable violating min constraint: 0.0 <= reactor.particle[7].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp774;
  static int tmp775 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp775)
  {
    tmp772 = GreaterEq(data->localData[0]->realVars[1573] /* reactor.particle[7].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp772)
    {
      tmp774 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1573] /* reactor.particle[7].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp773),tmp774);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[7].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp775 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6967
type: ALGORITHM

  assert(reactor.particle[6].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[6].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6967};
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,100,"Variable violating min constraint: 0.0 <= reactor.particle[6].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp778;
  static int tmp779 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp779)
  {
    tmp776 = GreaterEq(data->localData[0]->realVars[1572] /* reactor.particle[6].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp776)
    {
      tmp778 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1572] /* reactor.particle[6].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[6].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp779 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6966
type: ALGORITHM

  assert(reactor.particle[5].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[5].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6966};
  modelica_boolean tmp780;
  static const MMC_DEFSTRINGLIT(tmp781,100,"Variable violating min constraint: 0.0 <= reactor.particle[5].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp782;
  static int tmp783 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp783)
  {
    tmp780 = GreaterEq(data->localData[0]->realVars[1571] /* reactor.particle[5].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp780)
    {
      tmp782 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1571] /* reactor.particle[5].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp781),tmp782);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[5].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp783 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6965
type: ALGORITHM

  assert(reactor.particle[4].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[4].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6965};
  modelica_boolean tmp784;
  static const MMC_DEFSTRINGLIT(tmp785,100,"Variable violating min constraint: 0.0 <= reactor.particle[4].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp786;
  static int tmp787 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp787)
  {
    tmp784 = GreaterEq(data->localData[0]->realVars[1570] /* reactor.particle[4].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp784)
    {
      tmp786 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1570] /* reactor.particle[4].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp785),tmp786);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[4].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp787 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6964
type: ALGORITHM

  assert(reactor.particle[3].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[3].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6964};
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,100,"Variable violating min constraint: 0.0 <= reactor.particle[3].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp790;
  static int tmp791 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp791)
  {
    tmp788 = GreaterEq(data->localData[0]->realVars[1569] /* reactor.particle[3].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp788)
    {
      tmp790 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1569] /* reactor.particle[3].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[3].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp791 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6963
type: ALGORITHM

  assert(reactor.particle[2].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[2].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6963};
  modelica_boolean tmp792;
  static const MMC_DEFSTRINGLIT(tmp793,100,"Variable violating min constraint: 0.0 <= reactor.particle[2].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp794;
  static int tmp795 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp795)
  {
    tmp792 = GreaterEq(data->localData[0]->realVars[1568] /* reactor.particle[2].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp792)
    {
      tmp794 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1568] /* reactor.particle[2].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp793),tmp794);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[2].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp795 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6962
type: ALGORITHM

  assert(reactor.particle[1].particle_Radu2017_085.T_b >= 0.0, "Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.T_b, has value: " + String(reactor.particle[1].particle_Radu2017_085.T_b, "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6962};
  modelica_boolean tmp796;
  static const MMC_DEFSTRINGLIT(tmp797,100,"Variable violating min constraint: 0.0 <= reactor.particle[1].particle_Radu2017_085.T_b, has value: ");
  modelica_string tmp798;
  static int tmp799 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp799)
  {
    tmp796 = GreaterEq(data->localData[0]->realVars[1567] /* reactor.particle[1].particle_Radu2017_085.T_b variable */,0.0);
    if(!tmp796)
    {
      tmp798 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1567] /* reactor.particle[1].particle_Radu2017_085.T_b variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp797),tmp798);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Materials/Adsorbents/Geometries/UndefinedBead_ACTS.mo",48,3,48,18,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.particle[1].particle_Radu2017_085.T_b >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp799 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6961
type: ALGORITHM

  assert(reactor.M_a[1] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[1], has value: " + String(reactor.M_a[1], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6961};
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,69,"Variable violating min constraint: 0.0 <= reactor.M_a[1], has value: ");
  modelica_string tmp802;
  static int tmp803 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp803)
  {
    tmp800 = GreaterEq(data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */,0.0);
    if(!tmp800)
    {
      tmp802 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[714] /* reactor.M_a[1] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp803 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6960
type: ALGORITHM

  assert(reactor.M_a[2] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[2], has value: " + String(reactor.M_a[2], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6960};
  modelica_boolean tmp804;
  static const MMC_DEFSTRINGLIT(tmp805,69,"Variable violating min constraint: 0.0 <= reactor.M_a[2], has value: ");
  modelica_string tmp806;
  static int tmp807 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp807)
  {
    tmp804 = GreaterEq(data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */,0.0);
    if(!tmp804)
    {
      tmp806 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[715] /* reactor.M_a[2] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp805),tmp806);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp807 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6959
type: ALGORITHM

  assert(reactor.M_a[3] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[3], has value: " + String(reactor.M_a[3], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6959};
  modelica_boolean tmp808;
  static const MMC_DEFSTRINGLIT(tmp809,69,"Variable violating min constraint: 0.0 <= reactor.M_a[3], has value: ");
  modelica_string tmp810;
  static int tmp811 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp811)
  {
    tmp808 = GreaterEq(data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */,0.0);
    if(!tmp808)
    {
      tmp810 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[716] /* reactor.M_a[3] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp809),tmp810);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp811 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6958
type: ALGORITHM

  assert(reactor.M_a[4] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[4], has value: " + String(reactor.M_a[4], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6958};
  modelica_boolean tmp812;
  static const MMC_DEFSTRINGLIT(tmp813,69,"Variable violating min constraint: 0.0 <= reactor.M_a[4], has value: ");
  modelica_string tmp814;
  static int tmp815 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp815)
  {
    tmp812 = GreaterEq(data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */,0.0);
    if(!tmp812)
    {
      tmp814 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[717] /* reactor.M_a[4] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp813),tmp814);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp815 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6957
type: ALGORITHM

  assert(reactor.M_a[5] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[5], has value: " + String(reactor.M_a[5], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6957};
  modelica_boolean tmp816;
  static const MMC_DEFSTRINGLIT(tmp817,69,"Variable violating min constraint: 0.0 <= reactor.M_a[5], has value: ");
  modelica_string tmp818;
  static int tmp819 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp819)
  {
    tmp816 = GreaterEq(data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */,0.0);
    if(!tmp816)
    {
      tmp818 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[718] /* reactor.M_a[5] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp817),tmp818);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp819 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6956
type: ALGORITHM

  assert(reactor.M_a[6] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[6], has value: " + String(reactor.M_a[6], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6956};
  modelica_boolean tmp820;
  static const MMC_DEFSTRINGLIT(tmp821,69,"Variable violating min constraint: 0.0 <= reactor.M_a[6], has value: ");
  modelica_string tmp822;
  static int tmp823 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp823)
  {
    tmp820 = GreaterEq(data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */,0.0);
    if(!tmp820)
    {
      tmp822 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[719] /* reactor.M_a[6] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp821),tmp822);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[6] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp823 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6955
type: ALGORITHM

  assert(reactor.M_a[7] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[7], has value: " + String(reactor.M_a[7], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6955};
  modelica_boolean tmp824;
  static const MMC_DEFSTRINGLIT(tmp825,69,"Variable violating min constraint: 0.0 <= reactor.M_a[7], has value: ");
  modelica_string tmp826;
  static int tmp827 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp827)
  {
    tmp824 = GreaterEq(data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */,0.0);
    if(!tmp824)
    {
      tmp826 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[720] /* reactor.M_a[7] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp825),tmp826);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[7] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp827 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6954
type: ALGORITHM

  assert(reactor.M_a[8] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[8], has value: " + String(reactor.M_a[8], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6954};
  modelica_boolean tmp828;
  static const MMC_DEFSTRINGLIT(tmp829,69,"Variable violating min constraint: 0.0 <= reactor.M_a[8], has value: ");
  modelica_string tmp830;
  static int tmp831 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp831)
  {
    tmp828 = GreaterEq(data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */,0.0);
    if(!tmp828)
    {
      tmp830 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[721] /* reactor.M_a[8] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp829),tmp830);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[8] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp831 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6953
type: ALGORITHM

  assert(reactor.M_a[9] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[9], has value: " + String(reactor.M_a[9], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6953};
  modelica_boolean tmp832;
  static const MMC_DEFSTRINGLIT(tmp833,69,"Variable violating min constraint: 0.0 <= reactor.M_a[9], has value: ");
  modelica_string tmp834;
  static int tmp835 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp835)
  {
    tmp832 = GreaterEq(data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */,0.0);
    if(!tmp832)
    {
      tmp834 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[722] /* reactor.M_a[9] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp833),tmp834);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[9] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp835 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6952
type: ALGORITHM

  assert(reactor.M_a[10] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[10], has value: " + String(reactor.M_a[10], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6952};
  modelica_boolean tmp836;
  static const MMC_DEFSTRINGLIT(tmp837,70,"Variable violating min constraint: 0.0 <= reactor.M_a[10], has value: ");
  modelica_string tmp838;
  static int tmp839 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp839)
  {
    tmp836 = GreaterEq(data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */,0.0);
    if(!tmp836)
    {
      tmp838 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[723] /* reactor.M_a[10] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp837),tmp838);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[10] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp839 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6951
type: ALGORITHM

  assert(reactor.M_a[11] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[11], has value: " + String(reactor.M_a[11], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6951};
  modelica_boolean tmp840;
  static const MMC_DEFSTRINGLIT(tmp841,70,"Variable violating min constraint: 0.0 <= reactor.M_a[11], has value: ");
  modelica_string tmp842;
  static int tmp843 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp843)
  {
    tmp840 = GreaterEq(data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */,0.0);
    if(!tmp840)
    {
      tmp842 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[724] /* reactor.M_a[11] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp841),tmp842);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[11] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp843 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6950
type: ALGORITHM

  assert(reactor.M_a[12] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[12], has value: " + String(reactor.M_a[12], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6950};
  modelica_boolean tmp844;
  static const MMC_DEFSTRINGLIT(tmp845,70,"Variable violating min constraint: 0.0 <= reactor.M_a[12], has value: ");
  modelica_string tmp846;
  static int tmp847 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp847)
  {
    tmp844 = GreaterEq(data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */,0.0);
    if(!tmp844)
    {
      tmp846 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[725] /* reactor.M_a[12] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp845),tmp846);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[12] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp847 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6949
type: ALGORITHM

  assert(reactor.M_a[13] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[13], has value: " + String(reactor.M_a[13], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6949};
  modelica_boolean tmp848;
  static const MMC_DEFSTRINGLIT(tmp849,70,"Variable violating min constraint: 0.0 <= reactor.M_a[13], has value: ");
  modelica_string tmp850;
  static int tmp851 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp851)
  {
    tmp848 = GreaterEq(data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */,0.0);
    if(!tmp848)
    {
      tmp850 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[726] /* reactor.M_a[13] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp849),tmp850);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[13] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp851 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6948
type: ALGORITHM

  assert(reactor.M_a[14] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[14], has value: " + String(reactor.M_a[14], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6948};
  modelica_boolean tmp852;
  static const MMC_DEFSTRINGLIT(tmp853,70,"Variable violating min constraint: 0.0 <= reactor.M_a[14], has value: ");
  modelica_string tmp854;
  static int tmp855 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp855)
  {
    tmp852 = GreaterEq(data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */,0.0);
    if(!tmp852)
    {
      tmp854 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[727] /* reactor.M_a[14] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp853),tmp854);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[14] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp855 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6947
type: ALGORITHM

  assert(reactor.M_a[15] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[15], has value: " + String(reactor.M_a[15], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6947};
  modelica_boolean tmp856;
  static const MMC_DEFSTRINGLIT(tmp857,70,"Variable violating min constraint: 0.0 <= reactor.M_a[15], has value: ");
  modelica_string tmp858;
  static int tmp859 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp859)
  {
    tmp856 = GreaterEq(data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */,0.0);
    if(!tmp856)
    {
      tmp858 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[728] /* reactor.M_a[15] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp857),tmp858);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[15] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp859 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6946
type: ALGORITHM

  assert(reactor.M_a[16] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[16], has value: " + String(reactor.M_a[16], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6946};
  modelica_boolean tmp860;
  static const MMC_DEFSTRINGLIT(tmp861,70,"Variable violating min constraint: 0.0 <= reactor.M_a[16], has value: ");
  modelica_string tmp862;
  static int tmp863 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp863)
  {
    tmp860 = GreaterEq(data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */,0.0);
    if(!tmp860)
    {
      tmp862 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[729] /* reactor.M_a[16] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp861),tmp862);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[16] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp863 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6945
type: ALGORITHM

  assert(reactor.M_a[17] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[17], has value: " + String(reactor.M_a[17], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6945};
  modelica_boolean tmp864;
  static const MMC_DEFSTRINGLIT(tmp865,70,"Variable violating min constraint: 0.0 <= reactor.M_a[17], has value: ");
  modelica_string tmp866;
  static int tmp867 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp867)
  {
    tmp864 = GreaterEq(data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */,0.0);
    if(!tmp864)
    {
      tmp866 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[730] /* reactor.M_a[17] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp865),tmp866);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[17] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp867 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6944
type: ALGORITHM

  assert(reactor.M_a[18] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[18], has value: " + String(reactor.M_a[18], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6944};
  modelica_boolean tmp868;
  static const MMC_DEFSTRINGLIT(tmp869,70,"Variable violating min constraint: 0.0 <= reactor.M_a[18], has value: ");
  modelica_string tmp870;
  static int tmp871 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp871)
  {
    tmp868 = GreaterEq(data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */,0.0);
    if(!tmp868)
    {
      tmp870 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[731] /* reactor.M_a[18] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp869),tmp870);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[18] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp871 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6943
type: ALGORITHM

  assert(reactor.M_a[19] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[19], has value: " + String(reactor.M_a[19], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6943};
  modelica_boolean tmp872;
  static const MMC_DEFSTRINGLIT(tmp873,70,"Variable violating min constraint: 0.0 <= reactor.M_a[19], has value: ");
  modelica_string tmp874;
  static int tmp875 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp875)
  {
    tmp872 = GreaterEq(data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */,0.0);
    if(!tmp872)
    {
      tmp874 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[732] /* reactor.M_a[19] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp873),tmp874);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[19] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp875 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 6942
type: ALGORITHM

  assert(reactor.M_a[20] >= 0.0, "Variable violating min constraint: 0.0 <= reactor.M_a[20], has value: " + String(reactor.M_a[20], "g"));
*/
void MOSES_Simulations_ACTS_adsorption_eqFunction_6942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6942};
  modelica_boolean tmp876;
  static const MMC_DEFSTRINGLIT(tmp877,70,"Variable violating min constraint: 0.0 <= reactor.M_a[20], has value: ");
  modelica_string tmp878;
  static int tmp879 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp879)
  {
    tmp876 = GreaterEq(data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */,0.0);
    if(!tmp876)
    {
      tmp878 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[733] /* reactor.M_a[20] DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp877),tmp878);
      {
        FILE_INFO info = {"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Reactors/ACTS_reactor.mo",96,3,96,14,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nreactor.M_a[20] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp879 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int MOSES_Simulations_ACTS_adsorption_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  MOSES_Simulations_ACTS_adsorption_eqFunction_7002(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7003(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7004(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7005(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7006(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7007(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7008(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7009(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7010(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7011(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7012(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7013(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7014(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7015(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7016(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7017(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7018(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7019(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7020(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7021(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7022(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7023(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7024(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7025(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7026(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7027(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7028(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7029(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7030(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7031(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7032(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7033(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7034(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7035(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7036(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7037(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7038(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7039(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7040(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7041(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7042(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7043(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7044(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7045(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7046(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7047(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7048(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7049(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7050(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7051(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7052(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7053(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7054(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7055(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7056(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7057(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7058(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7059(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7060(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7061(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7062(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7063(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7064(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7065(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7066(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7067(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7068(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7069(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7070(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7071(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7072(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7073(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7074(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7075(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7076(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7077(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7078(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7079(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7080(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7081(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7082(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7083(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7084(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7085(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7086(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7087(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7088(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7089(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7090(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7091(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7092(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7093(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7094(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7095(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7096(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7097(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7098(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7099(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7100(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7101(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7102(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7103(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7104(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7105(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7106(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7107(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7108(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7109(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7110(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7111(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7112(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7113(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7114(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7115(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7116(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7117(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7118(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7119(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7120(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7121(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7122(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7123(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7124(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7125(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7126(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7127(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7128(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7129(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7130(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7131(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7132(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7133(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7134(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7135(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7136(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7137(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7138(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7139(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7140(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7141(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7142(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7143(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7144(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7145(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7146(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7147(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7148(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7149(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7150(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7151(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7152(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7153(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7154(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7155(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7156(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7157(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7158(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7159(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7160(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7161(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7001(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_7000(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6999(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6998(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6997(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6996(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6995(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6994(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6993(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6992(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6991(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6990(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6989(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6988(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6987(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6986(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6985(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6984(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6983(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6982(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6981(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6980(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6979(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6978(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6977(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6976(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6975(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6974(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6973(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6972(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6971(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6970(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6969(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6968(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6967(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6966(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6965(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6964(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6963(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6962(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6961(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6960(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6959(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6958(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6957(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6956(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6955(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6954(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6953(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6952(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6951(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6950(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6949(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6948(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6947(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6946(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6945(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6944(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6943(data, threadData);

  MOSES_Simulations_ACTS_adsorption_eqFunction_6942(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

