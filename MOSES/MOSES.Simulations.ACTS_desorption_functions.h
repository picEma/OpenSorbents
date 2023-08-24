#ifndef MOSES_Simulations_ACTS_desorption__H
#define MOSES_Simulations_ACTS_desorption__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_string _iupacName;
  modelica_string _casRegistryNumber;
  modelica_string _chemicalFormula;
  modelica_string _structureFormula;
  modelica_real _molarMass;
  modelica_real _criticalTemperature;
  modelica_real _criticalPressure;
  modelica_real _criticalMolarVolume;
  modelica_real _acentricFactor;
  modelica_real _triplePointTemperature;
  modelica_real _triplePointPressure;
  modelica_real _meltingPoint;
  modelica_real _normalBoilingPoint;
  modelica_real _dipoleMoment;
  modelica_boolean _hasIdealGasHeatCapacity;
  modelica_boolean _hasCriticalData;
  modelica_boolean _hasDipoleMoment;
  modelica_boolean _hasFundamentalEquation;
  modelica_boolean _hasLiquidHeatCapacity;
  modelica_boolean _hasSolidHeatCapacity;
  modelica_boolean _hasAccurateViscosityData;
  modelica_boolean _hasAccurateConductivityData;
  modelica_boolean _hasVapourPressureCurve;
  modelica_boolean _hasAcentricFactor;
  modelica_real _HCRIT0;
  modelica_real _SCRIT0;
  modelica_real _deltah;
  modelica_real _deltas;
} MOSES_MassTransfer_sorbate_FluidConstants;
extern struct record_description MOSES_MassTransfer_sorbate_FluidConstants__desc;

void MOSES_MassTransfer_sorbate_FluidConstants_construct_p(threadData_t *threadData, void* v_ths );
#define MOSES_MassTransfer_sorbate_FluidConstants_construct(td, ths ) MOSES_MassTransfer_sorbate_FluidConstants_construct_p(td, &ths )
void MOSES_MassTransfer_sorbate_FluidConstants_copy_p(void* v_src, void* v_dst);
#define MOSES_MassTransfer_sorbate_FluidConstants_copy(src,dst) MOSES_MassTransfer_sorbate_FluidConstants_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// MOSES_MassTransfer_sorbate_FluidConstants omc_MOSES_MassTransfer_sorbate_FluidConstants(threadData_t *threadData , modelica_string in_iupacName, modelica_string in_casRegistryNumber, modelica_string in_chemicalFormula, modelica_string in_structureFormula, modelica_real in_molarMass, modelica_real in_criticalTemperature, modelica_real in_criticalPressure, modelica_real in_criticalMolarVolume, modelica_real in_acentricFactor, modelica_real in_triplePointTemperature, modelica_real in_triplePointPressure, modelica_real in_meltingPoint, modelica_real in_normalBoilingPoint, modelica_real in_dipoleMoment, modelica_boolean in_hasIdealGasHeatCapacity, modelica_boolean in_hasCriticalData, modelica_boolean in_hasDipoleMoment, modelica_boolean in_hasFundamentalEquation, modelica_boolean in_hasLiquidHeatCapacity, modelica_boolean in_hasSolidHeatCapacity, modelica_boolean in_hasAccurateViscosityData, modelica_boolean in_hasAccurateConductivityData, modelica_boolean in_hasVapourPressureCurve, modelica_boolean in_hasAcentricFactor, modelica_real in_HCRIT0, modelica_real in_SCRIT0, modelica_real in_deltah, modelica_real in_deltas);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void MOSES_MassTransfer_sorbate_FluidConstants_copy_to_vars_p(void* v_src , modelica_string* in_iupacName, modelica_string* in_casRegistryNumber, modelica_string* in_chemicalFormula, modelica_string* in_structureFormula, modelica_real* in_molarMass, modelica_real* in_criticalTemperature, modelica_real* in_criticalPressure, modelica_real* in_criticalMolarVolume, modelica_real* in_acentricFactor, modelica_real* in_triplePointTemperature, modelica_real* in_triplePointPressure, modelica_real* in_meltingPoint, modelica_real* in_normalBoilingPoint, modelica_real* in_dipoleMoment, modelica_boolean* in_hasIdealGasHeatCapacity, modelica_boolean* in_hasCriticalData, modelica_boolean* in_hasDipoleMoment, modelica_boolean* in_hasFundamentalEquation, modelica_boolean* in_hasLiquidHeatCapacity, modelica_boolean* in_hasSolidHeatCapacity, modelica_boolean* in_hasAccurateViscosityData, modelica_boolean* in_hasAccurateConductivityData, modelica_boolean* in_hasVapourPressureCurve, modelica_boolean* in_hasAcentricFactor, modelica_real* in_HCRIT0, modelica_real* in_SCRIT0, modelica_real* in_deltah, modelica_real* in_deltas);
// #define MOSES_MassTransfer_sorbate_FluidConstants_copy_to_vars(src,...) MOSES_MassTransfer_sorbate_FluidConstants_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t MOSES_MassTransfer_sorbate_FluidConstants_array;
#define alloc_MOSES_MassTransfer_sorbate_FluidConstants_array(dst,ndims,...) generic_array_create(NULL, dst, MOSES_MassTransfer_sorbate_FluidConstants_construct_p, ndims, sizeof(MOSES_MassTransfer_sorbate_FluidConstants), __VA_ARGS__)
#define MOSES_MassTransfer_sorbate_FluidConstants_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, MOSES_MassTransfer_sorbate_FluidConstants_copy_p, sizeof(MOSES_MassTransfer_sorbate_FluidConstants))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_MOSES_MassTransfer_sorbate_FluidConstants_array_data(src,dst)   generic_array_copy_data(src, &dst, MOSES_MassTransfer_sorbate_FluidConstants_copy_p, sizeof(MOSES_MassTransfer_sorbate_FluidConstants))
#define MOSES_MassTransfer_sorbate_FluidConstants_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, MOSES_MassTransfer_sorbate_FluidConstants_copy_p, sizeof(MOSES_MassTransfer_sorbate_FluidConstants))
#define MOSES_MassTransfer_sorbate_FluidConstants_array_get(src,ndims,...)         (*(MOSES_MassTransfer_sorbate_FluidConstants*)(generic_array_get(&src, sizeof(MOSES_MassTransfer_sorbate_FluidConstants), __VA_ARGS__)))
#define MOSES_MassTransfer_sorbate_FluidConstants_set(dst,val,...)           generic_array_set(&dst, &val, MOSES_MassTransfer_sorbate_FluidConstants_copy_p, sizeof(MOSES_MassTransfer_sorbate_FluidConstants), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
  modelica_real _R_s;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _g;
  modelica_real _gpi;
  modelica_real _gpipi;
  modelica_real _gtau;
  modelica_real _gtautau;
  modelica_real _gtaupi;
} Modelica_Media_Common_GibbsDerivs;
extern struct record_description Modelica_Media_Common_GibbsDerivs__desc;

void Modelica_Media_Common_GibbsDerivs_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_GibbsDerivs_construct(td, ths ) Modelica_Media_Common_GibbsDerivs_construct_p(td, &ths )
void Modelica_Media_Common_GibbsDerivs_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_GibbsDerivs_copy(src,dst) Modelica_Media_Common_GibbsDerivs_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData , modelica_real in_p, modelica_real in_T, modelica_real in_R_s, modelica_real in_pi, modelica_real in_tau, modelica_real in_g, modelica_real in_gpi, modelica_real in_gpipi, modelica_real in_gtau, modelica_real in_gtautau, modelica_real in_gtaupi);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_GibbsDerivs_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, modelica_real* in_R_s, modelica_real* in_pi, modelica_real* in_tau, modelica_real* in_g, modelica_real* in_gpi, modelica_real* in_gpipi, modelica_real* in_gtau, modelica_real* in_gtautau, modelica_real* in_gtaupi);
// #define Modelica_Media_Common_GibbsDerivs_copy_to_vars(src,...) Modelica_Media_Common_GibbsDerivs_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_GibbsDerivs_array;
#define alloc_Modelica_Media_Common_GibbsDerivs_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_GibbsDerivs_construct_p, ndims, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)
#define Modelica_Media_Common_GibbsDerivs_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_GibbsDerivs_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs))
#define Modelica_Media_Common_GibbsDerivs_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs))
#define Modelica_Media_Common_GibbsDerivs_array_get(src,ndims,...)         (*(Modelica_Media_Common_GibbsDerivs*)(generic_array_get(&src, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)))
#define Modelica_Media_Common_GibbsDerivs_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)

typedef struct {
  modelica_real _d;
  modelica_real _T;
  modelica_real _R_s;
  modelica_real _delta;
  modelica_real _tau;
  modelica_real _f;
  modelica_real _fdelta;
  modelica_real _fdeltadelta;
  modelica_real _ftau;
  modelica_real _ftautau;
  modelica_real _fdeltatau;
} Modelica_Media_Common_HelmholtzDerivs;
extern struct record_description Modelica_Media_Common_HelmholtzDerivs__desc;

void Modelica_Media_Common_HelmholtzDerivs_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_HelmholtzDerivs_construct(td, ths ) Modelica_Media_Common_HelmholtzDerivs_construct_p(td, &ths )
void Modelica_Media_Common_HelmholtzDerivs_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_HelmholtzDerivs_copy(src,dst) Modelica_Media_Common_HelmholtzDerivs_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData , modelica_real in_d, modelica_real in_T, modelica_real in_R_s, modelica_real in_delta, modelica_real in_tau, modelica_real in_f, modelica_real in_fdelta, modelica_real in_fdeltadelta, modelica_real in_ftau, modelica_real in_ftautau, modelica_real in_fdeltatau);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_HelmholtzDerivs_copy_to_vars_p(void* v_src , modelica_real* in_d, modelica_real* in_T, modelica_real* in_R_s, modelica_real* in_delta, modelica_real* in_tau, modelica_real* in_f, modelica_real* in_fdelta, modelica_real* in_fdeltadelta, modelica_real* in_ftau, modelica_real* in_ftautau, modelica_real* in_fdeltatau);
// #define Modelica_Media_Common_HelmholtzDerivs_copy_to_vars(src,...) Modelica_Media_Common_HelmholtzDerivs_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_HelmholtzDerivs_array;
#define alloc_Modelica_Media_Common_HelmholtzDerivs_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_HelmholtzDerivs_construct_p, ndims, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)
#define Modelica_Media_Common_HelmholtzDerivs_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_HelmholtzDerivs_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs))
#define Modelica_Media_Common_HelmholtzDerivs_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs))
#define Modelica_Media_Common_HelmholtzDerivs_array_get(src,ndims,...)         (*(Modelica_Media_Common_HelmholtzDerivs*)(generic_array_get(&src, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)))
#define Modelica_Media_Common_HelmholtzDerivs_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _pd;
} Modelica_Media_Common_NewtonDerivatives__pT;
extern struct record_description Modelica_Media_Common_NewtonDerivatives__pT__desc;

void Modelica_Media_Common_NewtonDerivatives__pT_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_NewtonDerivatives__pT_construct(td, ths ) Modelica_Media_Common_NewtonDerivatives__pT_construct_p(td, &ths )
void Modelica_Media_Common_NewtonDerivatives__pT_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_NewtonDerivatives__pT_copy(src,dst) Modelica_Media_Common_NewtonDerivatives__pT_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData , modelica_real in_p, modelica_real in_pd);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_pd);
// #define Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars(src,...) Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_NewtonDerivatives__pT_array;
#define alloc_Modelica_Media_Common_NewtonDerivatives__pT_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_NewtonDerivatives__pT_construct_p, ndims, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)
#define Modelica_Media_Common_NewtonDerivatives__pT_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_NewtonDerivatives__pT_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT))
#define Modelica_Media_Common_NewtonDerivatives__pT_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT))
#define Modelica_Media_Common_NewtonDerivatives__pT_array_get(src,ndims,...)         (*(Modelica_Media_Common_NewtonDerivatives__pT*)(generic_array_get(&src, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)))
#define Modelica_Media_Common_NewtonDerivatives__pT_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _h;
  modelica_real _pd;
  modelica_real _pt;
  modelica_real _hd;
  modelica_real _ht;
} Modelica_Media_Common_NewtonDerivatives__ph;
extern struct record_description Modelica_Media_Common_NewtonDerivatives__ph__desc;

void Modelica_Media_Common_NewtonDerivatives__ph_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_NewtonDerivatives__ph_construct(td, ths ) Modelica_Media_Common_NewtonDerivatives__ph_construct_p(td, &ths )
void Modelica_Media_Common_NewtonDerivatives__ph_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_NewtonDerivatives__ph_copy(src,dst) Modelica_Media_Common_NewtonDerivatives__ph_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData , modelica_real in_p, modelica_real in_h, modelica_real in_pd, modelica_real in_pt, modelica_real in_hd, modelica_real in_ht);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_h, modelica_real* in_pd, modelica_real* in_pt, modelica_real* in_hd, modelica_real* in_ht);
// #define Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars(src,...) Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_NewtonDerivatives__ph_array;
#define alloc_Modelica_Media_Common_NewtonDerivatives__ph_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_NewtonDerivatives__ph_construct_p, ndims, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)
#define Modelica_Media_Common_NewtonDerivatives__ph_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_NewtonDerivatives__ph_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph))
#define Modelica_Media_Common_NewtonDerivatives__ph_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph))
#define Modelica_Media_Common_NewtonDerivatives__ph_array_get(src,ndims,...)         (*(Modelica_Media_Common_NewtonDerivatives__ph*)(generic_array_get(&src, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)))
#define Modelica_Media_Common_NewtonDerivatives__ph_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)

typedef struct {
  modelica_integer _phase;
  modelica_integer _region;
  modelica_real _p;
  modelica_real _T;
  modelica_real _h;
  modelica_real _R_s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _rho;
  modelica_real _s;
  modelica_real _pt;
  modelica_real _pd;
  modelica_real _vt;
  modelica_real _vp;
  modelica_real _x;
  modelica_real _dpT;
} Modelica_Media_Common_IF97BaseTwoPhase;
extern struct record_description Modelica_Media_Common_IF97BaseTwoPhase__desc;

void Modelica_Media_Common_IF97BaseTwoPhase_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_IF97BaseTwoPhase_construct(td, ths ) Modelica_Media_Common_IF97BaseTwoPhase_construct_p(td, &ths )
void Modelica_Media_Common_IF97BaseTwoPhase_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_IF97BaseTwoPhase_copy(src,dst) Modelica_Media_Common_IF97BaseTwoPhase_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData , modelica_integer in_phase, modelica_integer in_region, modelica_real in_p, modelica_real in_T, modelica_real in_h, modelica_real in_R_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_rho, modelica_real in_s, modelica_real in_pt, modelica_real in_pd, modelica_real in_vt, modelica_real in_vp, modelica_real in_x, modelica_real in_dpT);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars_p(void* v_src , modelica_integer* in_phase, modelica_integer* in_region, modelica_real* in_p, modelica_real* in_T, modelica_real* in_h, modelica_real* in_R_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_rho, modelica_real* in_s, modelica_real* in_pt, modelica_real* in_pd, modelica_real* in_vt, modelica_real* in_vp, modelica_real* in_x, modelica_real* in_dpT);
// #define Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(src,...) Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_IF97BaseTwoPhase_array;
#define alloc_Modelica_Media_Common_IF97BaseTwoPhase_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_IF97BaseTwoPhase_construct_p, ndims, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)
#define Modelica_Media_Common_IF97BaseTwoPhase_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_IF97BaseTwoPhase_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase))
#define Modelica_Media_Common_IF97BaseTwoPhase_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase))
#define Modelica_Media_Common_IF97BaseTwoPhase_array_get(src,ndims,...)         (*(Modelica_Media_Common_IF97BaseTwoPhase*)(generic_array_get(&src, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)))
#define Modelica_Media_Common_IF97BaseTwoPhase_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)

typedef struct {
  modelica_boolean _region3boundary;
  modelica_real _R_s;
  modelica_real _T;
  modelica_real _d;
  modelica_real _h;
  modelica_real _s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _dpT;
  modelica_real _pt;
  modelica_real _pd;
  modelica_real _vt;
  modelica_real _vp;
} Modelica_Media_Common_IF97PhaseBoundaryProperties;
extern struct record_description Modelica_Media_Common_IF97PhaseBoundaryProperties__desc;

void Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(td, ths ) Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p(td, &ths )
void Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_copy(src,dst) Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData , modelica_boolean in_region3boundary, modelica_real in_R_s, modelica_real in_T, modelica_real in_d, modelica_real in_h, modelica_real in_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_dpT, modelica_real in_pt, modelica_real in_pd, modelica_real in_vt, modelica_real in_vp);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars_p(void* v_src , modelica_boolean* in_region3boundary, modelica_real* in_R_s, modelica_real* in_T, modelica_real* in_d, modelica_real* in_h, modelica_real* in_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_dpT, modelica_real* in_pt, modelica_real* in_pd, modelica_real* in_vt, modelica_real* in_vp);
// #define Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(src,...) Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_IF97PhaseBoundaryProperties_array;
#define alloc_Modelica_Media_Common_IF97PhaseBoundaryProperties_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p, ndims, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_IF97PhaseBoundaryProperties_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_get(src,ndims,...)         (*(Modelica_Media_Common_IF97PhaseBoundaryProperties*)(generic_array_get(&src, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)

typedef struct {
  modelica_real _d;
  modelica_real _h;
  modelica_real _u;
  modelica_real _s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _pt;
  modelica_real _pd;
} Modelica_Media_Common_PhaseBoundaryProperties;
extern struct record_description Modelica_Media_Common_PhaseBoundaryProperties__desc;

void Modelica_Media_Common_PhaseBoundaryProperties_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_PhaseBoundaryProperties_construct(td, ths ) Modelica_Media_Common_PhaseBoundaryProperties_construct_p(td, &ths )
void Modelica_Media_Common_PhaseBoundaryProperties_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_PhaseBoundaryProperties_copy(src,dst) Modelica_Media_Common_PhaseBoundaryProperties_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData , modelica_real in_d, modelica_real in_h, modelica_real in_u, modelica_real in_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_pt, modelica_real in_pd);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars_p(void* v_src , modelica_real* in_d, modelica_real* in_h, modelica_real* in_u, modelica_real* in_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_pt, modelica_real* in_pd);
// #define Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars(src,...) Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_PhaseBoundaryProperties_array;
#define alloc_Modelica_Media_Common_PhaseBoundaryProperties_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_PhaseBoundaryProperties_construct_p, ndims, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)
#define Modelica_Media_Common_PhaseBoundaryProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Common_PhaseBoundaryProperties_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties))
#define Modelica_Media_Common_PhaseBoundaryProperties_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties))
#define Modelica_Media_Common_PhaseBoundaryProperties_array_get(src,ndims,...)         (*(Modelica_Media_Common_PhaseBoundaryProperties*)(generic_array_get(&src, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)))
#define Modelica_Media_Common_PhaseBoundaryProperties_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)

typedef MOSES_MassTransfer_sorbate_FluidConstants Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants;
extern struct record_description Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants__desc;

void Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_construct(td, ths ) Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_construct_p(td, &ths )
void Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy(src,dst) Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants omc_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants(threadData_t *threadData , modelica_string in_iupacName, modelica_string in_casRegistryNumber, modelica_string in_chemicalFormula, modelica_string in_structureFormula, modelica_real in_molarMass, modelica_real in_criticalTemperature, modelica_real in_criticalPressure, modelica_real in_criticalMolarVolume, modelica_real in_acentricFactor, modelica_real in_triplePointTemperature, modelica_real in_triplePointPressure, modelica_real in_meltingPoint, modelica_real in_normalBoilingPoint, modelica_real in_dipoleMoment, modelica_boolean in_hasIdealGasHeatCapacity, modelica_boolean in_hasCriticalData, modelica_boolean in_hasDipoleMoment, modelica_boolean in_hasFundamentalEquation, modelica_boolean in_hasLiquidHeatCapacity, modelica_boolean in_hasSolidHeatCapacity, modelica_boolean in_hasAccurateViscosityData, modelica_boolean in_hasAccurateConductivityData, modelica_boolean in_hasVapourPressureCurve, modelica_boolean in_hasAcentricFactor, modelica_real in_HCRIT0, modelica_real in_SCRIT0, modelica_real in_deltah, modelica_real in_deltas);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_to_vars_p(void* v_src , modelica_string* in_iupacName, modelica_string* in_casRegistryNumber, modelica_string* in_chemicalFormula, modelica_string* in_structureFormula, modelica_real* in_molarMass, modelica_real* in_criticalTemperature, modelica_real* in_criticalPressure, modelica_real* in_criticalMolarVolume, modelica_real* in_acentricFactor, modelica_real* in_triplePointTemperature, modelica_real* in_triplePointPressure, modelica_real* in_meltingPoint, modelica_real* in_normalBoilingPoint, modelica_real* in_dipoleMoment, modelica_boolean* in_hasIdealGasHeatCapacity, modelica_boolean* in_hasCriticalData, modelica_boolean* in_hasDipoleMoment, modelica_boolean* in_hasFundamentalEquation, modelica_boolean* in_hasLiquidHeatCapacity, modelica_boolean* in_hasSolidHeatCapacity, modelica_boolean* in_hasAccurateViscosityData, modelica_boolean* in_hasAccurateConductivityData, modelica_boolean* in_hasVapourPressureCurve, modelica_boolean* in_hasAcentricFactor, modelica_real* in_HCRIT0, modelica_real* in_SCRIT0, modelica_real* in_deltah, modelica_real* in_deltas);
// #define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_to_vars(src,...) Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array;
#define alloc_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_construct_p, ndims, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants), __VA_ARGS__)
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants))
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants))
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_array_get(src,ndims,...)         (*(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants*)(generic_array_get(&src, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants), __VA_ARGS__)))
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants), __VA_ARGS__)

typedef MOSES_MassTransfer_sorbate_FluidConstants Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants;
extern struct record_description Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants__desc;

void Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_construct(td, ths ) Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_construct_p(td, &ths )
void Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy(src,dst) Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants omc_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants(threadData_t *threadData , modelica_string in_iupacName, modelica_string in_casRegistryNumber, modelica_string in_chemicalFormula, modelica_string in_structureFormula, modelica_real in_molarMass, modelica_real in_criticalTemperature, modelica_real in_criticalPressure, modelica_real in_criticalMolarVolume, modelica_real in_acentricFactor, modelica_real in_triplePointTemperature, modelica_real in_triplePointPressure, modelica_real in_meltingPoint, modelica_real in_normalBoilingPoint, modelica_real in_dipoleMoment, modelica_boolean in_hasIdealGasHeatCapacity, modelica_boolean in_hasCriticalData, modelica_boolean in_hasDipoleMoment, modelica_boolean in_hasFundamentalEquation, modelica_boolean in_hasLiquidHeatCapacity, modelica_boolean in_hasSolidHeatCapacity, modelica_boolean in_hasAccurateViscosityData, modelica_boolean in_hasAccurateConductivityData, modelica_boolean in_hasVapourPressureCurve, modelica_boolean in_hasAcentricFactor, modelica_real in_HCRIT0, modelica_real in_SCRIT0, modelica_real in_deltah, modelica_real in_deltas);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_to_vars_p(void* v_src , modelica_string* in_iupacName, modelica_string* in_casRegistryNumber, modelica_string* in_chemicalFormula, modelica_string* in_structureFormula, modelica_real* in_molarMass, modelica_real* in_criticalTemperature, modelica_real* in_criticalPressure, modelica_real* in_criticalMolarVolume, modelica_real* in_acentricFactor, modelica_real* in_triplePointTemperature, modelica_real* in_triplePointPressure, modelica_real* in_meltingPoint, modelica_real* in_normalBoilingPoint, modelica_real* in_dipoleMoment, modelica_boolean* in_hasIdealGasHeatCapacity, modelica_boolean* in_hasCriticalData, modelica_boolean* in_hasDipoleMoment, modelica_boolean* in_hasFundamentalEquation, modelica_boolean* in_hasLiquidHeatCapacity, modelica_boolean* in_hasSolidHeatCapacity, modelica_boolean* in_hasAccurateViscosityData, modelica_boolean* in_hasAccurateConductivityData, modelica_boolean* in_hasVapourPressureCurve, modelica_boolean* in_hasAcentricFactor, modelica_real* in_HCRIT0, modelica_real* in_SCRIT0, modelica_real* in_deltah, modelica_real* in_deltas);
// #define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_to_vars(src,...) Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array;
#define alloc_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_construct_p, ndims, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants), __VA_ARGS__)
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants))
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants))
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_array_get(src,ndims,...)         (*(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants*)(generic_array_get(&src, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants), __VA_ARGS__)))
#define Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants_copy_p, sizeof(Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants), __VA_ARGS__)

typedef MOSES_MassTransfer_sorbate_FluidConstants Modelica_Media_Water_WaterIF97__pT_FluidConstants;
extern struct record_description Modelica_Media_Water_WaterIF97__pT_FluidConstants__desc;

void Modelica_Media_Water_WaterIF97__pT_FluidConstants_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_construct(td, ths ) Modelica_Media_Water_WaterIF97__pT_FluidConstants_construct_p(td, &ths )
void Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy(src,dst) Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Modelica_Media_Water_WaterIF97__pT_FluidConstants omc_Modelica_Media_Water_WaterIF97__pT_FluidConstants(threadData_t *threadData , modelica_string in_iupacName, modelica_string in_casRegistryNumber, modelica_string in_chemicalFormula, modelica_string in_structureFormula, modelica_real in_molarMass, modelica_real in_criticalTemperature, modelica_real in_criticalPressure, modelica_real in_criticalMolarVolume, modelica_real in_acentricFactor, modelica_real in_triplePointTemperature, modelica_real in_triplePointPressure, modelica_real in_meltingPoint, modelica_real in_normalBoilingPoint, modelica_real in_dipoleMoment, modelica_boolean in_hasIdealGasHeatCapacity, modelica_boolean in_hasCriticalData, modelica_boolean in_hasDipoleMoment, modelica_boolean in_hasFundamentalEquation, modelica_boolean in_hasLiquidHeatCapacity, modelica_boolean in_hasSolidHeatCapacity, modelica_boolean in_hasAccurateViscosityData, modelica_boolean in_hasAccurateConductivityData, modelica_boolean in_hasVapourPressureCurve, modelica_boolean in_hasAcentricFactor, modelica_real in_HCRIT0, modelica_real in_SCRIT0, modelica_real in_deltah, modelica_real in_deltas);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_to_vars_p(void* v_src , modelica_string* in_iupacName, modelica_string* in_casRegistryNumber, modelica_string* in_chemicalFormula, modelica_string* in_structureFormula, modelica_real* in_molarMass, modelica_real* in_criticalTemperature, modelica_real* in_criticalPressure, modelica_real* in_criticalMolarVolume, modelica_real* in_acentricFactor, modelica_real* in_triplePointTemperature, modelica_real* in_triplePointPressure, modelica_real* in_meltingPoint, modelica_real* in_normalBoilingPoint, modelica_real* in_dipoleMoment, modelica_boolean* in_hasIdealGasHeatCapacity, modelica_boolean* in_hasCriticalData, modelica_boolean* in_hasDipoleMoment, modelica_boolean* in_hasFundamentalEquation, modelica_boolean* in_hasLiquidHeatCapacity, modelica_boolean* in_hasSolidHeatCapacity, modelica_boolean* in_hasAccurateViscosityData, modelica_boolean* in_hasAccurateConductivityData, modelica_boolean* in_hasVapourPressureCurve, modelica_boolean* in_hasAcentricFactor, modelica_real* in_HCRIT0, modelica_real* in_SCRIT0, modelica_real* in_deltah, modelica_real* in_deltas);
// #define Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_to_vars(src,...) Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Water_WaterIF97__pT_FluidConstants_array;
#define alloc_Modelica_Media_Water_WaterIF97__pT_FluidConstants_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Water_WaterIF97__pT_FluidConstants_construct_p, ndims, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants), __VA_ARGS__)
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Modelica_Media_Water_WaterIF97__pT_FluidConstants_array_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants))
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants))
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_array_get(src,ndims,...)         (*(Modelica_Media_Water_WaterIF97__pT_FluidConstants*)(generic_array_get(&src, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants), __VA_ARGS__)))
#define Modelica_Media_Water_WaterIF97__pT_FluidConstants_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Water_WaterIF97__pT_FluidConstants_copy_p, sizeof(Modelica_Media_Water_WaterIF97__pT_FluidConstants), __VA_ARGS__)

DLLExport
MOSES_MassTransfer_sorbate_FluidConstants omc_MOSES_MassTransfer_sorbate_FluidConstants (threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas);

DLLExport
modelica_metatype boxptr_MOSES_MassTransfer_sorbate_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas);
static const MMC_DEFSTRUCTLIT(boxvar_lit_MOSES_MassTransfer_sorbate_FluidConstants,2,0) {(void*) boxptr_MOSES_MassTransfer_sorbate_FluidConstants,0}};
#define boxvar_MOSES_MassTransfer_sorbate_FluidConstants MMC_REFSTRUCTLIT(boxvar_lit_MOSES_MassTransfer_sorbate_FluidConstants)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Common_GibbsDerivs (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_pi, modelica_real omc_tau, modelica_real omc_g, modelica_real omc_gpi, modelica_real omc_gpipi, modelica_real omc_gtau, modelica_real omc_gtautau, modelica_real omc_gtaupi);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _pi, modelica_metatype _tau, modelica_metatype _g, modelica_metatype _gpi, modelica_metatype _gpipi, modelica_metatype _gtau, modelica_metatype _gtautau, modelica_metatype _gtaupi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_GibbsDerivs,2,0) {(void*) boxptr_Modelica_Media_Common_GibbsDerivs,0}};
#define boxvar_Modelica_Media_Common_GibbsDerivs MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_GibbsDerivs)


DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Common_HelmholtzDerivs (threadData_t *threadData, modelica_real omc_d, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_delta, modelica_real omc_tau, modelica_real omc_f, modelica_real omc_fdelta, modelica_real omc_fdeltadelta, modelica_real omc_ftau, modelica_real omc_ftautau, modelica_real omc_fdeltatau);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _delta, modelica_metatype _tau, modelica_metatype _f, modelica_metatype _fdelta, modelica_metatype _fdeltadelta, modelica_metatype _ftau, modelica_metatype _ftautau, modelica_metatype _fdeltatau);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_HelmholtzDerivs,2,0) {(void*) boxptr_Modelica_Media_Common_HelmholtzDerivs,0}};
#define boxvar_Modelica_Media_Common_HelmholtzDerivs MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_HelmholtzDerivs)


DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__pT,2,0) {(void*) boxptr_Modelica_Media_Common_Helmholtz__pT,0}};
#define boxvar_Modelica_Media_Common_Helmholtz__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__pT)


DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__ph,2,0) {(void*) boxptr_Modelica_Media_Common_Helmholtz__ph,0}};
#define boxvar_Modelica_Media_Common_Helmholtz__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__ph)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Common_IF97BaseTwoPhase (threadData_t *threadData, modelica_integer omc_phase, modelica_integer omc_region, modelica_real omc_p, modelica_real omc_T, modelica_real omc_h, modelica_real omc_R_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_rho, modelica_real omc_s, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp, modelica_real omc_x, modelica_real omc_dpT);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _region, modelica_metatype _p, modelica_metatype _T, modelica_metatype _h, modelica_metatype _R_s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _rho, modelica_metatype _s, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp, modelica_metatype _x, modelica_metatype _dpT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97BaseTwoPhase,2,0) {(void*) boxptr_Modelica_Media_Common_IF97BaseTwoPhase,0}};
#define boxvar_Modelica_Media_Common_IF97BaseTwoPhase MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97BaseTwoPhase)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Common_IF97PhaseBoundaryProperties (threadData_t *threadData, modelica_boolean omc_region3boundary, modelica_real omc_R_s, modelica_real omc_T, modelica_real omc_d, modelica_real omc_h, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_dpT, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _region3boundary, modelica_metatype _R_s, modelica_metatype _T, modelica_metatype _d, modelica_metatype _h, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _dpT, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97PhaseBoundaryProperties,2,0) {(void*) boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties,0}};
#define boxvar_Modelica_Media_Common_IF97PhaseBoundaryProperties MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97PhaseBoundaryProperties)


DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_NewtonDerivatives__pT (threadData_t *threadData, modelica_real omc_p, modelica_real omc_pd);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _pd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__pT,2,0) {(void*) boxptr_Modelica_Media_Common_NewtonDerivatives__pT,0}};
#define boxvar_Modelica_Media_Common_NewtonDerivatives__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__pT)


DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_NewtonDerivatives__ph (threadData_t *threadData, modelica_real omc_p, modelica_real omc_h, modelica_real omc_pd, modelica_real omc_pt, modelica_real omc_hd, modelica_real omc_ht);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _pd, modelica_metatype _pt, modelica_metatype _hd, modelica_metatype _ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__ph,2,0) {(void*) boxptr_Modelica_Media_Common_NewtonDerivatives__ph,0}};
#define boxvar_Modelica_Media_Common_NewtonDerivatives__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__ph)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_PhaseBoundaryProperties (threadData_t *threadData, modelica_real omc_d, modelica_real omc_h, modelica_real omc_u, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_pt, modelica_real omc_pd);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _d, modelica_metatype _h, modelica_metatype _u, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _pt, modelica_metatype _pd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_PhaseBoundaryProperties,2,0) {(void*) boxptr_Modelica_Media_Common_PhaseBoundaryProperties,0}};
#define boxvar_Modelica_Media_Common_PhaseBoundaryProperties MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_PhaseBoundaryProperties)


DLLExport
modelica_real omc_Modelica_Media_Common_cv2Phase(threadData_t *threadData, Modelica_Media_Common_PhaseBoundaryProperties _liq, Modelica_Media_Common_PhaseBoundaryProperties _vap, modelica_real _x, modelica_real _T, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_cv2Phase(threadData_t *threadData, modelica_metatype _liq, modelica_metatype _vap, modelica_metatype _x, modelica_metatype _T, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_cv2Phase,2,0) {(void*) boxptr_Modelica_Media_Common_cv2Phase,0}};
#define boxvar_Modelica_Media_Common_cv2Phase MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_cv2Phase)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_GibbsDerivs _g);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, modelica_metatype _g);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_gibbsToBoundaryProps,2,0) {(void*) boxptr_Modelica_Media_Common_gibbsToBoundaryProps,0}};
#define boxvar_Modelica_Media_Common_gibbsToBoundaryProps MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_gibbsToBoundaryProps)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_helmholtzToBoundaryProps,2,0) {(void*) boxptr_Modelica_Media_Common_helmholtzToBoundaryProps,0}};
#define boxvar_Modelica_Media_Common_helmholtzToBoundaryProps MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_helmholtzToBoundaryProps)


DLLExport
Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants omc_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants (threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas);

DLLExport
modelica_metatype boxptr_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants,2,0) {(void*) boxptr_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants,0}};
#define boxvar_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants)


DLLExport
Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants omc_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants (threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas);

DLLExport
modelica_metatype boxptr_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants,2,0) {(void*) boxptr_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants,0}};
#define boxvar_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_hl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_hl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hl__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hv__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_hv__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_hv__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hv__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhol__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rhol__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhol__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhov__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rhov__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhov__T)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT)


DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_real _d, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_boolean _checkLimits);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _checkLimits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_real _delp, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _delp, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _delp, modelica_real _delh, modelica_real *out_T, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _delp, modelica_metatype _delh, modelica_metatype *out_T, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_real _din, modelica_real _Tin, modelica_real *out_Tout);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_metatype _din, modelica_metatype _Tin, modelica_metatype *out_Tout);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _reldh, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _reldh, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_real _t);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_real _p, Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_metatype _p, modelica_metatype _bpro);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p)


DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _mode);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _mode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT)


DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _mode);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _mode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b)


DLLExport
Modelica_Media_Water_WaterIF97__pT_FluidConstants omc_Modelica_Media_Water_WaterIF97__pT_FluidConstants (threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas);

DLLExport
modelica_metatype boxptr_Modelica_Media_Water_WaterIF97__pT_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_WaterIF97__pT_FluidConstants,2,0) {(void*) boxptr_Modelica_Media_Water_WaterIF97__pT_FluidConstants,0}};
#define boxvar_Modelica_Media_Water_WaterIF97__pT_FluidConstants MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_WaterIF97__pT_FluidConstants)
#include "MOSES.Simulations.ACTS_desorption_model.h"


#ifdef __cplusplus
}
#endif
#endif

