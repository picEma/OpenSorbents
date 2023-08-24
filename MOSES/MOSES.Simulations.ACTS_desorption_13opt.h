#if defined(__cplusplus)
  extern "C" {
#endif
  int MOSES_Simulations_ACTS_desorption_mayer(DATA* data, modelica_real** res, short*);
  int MOSES_Simulations_ACTS_desorption_lagrange(DATA* data, modelica_real** res, short *, short *);
  int MOSES_Simulations_ACTS_desorption_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int MOSES_Simulations_ACTS_desorption_setInputData(DATA *data, const modelica_boolean file);
  int MOSES_Simulations_ACTS_desorption_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif