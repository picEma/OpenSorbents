/* External objects file */
#include "MOSES.Simulations.ACTS_desorption_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void MOSES_Simulations_ACTS_desorption_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

