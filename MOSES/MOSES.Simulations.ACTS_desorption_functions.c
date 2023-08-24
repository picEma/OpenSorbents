#include "omc_simulation_settings.h"
#include "MOSES.Simulations.ACTS_desorption_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "MOSES.Simulations.ACTS_desorption_includes.h"


MOSES_MassTransfer_sorbate_FluidConstants omc_MOSES_MassTransfer_sorbate_FluidConstants(threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas)
{
  MOSES_MassTransfer_sorbate_FluidConstants tmp1;
  tmp1._iupacName = omc_iupacName;
  tmp1._casRegistryNumber = omc_casRegistryNumber;
  tmp1._chemicalFormula = omc_chemicalFormula;
  tmp1._structureFormula = omc_structureFormula;
  tmp1._molarMass = omc_molarMass;
  tmp1._criticalTemperature = omc_criticalTemperature;
  tmp1._criticalPressure = omc_criticalPressure;
  tmp1._criticalMolarVolume = omc_criticalMolarVolume;
  tmp1._acentricFactor = omc_acentricFactor;
  tmp1._triplePointTemperature = omc_triplePointTemperature;
  tmp1._triplePointPressure = omc_triplePointPressure;
  tmp1._meltingPoint = omc_meltingPoint;
  tmp1._normalBoilingPoint = omc_normalBoilingPoint;
  tmp1._dipoleMoment = omc_dipoleMoment;
  tmp1._hasIdealGasHeatCapacity = omc_hasIdealGasHeatCapacity;
  tmp1._hasCriticalData = omc_hasCriticalData;
  tmp1._hasDipoleMoment = omc_hasDipoleMoment;
  tmp1._hasFundamentalEquation = omc_hasFundamentalEquation;
  tmp1._hasLiquidHeatCapacity = omc_hasLiquidHeatCapacity;
  tmp1._hasSolidHeatCapacity = omc_hasSolidHeatCapacity;
  tmp1._hasAccurateViscosityData = omc_hasAccurateViscosityData;
  tmp1._hasAccurateConductivityData = omc_hasAccurateConductivityData;
  tmp1._hasVapourPressureCurve = omc_hasVapourPressureCurve;
  tmp1._hasAcentricFactor = omc_hasAcentricFactor;
  tmp1._HCRIT0 = omc_HCRIT0;
  tmp1._SCRIT0 = omc_SCRIT0;
  tmp1._deltah = omc_deltah;
  tmp1._deltas = omc_deltas;
  return tmp1;
}

modelica_metatype boxptr_MOSES_MassTransfer_sorbate_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas)
{
  return mmc_mk_box(29, 3, &MOSES_MassTransfer_sorbate_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass, _criticalTemperature, _criticalPressure, _criticalMolarVolume, _acentricFactor, _triplePointTemperature, _triplePointPressure, _meltingPoint, _normalBoilingPoint, _dipoleMoment, _hasIdealGasHeatCapacity, _hasCriticalData, _hasDipoleMoment, _hasFundamentalEquation, _hasLiquidHeatCapacity, _hasSolidHeatCapacity, _hasAccurateViscosityData, _hasAccurateConductivityData, _hasVapourPressureCurve, _hasAcentricFactor, _HCRIT0, _SCRIT0, _deltah, _deltas);
}

Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_pi, modelica_real omc_tau, modelica_real omc_g, modelica_real omc_gpi, modelica_real omc_gpipi, modelica_real omc_gtau, modelica_real omc_gtautau, modelica_real omc_gtaupi)
{
  Modelica_Media_Common_GibbsDerivs tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._R_s = omc_R_s;
  tmp1._pi = omc_pi;
  tmp1._tau = omc_tau;
  tmp1._g = omc_g;
  tmp1._gpi = omc_gpi;
  tmp1._gpipi = omc_gpipi;
  tmp1._gtau = omc_gtau;
  tmp1._gtautau = omc_gtautau;
  tmp1._gtaupi = omc_gtaupi;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _pi, modelica_metatype _tau, modelica_metatype _g, modelica_metatype _gpi, modelica_metatype _gpipi, modelica_metatype _gtau, modelica_metatype _gtautau, modelica_metatype _gtaupi)
{
  return mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, _p, _T, _R_s, _pi, _tau, _g, _gpi, _gpipi, _gtau, _gtautau, _gtaupi);
}

Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_real omc_d, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_delta, modelica_real omc_tau, modelica_real omc_f, modelica_real omc_fdelta, modelica_real omc_fdeltadelta, modelica_real omc_ftau, modelica_real omc_ftautau, modelica_real omc_fdeltatau)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  tmp1._d = omc_d;
  tmp1._T = omc_T;
  tmp1._R_s = omc_R_s;
  tmp1._delta = omc_delta;
  tmp1._tau = omc_tau;
  tmp1._f = omc_f;
  tmp1._fdelta = omc_fdelta;
  tmp1._fdeltadelta = omc_fdeltadelta;
  tmp1._ftau = omc_ftau;
  tmp1._ftautau = omc_ftautau;
  tmp1._fdeltatau = omc_fdeltatau;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _delta, modelica_metatype _tau, modelica_metatype _f, modelica_metatype _fdelta, modelica_metatype _fdeltadelta, modelica_metatype _ftau, modelica_metatype _ftautau, modelica_metatype _fdeltatau)
{
  return mmc_mk_box12(3, &Modelica_Media_Common_HelmholtzDerivs__desc, _d, _T, _R_s, _delta, _tau, _f, _fdelta, _fdeltadelta, _ftau, _ftautau, _fdeltatau);
}

DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_NewtonDerivatives__pT _nderivs;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_NewtonDerivatives__pT_construct(threadData, _nderivs); // _nderivs has no default value.
  _nderivs._p = (_f._d) * ((_f._R_s) * ((_f._T) * ((_f._delta) * (_f._fdelta))));

  _nderivs._pd = (_f._R_s) * ((_f._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));
  _return: OMC_LABEL_UNUSED
  return _nderivs;
}
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_NewtonDerivatives__pT _nderivs;
  modelica_metatype out_nderivs;
  modelica_metatype tmpMeta[13] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._d = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp4 = mmc_unbox_real(tmpMeta[2]);
  tmp1._R_s = tmp4;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp5 = mmc_unbox_real(tmpMeta[3]);
  tmp1._delta = tmp5;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp6 = mmc_unbox_real(tmpMeta[4]);
  tmp1._tau = tmp6;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp7 = mmc_unbox_real(tmpMeta[5]);
  tmp1._f = tmp7;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp8 = mmc_unbox_real(tmpMeta[6]);
  tmp1._fdelta = tmp8;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp9 = mmc_unbox_real(tmpMeta[7]);
  tmp1._fdeltadelta = tmp9;
  tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp10 = mmc_unbox_real(tmpMeta[8]);
  tmp1._ftau = tmp10;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp11 = mmc_unbox_real(tmpMeta[9]);
  tmp1._ftautau = tmp11;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp12 = mmc_unbox_real(tmpMeta[10]);
  tmp1._fdeltatau = tmp12;
  _nderivs = omc_Modelica_Media_Common_Helmholtz__pT(threadData, tmp1);
  tmpMeta[11] = mmc_mk_rcon(_nderivs._p);
  tmpMeta[12] = mmc_mk_rcon(_nderivs._pd);
  out_nderivs = mmc_mk_box3(3, &Modelica_Media_Common_NewtonDerivatives__pT__desc, tmpMeta[11], tmpMeta[12]);
  return out_nderivs;
}

DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_NewtonDerivatives__ph _nderivs;
  modelica_real _cv;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_NewtonDerivatives__ph_construct(threadData, _nderivs); // _nderivs has no default value.
  // _cv has no default value.
  tmp1 = _f._tau;
  _cv = ((-_f._R_s)) * (((tmp1 * tmp1)) * (_f._ftautau));

  _nderivs._p = (_f._d) * ((_f._R_s) * ((_f._T) * ((_f._delta) * (_f._fdelta))));

  _nderivs._h = (_f._R_s) * ((_f._T) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta)));

  _nderivs._pd = (_f._R_s) * ((_f._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));

  _nderivs._pt = (_f._R_s) * ((_f._d) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

  tmp2 = _f._d;
  _nderivs._ht = _cv + (_nderivs._pt) / tmp2;

  tmp3 = _f._d;
  tmp4 = _f._d;
  _nderivs._hd = (_nderivs._pd - ((_f._T) * ((_nderivs._pt) / tmp3))) / tmp4;
  _return: OMC_LABEL_UNUSED
  return _nderivs;
}
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_NewtonDerivatives__ph _nderivs;
  modelica_metatype out_nderivs;
  modelica_metatype tmpMeta[17] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._d = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp4 = mmc_unbox_real(tmpMeta[2]);
  tmp1._R_s = tmp4;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp5 = mmc_unbox_real(tmpMeta[3]);
  tmp1._delta = tmp5;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp6 = mmc_unbox_real(tmpMeta[4]);
  tmp1._tau = tmp6;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp7 = mmc_unbox_real(tmpMeta[5]);
  tmp1._f = tmp7;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp8 = mmc_unbox_real(tmpMeta[6]);
  tmp1._fdelta = tmp8;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp9 = mmc_unbox_real(tmpMeta[7]);
  tmp1._fdeltadelta = tmp9;
  tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp10 = mmc_unbox_real(tmpMeta[8]);
  tmp1._ftau = tmp10;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp11 = mmc_unbox_real(tmpMeta[9]);
  tmp1._ftautau = tmp11;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp12 = mmc_unbox_real(tmpMeta[10]);
  tmp1._fdeltatau = tmp12;
  _nderivs = omc_Modelica_Media_Common_Helmholtz__ph(threadData, tmp1);
  tmpMeta[11] = mmc_mk_rcon(_nderivs._p);
  tmpMeta[12] = mmc_mk_rcon(_nderivs._h);
  tmpMeta[13] = mmc_mk_rcon(_nderivs._pd);
  tmpMeta[14] = mmc_mk_rcon(_nderivs._pt);
  tmpMeta[15] = mmc_mk_rcon(_nderivs._hd);
  tmpMeta[16] = mmc_mk_rcon(_nderivs._ht);
  out_nderivs = mmc_mk_box7(3, &Modelica_Media_Common_NewtonDerivatives__ph__desc, tmpMeta[11], tmpMeta[12], tmpMeta[13], tmpMeta[14], tmpMeta[15], tmpMeta[16]);
  return out_nderivs;
}

Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_integer omc_phase, modelica_integer omc_region, modelica_real omc_p, modelica_real omc_T, modelica_real omc_h, modelica_real omc_R_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_rho, modelica_real omc_s, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp, modelica_real omc_x, modelica_real omc_dpT)
{
  Modelica_Media_Common_IF97BaseTwoPhase tmp1;
  tmp1._phase = omc_phase;
  tmp1._region = omc_region;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._h = omc_h;
  tmp1._R_s = omc_R_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._rho = omc_rho;
  tmp1._s = omc_s;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  tmp1._vt = omc_vt;
  tmp1._vp = omc_vp;
  tmp1._x = omc_x;
  tmp1._dpT = omc_dpT;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _region, modelica_metatype _p, modelica_metatype _T, modelica_metatype _h, modelica_metatype _R_s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _rho, modelica_metatype _s, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp, modelica_metatype _x, modelica_metatype _dpT)
{
  return mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, _phase, _region, _p, _T, _h, _R_s, _cp, _cv, _rho, _s, _pt, _pd, _vt, _vp, _x, _dpT);
}

Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_boolean omc_region3boundary, modelica_real omc_R_s, modelica_real omc_T, modelica_real omc_d, modelica_real omc_h, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_dpT, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp1;
  tmp1._region3boundary = omc_region3boundary;
  tmp1._R_s = omc_R_s;
  tmp1._T = omc_T;
  tmp1._d = omc_d;
  tmp1._h = omc_h;
  tmp1._s = omc_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._dpT = omc_dpT;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  tmp1._vt = omc_vt;
  tmp1._vp = omc_vp;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _region3boundary, modelica_metatype _R_s, modelica_metatype _T, modelica_metatype _d, modelica_metatype _h, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _dpT, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp)
{
  return mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, _region3boundary, _R_s, _T, _d, _h, _s, _cp, _cv, _dpT, _pt, _pd, _vt, _vp);
}

Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_real omc_p, modelica_real omc_pd)
{
  Modelica_Media_Common_NewtonDerivatives__pT tmp1;
  tmp1._p = omc_p;
  tmp1._pd = omc_pd;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _pd)
{
  return mmc_mk_box3(3, &Modelica_Media_Common_NewtonDerivatives__pT__desc, _p, _pd);
}

Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_real omc_p, modelica_real omc_h, modelica_real omc_pd, modelica_real omc_pt, modelica_real omc_hd, modelica_real omc_ht)
{
  Modelica_Media_Common_NewtonDerivatives__ph tmp1;
  tmp1._p = omc_p;
  tmp1._h = omc_h;
  tmp1._pd = omc_pd;
  tmp1._pt = omc_pt;
  tmp1._hd = omc_hd;
  tmp1._ht = omc_ht;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _pd, modelica_metatype _pt, modelica_metatype _hd, modelica_metatype _ht)
{
  return mmc_mk_box7(3, &Modelica_Media_Common_NewtonDerivatives__ph__desc, _p, _h, _pd, _pt, _hd, _ht);
}

Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_real omc_d, modelica_real omc_h, modelica_real omc_u, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_pt, modelica_real omc_pd)
{
  Modelica_Media_Common_PhaseBoundaryProperties tmp1;
  tmp1._d = omc_d;
  tmp1._h = omc_h;
  tmp1._u = omc_u;
  tmp1._s = omc_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _d, modelica_metatype _h, modelica_metatype _u, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _pt, modelica_metatype _pd)
{
  return mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, _d, _h, _u, _s, _cp, _cv, _pt, _pd);
}

DLLExport
modelica_real omc_Modelica_Media_Common_cv2Phase(threadData_t *threadData, Modelica_Media_Common_PhaseBoundaryProperties _liq, Modelica_Media_Common_PhaseBoundaryProperties _vap, modelica_real _x, modelica_real _T, modelica_real _p)
{
  modelica_real _cv;
  modelica_real _dpT;
  modelica_real _dxv;
  modelica_real _dvTl;
  modelica_real _dvTv;
  modelica_real _duTl;
  modelica_real _duTv;
  modelica_real _dxt;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cv has no default value.
  // _dpT has no default value.
  // _dxv has no default value.
  // _dvTl has no default value.
  // _dvTv has no default value.
  // _duTl has no default value.
  // _duTv has no default value.
  // _dxt has no default value.
  tmp2 = (modelica_boolean)(_liq._d != _vap._d);
  if(tmp2)
  {
    tmp1 = _liq._d - _vap._d;
    tmp3 = (_liq._d) * ((_vap._d) / tmp1);
  }
  else
  {
    tmp3 = 0.0;
  }
  _dxv = tmp3;

  _dpT = (_vap._s - _liq._s) * (_dxv);

  tmp4 = _liq._d;
  tmp5 = ((tmp4 * tmp4)) * (_liq._pd);
  _dvTl = (_liq._pt - _dpT) / tmp5;

  tmp6 = _vap._d;
  tmp7 = ((tmp6 * tmp6)) * (_vap._pd);
  _dvTv = (_vap._pt - _dpT) / tmp7;

  _dxt = ((-_dxv)) * (_dvTl + (_x) * (_dvTv - _dvTl));

  _duTl = _liq._cv + ((_T) * (_liq._pt) - _p) * (_dvTl);

  _duTv = _vap._cv + ((_T) * (_vap._pt) - _p) * (_dvTv);

  _cv = _duTl + (_x) * (_duTv - _duTl) + (_dxt) * (_vap._u - _liq._u);
  _return: OMC_LABEL_UNUSED
  return _cv;
}
modelica_metatype boxptr_Modelica_Media_Common_cv2Phase(threadData_t *threadData, modelica_metatype _liq, modelica_metatype _vap, modelica_metatype _x, modelica_metatype _T, modelica_metatype _p)
{
  Modelica_Media_Common_PhaseBoundaryProperties tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  Modelica_Media_Common_PhaseBoundaryProperties tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real _cv;
  modelica_metatype out_cv;
  modelica_metatype tmpMeta[16] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._d = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._h = tmp3;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 4)));
  tmp4 = mmc_unbox_real(tmpMeta[2]);
  tmp1._u = tmp4;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 5)));
  tmp5 = mmc_unbox_real(tmpMeta[3]);
  tmp1._s = tmp5;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 6)));
  tmp6 = mmc_unbox_real(tmpMeta[4]);
  tmp1._cp = tmp6;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 7)));
  tmp7 = mmc_unbox_real(tmpMeta[5]);
  tmp1._cv = tmp7;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 8)));
  tmp8 = mmc_unbox_real(tmpMeta[6]);
  tmp1._pt = tmp8;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 9)));
  tmp9 = mmc_unbox_real(tmpMeta[7]);
  tmp1._pd = tmp9;tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 2)));
  tmp11 = mmc_unbox_real(tmpMeta[8]);
  tmp10._d = tmp11;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 3)));
  tmp12 = mmc_unbox_real(tmpMeta[9]);
  tmp10._h = tmp12;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 4)));
  tmp13 = mmc_unbox_real(tmpMeta[10]);
  tmp10._u = tmp13;
  tmpMeta[11] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 5)));
  tmp14 = mmc_unbox_real(tmpMeta[11]);
  tmp10._s = tmp14;
  tmpMeta[12] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 6)));
  tmp15 = mmc_unbox_real(tmpMeta[12]);
  tmp10._cp = tmp15;
  tmpMeta[13] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 7)));
  tmp16 = mmc_unbox_real(tmpMeta[13]);
  tmp10._cv = tmp16;
  tmpMeta[14] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 8)));
  tmp17 = mmc_unbox_real(tmpMeta[14]);
  tmp10._pt = tmp17;
  tmpMeta[15] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 9)));
  tmp18 = mmc_unbox_real(tmpMeta[15]);
  tmp10._pd = tmp18;tmp19 = mmc_unbox_real(_x);
  tmp20 = mmc_unbox_real(_T);
  tmp21 = mmc_unbox_real(_p);
  _cv = omc_Modelica_Media_Common_cv2Phase(threadData, tmp1, tmp10, tmp19, tmp20, tmp21);
  out_cv = mmc_mk_rcon(_cv);
  return out_cv;
}

DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_GibbsDerivs _g)
{
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_real _vt;
  modelica_real _vp;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _sat); // _sat has no default value.
  // _vt has no default value.
  // _vp has no default value.
  tmp1 = (((_g._gpi) * (_g._pi)) * (_g._T)) * (_g._R_s);
  _sat._d = (_g._p) / tmp1;

  _sat._h = (_g._R_s) * ((_g._T) * ((_g._tau) * (_g._gtau)));

  _sat._u = (_g._T) * ((_g._R_s) * ((_g._tau) * (_g._gtau) - ((_g._pi) * (_g._gpi))));

  _sat._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

  tmp2 = _g._tau;
  _sat._cp = ((-_g._R_s)) * (((tmp2 * tmp2)) * (_g._gtautau));

  tmp3 = _g._gpi - ((_g._tau) * (_g._gtaupi));
  tmp4 = _g._gpipi;
  tmp5 = _g._tau;
  _sat._cv = (_g._R_s) * (((tmp3 * tmp3)) / tmp4 - (((tmp5 * tmp5)) * (_g._gtautau)));

  tmp6 = _g._p;
  _vt = (_g._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp6);

  tmp7 = _g._pi;
  _vp = (_g._R_s) * ((_g._T) * ((real_int_pow(threadData, _g._p, -2)) * (((tmp7 * tmp7)) * (_g._gpipi))));

  tmp8 = ((_g._pi) * (_g._gpipi)) * (_g._T);
  _sat._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp8;

  tmp9 = _g._gpi;
  tmp10 = _g._gpipi;
  _sat._pd = ((-_g._R_s)) * ((_g._T) * (((tmp9 * tmp9)) / tmp10));
  _return: OMC_LABEL_UNUSED
  return _sat;
}
modelica_metatype boxptr_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, modelica_metatype _g)
{
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_metatype out_sat;
  modelica_metatype tmpMeta[19] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._p = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 4)));
  tmp4 = mmc_unbox_real(tmpMeta[2]);
  tmp1._R_s = tmp4;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 5)));
  tmp5 = mmc_unbox_real(tmpMeta[3]);
  tmp1._pi = tmp5;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 6)));
  tmp6 = mmc_unbox_real(tmpMeta[4]);
  tmp1._tau = tmp6;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 7)));
  tmp7 = mmc_unbox_real(tmpMeta[5]);
  tmp1._g = tmp7;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 8)));
  tmp8 = mmc_unbox_real(tmpMeta[6]);
  tmp1._gpi = tmp8;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 9)));
  tmp9 = mmc_unbox_real(tmpMeta[7]);
  tmp1._gpipi = tmp9;
  tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 10)));
  tmp10 = mmc_unbox_real(tmpMeta[8]);
  tmp1._gtau = tmp10;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 11)));
  tmp11 = mmc_unbox_real(tmpMeta[9]);
  tmp1._gtautau = tmp11;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 12)));
  tmp12 = mmc_unbox_real(tmpMeta[10]);
  tmp1._gtaupi = tmp12;
  _sat = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, tmp1);
  tmpMeta[11] = mmc_mk_rcon(_sat._d);
  tmpMeta[12] = mmc_mk_rcon(_sat._h);
  tmpMeta[13] = mmc_mk_rcon(_sat._u);
  tmpMeta[14] = mmc_mk_rcon(_sat._s);
  tmpMeta[15] = mmc_mk_rcon(_sat._cp);
  tmpMeta[16] = mmc_mk_rcon(_sat._cv);
  tmpMeta[17] = mmc_mk_rcon(_sat._pt);
  tmpMeta[18] = mmc_mk_rcon(_sat._pd);
  out_sat = mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, tmpMeta[11], tmpMeta[12], tmpMeta[13], tmpMeta[14], tmpMeta[15], tmpMeta[16], tmpMeta[17], tmpMeta[18]);
  return out_sat;
}

DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_real _p;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _sat); // _sat has no default value.
  // _p has no default value.
  _p = (_f._R_s) * ((_f._d) * ((_f._T) * ((_f._delta) * (_f._fdelta))));

  _sat._d = _f._d;

  _sat._h = (_f._R_s) * ((_f._T) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta)));

  _sat._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

  _sat._u = (_f._R_s) * ((_f._T) * ((_f._tau) * (_f._ftau)));

  tmp1 = (_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));
  tmp2 = _f._delta;
  tmp3 = (2.0) * ((_f._delta) * (_f._fdelta)) + ((tmp2 * tmp2)) * (_f._fdeltadelta);
  tmp4 = _f._tau;
  _sat._cp = (_f._R_s) * (((tmp1 * tmp1)) / tmp3 - (((tmp4 * tmp4)) * (_f._ftautau)));

  tmp5 = _f._tau;
  _sat._cv = (_f._R_s) * (((-((tmp5 * tmp5)))) * (_f._ftautau));

  _sat._pt = (_f._R_s) * ((_f._d) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

  _sat._pd = (_f._R_s) * ((_f._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));
  _return: OMC_LABEL_UNUSED
  return _sat;
}
modelica_metatype boxptr_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_metatype out_sat;
  modelica_metatype tmpMeta[19] __attribute__((unused)) = {0};
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp2 = mmc_unbox_real(tmpMeta[0]);
  tmp1._d = tmp2;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp3 = mmc_unbox_real(tmpMeta[1]);
  tmp1._T = tmp3;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp4 = mmc_unbox_real(tmpMeta[2]);
  tmp1._R_s = tmp4;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp5 = mmc_unbox_real(tmpMeta[3]);
  tmp1._delta = tmp5;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp6 = mmc_unbox_real(tmpMeta[4]);
  tmp1._tau = tmp6;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp7 = mmc_unbox_real(tmpMeta[5]);
  tmp1._f = tmp7;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp8 = mmc_unbox_real(tmpMeta[6]);
  tmp1._fdelta = tmp8;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp9 = mmc_unbox_real(tmpMeta[7]);
  tmp1._fdeltadelta = tmp9;
  tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp10 = mmc_unbox_real(tmpMeta[8]);
  tmp1._ftau = tmp10;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp11 = mmc_unbox_real(tmpMeta[9]);
  tmp1._ftautau = tmp11;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp12 = mmc_unbox_real(tmpMeta[10]);
  tmp1._fdeltatau = tmp12;
  _sat = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, tmp1);
  tmpMeta[11] = mmc_mk_rcon(_sat._d);
  tmpMeta[12] = mmc_mk_rcon(_sat._h);
  tmpMeta[13] = mmc_mk_rcon(_sat._u);
  tmpMeta[14] = mmc_mk_rcon(_sat._s);
  tmpMeta[15] = mmc_mk_rcon(_sat._cp);
  tmpMeta[16] = mmc_mk_rcon(_sat._cv);
  tmpMeta[17] = mmc_mk_rcon(_sat._pt);
  tmpMeta[18] = mmc_mk_rcon(_sat._pd);
  out_sat = mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, tmpMeta[11], tmpMeta[12], tmpMeta[13], tmpMeta[14], tmpMeta[15], tmpMeta[16], tmpMeta[17], tmpMeta[18]);
  return out_sat;
}

Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants omc_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants(threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas)
{
  Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants tmp1;
  tmp1._iupacName = omc_iupacName;
  tmp1._casRegistryNumber = omc_casRegistryNumber;
  tmp1._chemicalFormula = omc_chemicalFormula;
  tmp1._structureFormula = omc_structureFormula;
  tmp1._molarMass = omc_molarMass;
  tmp1._criticalTemperature = omc_criticalTemperature;
  tmp1._criticalPressure = omc_criticalPressure;
  tmp1._criticalMolarVolume = omc_criticalMolarVolume;
  tmp1._acentricFactor = omc_acentricFactor;
  tmp1._triplePointTemperature = omc_triplePointTemperature;
  tmp1._triplePointPressure = omc_triplePointPressure;
  tmp1._meltingPoint = omc_meltingPoint;
  tmp1._normalBoilingPoint = omc_normalBoilingPoint;
  tmp1._dipoleMoment = omc_dipoleMoment;
  tmp1._hasIdealGasHeatCapacity = omc_hasIdealGasHeatCapacity;
  tmp1._hasCriticalData = omc_hasCriticalData;
  tmp1._hasDipoleMoment = omc_hasDipoleMoment;
  tmp1._hasFundamentalEquation = omc_hasFundamentalEquation;
  tmp1._hasLiquidHeatCapacity = omc_hasLiquidHeatCapacity;
  tmp1._hasSolidHeatCapacity = omc_hasSolidHeatCapacity;
  tmp1._hasAccurateViscosityData = omc_hasAccurateViscosityData;
  tmp1._hasAccurateConductivityData = omc_hasAccurateConductivityData;
  tmp1._hasVapourPressureCurve = omc_hasVapourPressureCurve;
  tmp1._hasAcentricFactor = omc_hasAcentricFactor;
  tmp1._HCRIT0 = omc_HCRIT0;
  tmp1._SCRIT0 = omc_SCRIT0;
  tmp1._deltah = omc_deltah;
  tmp1._deltas = omc_deltas;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas)
{
  return mmc_mk_box(29, 3, &Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass, _criticalTemperature, _criticalPressure, _criticalMolarVolume, _acentricFactor, _triplePointTemperature, _triplePointPressure, _meltingPoint, _normalBoilingPoint, _dipoleMoment, _hasIdealGasHeatCapacity, _hasCriticalData, _hasDipoleMoment, _hasFundamentalEquation, _hasLiquidHeatCapacity, _hasSolidHeatCapacity, _hasAccurateViscosityData, _hasAccurateConductivityData, _hasVapourPressureCurve, _hasAcentricFactor, _HCRIT0, _SCRIT0, _deltah, _deltas);
}

Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants omc_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants(threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas)
{
  Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants tmp1;
  tmp1._iupacName = omc_iupacName;
  tmp1._casRegistryNumber = omc_casRegistryNumber;
  tmp1._chemicalFormula = omc_chemicalFormula;
  tmp1._structureFormula = omc_structureFormula;
  tmp1._molarMass = omc_molarMass;
  tmp1._criticalTemperature = omc_criticalTemperature;
  tmp1._criticalPressure = omc_criticalPressure;
  tmp1._criticalMolarVolume = omc_criticalMolarVolume;
  tmp1._acentricFactor = omc_acentricFactor;
  tmp1._triplePointTemperature = omc_triplePointTemperature;
  tmp1._triplePointPressure = omc_triplePointPressure;
  tmp1._meltingPoint = omc_meltingPoint;
  tmp1._normalBoilingPoint = omc_normalBoilingPoint;
  tmp1._dipoleMoment = omc_dipoleMoment;
  tmp1._hasIdealGasHeatCapacity = omc_hasIdealGasHeatCapacity;
  tmp1._hasCriticalData = omc_hasCriticalData;
  tmp1._hasDipoleMoment = omc_hasDipoleMoment;
  tmp1._hasFundamentalEquation = omc_hasFundamentalEquation;
  tmp1._hasLiquidHeatCapacity = omc_hasLiquidHeatCapacity;
  tmp1._hasSolidHeatCapacity = omc_hasSolidHeatCapacity;
  tmp1._hasAccurateViscosityData = omc_hasAccurateViscosityData;
  tmp1._hasAccurateConductivityData = omc_hasAccurateConductivityData;
  tmp1._hasVapourPressureCurve = omc_hasVapourPressureCurve;
  tmp1._hasAcentricFactor = omc_hasAcentricFactor;
  tmp1._HCRIT0 = omc_HCRIT0;
  tmp1._SCRIT0 = omc_SCRIT0;
  tmp1._deltah = omc_deltah;
  tmp1._deltas = omc_deltas;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas)
{
  return mmc_mk_box(29, 3, &Modelica_Media_Interfaces_Types_TwoPhase__omcQFluidConstants_24waterConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass, _criticalTemperature, _criticalPressure, _criticalMolarVolume, _acentricFactor, _triplePointTemperature, _triplePointPressure, _meltingPoint, _normalBoilingPoint, _dipoleMoment, _hasIdealGasHeatCapacity, _hasCriticalData, _hasDipoleMoment, _hasFundamentalEquation, _hasLiquidHeatCapacity, _hasSolidHeatCapacity, _hasAccurateViscosityData, _hasAccurateConductivityData, _hasVapourPressureCurve, _hasAcentricFactor, _HCRIT0, _SCRIT0, _deltah, _deltas);
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region)
{
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_integer _error;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_GibbsDerivs tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  Modelica_Media_Common_HelmholtzDerivs tmp25;
  modelica_real tmp26;
  Modelica_Media_Common_GibbsDerivs tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_string tmp39;
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97BaseTwoPhase_construct(threadData, _aux); // _aux has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  // _error has no default value.
  _aux._phase = ((modelica_integer) 1);

  _aux._region = ((_region == ((modelica_integer) 0))?omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData, _p, _T, ((modelica_integer) 0)):_region);

  _aux._R_s = 461.526;

  _aux._p = _p;

  _aux._T = _T;

  _aux._vt = 0.0;

  _aux._vp = 0.0;

  if((_aux._region == ((modelica_integer) 1)))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _aux._h = (_aux._R_s) * ((_aux._T) * ((_g._tau) * (_g._gtau)));

    _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp2 = (((_g._gpi) * (_g._pi)) * (_T)) * (_aux._R_s);
    _aux._rho = (_p) / tmp2;

    tmp3 = _p;
    _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp3);

    tmp4 = _g._pi;
    _aux._vp = (_aux._R_s) * ((_T) * ((real_int_pow(threadData, _p, -2)) * (((tmp4 * tmp4)) * (_g._gpipi))));

    tmp5 = _g._tau;
    _aux._cp = ((-_aux._R_s)) * (((tmp5 * tmp5)) * (_g._gtautau));

    tmp6 = _g._gpi - ((_g._tau) * (_g._gtaupi));
    tmp7 = _g._gpipi;
    tmp8 = _g._tau;
    _aux._cv = (_aux._R_s) * (((tmp6 * tmp6)) / tmp7 - (((tmp8 * tmp8)) * (_g._gtautau)));

    _aux._x = 0.0;

    tmp9 = _aux._vp;
    _aux._dpT = ((-_aux._vt)) / tmp9;

    tmp10 = ((_g._pi) * (_g._gpipi)) * (_g._T);
    _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp10;

    tmp11 = _g._gpi;
    tmp12 = _g._gpipi;
    _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp11 * tmp11)) / tmp12));
  }
  else
  {
    if((_aux._region == ((modelica_integer) 2)))
    {
      tmp13 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _T, 1);
      Modelica_Media_Common_GibbsDerivs_copy(tmp13, _g);;

      _aux._h = (_aux._R_s) * ((_aux._T) * ((_g._tau) * (_g._gtau)));

      _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

      tmp14 = (((_g._gpi) * (_g._pi)) * (_T)) * (_aux._R_s);
      _aux._rho = (_p) / tmp14;

      tmp15 = _p;
      _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp15);

      tmp16 = _g._pi;
      _aux._vp = (_aux._R_s) * ((_T) * ((real_int_pow(threadData, _p, -2)) * (((tmp16 * tmp16)) * (_g._gpipi))));

      tmp17 = ((_g._pi) * (_g._gpipi)) * (_g._T);
      _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp17;

      tmp18 = _g._gpi;
      tmp19 = _g._gpipi;
      _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp18 * tmp18)) / tmp19));

      tmp20 = _g._tau;
      _aux._cp = ((-_aux._R_s)) * (((tmp20 * tmp20)) * (_g._gtautau));

      tmp21 = _g._gpi - ((_g._tau) * (_g._gtaupi));
      tmp22 = _g._gpipi;
      tmp23 = _g._tau;
      _aux._cv = (_aux._R_s) * (((tmp21 * tmp21)) / tmp22 - (((tmp23 * tmp23)) * (_g._gtautau)));

      _aux._x = 1.0;

      tmp24 = _aux._vp;
      _aux._dpT = ((-_aux._vt)) / tmp24;
    }
    else
    {
      if((_aux._region == ((modelica_integer) 3)))
      {
        _aux._rho = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData, _p, _T, 1e-007 ,&_error);

        tmp25 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _aux._rho, _T);
        Modelica_Media_Common_HelmholtzDerivs_copy(tmp25, _f);;

        _aux._h = (_aux._R_s) * ((_T) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta)));

        _aux._s = (_aux._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

        _aux._pd = (_aux._R_s) * ((_T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));

        _aux._pt = (_aux._R_s) * ((_aux._rho) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

        tmp26 = _f._tau;
        _aux._cv = (_aux._R_s) * (((-((tmp26 * tmp26)))) * (_f._ftautau));

        _aux._x = 0.0;

        _aux._dpT = _aux._pt;
      }
      else
      {
        if((_aux._region == ((modelica_integer) 5)))
        {
          tmp27 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _p, _T);
          Modelica_Media_Common_GibbsDerivs_copy(tmp27, _g);;

          _aux._h = (_aux._R_s) * ((_aux._T) * ((_g._tau) * (_g._gtau)));

          _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

          tmp28 = (((_g._gpi) * (_g._pi)) * (_T)) * (_aux._R_s);
          _aux._rho = (_p) / tmp28;

          tmp29 = _p;
          _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp29);

          tmp30 = _g._pi;
          _aux._vp = (_aux._R_s) * ((_T) * ((real_int_pow(threadData, _p, -2)) * (((tmp30 * tmp30)) * (_g._gpipi))));

          tmp31 = ((_g._pi) * (_g._gpipi)) * (_g._T);
          _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp31;

          tmp32 = _g._gpi;
          tmp33 = _g._gpipi;
          _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp32 * tmp32)) / tmp33));

          tmp34 = _g._tau;
          _aux._cp = ((-_aux._R_s)) * (((tmp34 * tmp34)) * (_g._gtautau));

          tmp35 = _g._gpi - ((_g._tau) * (_g._gtaupi));
          tmp36 = _g._gpipi;
          tmp37 = _g._tau;
          _aux._cv = (_aux._R_s) * (((tmp35 * tmp35)) / tmp36 - (((tmp37 * tmp37)) * (_g._gtautau)));

          _aux._x = 1.0;

          tmp38 = _aux._vp;
          _aux._dpT = ((-_aux._vt)) / tmp38;
        }
        else
        {
          {
            if(!0)
            {
              tmp39 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
              tmpMeta[0] = stringAppend(_OMC_LIT18,tmp39);
              tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT19);
              tmp40 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
              tmpMeta[2] = stringAppend(tmpMeta[1],tmp40);
              tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT20);
              {
                FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",7246,7,7247,58,0};
                omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _aux;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  modelica_metatype out_aux;
  modelica_metatype tmpMeta[16] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_region);
  _aux = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, tmp1, tmp2, tmp3);
  tmpMeta[0] = mmc_mk_icon(_aux._phase);
  tmpMeta[1] = mmc_mk_icon(_aux._region);
  tmpMeta[2] = mmc_mk_rcon(_aux._p);
  tmpMeta[3] = mmc_mk_rcon(_aux._T);
  tmpMeta[4] = mmc_mk_rcon(_aux._h);
  tmpMeta[5] = mmc_mk_rcon(_aux._R_s);
  tmpMeta[6] = mmc_mk_rcon(_aux._cp);
  tmpMeta[7] = mmc_mk_rcon(_aux._cv);
  tmpMeta[8] = mmc_mk_rcon(_aux._rho);
  tmpMeta[9] = mmc_mk_rcon(_aux._s);
  tmpMeta[10] = mmc_mk_rcon(_aux._pt);
  tmpMeta[11] = mmc_mk_rcon(_aux._pd);
  tmpMeta[12] = mmc_mk_rcon(_aux._vt);
  tmpMeta[13] = mmc_mk_rcon(_aux._vp);
  tmpMeta[14] = mmc_mk_rcon(_aux._x);
  tmpMeta[15] = mmc_mk_rcon(_aux._dpT);
  out_aux = mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10], tmpMeta[11], tmpMeta[12], tmpMeta[13], tmpMeta[14], tmpMeta[15]);
  return out_aux;
}

DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _region)
{
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_integer _error;
  modelica_real _h_liq;
  modelica_real _d_liq;
  modelica_real _h_vap;
  modelica_real _d_vap;
  Modelica_Media_Common_PhaseBoundaryProperties _liq;
  Modelica_Media_Common_PhaseBoundaryProperties _vap;
  Modelica_Media_Common_GibbsDerivs _gl;
  Modelica_Media_Common_GibbsDerivs _gv;
  Modelica_Media_Common_HelmholtzDerivs _fl;
  Modelica_Media_Common_HelmholtzDerivs _fv;
  modelica_real _t1;
  modelica_real _t2;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  Modelica_Media_Common_GibbsDerivs tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  Modelica_Media_Common_HelmholtzDerivs tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  Modelica_Media_Common_GibbsDerivs tmp34;
  Modelica_Media_Common_GibbsDerivs tmp35;
  Modelica_Media_Common_PhaseBoundaryProperties tmp36;
  Modelica_Media_Common_PhaseBoundaryProperties tmp37;
  Modelica_Media_Common_HelmholtzDerivs tmp38;
  Modelica_Media_Common_HelmholtzDerivs tmp39;
  Modelica_Media_Common_PhaseBoundaryProperties tmp40;
  Modelica_Media_Common_PhaseBoundaryProperties tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  static int tmp46 = 0;
  Modelica_Media_Common_GibbsDerivs tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_string tmp59;
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97BaseTwoPhase_construct(threadData, _aux); // _aux has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  // _error has no default value.
  // _h_liq has no default value.
  // _d_liq has no default value.
  // _h_vap has no default value.
  // _d_vap has no default value.
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _liq); // _liq has no default value.
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _vap); // _vap has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _gl); // _gl has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _gv); // _gv has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _fl); // _fl has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _fv); // _fv has no default value.
  // _t1 has no default value.
  // _t2 has no default value.
  _aux._region = ((_region == ((modelica_integer) 0))?((_phase == ((modelica_integer) 2))?((modelica_integer) 4):omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData, _p, _h, _phase, ((modelica_integer) 0))):_region);

  _aux._phase = ((_phase != ((modelica_integer) 0))?_phase:((_aux._region == ((modelica_integer) 4))?((modelica_integer) 2):((modelica_integer) 1)));

  _aux._p = fmax(_p,611.657);

  _aux._h = fmax(_h,1000.0);

  _aux._R_s = 461.526;

  _aux._vt = 0.0;

  _aux._vp = 0.0;

  if((_aux._region == ((modelica_integer) 1)))
  {
    _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, _aux._p, _aux._h);

    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _aux._T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp2 = (((_g._gpi) * (_g._pi)) * (_aux._T)) * (_aux._R_s);
    _aux._rho = (_p) / tmp2;

    tmp3 = _p;
    _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp3);

    tmp4 = ((_g._pi) * (_g._gpipi)) * (_g._T);
    _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp4;

    tmp5 = _g._gpi;
    tmp6 = _g._gpipi;
    _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp5 * tmp5)) / tmp6));

    tmp7 = _g._pi;
    _aux._vp = (_aux._R_s) * ((_aux._T) * ((real_int_pow(threadData, _p, -2)) * (((tmp7 * tmp7)) * (_g._gpipi))));

    tmp8 = _g._tau;
    _aux._cp = ((-_aux._R_s)) * (((tmp8 * tmp8)) * (_g._gtautau));

    tmp9 = _g._gpi - ((_g._tau) * (_g._gtaupi));
    tmp10 = _g._gpipi;
    tmp11 = _g._tau;
    _aux._cv = (_aux._R_s) * (((tmp9 * tmp9)) / tmp10 - (((tmp11 * tmp11)) * (_g._gtautau)));

    _aux._x = 0.0;

    tmp12 = _aux._vp;
    _aux._dpT = ((-_aux._vt)) / tmp12;
  }
  else
  {
    if((_aux._region == ((modelica_integer) 2)))
    {
      _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, _aux._p, _aux._h);

      tmp13 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _aux._T, 1);
      Modelica_Media_Common_GibbsDerivs_copy(tmp13, _g);;

      _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

      tmp14 = (((_g._gpi) * (_g._pi)) * (_aux._T)) * (_aux._R_s);
      _aux._rho = (_p) / tmp14;

      tmp15 = _p;
      _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp15);

      tmp16 = _g._pi;
      _aux._vp = (_aux._R_s) * ((_aux._T) * ((real_int_pow(threadData, _p, -2)) * (((tmp16 * tmp16)) * (_g._gpipi))));

      tmp17 = ((_g._pi) * (_g._gpipi)) * (_g._T);
      _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp17;

      tmp18 = _g._gpi;
      tmp19 = _g._gpipi;
      _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp18 * tmp18)) / tmp19));

      tmp20 = _g._tau;
      _aux._cp = ((-_aux._R_s)) * (((tmp20 * tmp20)) * (_g._gtautau));

      tmp21 = _g._gpi - ((_g._tau) * (_g._gtaupi));
      tmp22 = _g._gpipi;
      tmp23 = _g._tau;
      _aux._cv = (_aux._R_s) * (((tmp21 * tmp21)) / tmp22 - (((tmp23 * tmp23)) * (_g._gtautau)));

      _aux._x = 1.0;

      tmp24 = _aux._vp;
      _aux._dpT = ((-_aux._vt)) / tmp24;
    }
    else
    {
      if((_aux._region == ((modelica_integer) 3)))
      {
        _aux._rho = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData, _aux._p, _aux._h, 1e-007, 1e-006 ,&_aux._T ,&_error);

        tmp25 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _aux._rho, _aux._T);
        Modelica_Media_Common_HelmholtzDerivs_copy(tmp25, _f);;

        _aux._h = (_aux._R_s) * ((_aux._T) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta)));

        _aux._s = (_aux._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

        _aux._pd = (_aux._R_s) * ((_aux._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));

        _aux._pt = (_aux._R_s) * ((_aux._rho) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

        tmp26 = _f._tau;
        _aux._cv = fabs((_aux._R_s) * (((-((tmp26 * tmp26)))) * (_f._ftautau)));

        tmp27 = _aux._rho;
        tmp28 = _aux._pt;
        tmp29 = _aux._rho;
        tmp30 = ((tmp29 * tmp29)) * (_aux._pd);
        _aux._cp = (((tmp27 * tmp27)) * ((_aux._pd) * (_aux._cv)) + (_aux._T) * ((tmp28 * tmp28))) / tmp30;

        _aux._x = 0.0;

        _aux._dpT = _aux._pt;
      }
      else
      {
        if((_aux._region == ((modelica_integer) 4)))
        {
          _h_liq = omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData, _p);

          _h_vap = omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData, _p);

          tmp32 = (modelica_boolean)(_h_vap != _h_liq);
          if(tmp32)
          {
            tmp31 = _h_vap - _h_liq;
            tmp33 = (_h - _h_liq) / tmp31;
          }
          else
          {
            tmp33 = 1.0;
          }
          _aux._x = tmp33;

          if((_p < 16529200.0))
          {
            _t1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, _aux._p, _h_liq);

            _t2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, _aux._p, _h_vap);

            tmp34 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _aux._p, _t1);
            Modelica_Media_Common_GibbsDerivs_copy(tmp34, _gl);;

            tmp35 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _aux._p, _t2, 1);
            Modelica_Media_Common_GibbsDerivs_copy(tmp35, _gv);;

            tmp36 = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, _gl);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp36, _liq);;

            tmp37 = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, _gv);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp37, _vap);;

            _aux._T = _t1 + (_aux._x) * (_t2 - _t1);
          }
          else
          {
            _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _aux._p);

            _d_liq = omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData, _aux._T);

            _d_vap = omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData, _aux._T);

            tmp38 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d_liq, _aux._T);
            Modelica_Media_Common_HelmholtzDerivs_copy(tmp38, _fl);;

            tmp39 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d_vap, _aux._T);
            Modelica_Media_Common_HelmholtzDerivs_copy(tmp39, _fv);;

            tmp40 = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, _fl);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp40, _liq);;

            tmp41 = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, _fv);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp41, _vap);;
          }

          tmp43 = (modelica_boolean)(_liq._d != _vap._d);
          if(tmp43)
          {
            tmp42 = _liq._d - _vap._d;
            tmp44 = (_vap._s - _liq._s) * ((_liq._d) * ((_vap._d) / tmp42));
          }
          else
          {
            tmp44 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _aux._T);
          }
          _aux._dpT = tmp44;

          _aux._s = _liq._s + (_aux._x) * (_vap._s - _liq._s);

          tmp45 = _vap._d + (_aux._x) * (_liq._d - _vap._d);
          _aux._rho = (_liq._d) * ((_vap._d) / tmp45);

          _aux._cv = omc_Modelica_Media_Common_cv2Phase(threadData, _liq, _vap, _aux._x, _aux._T, _p);

          _aux._cp = _liq._cp + (_aux._x) * (_vap._cp - _liq._cp);

          _aux._pt = _liq._pt + (_aux._x) * (_vap._pt - _liq._pt);

          _aux._pd = _liq._pd + (_aux._x) * (_vap._pd - _liq._pd);
        }
        else
        {
          if((_aux._region == ((modelica_integer) 5)))
          {
            _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData, _aux._p, _aux._h, 1e-007 ,&_error);

            {
              if(!(_error == ((modelica_integer) 0)))
              {
                {
                  FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",6423,7,6423,71,0};
                  omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT22));
                }
              }
            }

            tmp47 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _aux._p, _aux._T);
            Modelica_Media_Common_GibbsDerivs_copy(tmp47, _g);;

            _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

            tmp48 = (((_g._gpi) * (_g._pi)) * (_aux._T)) * (_aux._R_s);
            _aux._rho = (_p) / tmp48;

            tmp49 = _p;
            _aux._vt = (_aux._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp49);

            tmp50 = _g._pi;
            _aux._vp = (_aux._R_s) * ((_aux._T) * ((real_int_pow(threadData, _p, -2)) * (((tmp50 * tmp50)) * (_g._gpipi))));

            tmp51 = ((_g._pi) * (_g._gpipi)) * (_g._T);
            _aux._pt = ((_g._p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp51;

            tmp52 = _g._gpi;
            tmp53 = _g._gpipi;
            _aux._pd = ((-_g._R_s)) * ((_g._T) * (((tmp52 * tmp52)) / tmp53));

            tmp54 = _g._tau;
            _aux._cp = ((-_aux._R_s)) * (((tmp54 * tmp54)) * (_g._gtautau));

            tmp55 = _g._gpi - ((_g._tau) * (_g._gtaupi));
            tmp56 = _g._gpipi;
            tmp57 = _g._tau;
            _aux._cv = (_aux._R_s) * (((tmp55 * tmp55)) / tmp56 - (((tmp57 * tmp57)) * (_g._gtautau)));

            tmp58 = _aux._vp;
            _aux._dpT = ((-_aux._vt)) / tmp58;
          }
          else
          {
            {
              if(!0)
              {
                tmp59 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
                tmpMeta[0] = stringAppend(_OMC_LIT18,tmp59);
                tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT21);
                tmp60 = modelica_real_to_modelica_string(_h, ((modelica_integer) 6), ((modelica_integer) 0), 1);
                tmpMeta[2] = stringAppend(tmpMeta[1],tmp60);
                tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT20);
                {
                  FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",6436,7,6437,58,0};
                  omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _aux;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  modelica_metatype out_aux;
  modelica_metatype tmpMeta[16] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_region);
  _aux = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, tmp1, tmp2, tmp3, tmp4);
  tmpMeta[0] = mmc_mk_icon(_aux._phase);
  tmpMeta[1] = mmc_mk_icon(_aux._region);
  tmpMeta[2] = mmc_mk_rcon(_aux._p);
  tmpMeta[3] = mmc_mk_rcon(_aux._T);
  tmpMeta[4] = mmc_mk_rcon(_aux._h);
  tmpMeta[5] = mmc_mk_rcon(_aux._R_s);
  tmpMeta[6] = mmc_mk_rcon(_aux._cp);
  tmpMeta[7] = mmc_mk_rcon(_aux._cv);
  tmpMeta[8] = mmc_mk_rcon(_aux._rho);
  tmpMeta[9] = mmc_mk_rcon(_aux._s);
  tmpMeta[10] = mmc_mk_rcon(_aux._pt);
  tmpMeta[11] = mmc_mk_rcon(_aux._pd);
  tmpMeta[12] = mmc_mk_rcon(_aux._vt);
  tmpMeta[13] = mmc_mk_rcon(_aux._vp);
  tmpMeta[14] = mmc_mk_rcon(_aux._x);
  tmpMeta[15] = mmc_mk_rcon(_aux._dpT);
  out_aux = mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10], tmpMeta[11], tmpMeta[12], tmpMeta[13], tmpMeta[14], tmpMeta[15]);
  return out_aux;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _hstar;
  modelica_real _pstar;
  modelica_real _Tstar;
  modelica_real _eta;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  alloc_real_array(&(_n), 1, 31);
  real_array_copy_data(_OMC_LIT23, _n);
  
  alloc_real_array(&(_I), 1, 31);
  real_array_copy_data(_OMC_LIT24, _I);
  
  alloc_real_array(&(_J), 1, 31);
  real_array_copy_data(_OMC_LIT25, _J);
  
  _hstar = 2300000.0;
  _pstar = 100000000.0;
  _Tstar = 760.0;
  _eta = (4.347826086956522e-007) * (_h);
  _pi = (1e-008) * (_p);
  tmp1 = real_int_pow(threadData, 0.24 + _pi, 12);
  tmp2 = -0.615 + _eta;
  tmp3 = real_int_pow(threadData, 0.24 + _pi, 8);
  tmp4 = -0.615 + _eta;
  tmp5 = -0.615 + _eta;
  tmp5 *= tmp5;tmp6 = -0.615 + _eta;
  tmp7 = 0.24 + _pi;
  tmp8 = (tmp7 * tmp7 * tmp7);
  tmp9 = -0.615 + _eta;
  tmp10 = -0.615 + _eta;
  tmp10 *= tmp10;tmp11 = 0.24 + _pi;
  tmp12 = -0.615 + _eta;
  tmp13 = 0.24 + _pi;
  tmp14 = 0.24 + _pi;
  tmp15 = 0.24 + _pi;
  tmp16 = 0.24 + _pi;
  tmp16 *= tmp16;tmp17 = 0.24 + _pi;
  tmp17 *= tmp17;tmp18 = -0.615 + _eta;
  tmp19 = -0.615 + _eta;
  tmp19 *= tmp19;
  _T = (760.0) * (0.793929190615421 + (-1.33645667811215e-007) / tmp1 + (4.55912656802978e-006) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (-0.615 + _eta)) + (-1.46294640700979e-005) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * ((tmp2 * tmp2))) + (0.0063934131297008) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (real_int_pow(threadData, -0.615 + _eta, 6))) + (372.783927268847) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (real_int_pow(threadData, -0.615 + _eta, 14))) + (-7186.54377460447) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (real_int_pow(threadData, -0.615 + _eta, 16))) + (573494.7521034) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (real_int_pow(threadData, -0.615 + _eta, 20))) + (-2675693.29111439) * ((real_int_pow(threadData, 0.24 + _pi, -12)) * (real_int_pow(threadData, -0.615 + _eta, 22))) + (-3.34066283302614e-005) * ((real_int_pow(threadData, 0.24 + _pi, -10)) * (-0.615 + _eta)) + (-0.0245479214069597) * ((real_int_pow(threadData, 0.24 + _pi, -10)) * (real_int_pow(threadData, -0.615 + _eta, 5))) + (47.8087847764996) * ((real_int_pow(threadData, 0.24 + _pi, -10)) * (real_int_pow(threadData, -0.615 + _eta, 12))) + (7.646641318189041e-006) / tmp3 + (0.00128350627676972) * ((real_int_pow(threadData, 0.24 + _pi, -8)) * ((tmp4 * tmp4))) + (0.0171219081377331) * ((real_int_pow(threadData, 0.24 + _pi, -8)) * ((tmp5 * tmp5))) + (-8.510073045832129) * ((real_int_pow(threadData, 0.24 + _pi, -8)) * (real_int_pow(threadData, -0.615 + _eta, 10))) + (-0.0136513461629781) * ((real_int_pow(threadData, 0.24 + _pi, -5)) * ((tmp6 * tmp6))) + (-3.84460997596657e-006) / tmp8 + (0.00337423807911655) * ((real_int_pow(threadData, 0.24 + _pi, -2)) * (-0.615 + _eta)) + (-0.551624873066791) * ((real_int_pow(threadData, 0.24 + _pi, -2)) * ((tmp9 * tmp9 * tmp9))) + (0.72920227710747) * ((real_int_pow(threadData, 0.24 + _pi, -2)) * ((tmp10 * tmp10))) + (-0.009925227573760411) / tmp11 + (-0.119308831407288) * (((tmp12 * tmp12)) / tmp13) + (0.454270731799386) * (-0.615 + _eta) + (0.20999859125991) * ((0.24 + _pi) * (-0.615 + _eta)) + (-0.00642109823904738) * ((tmp14 * tmp14 * tmp14)) + (-0.023515586860454) * (((tmp15 * tmp15 * tmp15)) * (-0.615 + _eta)) + (0.00252233108341612) * ((tmp16 * tmp16)) + (-0.00764885133368119) * (((tmp17 * tmp17)) * ((tmp18 * tmp18 * tmp18))) + (0.0136176427574291) * ((real_int_pow(threadData, 0.24 + _pi, 10)) * ((tmp19 * tmp19))) + (-0.0133027883575669) * ((real_int_pow(threadData, 0.24 + _pi, 12)) * (real_int_pow(threadData, -0.615 + _eta, 5))));
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _Tstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real _eta;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  alloc_real_array(&(_n), 1, 33);
  real_array_copy_data(_OMC_LIT26, _n);
  
  alloc_real_array(&(_I), 1, 33);
  real_array_copy_data(_OMC_LIT27, _I);
  
  alloc_real_array(&(_J), 1, 33);
  real_array_copy_data(_OMC_LIT28, _J);
  
  _Tstar = 860.0;
  _pstar = 100000000.0;
  _hstar = 2800000.0;
  _pi = (1e-008) * (_p);
  _eta = (3.571428571428572e-007) * (_h);
  tmp1 = real_int_pow(threadData, 0.298 + _pi, 12);
  tmp2 = real_int_pow(threadData, 0.298 + _pi, 10);
  tmp3 = real_int_pow(threadData, 0.298 + _pi, 8);
  tmp4 = -0.72 + _eta;
  tmp5 = -0.72 + _eta;
  tmp5 *= tmp5;tmp6 = real_int_pow(threadData, 0.298 + _pi, 6);
  tmp7 = -0.72 + _eta;
  tmp8 = 0.298 + _pi;
  tmp8 *= tmp8;tmp9 = (tmp8 * tmp8);
  tmp10 = 0.298 + _pi;
  tmp11 = (tmp10 * tmp10);
  tmp12 = -0.72 + _eta;
  tmp12 *= tmp12;tmp13 = -0.72 + _eta;
  tmp14 = 0.298 + _pi;
  tmp15 = -0.72 + _eta;
  tmp15 *= tmp15;tmp16 = 0.298 + _pi;
  tmp17 = 0.298 + _pi;
  tmp18 = 0.298 + _pi;
  tmp19 = 0.298 + _pi;
  tmp20 = 0.298 + _pi;
  tmp21 = -0.72 + _eta;
  tmp22 = 0.298 + _pi;
  _T = (860.0) * (0.861095729446704 + (3.2325457364492e-005) / tmp1 + (-0.000127575556587181) * ((real_int_pow(threadData, 0.298 + _pi, -12)) * (-0.72 + _eta)) + (-0.000475851877356068) / tmp2 + (0.00156183014181602) * ((real_int_pow(threadData, 0.298 + _pi, -10)) * (-0.72 + _eta)) + (0.105724860113781) * ((real_int_pow(threadData, 0.298 + _pi, -10)) * (real_int_pow(threadData, -0.72 + _eta, 5))) + (-85.85142211325341) * ((real_int_pow(threadData, 0.298 + _pi, -10)) * (real_int_pow(threadData, -0.72 + _eta, 10))) + (724.140095480911) * ((real_int_pow(threadData, 0.298 + _pi, -10)) * (real_int_pow(threadData, -0.72 + _eta, 12))) + (0.00296475810273257) / tmp3 + (-0.00592721983365988) * ((real_int_pow(threadData, 0.298 + _pi, -8)) * (-0.72 + _eta)) + (-0.0126305422818666) * ((real_int_pow(threadData, 0.298 + _pi, -8)) * ((tmp4 * tmp4))) + (-0.115716196364853) * ((real_int_pow(threadData, 0.298 + _pi, -8)) * ((tmp5 * tmp5))) + (84.90009697395951) * ((real_int_pow(threadData, 0.298 + _pi, -8)) * (real_int_pow(threadData, -0.72 + _eta, 10))) + (-0.0108602260086615) / tmp6 + (0.0154304475328851) * ((real_int_pow(threadData, 0.298 + _pi, -6)) * (-0.72 + _eta)) + (0.0750455441524466) * ((real_int_pow(threadData, 0.298 + _pi, -6)) * ((tmp7 * tmp7))) + (0.0252520973612982) / tmp9 + (-0.0602507901232996) * ((real_int_pow(threadData, 0.298 + _pi, -4)) * (-0.72 + _eta)) + (-3.07622221350501) * ((real_int_pow(threadData, 0.298 + _pi, -3)) * (real_int_pow(threadData, -0.72 + _eta, 5))) + (-0.0574011959864879) / tmp11 + (5.03471360939849) * ((real_int_pow(threadData, 0.298 + _pi, -2)) * ((tmp12 * tmp12))) + (-0.925081888584834) * (((tmp13 * tmp13)) / tmp14) + (3.91733882917546) * (((tmp15 * tmp15)) / tmp16) + (-77.314600713019) * ((real_int_pow(threadData, -0.72 + _eta, 6)) / tmp17) + (9493.087620985871) * ((real_int_pow(threadData, -0.72 + _eta, 10)) / tmp18) + (-1410437.19679409) * ((real_int_pow(threadData, -0.72 + _eta, 14)) / tmp19) + (8491662.30819026) * ((real_int_pow(threadData, -0.72 + _eta, 16)) / tmp20) + (0.32334644281172) * ((tmp21 * tmp21)) + (0.873281936020439) * ((0.298 + _pi) * (-0.72 + _eta)) + (-0.436653048526683) * (((tmp22 * tmp22 * tmp22)) * (-0.72 + _eta)) + (0.286596714529479) * ((real_int_pow(threadData, 0.298 + _pi, 5)) * (-0.72 + _eta)) + (-0.131778331276228) * ((real_int_pow(threadData, 0.298 + _pi, 6)) * (-0.72 + _eta)) + (0.00676682064330275) * ((real_int_pow(threadData, 0.298 + _pi, 8)) * (-0.72 + _eta)));
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_real _T)
{
  modelica_real _dpt;
  real_array _o;
  modelica_real _Tlim;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dpt has no default value.
  alloc_real_array(&(_o), 1, 31); // _o has no default value.
  // _Tlim has no default value.
  _Tlim = fmin(_T,647.096);

  real_array_get(_o, 1, ((modelica_integer) 1)) = -650.17534844798 + _Tlim;

  tmp1 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (1.0) / tmp1;

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-0.23855557567849) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))) + _Tlim;

  real_array_get(_o, 1, ((modelica_integer) 5)) = (-4823.2657361591) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  tmp2 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp2 * tmp2);

  real_array_get(_o, 1, ((modelica_integer) 7)) = (14.91510861353) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 8)) = 405113.40542057 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)));
  real_array_get(_o, 1, ((modelica_integer) 9)) = (tmp3 * tmp3);

  tmp4 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (1.0) / tmp6;

  real_array_get(_o, 1, ((modelica_integer) 13)) = (0.23855557567849) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))));

  real_array_get(_o, 1, ((modelica_integer) 14)) = 1.0 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)));

  real_array_get(_o, 1, ((modelica_integer) 15)) = (12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  real_array_get(_o, 1, ((modelica_integer) 16)) = (-17.073846940092) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = -3232555.0322333 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)));

  real_array_get(_o, 1, ((modelica_integer) 18)) = (-4823.2657361591) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))));

  real_array_get(_o, 1, ((modelica_integer) 19)) = (29.83021722706) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))));

  real_array_get(_o, 1, ((modelica_integer) 20)) = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)));

  real_array_get(_o, 1, ((modelica_integer) 21)) = (1167.0521452767) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  real_array_get(_o, 1, ((modelica_integer) 22)) = -724213.16703206 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)));
  real_array_get(_o, 1, ((modelica_integer) 23)) = (tmp7 * tmp7);

  real_array_get(_o, 1, ((modelica_integer) 24)) = (-4.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))));

  real_array_get(_o, 1, ((modelica_integer) 25)) = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 23))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)));

  tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)));
  if(!(tmp8 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(o[25]) was %g should be >= 0", tmp8);
  }
  real_array_get(_o, 1, ((modelica_integer) 26)) = sqrt(tmp8);

  real_array_get(_o, 1, ((modelica_integer) 27)) = (-12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  real_array_get(_o, 1, ((modelica_integer) 28)) = (17.073846940092) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 29)) = 3232555.0322333 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 26))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 27))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 28)));

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)));
  real_array_get(_o, 1, ((modelica_integer) 30)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)));
  real_array_get(_o, 1, ((modelica_integer) 31)) = (tmp10 * tmp10);

  tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)));
  tmp12 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 29))));
  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)));
  _dpt = (1000000.0) * ((-64.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (-12020.82470247 + (34.147693880184) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) + (0.5) * (((2.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (12020.82470247 + (-34.147693880184) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))))) + (-4.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * ((1167.0521452767 + (2.0) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))))) / tmp11)) / tmp12)) + (64.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) / tmp13))));
  _return: OMC_LABEL_UNUSED
  return _dpt;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _dpt;
  modelica_metatype out_dpt;
  tmp1 = mmc_unbox_real(_T);
  _dpt = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, tmp1);
  out_dpt = mmc_mk_rcon(_dpt);
  return out_dpt;
}

DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_real _d, modelica_real _T)
{
  Modelica_Media_Common_HelmholtzDerivs _f;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  alloc_real_array(&(_o), 1, 40); // _o has no default value.
  _f._T = _T;

  _f._d = _d;

  _f._R_s = 461.526;

  tmp1 = _T;
  _f._tau = (647.096) / tmp1;

  _f._delta = (((_d == 322.0) && (_T == 647.096))?0.999999999999999:fabs((0.003105590062111801) * (_d)));

  tmp2 = _f._tau;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp2 * tmp2);

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp3 * tmp3);

  real_array_get(_o, 1, ((modelica_integer) 3)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 4)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_f._tau);

  tmp4 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp4 * tmp4);

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_f._tau));

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 8)) = (-0.64207765181607) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 9)) = 0.88521043984318 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))));

  real_array_get(_o, 1, ((modelica_integer) 11)) = -1.1524407806681 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 12)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 13)) = -1.2654315477714 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 14)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))));

  real_array_get(_o, 1, ((modelica_integer) 15)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_f._tau)));

  real_array_get(_o, 1, ((modelica_integer) 16)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))));

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  real_array_get(_o, 1, ((modelica_integer) 18)) = (tmp5 * tmp5);

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))));

  real_array_get(_o, 1, ((modelica_integer) 20)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_f._tau)));

  real_array_get(_o, 1, ((modelica_integer) 21)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))));

  real_array_get(_o, 1, ((modelica_integer) 22)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))));

  real_array_get(_o, 1, ((modelica_integer) 23)) = (0.25116816848616) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 24)) = 0.078841073758308 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)));

  real_array_get(_o, 1, ((modelica_integer) 25)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))));

  real_array_get(_o, 1, ((modelica_integer) 26)) = -6.100523451393 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)));

  real_array_get(_o, 1, ((modelica_integer) 27)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 28)) = 9.7944563083754 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)));

  real_array_get(_o, 1, ((modelica_integer) 29)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))));

  real_array_get(_o, 1, ((modelica_integer) 30)) = -1.70429417648412 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)));

  real_array_get(_o, 1, ((modelica_integer) 31)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30))));

  tmp6 = _f._delta;
  real_array_get(_o, 1, ((modelica_integer) 32)) = (tmp6 * tmp6);

  real_array_get(_o, 1, ((modelica_integer) 33)) = (-10.9153200808732) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 34)) = 13.2781565976477 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)));

  real_array_get(_o, 1, ((modelica_integer) 35)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))));

  real_array_get(_o, 1, ((modelica_integer) 36)) = -6.9146446840086 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 35)));

  real_array_get(_o, 1, ((modelica_integer) 37)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36))));

  real_array_get(_o, 1, ((modelica_integer) 38)) = -2.5308630955428 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 37)));

  real_array_get(_o, 1, ((modelica_integer) 39)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 38)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 40)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_f._tau));

  tmp7 = _f._delta;
  if(!(tmp7 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(f.delta) was %g should be > 0", tmp7);
  }
  _f._f = -15.732845290239 + (_f._tau) * (20.944396974307 + (-7.6867707878716 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (2.6185947787954 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-2.808078114862 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (1.2053369696517 + (-0.008456681281250201) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))))) * (_f._tau)) + (_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))) + (_f._delta) * (0.38493460186671 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.85214708824206 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (4.8972281541877 + (-3.0502617256965 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (0.039420536879154 + (0.12558408424308) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_f._tau))) + (_f._delta) * (-0.2799932969871 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (1.389979956946 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-2.018991502357 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-0.0082147637173963 + (-0.47596035734923) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.0439840744735 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.44476435428739 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.90572070719733 + (0.70522450087967) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))))) + (_f._delta) * ((_f._delta) * (-0.022175400873096 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.094260751665092 + (0.16436278447961) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * ((_f._delta) * ((_f._delta) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.00057922953628084 + (0.0032308904703711) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * (8.096480299621501e-005 + (-4.4923899061815e-005) * ((_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.00016557679795037) * (_f._tau))) + (-0.014834345352472) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.013503372241348) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))))) + (0.10770512626332 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.32913623258954 + (-0.50871062041158) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))))) * (_f._tau)))))) + (1.0658070028513) * (log(tmp7));

  tmp8 = _f._delta;
  _f._fdelta = (1.0658070028513 + (_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))) + (_f._delta) * (0.7698692037334201 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 31))) + (_f._delta) * (-0.8399798909613 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (4.169939870838 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-6.056974507071 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-0.0246442911521889 + (-1.42788107204769) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.175936297894 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.77905741714956 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (3.6228828287893 + (2.82089800351868) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))))) + (_f._delta) * ((_f._delta) * (-0.133052405238576 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.56556450999055 + (0.98617670687766) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * ((_f._delta) * ((_f._delta) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.0052130658265276 + (0.0290780142333399) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * (0.00080964802996215 + (-0.0004941628896799601) * ((_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.0016557679795037) * (_f._tau))) + (-0.118674762819776) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.09452360568943601) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))))) + (0.5385256313166 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.6456811629477 + (-2.5435531020579) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))))) * (_f._tau))))))) / tmp8;

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)));
  _f._fdeltadelta = (-1.0658070028513 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))) * (0.7698692037334201 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 31))) + (_f._delta) * (-1.6799597819226 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (8.339879741676 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-12.113949014142 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-0.049288582304378 + (-2.85576214409538) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.527808893682 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-5.3371722514487 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (10.868648486368 + (8.462694010556) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))))) + (_f._delta) * ((_f._delta) * (-0.66526202619288 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (2.82782254995276 + (4.9308835343883) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * ((_f._delta) * ((_f._delta) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.04170452661222 + (0.232624113866719) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) + (_f._delta) * (0.0072868322696594 + (-0.0049416288967996) * ((_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.0149019118155333) * (_f._tau))) + (-0.83072333973843) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) + (-0.56714163413662) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))))) + (2.1541025252664 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-6.5827246517908 + (-10.1742124082316) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))))) * (_f._tau)))))) / tmp9;

  _f._ftau = 20.944396974307 + (-15.3735415757432 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (18.3301634515678 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-28.08078114862 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (14.4640436358204 + (-0.194503669468755) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))))) * (_f._tau) + (_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 39))) + (_f._delta) * ((_f._tau) * (-1.70429417648412 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (29.3833689251262 + (-21.3518320798755 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (0.86725181134139 + (3.2651861903201) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_f._tau))) + (_f._delta) * ((2.779959913892 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-8.075966009428001 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-0.131436219478341 + (-12.37496929108) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))))))) * (_f._tau) + (_f._delta) * ((-0.88952870857478 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (3.6228828287893 + (18.3358370228714) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))))) * (_f._tau) + (_f._delta) * (0.10770512626332 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.98740869776862 + (-13.2264761307011) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + (_f._delta) * ((0.188521503330184 + (4.2734323964699) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) * (_f._tau) + (_f._delta) * ((_f._delta) * ((_f._delta) * ((_f._delta) * (-0.00016557679795037 + (-0.00116802137560719) * ((_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 40)))))) + (0.00115845907256168 + (0.08400315222964901) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) * (_f._tau)) + (-0.38569297916427) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 40))))) + (-0.027006744482696) * (_f._tau))))))));

  _f._ftautau = -15.3735415757432 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (109.980980709407 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-252.72703033758 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (159.104479994024 + (-4.2790807283126) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))))) + (_f._delta) * (-2.5308630955428 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-34.573223420043 + (185.894192367068 + (-174.645121293971) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_f._delta) * (-1.70429417648412 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (146.916844625631 + (-128.110992479253 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (18.2122880381691 + (81.62965475800201) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_f._tau)) + (_f._delta) * (2.779959913892 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-24.227898028284 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-1.97154329217511 + (-309.374232277) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))))) + (_f._delta) * (-0.88952870857478 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (10.868648486368 + (458.39592557179) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_f._delta) * ((_f._delta) * (0.188521503330184 + (106.835809911747) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) + (_f._delta) * (-0.027006744482696 + (_f._delta) * ((_f._delta) * (0.00115845907256168 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (2.10007880574121 + (-0.0292005343901797) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) + (-9.642324479106801) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))))) + (-1.97481739553724 + (-330.66190326753) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) * (_f._tau))))));

  _f._fdeltatau = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 39))) + (_f._delta) * ((_f._tau) * (-3.4085883529682 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (58.766737850252 + (-42.703664159751 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (1.73450362268278 + (6.5303723806402) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_f._tau))) + (_f._delta) * ((8.339879741676 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-24.227898028284 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (-0.39430865843502 + (-37.12490787324) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))))))) * (_f._tau) + (_f._delta) * ((-3.5581148342991 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (14.4915313151573 + (73.34334809148601) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))))) * (_f._tau) + (_f._delta) * (0.5385256313166 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-4.9370434888431 + (-66.132380653505) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + (_f._delta) * ((1.1311290199811 + (25.6405943788192) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) * (_f._tau) + (_f._delta) * ((_f._delta) * ((_f._delta) * ((_f._delta) * (-0.0016557679795037 + (-0.0128482351316791) * ((_f._delta) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 40)))))) + (0.0104261316530551 + (0.75602837006684) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21))))) * (_f._tau)) + (-3.08554383331418) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 40))))) + (-0.189047211378872) * (_f._tau)))))));
  _return: OMC_LABEL_UNUSED
  return _f;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_metatype out_f;
  modelica_metatype tmpMeta[11] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_d);
  tmp2 = mmc_unbox_real(_T);
  _f = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, tmp1, tmp2);
  tmpMeta[0] = mmc_mk_rcon(_f._d);
  tmpMeta[1] = mmc_mk_rcon(_f._T);
  tmpMeta[2] = mmc_mk_rcon(_f._R_s);
  tmpMeta[3] = mmc_mk_rcon(_f._delta);
  tmpMeta[4] = mmc_mk_rcon(_f._tau);
  tmpMeta[5] = mmc_mk_rcon(_f._f);
  tmpMeta[6] = mmc_mk_rcon(_f._fdelta);
  tmpMeta[7] = mmc_mk_rcon(_f._fdeltadelta);
  tmpMeta[8] = mmc_mk_rcon(_f._ftau);
  tmpMeta[9] = mmc_mk_rcon(_f._ftautau);
  tmpMeta[10] = mmc_mk_rcon(_f._fdeltatau);
  out_f = mmc_mk_box12(3, &Modelica_Media_Common_HelmholtzDerivs__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10]);
  return out_f;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _pi1;
  modelica_real _tau1;
  real_array _o;
  modelica_real _pl;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _pi1 has no default value.
  // _tau1 has no default value.
  alloc_real_array(&(_o), 1, 45); // _o has no default value.
  // _pl has no default value.
  _pl = fmin(_p,22063999.0);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT30,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1638,9,1641,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  {
    if(!(_p <= 100000000.0))
    {
      tmp4 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT33,tmp4);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT34);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1642,9,1643,56,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }

  {
    if(!(_T >= 273.15))
    {
      tmp6 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT35,tmp6);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT36);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1644,9,1645,53,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }

  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  _g._pi = (6.049606775559589e-008) * (_p);

  tmp8 = _T;
  _g._tau = (1386.0) / tmp8;

  _pi1 = 7.1 - _g._pi;

  _tau1 = -1.222 + _g._tau;

  tmp9 = _tau1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp10 * tmp10);

  tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp11 * tmp11);

  real_array_get(_o, 1, ((modelica_integer) 4)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1);

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (1.0) / tmp12;

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_tau1);

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));
  real_array_get(_o, 1, ((modelica_integer) 8)) = (1.0) / tmp13;

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))));

  tmp14 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (1.0) / tmp14;

  real_array_get(_o, 1, ((modelica_integer) 11)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_tau1);

  tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (1.0) / tmp15;

  real_array_get(_o, 1, ((modelica_integer) 13)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 14)) = (1.0) / tmp16;

  tmp17 = _pi1;
  real_array_get(_o, 1, ((modelica_integer) 15)) = (tmp17 * tmp17);

  real_array_get(_o, 1, ((modelica_integer) 16)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (_pi1);

  tmp18 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)));
  real_array_get(_o, 1, ((modelica_integer) 17)) = (tmp18 * tmp18);

  tmp19 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)));
  real_array_get(_o, 1, ((modelica_integer) 18)) = (tmp19 * tmp19);

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (_pi1));

  real_array_get(_o, 1, ((modelica_integer) 20)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17))));

  tmp20 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 21)) = (tmp20 * tmp20);

  tmp21 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)));
  real_array_get(_o, 1, ((modelica_integer) 22)) = (tmp21 * tmp21);

  real_array_get(_o, 1, ((modelica_integer) 23)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1));

  tmp22 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)));
  real_array_get(_o, 1, ((modelica_integer) 24)) = (1.0) / tmp22;

  real_array_get(_o, 1, ((modelica_integer) 25)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  tmp23 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)));
  real_array_get(_o, 1, ((modelica_integer) 26)) = (1.0) / tmp23;

  real_array_get(_o, 1, ((modelica_integer) 27)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * (_tau1)));

  tmp24 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)));
  real_array_get(_o, 1, ((modelica_integer) 28)) = (1.0) / tmp24;

  real_array_get(_o, 1, ((modelica_integer) 29)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))));

  tmp25 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)));
  real_array_get(_o, 1, ((modelica_integer) 30)) = (1.0) / tmp25;

  real_array_get(_o, 1, ((modelica_integer) 31)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1))));

  tmp26 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)));
  real_array_get(_o, 1, ((modelica_integer) 32)) = (1.0) / tmp26;

  real_array_get(_o, 1, ((modelica_integer) 33)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1)));

  tmp27 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)));
  real_array_get(_o, 1, ((modelica_integer) 34)) = (1.0) / tmp27;

  real_array_get(_o, 1, ((modelica_integer) 35)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1));

  tmp28 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 35)));
  real_array_get(_o, 1, ((modelica_integer) 36)) = (1.0) / tmp28;

  real_array_get(_o, 1, ((modelica_integer) 37)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  tmp29 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 37)));
  real_array_get(_o, 1, ((modelica_integer) 38)) = (1.0) / tmp29;

  tmp30 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  real_array_get(_o, 1, ((modelica_integer) 39)) = (1.0) / tmp30;

  real_array_get(_o, 1, ((modelica_integer) 40)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))));

  tmp31 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 40)));
  real_array_get(_o, 1, ((modelica_integer) 41)) = (1.0) / tmp31;

  tmp32 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)));
  real_array_get(_o, 1, ((modelica_integer) 42)) = (1.0) / tmp32;

  real_array_get(_o, 1, ((modelica_integer) 43)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))));

  tmp33 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 43)));
  real_array_get(_o, 1, ((modelica_integer) 44)) = (1.0) / tmp33;

  tmp34 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)));
  real_array_get(_o, 1, ((modelica_integer) 45)) = (1.0) / tmp34;

  tmp35 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  _g._g = (_pi1) * ((_pi1) * ((_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (-3.1679644845054e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-2.8270797985312e-006 + (-8.5205128120103e-010) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (-2.2425281908e-006 + (-6.5171222895601e-007 + (-1.4341729937924e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * ((-1.2734301741641e-009 + (-1.7424871230634e-010) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((1.4478307828521e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((2.6335781662795e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)))) + (_pi1) * ((_pi1) * ((1.8228094581404e-024) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))) + (-9.3537087292458e-026) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))) * (_pi1))) + (-1.1947622640071e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))))) + (-6.8762131295531e-019) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34)))))) + (-4.0516996860117e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (-0.00047184321073267 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (-0.00030001780793026 + (4.7661393906987e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-4.4141845330846e-006 + (-7.2694996297594e-016) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))))) * (_tau1)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (0.00028319080123804 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.00060706301565874 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (-0.018990068218419 + (_tau1) * (-0.032529748770505 + (-0.021841717175414 + (-5.283835796993e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * (_tau1)))))) + (0.14632971213167 + (_tau1) * (-0.84548187169114 + (_tau1) * (-3.756360367204 + (_tau1) * (3.3855169168385 + (_tau1) * (-0.95791963387872 + (_tau1) * (0.15772038513228 + (-0.016616417199501 + (0.00081214629983568) * (_tau1)) * (_tau1))))))) / tmp35;

  _g._gpi = (_pi1) * ((_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (9.503893453516201e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (8.4812393955936e-006 + (2.55615384360309e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (8.970112763199999e-006 + (2.60684891582404e-006 + (5.7366919751696e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_pi1) * ((2.02584984300585e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * ((1.01874413933128e-008 + (1.39398969845072e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * ((1.44400475720615e-017) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((_pi1) * ((3.5842867920213e-022) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28)))) + (_pi1) * ((2.99318679335866e-024) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))) * (_pi1)) + (-5.6507093202352e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))))) + (-7.6373766822106e-022) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30))))) + (-3.3300108005598e-019) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (0.00094368642146534 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (0.00060003561586052 + (-9.5322787813974e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (8.828369066169199e-006 + (1.45389992595188e-015) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))))) * (_tau1)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (-0.00028319080123804 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.00060706301565874 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (0.018990068218419 + (_tau1) * (0.032529748770505 + (0.021841717175414 + (5.283835796993e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * (_tau1)))));

  _g._gpipi = (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (-0.000190077869070324 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-1.69624787911872e-005 + (-5.1123076872062e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (-2.69103382896e-005 + (-7.8205467474721e-006 + (-1.72100759255088e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * ((-7.131208975319e-008 + (-9.757927889154999e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((7.3260237612316e-018) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((2.13846547101895e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)))) + (_pi1) * ((_pi1) * ((1.69521279607057e-021) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))) + (-9.2788790594118e-023) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))) * (_pi1))) + (-1.03944316968618e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))))) + (-2.8880095144123e-016) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34)))))) + (-8.103399372023399e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (-0.00094368642146534 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (-0.00060003561586052 + (9.5322787813974e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-8.828369066169199e-006 + (-1.45389992595188e-015) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))))) * (_tau1)));

  _g._gtau = (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 38)))) * (-0.00254871721114236 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.0042494411096112 + (0.018990068218419 + (-0.021841717175414 + (-0.00015851507390979) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (0.00141552963219801 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (4.7661393906987e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.32425535992538e-005 + (-1.2358149370591e-014) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (0.000126718579380216 + (-5.1123076872062e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 37))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 39)))) * (1.1212640954e-005 + (1.30342445791202e-006 + (-1.4341729937924e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_pi1) * ((3.2413597488094e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * ((1.40077319158051e-008 + (1.04549227383804e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 45)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * ((1.9941018075704e-017) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 44)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((_pi1) * ((4.6595728296277e-022) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))) + (_pi1) * ((3.8350205789908e-024) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 41)))) * (_pi1)) + (-7.2912378325616e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))))) + (-1.00075970318621e-021) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (-4.4882754268415e-019) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 42)))))))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (-0.29265942426334 + (_tau1) * (0.84548187169114 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (3.3855169168385 + (_tau1) * (-1.91583926775744 + (_tau1) * (0.47316115539684 + (-0.066465668798004 + (0.0040607314991784) * (_tau1)) * (_tau1))))));

  tmp36 = ((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp37 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22)))) * (_tau1);
  tmp38 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp39 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_tau1);
  _g._gtautau = (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36)))) * (0.0254871721114236 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.033995528876889 + (-0.037980136436838 + (-0.00031703014781958) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (-0.005662118528792 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (-2.64851071985076e-005 + (-1.97730389929456e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))))) + (_pi1) * ((-0.00063359289690108 + (-2.55615384360309e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 37))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 39)))) + (_pi1) * ((_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((3.9029628424262e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))) + (_pi1) * ((_pi1) * ((2.98940751135026e-021) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 41)))) + (-1.61070864317613e-022) * ((_pi1) / tmp36)) + (-1.86382913185108e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))))) + (1.43624813658928e-017) / tmp37) + (-5.9823054227112e-016) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32))))) + (-1.68092782989661e-007 + (-7.3184459168663e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) / tmp38) + (-2.91722377392842e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 38))))) + (-6.7275845724e-005 + (-3.9102733737361e-006 + (-1.29075569441316e-011) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) / tmp39)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (0.8779782727900201 + (_tau1) * (-1.69096374338228 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (-1.91583926775744 + (_tau1) * (0.94632231079368 + (-0.199397006394012 + (0.0162429259967136) * (_tau1)) * (_tau1)))));

  _g._gtaupi = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 38)))) * (0.00254871721114236 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.0042494411096112 + (-0.018990068218419 + (0.021841717175414 + (0.00015851507390979) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (-0.00283105926439602 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-9.5322787813974e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (2.64851071985076e-005 + (2.4716298741182e-014) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (-0.00038015573814065 + (1.53369230616185e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 37))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 39)))) * (-4.4850563816e-005 + (-5.2136978316481e-006 + (5.7366919751696e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * ((-1.12061855326441e-007 + (-8.3639381907043e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 45)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((1.03230334817355e-017) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 42)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) * ((2.90220313924001e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28)))) + (_pi1) * ((_pi1) * ((2.2602837280941e-021) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))) + (-1.22720658527705e-022) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 41)))) * (_pi1))) + (-1.39787184888831e-020) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26))))))) + (-4.1876137958978e-016) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 44)))))) + (-1.62067987440468e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))))));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype out_g;
  modelica_metatype tmpMeta[11] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, tmp1, tmp2);
  tmpMeta[0] = mmc_mk_rcon(_g._p);
  tmpMeta[1] = mmc_mk_rcon(_g._T);
  tmpMeta[2] = mmc_mk_rcon(_g._R_s);
  tmpMeta[3] = mmc_mk_rcon(_g._pi);
  tmpMeta[4] = mmc_mk_rcon(_g._tau);
  tmpMeta[5] = mmc_mk_rcon(_g._g);
  tmpMeta[6] = mmc_mk_rcon(_g._gpi);
  tmpMeta[7] = mmc_mk_rcon(_g._gpipi);
  tmpMeta[8] = mmc_mk_rcon(_g._gtau);
  tmpMeta[9] = mmc_mk_rcon(_g._gtautau);
  tmpMeta[10] = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10]);
  return out_g;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_boolean _checkLimits)
{
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _tau2;
  real_array _o;
  modelica_string tmp1;
  static int tmp2 = 0;
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_string tmp5;
  static int tmp6 = 0;
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _tau2 has no default value.
  alloc_real_array(&(_o), 1, 55); // _o has no default value.
  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  if(_checkLimits)
  {
    {
      if(!(_p > 0.0))
      {
        tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta[0] = stringAppend(_OMC_LIT37,tmp1);
        tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT38);
        {
          FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1799,11,1801,41,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
        }
      }
    }

    {
      if(!(_p <= 100000000.0))
      {
        tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta[0] = stringAppend(_OMC_LIT39,tmp3);
        tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT34);
        {
          FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1802,11,1803,58,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
        }
      }
    }

    {
      if(!(_T >= 273.15))
      {
        tmp5 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta[0] = stringAppend(_OMC_LIT40,tmp5);
        tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT36);
        {
          FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1804,11,1805,55,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
        }
      }
    }

    {
      if(!(_T <= 1073.15))
      {
        tmp7 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta[0] = stringAppend(_OMC_LIT41,tmp7);
        tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT42);
        {
          FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",1806,11,1808,57,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
        }
      }
    }
  }

  _g._pi = (1e-006) * (_p);

  tmp9 = _T;
  _g._tau = (540.0) / tmp9;

  _tau2 = -0.5 + _g._tau;

  tmp10 = _tau2;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp10 * tmp10);

  real_array_get(_o, 1, ((modelica_integer) 2)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-0.05032527872793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = -0.057581259083432 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 6)) = -0.045996013696365 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 8)) = -0.017834862292358 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (_tau2);

  tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp11 * tmp11);

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp12 * tmp12);

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (tmp13 * tmp13);

  real_array_get(_o, 1, ((modelica_integer) 13)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 14)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 15)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 16)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 17)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 18)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))));

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))));

  real_array_get(_o, 1, ((modelica_integer) 20)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))));

  tmp14 = _g._pi;
  real_array_get(_o, 1, ((modelica_integer) 21)) = (tmp14 * tmp14);

  tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)));
  real_array_get(_o, 1, ((modelica_integer) 22)) = (tmp15 * tmp15);

  real_array_get(_o, 1, ((modelica_integer) 23)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 22))));

  real_array_get(_o, 1, ((modelica_integer) 24)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (_tau2));

  tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)));
  real_array_get(_o, 1, ((modelica_integer) 25)) = (tmp16 * tmp16);

  real_array_get(_o, 1, ((modelica_integer) 26)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 27)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))));

  real_array_get(_o, 1, ((modelica_integer) 28)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 29)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 30)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 31)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))));

  real_array_get(_o, 1, ((modelica_integer) 32)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))));

  tmp17 = _g._tau;
  real_array_get(_o, 1, ((modelica_integer) 33)) = (tmp17 * tmp17);

  tmp18 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)));
  real_array_get(_o, 1, ((modelica_integer) 34)) = (tmp18 * tmp18);

  real_array_get(_o, 1, ((modelica_integer) 35)) = (-5.3349095828174e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))));

  real_array_get(_o, 1, ((modelica_integer) 36)) = -0.087594591301146 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 35)));

  real_array_get(_o, 1, ((modelica_integer) 37)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 36))));

  real_array_get(_o, 1, ((modelica_integer) 38)) = -0.007878555448671 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 37)));

  real_array_get(_o, 1, ((modelica_integer) 39)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 38))));

  real_array_get(_o, 1, ((modelica_integer) 40)) = -0.0003789797503263 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 39)));

  real_array_get(_o, 1, ((modelica_integer) 41)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 40)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 42)) = -6.6065283340406e-005 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 41)));

  real_array_get(_o, 1, ((modelica_integer) 43)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 42)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 44)) = (5.7870447262208e-006) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 45)) = (-0.30195167236758) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 46)) = -0.172743777250296 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 45)));

  real_array_get(_o, 1, ((modelica_integer) 47)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 46)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 48)) = -0.09199202739273001 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 47)));

  real_array_get(_o, 1, ((modelica_integer) 49)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 48)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 50)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))));

  real_array_get(_o, 1, ((modelica_integer) 51)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))));

  real_array_get(_o, 1, ((modelica_integer) 52)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))));

  real_array_get(_o, 1, ((modelica_integer) 53)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))));

  real_array_get(_o, 1, ((modelica_integer) 54)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))));

  real_array_get(_o, 1, ((modelica_integer) 55)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (_tau2));

  tmp19 = _g._pi;
  if(!(tmp19 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(g.pi) was %g should be > 0", tmp19);
  }tmp20 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34)))) * (_g._tau);
  _g._g = (_g._pi) * (-0.0017731742473213 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))) + (_g._pi) * ((_tau2) * (-3.3032641670203e-005 + (-0.00018948987516315 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.0039392777243355 + (-0.043797295650573 + (-2.6674547914087e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2)) + (_g._pi) * (2.0481737692309e-008 + (4.3870667284435e-007 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-3.227767723857e-005 + (-0.0015033924542148 + (-0.040668253562649) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((2.2922076337661e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + (_g._pi) * ((-1.6714766451061e-011 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.0021171472321355 + (-23.895741934104) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) + (_g._pi) * (-5.905956432427e-018 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) * (-1.2621808899101e-006 + (-0.038946842435739) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (1.1256211360459e-011 + (-8.2311340897998) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.9809712802088e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (1.0406965210174e-019 + (-1.0234747095929e-013 + (-1.0018179379511e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (-8.0882908646985e-011 + (0.10693031879409) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)))) * (8.9185845355421e-025 + (3.0629316876232e-013 + (-4.2002467698208e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (_g._pi) * ((_g._pi) * ((3.7826947613457e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)))) * ((7.3087610595061e-029 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (5.5414715350778e-017 + (-9.436970724121e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (_g._pi)) + (-1.2768608934681e-015) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)))))) + (-5.9056029685639e-026) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))))) + (-0.33662250574171) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))))))))))) + (_tau2) * (-7.8847309559367e-010 + (1.2790717852285e-008 + (4.8225372718507e-007) * (_tau2)) * (_tau2)))))) + (-0.00560879118302 + (_g._tau) * (0.07145273881455 + (_g._tau) * (-0.4071049823928 + (_g._tau) * (1.424081971444 + (_g._tau) * (-4.38395111945 + (_g._tau) * (-9.692768600217001 + (_g._tau) * (10.08665568018 + (-0.2840863260772 + (0.02126846353307) * (_g._tau)) * (_g._tau)) + log(tmp19))))))) / tmp20;

  tmp21 = _g._pi;
  _g._gpi = (1.0 + (_g._pi) * (-0.0017731742473213 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))) + (_g._pi) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 43))) + (_g._pi) * (6.1445213076927e-008 + (1.31612001853305e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-9.683303171571e-005 + (-0.0045101773626444 + (-0.122004760687947) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((1.14610381688305e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + (_g._pi) * ((-1.00288598706366e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.012702883392813 + (-143.374451604624) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) + (_g._pi) * (-4.1341695026989e-017 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) * (-8.8352662293707e-006 + (-0.272627897050173) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (9.0049690883672e-011 + (-65.84907271839801) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.78287415218792e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (1.0406965210174e-018 + (-1.0234747095929e-012 + (-1.0018179379511e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (-1.29412653835176e-009 + (1.71088510070544) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)))) * (1.78371690710842e-023 + (6.1258633752464e-012 + (-8.4004935396416e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (_g._pi) * ((_g._pi) * ((8.3219284749605e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)))) * ((1.75410265428146e-027 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (1.32995316841867e-015 + (-2.26487297378904e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (_g._pi)) + (-2.93678005497663e-014) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)))))) + (-1.24017662339842e-024) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))))) + (-6.0592051033508) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))))))))))) + (_tau2) * (-3.15389238237468e-009 + (5.116287140914e-008 + (1.92901490874028e-006) * (_tau2)) * (_tau2))))))) / tmp21;

  tmp22 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)));
  _g._gpipi = (-1.0 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 43))) + (_g._pi) * (1.22890426153854e-007 + (2.6322400370661e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.00019366606343142 + (-0.009020354725288801 + (-0.244009521375894) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((4.5844152675322e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + (_g._pi) * ((-5.0144299353183e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.063514416964065 + (-716.87225802312) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) + (_g._pi) * (-2.48050170161934e-016 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) * (-5.3011597376224e-005 + (-1.63576738230104) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (6.303478361857e-010 + (-460.94350902879) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.42629932175034e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (9.366268689156601e-018 + (-9.2112723863361e-012 + (-9.016361441559899e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (-1.94118980752764e-008 + (25.6632765105816) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)))) * (3.389062123506e-022 + (1.16391404129682e-010 + (-0.0015960937725319) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (_g._pi) * ((_g._pi) * ((0.00174760497974171) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 29)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 31)))) * ((4.0344361048474e-026 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (3.05889228736295e-014 + (-0.00052092078397148) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (_g._pi)) + (-6.4609161209486e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 30)))))) + (-2.48035324679684e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24)))))) + (-103.006486756963) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 26)))))))))))) + (_tau2) * (-9.461677147124e-009 + (1.5348861422742e-007 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 44)))) * (_tau2)))))) / tmp22;

  tmp23 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34))));
  _g._gtau = (0.0280439559151 + (_g._tau) * (-0.2858109552582 + (_g._tau) * (1.2213149471784 + (_g._tau) * (-2.848163942888 + (_g._tau) * (4.38395111945 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)))) * (10.08665568018 + (-0.5681726521544001 + (0.06380539059921001) * (_g._tau)) * (_g._tau))))))) / tmp23 + (_g._pi) * (-0.017834862292358 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 49))) + (_g._pi) * (-3.3032641670203e-005 + (-0.0003789797503263 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.015757110897342 + (-0.306581069554011 + (-0.00096028372490713) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2) + (_g._pi) * (4.3870667284435e-007 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-9.683303171571e-005 + (-0.009020354725288801 + (-1.42338887469272) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) + (_g._pi) * (-7.8847309559367e-010 + (_g._pi) * ((1.60454534363627e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-5.0144299353183e-011 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.033874355714168 + (-836.35096769364) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) + (_g._pi) * ((-1.38839897890111e-005 + (-0.97367106089347) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 50)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (9.0049690883672e-011 + (-296.320827232793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((2.57526266427144e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 51)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (4.1627860840696e-019 + (-1.0234747095929e-012 + (-1.40254511313154e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (-2.34560435076256e-009 + (5.3465159397045) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (1.78371690710842e-023 + (1.07202609066812e-011 + (-0.000201611844951398) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (_g._pi) * ((_g._pi) * ((0.000200482822351322) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 53)))) + (_g._pi) * ((1.90027787547159e-027 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (2.21658861403112e-015 + (-5.4734430199902e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 55)))) * (_g._pi)) + (-4.9797574845256e-014) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 54)))))) + (-1.24017662339842e-024) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)))))) + (-19.1874828272775) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 52)))))))))))) + (2.558143570457e-008 + (1.44676118155521e-006) * (_tau2)) * (_tau2)))));

  tmp24 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 34))))) * (_g._tau);
  _g._gtautau = (-0.1682637354906 + (_g._tau) * (1.429054776291 + (_g._tau) * (-4.8852597887136 + (_g._tau) * (8.544491828664 + (_g._tau) * (-8.7679022389 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 33)))) * ((-0.5681726521544001 + (0.12761078119842) * (_g._tau)) * (_g._tau))))))) / tmp24 + (_g._pi) * (-0.09199202739273001 + (-0.34548755450059 + (-1.5097583618379) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * (-0.0003789797503263 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.047271332692026 + (-1.83948641732407 + (-0.03360993037175) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) + (_g._pi) * ((-0.00019366606343142 + (-0.045101773626444 + (-48.395221739552) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * (2.558143570457e-008 + (2.89352236311042e-006) * (_tau2) + (_g._pi) * ((9.6272720618176e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (_tau2)) + (_g._pi) * ((-1.00288598706366e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.50811533571252 + (-28435.9329015838) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) * (_tau2) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((-0.000138839897890111 + (-23.3681054614434) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) * (_tau2)) + (_g._pi) * ((6.303478361857e-010 + (-10371.2289531477) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) + (_g._pi) * ((3.09031519712573e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (1.24883582522088e-018 + (-9.2112723863361e-012 + (-1.823308647071e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((-6.5676921821352e-008 + (261.979281045521) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) * (_tau2)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * ((3.389062123506e-022 + (3.6448887082716e-010 + (-0.009475756712715701) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))) + (_g._pi) * ((_g._pi) * ((0.0104251067622687) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((4.750694688679e-026 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (8.6446955947214e-014 + (-0.0031198625213944) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (_g._pi))) + (-1.89230784411972e-012) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2))))) + (-2.48035324679684e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) + (-1074.49903832754) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 25)))) * (_tau2)))))))))))))))));

  _g._gtaupi = -0.017834862292358 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 49))) + (_g._pi) * (-6.6065283340406e-005 + (-0.0007579595006526 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.031514221794684 + (-0.61316213910802 + (-0.00192056744981426) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))))) * (_tau2) + (_g._pi) * (1.31612001853305e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.00029049909514713 + (-0.0270610641758664 + (-4.2701666240781) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) + (_g._pi) * (-3.15389238237468e-009 + (_g._pi) * ((8.0227267181813e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-3.00865796119098e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (-0.203246134285008 + (-5018.1058061618) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))))) + (_g._pi) * ((-9.7187928523078e-005 + (-6.8156974262543) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 50)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (7.2039752706938e-010 + (-2370.56661786234) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((2.3177363978443e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 51)))) + (_g._pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (4.1627860840696e-018 + (-1.0234747095929e-011 + (-1.40254511313154e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 23)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * (-3.7529669612201e-008 + (85.544255035272) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 24))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 21)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (3.5674338142168e-022 + (2.14405218133624e-010 + (-0.004032236899028) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 28))))) + (_g._pi) * ((_g._pi) * ((0.0044106220917291) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 53)))) + (_g._pi) * ((4.5606669011318e-026 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) * (5.3198126736747e-014 + (-0.00131362632479764) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 32)))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 55)))) * (_g._pi)) + (-1.14534422144089e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 54)))))) + (-2.60437090913668e-023) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 27)))))) + (-345.37469089099) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 52)))))))))))) + (1.0232574281828e-007 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 44)))) * (_tau2))));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _checkLimits)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype out_g;
  modelica_metatype tmpMeta[11] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_checkLimits);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, tmp1, tmp2, tmp3);
  tmpMeta[0] = mmc_mk_rcon(_g._p);
  tmpMeta[1] = mmc_mk_rcon(_g._T);
  tmpMeta[2] = mmc_mk_rcon(_g._R_s);
  tmpMeta[3] = mmc_mk_rcon(_g._pi);
  tmpMeta[4] = mmc_mk_rcon(_g._tau);
  tmpMeta[5] = mmc_mk_rcon(_g._g);
  tmpMeta[6] = mmc_mk_rcon(_g._gpi);
  tmpMeta[7] = mmc_mk_rcon(_g._gpipi);
  tmpMeta[8] = mmc_mk_rcon(_g._gtau);
  tmpMeta[9] = mmc_mk_rcon(_g._gtautau);
  tmpMeta[10] = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10]);
  return out_g;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  Modelica_Media_Common_GibbsDerivs _g;
  real_array _o;
  modelica_string tmp1;
  static int tmp2 = 0;
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_string tmp5;
  static int tmp6 = 0;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  alloc_real_array(&(_o), 1, 11); // _o has no default value.
  {
    if(!(_p > 0.0))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT43,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT44);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",2240,9,2242,40,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }

  {
    if(!(_p <= 10000000.0))
    {
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT45,tmp3);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT46);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",2243,9,2244,67,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }

  {
    if(!(_T <= 2273.15))
    {
      tmp5 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT47,tmp5);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT48);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",2245,9,2246,77,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }

  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  _g._pi = (1e-006) * (_p);

  tmp7 = _T;
  _g._tau = (1000.0) / tmp7;

  tmp8 = _g._tau;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp8 * tmp8);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (-0.004594282089991) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 3)) = 0.0021774678714571 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_g._tau);

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp10 * tmp10);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 9)) = (-7.9449656719138e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))));

  tmp11 = _g._pi;
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp11 * tmp11);

  real_array_get(_o, 1, ((modelica_integer) 11)) = (-0.013782846269973) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  tmp12 = _g._pi;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(g.pi) was %g should be > 0", tmp12);
  }tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  _g._g = (_g._pi) * (-0.00012563183589592 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))) + (_g._pi) * ((1.2919228289784e-007) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_g._pi)) + (-3.9724828359569e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))))) + (-0.024805148933466 + (_g._tau) * (0.36901534980333 + (_g._tau) * (-3.1161318213925 + (_g._tau) * (-13.179983674201 + (6.8540841634434 + (-0.32961626538917) * (_g._tau)) * (_g._tau) + log(tmp12))))) / tmp13;

  tmp14 = _g._pi;
  _g._gpi = (1.0 + (_g._pi) * (-0.00012563183589592 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))) + (_g._pi) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))) + (3.8757684869352e-007) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_g._pi))))) / tmp14;

  tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  _g._gpipi = (-1.0 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))) + (7.7515369738704e-007) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_g._pi)))) / tmp15;

  tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  _g._gtau = (_g._pi) * (0.0021774678714571 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))) + (_g._pi) * ((3.8757684869352e-007) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_g._pi)) + (-3.5752345523612e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))))) + (0.07441544680039799 + (_g._tau) * (-0.73803069960666 + (3.1161318213925 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (6.8540841634434 + (-0.65923253077834) * (_g._tau))) * (_g._tau))) / tmp16;

  tmp17 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_g._tau);
  _g._gtautau = (-0.297661787201592 + (_g._tau) * (2.21409209881998 + (-6.232263642785 + (-0.65923253077834) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) * (_g._tau))) / tmp17 + (_g._pi) * ((_g._pi) * ((7.7515369738704e-007) * ((_g._pi) * (_g._tau)) + (-0.000286018764188897) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_g._tau)))) + (-0.027565692539946) * (_g._tau));

  _g._gtaupi = 0.0021774678714571 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))) + (_g._pi) * ((1.16273054608056e-006) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_g._pi)) + (-7.1504691047224e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype out_g;
  modelica_metatype tmpMeta[11] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, tmp1, tmp2);
  tmpMeta[0] = mmc_mk_rcon(_g._p);
  tmpMeta[1] = mmc_mk_rcon(_g._T);
  tmpMeta[2] = mmc_mk_rcon(_g._R_s);
  tmpMeta[3] = mmc_mk_rcon(_g._pi);
  tmpMeta[4] = mmc_mk_rcon(_g._tau);
  tmpMeta[5] = mmc_mk_rcon(_g._g);
  tmpMeta[6] = mmc_mk_rcon(_g._gpi);
  tmpMeta[7] = mmc_mk_rcon(_g._gpipi);
  tmpMeta[8] = mmc_mk_rcon(_g._gtau);
  tmpMeta[9] = mmc_mk_rcon(_g._gtautau);
  tmpMeta[10] = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10]);
  return out_g;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  real_array _n;
  modelica_real _hstar;
  modelica_real _pstar;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  alloc_real_array(&(_n), 1, 4);
  real_array_copy_data(_OMC_LIT49, _n);
  
  _hstar = 1000.0;
  _pstar = 1000000.0;
  _pi = (1e-006) * (_p);
  tmp1 = _pi;
  tmp2 = _pi;
  _h = (1000.0) * (2014.64004206875 + (3.74696550136983) * (_pi) + (-0.0219921901054187) * ((tmp1 * tmp1)) + (8.7513168600995e-005) * ((tmp2 * tmp2 * tmp2)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_real _T)
{
  modelica_real _p_sat;
  real_array _o;
  modelica_real _Tlim;
  static int tmp1 = 0;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p_sat has no default value.
  alloc_real_array(&(_o), 1, 8); // _o has no default value.
  _Tlim = fmin(_T,647.096);
  {
    if(!(_T >= 273.16))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",3022,9,3024,62,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT50));
      }
    }
  }

  real_array_get(_o, 1, ((modelica_integer) 1)) = -650.17534844798 + _Tlim;

  tmp2 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (1.0) / tmp2;

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-0.23855557567849) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))) + _Tlim;

  real_array_get(_o, 1, ((modelica_integer) 5)) = (-4823.2657361591) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp3 * tmp3);

  real_array_get(_o, 1, ((modelica_integer) 7)) = (14.91510861353) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 8)) = 405113.40542057 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));

  tmp4 = -3232555.0322333 + (12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) + (-17.073846940092) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));
  tmp5 = (tmp4 * tmp4) + (-4.0) * ((-724213.16703206 + (1167.0521452767) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))));
  if(!(tmp5 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt((-3232555.0322333 + 12020.82470247 * o[4] + (-17.073846940092) * o[6]) ^ 2.0 + (-4.0) * (-724213.16703206 + 1167.0521452767 * o[4] + o[6]) * o[8]) was %g should be >= 0", tmp5);
  }tmp6 = 3232555.0322333 + (-12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) + (17.073846940092) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) + sqrt(tmp5);
  tmp7 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) / tmp6;
  tmp7 *= tmp7;
  _p_sat = (16000000.0) * ((tmp7 * tmp7));
  _return: OMC_LABEL_UNUSED
  return _p_sat;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _p_sat;
  modelica_metatype out_p_sat;
  tmp1 = mmc_unbox_real(_T);
  _p_sat = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, tmp1);
  out_p_sat = mmc_mk_rcon(_p_sat);
  return out_p_sat;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  modelica_real _pi;
  modelica_real _eta1;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _pi has no default value.
  // _eta1 has no default value.
  alloc_real_array(&(_o), 1, 3); // _o has no default value.
  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT51,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",2599,9,2602,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _pi = (1e-006) * (_p);

  _eta1 = 1.0 + (4e-007) * (_h);

  tmp4 = _eta1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp6 * tmp6);

  _T = -238.72489924521 + (-13.391744872602) * (_pi) + (_eta1) * (404.21188637945 + (43.211039183559) * (_pi) + (_eta1) * (113.49746881718 + (-54.010067170506) * (_pi) + (_eta1) * ((30.535892203916) * (_pi) + (_eta1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-5.8457616048039 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((_pi) * (0.009396540087836301 + (-2.5858641282073e-005 + (6.645618619163501e-008) * (_pi)) * (_pi)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-0.0001528548241314 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-1.0866707695377e-006 + (_pi) * (1.157364750534e-007 + (_pi) * (-4.0644363084799e-009 + (_pi) * (8.0670734103027e-011 + (_pi) * (-9.347777121394701e-013 + (5.8265442020601e-015 + (-1.5020185953503e-017) * (_pi)) * (_pi))))))))))) + (-6.5964749423638) * (_pi)))));
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  modelica_real _pi;
  modelica_real _pi2b;
  modelica_real _pi2c;
  modelica_real _eta;
  modelica_real _etabc;
  modelica_real _eta2a;
  modelica_real _eta2b;
  modelica_real _eta2c;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _pi has no default value.
  // _pi2b has no default value.
  // _pi2c has no default value.
  // _eta has no default value.
  // _etabc has no default value.
  // _eta2a has no default value.
  // _eta2b has no default value.
  // _eta2c has no default value.
  alloc_real_array(&(_o), 1, 8); // _o has no default value.
  _pi = (1e-006) * (_p);

  _eta = (5e-007) * (_h);

  _etabc = (0.001) * (_h);

  if((_pi < 4.0))
  {
    _eta2a = -2.1 + _eta;

    tmp1 = _eta2a;
    real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp1 * tmp1);

    tmp2 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
    real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp2 * tmp2);

    tmp3 = _pi;
    real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp3 * tmp3);

    tmp4 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
    real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp4 * tmp4);

    real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_pi);

    _T = 1089.8952318288 + (1.844574935579 + (-0.0061707422868339) * (_pi)) * (_pi) + (_eta2a) * (849.51654495535 + (-4.1792700549624) * (_pi) + (_eta2a) * (-107.81748091826 + (6.2478196935812 + (-0.31078046629583) * (_pi)) * (_pi) + (_eta2a) * (33.153654801263 + (-17.344563108114) * (_pi) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-7.4232016790248 + (_pi) * (-200.58176862096 + (11.670873077107) * (_pi)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((271.96065473796) * (_pi) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_eta2a) * ((1.3865724283226) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((3091.9688604755) * (_pi) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (11.765048724356 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (235988.32556514 + (7399.9835474766) * (_pi)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((19127.72923966) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (128127984.04046 + (-551966.9703006001) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((2822454697.3002) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-3594897141.0703 + (3715408.5996233) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_pi) * (252266.40357872 + (_pi) * (1722734991.3197 + (_pi) * (12848734.66465 + (-13105236.545054 + (-415351.64835634) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_pi))))))) + (-985549096.23276) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))))))) + (-62.459855192507) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (_pi)))) + (-13551.334240775) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))))))) + (-455.11318285818) * (_pi)))))));
  }
  else
  {
    if((_pi < 905.84278514723 + (-0.67955786399241 + (0.00012809002730136) * (_etabc)) * (_etabc)))
    {
      _eta2b = -2.6 + _eta;

      _pi2b = -2.0 + _pi;

      tmp5 = _pi2b;
      real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp5 * tmp5);

      real_array_get(_o, 1, ((modelica_integer) 2)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_pi2b);

      tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
      real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp6 * tmp6);

      tmp7 = _eta2b;
      real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp7 * tmp7);

      tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
      real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp8 * tmp8);

      real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))));

      tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
      real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp9 * tmp9);

      _T = 1489.5041079516 + (0.9374714737793201) * (_pi2b) + (_eta2b) * (743.0779831403401 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (0.00011032831789999 + (-1.7565233969407e-018) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))))) + (_eta2b) * (-97.708318797837 + (_pi2b) * (3.3593118604916 + (_pi2b) * (-0.021810755324761 + (_pi2b) * (0.00018955248387902 + (2.8640237477456e-007 + (-8.1456365207833e-014) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_pi2b)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((3.3809355601454) * (_pi2b) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (2.4742464705674 + (0.16844539671904 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.0030891541160537 + (-1.0779857357512e-005) * (_pi2b))) * (_pi2b) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (-0.63281320016026 + (_pi2b) * (0.73875745236695 + (-0.046333324635812 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-7.6462712454814e-005 + (2.821728163504e-007) * (_pi2b))) * (_pi2b)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (1.1385952129658 + (_pi2b) * (-0.47128737436186 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.0013555504554949 + (1.4052392818316e-005 + (1.2704902271945e-006) * (_pi2b)) * (_pi2b))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (-0.47811863648625 + (0.15020273139707 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-3.1083814331434e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.1030139238909e-008 + (-2.5180545682962e-011) * (_pi2b)))) * (_pi2b) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (0.0085208123431544 + (_pi2b) * (-0.002176411421975 + (_pi2b) * (7.1280351959551e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.0302738212103e-006 + (7.3803353468292e-008 + (8.6934156344163e-015) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_pi2b)))))))))) + (-0.10829784403677) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))))));
    }
    else
    {
      _eta2c = -1.8 + _eta;

      _pi2c = 25.0 + _pi;

      tmp10 = _pi2c;
      real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp10 * tmp10);

      tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
      real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp11 * tmp11);

      real_array_get(_o, 1, ((modelica_integer) 3)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_pi2c));

      tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
      real_array_get(_o, 1, ((modelica_integer) 4)) = (1.0) / tmp12;

      real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

      tmp13 = _eta2c;
      real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp13 * tmp13);

      tmp14 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
      real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp14 * tmp14);

      tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
      real_array_get(_o, 1, ((modelica_integer) 8)) = (tmp15 * tmp15);

      tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
      tmp17 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
      _T = (_eta2c) * ((859777.2253558 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (482.19755109255 + (1.126159740723e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))))) / tmp16 + (_eta2c) * ((-583401318515.9 + (20825544563.171 + (31081.088422714) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_pi2c)) / tmp17 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (1.2324579690832e-007 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (-1.1606921130984e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (2.7846367088554e-005 + (-0.00059270038474176 + (0.0012918582991878) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))))))) + (-10.842984880077) * (_pi2c)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (7326335090218.1 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (3.7966001272486 + (-0.04536417267666 + (-1.7804982240686e-011) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_pi2c)))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-3236839855524.2 + (_pi2c) * (358250899454.47 + (_pi2c) * (-10783068217.47 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_pi2c) * (610747.8356451601 + (_pi2c) * (-25745.72360417 + (1208.2315865936 + (1.4559115658698e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) * (_pi2c)))))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_real _p)
{
  modelica_real _t_sat;
  modelica_real _pi;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _t_sat has no default value.
  // _pi has no default value.
  alloc_real_array(&(_o), 1, 20); // _o has no default value.
  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT52,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",2900,9,2903,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _pi = (1e-006) * (fmin(_p,22064000.0));

  tmp4 = _pi;
  tmp5 = 0.25;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }
  real_array_get(_o, 1, ((modelica_integer) 1)) = tmp6;

  real_array_get(_o, 1, ((modelica_integer) 2)) = (-3232555.0322333) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  tmp11 = _pi;
  if(!(tmp11 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(pi) was %g should be >= 0", tmp11);
  }
  real_array_get(_o, 1, ((modelica_integer) 3)) = sqrt(tmp11);

  real_array_get(_o, 1, ((modelica_integer) 4)) = (-724213.16703206) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  real_array_get(_o, 1, ((modelica_integer) 5)) = 405113.40542057 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (-17.073846940092) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 7)) = 14.91510861353 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = (-4.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (1167.0521452767) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  real_array_get(_o, 1, ((modelica_integer) 11)) = -4823.2657361591 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)));

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (tmp12 * tmp12);

  real_array_get(_o, 1, ((modelica_integer) 13)) = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)));

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)));
  if(!(tmp13 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(o[13]) was %g should be >= 0", tmp13);
  }
  real_array_get(_o, 1, ((modelica_integer) 14)) = sqrt(tmp13);

  real_array_get(_o, 1, ((modelica_integer) 15)) = (-(*real_array_element_addr1(&_o, 1, ((modelica_integer) 14))));

  real_array_get(_o, 1, ((modelica_integer) 16)) = (-12020.82470247) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = (-1167.0521452767) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  real_array_get(_o, 1, ((modelica_integer) 18)) = 4823.2657361591 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 15))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 16))) + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)));

  tmp14 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)));
  real_array_get(_o, 1, ((modelica_integer) 19)) = (1.0) / tmp14;

  real_array_get(_o, 1, ((modelica_integer) 20)) = (2.0) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))));

  tmp15 = 650.17534844798 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 20)));
  tmp16 = (tmp15 * tmp15) + (-4.0) * (-0.23855557567849 + (1300.35069689596) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 19)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))));
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt((650.17534844798 + o[20]) ^ 2.0 + (-4.0) * (-0.23855557567849 + 1300.35069689596 * o[19] * o[5])) was %g should be >= 0", tmp16);
  }
  _t_sat = (0.5) * (650.17534844798 + (*real_array_element_addr1(&_o, 1, ((modelica_integer) 20))) - (sqrt(tmp16)));
  _return: OMC_LABEL_UNUSED
  return _t_sat;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _t_sat;
  modelica_metatype out_t_sat;
  tmp1 = mmc_unbox_real(_p);
  _t_sat = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, tmp1);
  out_t_sat = mmc_mk_rcon(_t_sat);
  return out_t_sat;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _v;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _vstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real _eta;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  alloc_real_array(&(_n), 1, 32);
  real_array_copy_data(_OMC_LIT55, _n);
  
  alloc_real_array(&(_I), 1, 32);
  real_array_copy_data(_OMC_LIT56, _I);
  
  alloc_real_array(&(_J), 1, 32);
  real_array_copy_data(_OMC_LIT57, _J);
  
  _vstar = 0.0028;
  _pstar = 100000000.0;
  _hstar = 2100000.0;
  _pi = (1e-008) * (_p);
  _eta = (4.761904761904762e-007) * (_h);
  tmp1 = -0.727 + _eta;
  tmp1 *= tmp1;tmp2 = -0.727 + _eta;
  tmp3 = -0.727 + _eta;
  tmp3 *= tmp3;tmp4 = -0.727 + _eta;
  tmp5 = -0.727 + _eta;
  tmp6 = -0.727 + _eta;
  tmp7 = 0.128 + _pi;
  tmp8 = 0.128 + _pi;
  tmp9 = -0.727 + _eta;
  tmp10 = 0.128 + _pi;
  tmp11 = -0.727 + _eta;
  tmp12 = 0.128 + _pi;
  tmp13 = -0.727 + _eta;
  tmp14 = 0.128 + _pi;
  tmp15 = (0.128 + _pi) * (-0.727 + _eta);
  tmp16 = 0.128 + _pi;
  tmp17 = 0.128 + _pi;
  tmp17 *= tmp17;tmp18 = -0.727 + _eta;
  tmp19 = -0.727 + _eta;
  tmp20 = -0.727 + _eta;
  _v = (0.0028) * (0.560394465163593 + (real_int_pow(threadData, 0.128 + _pi, -12)) * ((0.00529944062966028) * (real_int_pow(threadData, -0.727 + _eta, 6)) + (-0.170099690234461) * (real_int_pow(threadData, -0.727 + _eta, 8))) + (11.1323814312927) * ((real_int_pow(threadData, 0.128 + _pi, -12)) * (real_int_pow(threadData, -0.727 + _eta, 12))) + (-2178.98123145125) * ((real_int_pow(threadData, 0.128 + _pi, -12)) * (real_int_pow(threadData, -0.727 + _eta, 18))) + (-0.000506061827980875) * ((real_int_pow(threadData, 0.128 + _pi, -10)) * ((tmp1 * tmp1))) + (0.556495239685324) * ((real_int_pow(threadData, 0.128 + _pi, -10)) * (real_int_pow(threadData, -0.727 + _eta, 7))) + (-9.43672726094016) * ((real_int_pow(threadData, 0.128 + _pi, -10)) * (real_int_pow(threadData, -0.727 + _eta, 10))) + (-0.297856807561527) * ((real_int_pow(threadData, 0.128 + _pi, -8)) * (real_int_pow(threadData, -0.727 + _eta, 5))) + (93.9353943717186) * ((real_int_pow(threadData, 0.128 + _pi, -8)) * (real_int_pow(threadData, -0.727 + _eta, 12))) + (0.0192944939465981) * ((real_int_pow(threadData, 0.128 + _pi, -6)) * ((tmp2 * tmp2 * tmp2))) + (0.421740664704763) * ((real_int_pow(threadData, 0.128 + _pi, -6)) * ((tmp3 * tmp3))) + (-3689141.2628233) * ((real_int_pow(threadData, 0.128 + _pi, -6)) * (real_int_pow(threadData, -0.727 + _eta, 22))) + (-0.00737566847600639) * ((real_int_pow(threadData, 0.128 + _pi, -4)) * ((tmp4 * tmp4))) + (-0.354753242424366) * ((real_int_pow(threadData, 0.128 + _pi, -4)) * ((tmp5 * tmp5 * tmp5))) + (-1.99768169338727) * ((real_int_pow(threadData, 0.128 + _pi, -3)) * (real_int_pow(threadData, -0.727 + _eta, 7))) + (1.15456297059049) * ((real_int_pow(threadData, 0.128 + _pi, -2)) * ((tmp6 * tmp6 * tmp6))) + (5683.6687581596) * ((real_int_pow(threadData, 0.128 + _pi, -2)) * (real_int_pow(threadData, -0.727 + _eta, 16))) + (0.00808169540124668) / tmp7 + (0.172416341519307) * ((-0.727 + _eta) / tmp8) + (1.04270175292927) * (((tmp9 * tmp9)) / tmp10) + (-0.297691372792847) * (((tmp11 * tmp11 * tmp11)) / tmp12) + (0.275234661176914) * (-0.727 + _eta) + (-0.148347894866012) * (0.128 + _pi) + (-0.0651142513478515) * ((0.128 + _pi) * (-0.727 + _eta)) + (-2.92468715386302) * ((0.128 + _pi) * ((tmp13 * tmp13))) + (0.0664876096952665) * ((tmp14 * tmp14)) + (3.52335014263844) * ((tmp15 * tmp15)) + (-0.0146340792313332) * ((tmp16 * tmp16 * tmp16)) + (-2.24503486668184) * (((tmp17 * tmp17)) * ((tmp18 * tmp18))) + (1.10533464706142) * ((real_int_pow(threadData, 0.128 + _pi, 5)) * ((tmp19 * tmp19))) + (-0.0408757344495612) * ((real_int_pow(threadData, 0.128 + _pi, 8)) * ((tmp20 * tmp20))));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _v = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData, tmp1, tmp2);
  out_v = mmc_mk_rcon(_v);
  return out_v;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _v;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _vstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real _eta;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  alloc_real_array(&(_n), 1, 30);
  real_array_copy_data(_OMC_LIT60, _n);
  
  alloc_real_array(&(_I), 1, 30);
  real_array_copy_data(_OMC_LIT61, _I);
  
  alloc_real_array(&(_J), 1, 30);
  real_array_copy_data(_OMC_LIT62, _J);
  
  _vstar = 0.008800000000000001;
  _pstar = 100000000.0;
  _hstar = 2800000.0;
  _pi = (1e-008) * (_p);
  _eta = (3.571428571428572e-007) * (_h);
  tmp1 = real_int_pow(threadData, 0.06610000000000001 + _pi, 12);
  tmp2 = real_int_pow(threadData, 0.06610000000000001 + _pi, 8);
  tmp3 = -0.72 + _eta;
  tmp4 = real_int_pow(threadData, 0.06610000000000001 + _pi, 6);
  tmp5 = -0.72 + _eta;
  tmp6 = -0.72 + _eta;
  tmp7 = 0.06610000000000001 + _pi;
  tmp8 = (tmp7 * tmp7 * tmp7);
  tmp9 = -0.72 + _eta;
  tmp10 = -0.72 + _eta;
  tmp11 = 0.06610000000000001 + _pi;
  tmp12 = 0.06610000000000001 + _pi;
  tmp13 = -0.72 + _eta;
  tmp13 *= tmp13;tmp14 = 0.06610000000000001 + _pi;
  tmp15 = 0.06610000000000001 + _pi;
  tmp16 = (0.06610000000000001 + _pi) * (-0.72 + _eta);
  tmp17 = 0.06610000000000001 + _pi;
  _v = (0.008800000000000001) * (0.169490044091791 + (-2.25196934336318e-009) / tmp1 + (1.40674363313486e-008) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -12)) * (-0.72 + _eta)) + (2.3378408528056e-006) / tmp2 + (-3.31833715229001e-005) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -8)) * (-0.72 + _eta)) + (0.00107956778514318) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -8)) * ((tmp3 * tmp3 * tmp3))) + (-0.271382067378863) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -8)) * (real_int_pow(threadData, -0.72 + _eta, 6))) + (1.07202262490333) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -8)) * (real_int_pow(threadData, -0.72 + _eta, 7))) + (-0.853821329075382) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -8)) * (real_int_pow(threadData, -0.72 + _eta, 8))) + (-2.15214194340526e-005) / tmp4 + (0.00076965608822273) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -6)) * (-0.72 + _eta)) + (-0.00431136580433864) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -6)) * ((tmp5 * tmp5))) + (0.453342167309331) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -6)) * (real_int_pow(threadData, -0.72 + _eta, 5))) + (-0.507749535873652) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -6)) * (real_int_pow(threadData, -0.72 + _eta, 6))) + (-100.475154528389) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -6)) * (real_int_pow(threadData, -0.72 + _eta, 10))) + (-0.219201924648793) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -4)) * ((tmp6 * tmp6 * tmp6))) + (-3.21087965668917) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -4)) * (real_int_pow(threadData, -0.72 + _eta, 6))) + (607.567815637771) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -4)) * (real_int_pow(threadData, -0.72 + _eta, 10))) + (0.000557686450685932) / tmp8 + (0.18749904002955) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -3)) * ((tmp9 * tmp9))) + (0.00905368030448107) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -2)) * (-0.72 + _eta)) + (0.285417173048685) * ((real_int_pow(threadData, 0.06610000000000001 + _pi, -2)) * ((tmp10 * tmp10))) + (0.0329924030996098) / tmp11 + (0.239897419685483) * ((-0.72 + _eta) / tmp12) + (4.82754995951394) * (((tmp13 * tmp13)) / tmp14) + (-11.8035753702231) * ((real_int_pow(threadData, -0.72 + _eta, 5)) / tmp15) + (-0.0179967222507787) * (0.06610000000000001 + _pi) + (0.0371810116332674) * ((0.06610000000000001 + _pi) * (-0.72 + _eta)) + (-0.0536288335065096) * ((tmp16 * tmp16)) + (1.6069710109252) * (((tmp17 * tmp17)) * (real_int_pow(threadData, -0.72 + _eta, 6))));
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _v = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData, tmp1, tmp2);
  out_v = mmc_mk_rcon(_v);
  return out_v;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_real _p)
{
  modelica_real _d;
  modelica_real _p2;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p2 has no default value.
  alloc_real_array(&(_o), 1, 3); // _o has no default value.
  _p2 = 7.1 + (-6.049606775559591e-008) * (_p);

  tmp1 = _p2;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp1 * tmp1);

  tmp2 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp2 * tmp2);

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp3 * tmp3);

  tmp4 = 0.0737412153522555 + (_p2) * (0.00145092247736023 + (_p2) * (0.000102697173772229 + (_p2) * (1.14683182476084e-005 + (_p2) * (1.99080616601101e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_p2) * (1.13217858826367e-008 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((_p2) * (1.35549330686006e-017 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-3.11228834832975e-019 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-7.02987180039442e-022 + (_p2) * (3.29199117056433e-022 + (-5.17859076694812e-023 + (2.73712834080283e-024) * (_p2)) * (_p2))))))))))))));
  _d = (57.4756752485113) / tmp4;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_real _p)
{
  modelica_real _d;
  modelica_real _T;
  real_array _o;
  modelica_real _taug;
  modelica_real _pi;
  modelica_real _gpi23;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _T has no default value.
  alloc_real_array(&(_o), 1, 13); // _o has no default value.
  // _taug has no default value.
  // _pi has no default value.
  // _gpi23 has no default value.
  _pi = (1e-006) * (_p);

  tmp1 = -13.91883977887 + _pi;
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp1);
  }
  _T = 572.54459862746 + (31.3220101646784) * (sqrt(tmp1));

  tmp2 = -13.91883977887 + _pi;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp2);
  }
  real_array_get(_o, 1, ((modelica_integer) 1)) = sqrt(tmp2);

  tmp3 = 572.54459862746 + (31.3220101646784) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));
  _taug = -0.5 + (540.0) / tmp3;

  tmp4 = _taug;
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp4 * tmp4);

  real_array_get(_o, 1, ((modelica_integer) 3)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_taug);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp6 * tmp6);

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp7 * tmp7);

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_taug)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_taug));

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))));

  tmp8 = _pi;
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp8 * tmp8);

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp9 * tmp9);

  real_array_get(_o, 1, ((modelica_integer) 12)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_taug));

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  real_array_get(_o, 1, ((modelica_integer) 13)) = (tmp10 * tmp10);

  tmp11 = _pi;
  _gpi23 = (1.0 + (_pi) * (-0.0017731742473213 + (_taug) * (-0.017834862292358 + (_taug) * (-0.045996013696365 + (-0.057581259083432 + (-0.05032527872793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_taug))) + (_pi) * ((_taug) * (-6.6065283340406e-005 + (-0.0003789797503263 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-0.007878555448671 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-0.087594591301146 + (-5.3349095828174e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))) * (_taug)) + (_pi) * (6.1445213076927e-008 + (1.31612001853305e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-9.683303171571e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-0.0045101773626444 + (-0.122004760687947) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))) * (_taug) + (_pi) * ((_taug) * (-3.15389238237468e-009 + (5.116287140914e-008 + (1.92901490874028e-006) * (_taug)) * (_taug)) + (_pi) * ((1.14610381688305e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (_taug))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-1.00288598706366e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (-0.012702883392813 + (-143.374451604624) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_taug))))) + (_pi) * (-4.1341695026989e-017 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((-8.8352662293707e-006 + (-0.272627897050173) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))) * (_taug))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (9.0049690883672e-011 + (-65.8490727183984) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))))) + (_pi) * ((1.78287415218792e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (1.0406965210174e-018 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((-1.0234747095929e-012 + (-1.0018179379511e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((-1.29412653835176e-009 + (1.71088510070544) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (1.78371690710842e-023 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((6.1258633752464e-012 + (-8.4004935396416e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))) * (_taug)))))) + (_pi) * ((_pi) * ((8.32192847496054e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_taug)))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * ((1.75410265428146e-027 + (1.32995316841867e-015 + (-2.26487297378904e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))) * (_pi)))) + (-2.93678005497663e-014) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (_taug)))))) + (-1.24017662339842e-024) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))))) + (-6.05920510335078) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_taug)))))))))))))))))) / tmp11;

  tmp12 = ((_gpi23) * (_pi)) * (_T);
  _d = (0.002166725168246209) * ((_p) / tmp12);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_real _delp, modelica_integer *out_error)
{
  modelica_real _d;
  modelica_integer _error;
  modelica_real _dguess;
  modelica_integer _i;
  modelica_real _dp;
  modelica_real _deld;
  Modelica_Media_Common_HelmholtzDerivs _f;
  Modelica_Media_Common_NewtonDerivatives__pT _nDerivs;
  modelica_boolean _found;
  modelica_boolean _supercritical;
  modelica_boolean _liquid;
  modelica_real _dmin;
  modelica_real _dmax;
  modelica_real _Tmax;
  modelica_real _damping;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_string tmp4;
  modelica_string tmp5;
  static int tmp6 = 0;
  modelica_string tmp7;
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_real tmp10;
  Modelica_Media_Common_HelmholtzDerivs tmp11;
  Modelica_Media_Common_NewtonDerivatives__pT tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _error = ((modelica_integer) 0);
  // _dguess has no default value.
  _i = ((modelica_integer) 0);
  // _dp has no default value.
  // _deld has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  Modelica_Media_Common_NewtonDerivatives__pT_construct(threadData, _nDerivs); // _nDerivs has no default value.
  _found = 0;
  // _supercritical has no default value.
  // _liquid has no default value.
  // _dmin has no default value.
  // _dmax has no default value.
  // _Tmax has no default value.
  // _damping has no default value.
  _found = 0;

  {
    if(!(_p >= 16529200.0))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT63,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT64);
      tmp2 = modelica_real_to_modelica_string(16529200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT65);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",4991,9,4993,76,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  {
    if(!(_T >= 623.15))
    {
      tmp4 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT66,tmp4);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT67);
      tmp5 = modelica_real_to_modelica_string(623.15, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp5);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT68);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",4994,9,4996,73,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  {
    if(!(_p >= omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData, _T)))
    {
      tmp7 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT69,tmp7);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT70);
      tmp8 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp8);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT68);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",4997,9,4999,66,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _supercritical = (_p > 22064000.0);

  _damping = 1.0;

  _Tmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, _p);

  if(_supercritical)
  {
    _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, _p);

    _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, _p);

    tmp10 = 623.15 - _Tmax;
    _dguess = _dmax + (623.15 - _T) * ((_dmax - _dmin) / tmp10);
  }
  else
  {
    _liquid = (_T < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p));

    if(_liquid)
    {
      _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, _p);

      _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);

      _dguess = (1.1) * (omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData, _T));
    }
    else
    {
      _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);

      _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, _p);

      _dguess = (0.9) * (omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData, _T));
    }
  }

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    _d = _dguess;

    tmp11 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d, _T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp11, _f);;

    tmp12 = omc_Modelica_Media_Common_Helmholtz__pT(threadData, _f);
    Modelica_Media_Common_NewtonDerivatives__pT_copy(tmp12, _nDerivs);;

    _dp = _nDerivs._p - _p;

    tmp13 = _p;
    if((fabs((_dp) / tmp13) <= _delp))
    {
      _found = 1;
    }

    tmp14 = _nDerivs._pd;
    _deld = (_dp) * ((_damping) / tmp14);

    _d = _d - _deld;

    if(((_d > _dmin) && (_d < _dmax)))
    {
      _dguess = _d;
    }
    else
    {
      if((_d > _dmax))
      {
        _dguess = -3.162277660168379e-008 + _dmax;
      }
      else
      {
        _dguess = 3.162277660168379e-008 + _dmin;
      }
    }

    _i = ((modelica_integer) 1) + _i;
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",5050,9,5050,81,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT71));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_error) { *out_error = _error; }
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _delp, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _error;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_real(_delp);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData, tmp1, tmp2, tmp3, &_error);
  out_d = mmc_mk_rcon(_d);
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _delp, modelica_real _delh, modelica_real *out_T, modelica_integer *out_error)
{
  modelica_real _d;
  modelica_real _T;
  modelica_integer _error;
  modelica_real _Tguess;
  modelica_real _dguess;
  modelica_integer _i;
  modelica_real _dh;
  modelica_real _dp;
  modelica_real _det;
  modelica_real _deld;
  modelica_real _delt;
  Modelica_Media_Common_HelmholtzDerivs _f;
  Modelica_Media_Common_NewtonDerivatives__ph _nDerivs;
  modelica_boolean _found;
  modelica_integer _subregion;
  static int tmp1 = 0;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  Modelica_Media_Common_HelmholtzDerivs tmp6;
  Modelica_Media_Common_NewtonDerivatives__ph tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _T has no default value.
  // _error has no default value.
  // _Tguess has no default value.
  // _dguess has no default value.
  // _i has no default value.
  // _dh has no default value.
  // _dp has no default value.
  // _det has no default value.
  // _deld has no default value.
  // _delt has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  Modelica_Media_Common_NewtonDerivatives__ph_construct(threadData, _nDerivs); // _nDerivs has no default value.
  _found = 0;
  // _subregion has no default value.
  if((_p < 22064000.0))
  {
    _subregion = ((_h < 10.0 + omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, _p))?((modelica_integer) 1):((_h > -10.0 + omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, _p))?((modelica_integer) 2):((modelica_integer) 0)));

    {
      if(!(_subregion != ((modelica_integer) 0)))
      {
        {
          FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",5086,11,5087,91,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT72));
        }
      }
    }
  }
  else
  {
    _subregion = ((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData, _p))?((modelica_integer) 1):((modelica_integer) 2));
  }

  _T = ((_subregion == ((modelica_integer) 1))?omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData, _p, _h):omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData, _p, _h));

  tmp4 = (modelica_boolean)(_subregion == ((modelica_integer) 1));
  if(tmp4)
  {
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData, _p, _h);
    tmp5 = (1.0) / tmp2;
  }
  else
  {
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData, _p, _h);
    tmp5 = (1.0) / tmp3;
  }
  _d = tmp5;

  _i = ((modelica_integer) 0);

  _error = ((modelica_integer) 0);

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    tmp6 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d, _T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp6, _f);;

    tmp7 = omc_Modelica_Media_Common_Helmholtz__ph(threadData, _f);
    Modelica_Media_Common_NewtonDerivatives__ph_copy(tmp7, _nDerivs);;

    _dh = _nDerivs._h - _h;

    _dp = _nDerivs._p - _p;

    tmp8 = _h;
    tmp9 = _p;
    if(((fabs((_dh) / tmp8) <= _delh) && (fabs((_dp) / tmp9) <= _delp)))
    {
      _found = 1;
    }

    _det = (_nDerivs._ht) * (_nDerivs._pd) - ((_nDerivs._pt) * (_nDerivs._hd));

    tmp10 = _det;
    _delt = ((_nDerivs._pd) * (_dh) - ((_nDerivs._hd) * (_dp))) / tmp10;

    tmp11 = _det;
    _deld = ((_nDerivs._ht) * (_dp) - ((_nDerivs._pt) * (_dh))) / tmp11;

    _T = _T - _delt;

    _d = _d - _deld;

    _dguess = _d;

    _Tguess = _T;

    _i = ((modelica_integer) 1) + _i;

    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData, _dguess, _Tguess ,&_T);
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",5118,9,5119,65,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT73));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_T) { *out_T = _T; }
  if (out_error) { *out_error = _error; }
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _delp, modelica_metatype _delh, modelica_metatype *out_T, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _T;
  modelica_integer _error;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_real(_delp);
  tmp4 = mmc_unbox_real(_delh);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData, tmp1, tmp2, tmp3, tmp4, &_T, &_error);
  out_d = mmc_mk_rcon(_d);
  if (out_T) { *out_T = mmc_mk_rcon(_T); }
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_real _din, modelica_real _Tin, modelica_real *out_Tout)
{
  modelica_real _dout;
  modelica_real _Tout;
  modelica_real _Tmin;
  modelica_real _Tmax;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dout has no default value.
  // _Tout has no default value.
  // _Tmin has no default value.
  // _Tmax has no default value.
  if((_din > 765.0))
  {
    _dout = 765.0;
  }
  else
  {
    if((_din < 110.0))
    {
      _dout = 110.0;
    }
    else
    {
      _dout = _din;
    }
  }

  if((_dout < 390.0))
  {
    _Tmax = 554.3557377 + (0.809344262) * (_dout);
  }
  else
  {
    _Tmax = 1116.85 + (-0.632948717) * (_dout);
  }

  if((_dout < 322.0))
  {
    tmp1 = -322.0 + _dout;
    _Tmin = (647.096) * (1.0 + (-1e-006) * ((tmp1 * tmp1)));
  }
  else
  {
    tmp2 = -322.0 + _dout;
    _Tmin = (647.096) * (1.0 + (-6.944444444444445e-007) * ((tmp2 * tmp2)));
  }

  if((_Tin < _Tmin))
  {
    _Tout = _Tmin;
  }
  else
  {
    if((_Tin > _Tmax))
    {
      _Tout = _Tmax;
    }
    else
    {
      _Tout = _Tin;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_Tout) { *out_Tout = _Tout; }
  return _dout;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_metatype _din, modelica_metatype _Tin, modelica_metatype *out_Tout)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _Tout;
  modelica_real _dout;
  modelica_metatype out_dout;
  tmp1 = mmc_unbox_real(_din);
  tmp2 = mmc_unbox_real(_Tin);
  _dout = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData, tmp1, tmp2, &_Tout);
  out_dout = mmc_mk_rcon(_dout);
  if (out_Tout) { *out_Tout = mmc_mk_rcon(_Tout); }
  return out_dout;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _reldh, modelica_integer *out_error)
{
  modelica_real _T;
  modelica_integer _error;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _proh;
  modelica_real _Tguess;
  modelica_integer _i;
  modelica_real _relerr;
  modelica_real _dh;
  modelica_real _dT;
  modelica_boolean _found;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  static int tmp5 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _error has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _proh has no default value.
  _Tguess = 1500.0;
  // _i has no default value.
  // _relerr has no default value.
  // _dh has no default value.
  // _dT has no default value.
  // _found has no default value.
  _i = ((modelica_integer) 0);

  _error = ((modelica_integer) 0);

  _T = 1500.0;

  _found = 0;

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _p, _T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _proh = (461.526) * ((_T) * ((_g._tau) * (_g._gtau)));

    _dh = _proh - _h;

    tmp2 = _h;
    _relerr = (_dh) / tmp2;

    if((fabs(_relerr) < _reldh))
    {
      _found = 1;
    }

    tmp3 = _g._tau;
    tmp4 = ((tmp3 * tmp3)) * (_g._gtautau);
    _dT = (-0.002166725168246209) * ((_dh) / tmp4);

    _T = _T - _dT;

    _i = ((modelica_integer) 1) + _i;
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",5349,9,5349,81,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT74));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_error) { *out_error = _error; }
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _reldh, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _error;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_real(_reldh);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData, tmp1, tmp2, tmp3, &_error);
  out_T = mmc_mk_rcon(_T);
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _h;
  real_array _o;
  modelica_real _pi1;
  modelica_real _tau;
  modelica_real _tau1;
  modelica_real tmp1;
  modelica_string tmp2;
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  alloc_real_array(&(_o), 1, 13); // _o has no default value.
  // _pi1 has no default value.
  // _tau has no default value.
  // _tau1 has no default value.
  tmp1 = _T;
  _tau = (1386.0) / tmp1;

  _pi1 = 7.1 + (-6.049606775559589e-008) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT75,tmp2);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp3 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp3);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",4224,9,4227,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _tau1 = -1.222 + _tau;

  tmp5 = _tau1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp5 * tmp5);

  real_array_get(_o, 1, ((modelica_integer) 2)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_tau1);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp6 * tmp6);

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp7 * tmp7);

  real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));

  tmp8 = _pi1;
  real_array_get(_o, 1, ((modelica_integer) 9)) = (tmp8 * tmp8);

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp10 * tmp10);

  tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (tmp11 * tmp11);

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)));
  real_array_get(_o, 1, ((modelica_integer) 13)) = (tmp12 * tmp12);

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  tmp14 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));
  tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  tmp17 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)));
  tmp18 = ((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));
  tmp19 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))));
  tmp20 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));
  tmp21 = ((_tau1) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))));
  tmp22 = (((_tau1) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));
  tmp23 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)));
  tmp24 = (_tau1) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))));
  tmp25 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  _h = (461.526) * ((_T) * ((_tau) * ((_pi1) * ((-0.00254871721114236 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.00424944110961118 + (0.018990068218419 + (-0.021841717175414 + (-0.00015851507390979) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))))) / tmp13 + (_pi1) * ((0.00141552963219801 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (4.7661393906987e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-1.32425535992538e-005 + (-1.2358149370591e-014) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))))))) / tmp14 + (_pi1) * ((0.000126718579380216 + (-5.11230768720618e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) / tmp15 + (_pi1) * ((1.1212640954e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (1.30342445791202e-006 + (-1.4341729937924e-012) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))))) / tmp16 + (_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * ((_pi1) * ((1.40077319158051e-008 + (1.04549227383804e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) / tmp17 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((_pi1) * ((1.9941018075704e-017) / tmp18 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * ((_pi1) * ((4.65957282962769e-022) / tmp19 + (_pi1) * ((3.83502057899078e-024) * ((_pi1) / tmp20) + (-7.2912378325616e-023) / tmp21)) + (-1.00075970318621e-021) / tmp22)) + (-4.48827542684151e-019) / tmp23)))))) + (3.24135974880936e-006) / tmp24))))) + (-0.29265942426334 + (_tau1) * (0.84548187169114 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (3.3855169168385 + (_tau1) * (-1.91583926775744 + (_tau1) * (0.47316115539684 + (-0.066465668798004 + (0.0040607314991784) * (_tau1)) * (_tau1)))))) / tmp25)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _h;
  real_array _o;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _tau2;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  alloc_real_array(&(_o), 1, 16); // _o has no default value.
  // _pi has no default value.
  // _tau has no default value.
  // _tau2 has no default value.
  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT76,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",4377,9,4380,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _pi = (1e-006) * (_p);

  tmp4 = _T;
  _tau = (540.0) / tmp4;

  _tau2 = -0.5 + _tau;

  tmp5 = _tau;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp6 * tmp6);

  tmp7 = _tau2;
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp7 * tmp7);

  real_array_get(_o, 1, ((modelica_integer) 4)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau2);

  tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp8 * tmp8);

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp10 * tmp10);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))));

  real_array_get(_o, 1, ((modelica_integer) 10)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 11)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 12)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))));

  real_array_get(_o, 1, ((modelica_integer) 13)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))));

  tmp11 = _pi;
  real_array_get(_o, 1, ((modelica_integer) 14)) = (tmp11 * tmp11);

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)));
  real_array_get(_o, 1, ((modelica_integer) 15)) = (tmp12 * tmp12);

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));
  real_array_get(_o, 1, ((modelica_integer) 16)) = (tmp13 * tmp13);

  tmp14 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))));
  _h = (461.526) * ((_T) * ((_tau) * ((0.0280439559151 + (_tau) * (-0.2858109552582 + (_tau) * (1.2213149471784 + (_tau) * (-2.848163942888 + (_tau) * (4.38395111945 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (10.08665568018 + (-0.5681726521544001 + (0.06380539059921001) * (_tau)) * (_tau))))))) / tmp14 + (_pi) * (-0.017834862292358 + (_tau2) * (-0.09199202739273001 + (-0.172743777250296 + (-0.30195167236758) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4))))) * (_tau2)) + (_pi) * (-3.3032641670203e-005 + (-0.0003789797503263 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-0.015757110897342 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-0.306581069554011 + (-0.000960283724907132) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))))) * (_tau2) + (_pi) * (4.3870667284435e-007 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (-9.683303171571e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-0.009020354725288801 + (-1.42338887469272) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))))) + (_pi) * (-7.8847309559367e-010 + (2.558143570457e-008 + (1.44676118155521e-006) * (_tau2)) * (_tau2) + (_pi) * ((1.60454534363627e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) + (_pi) * ((-5.0144299353183e-011 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (-0.033874355714168 + (-836.35096769364) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) + (_pi) * ((-1.38839897890111e-005 + (-0.973671060893475) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))) + (_pi) * ((9.0049690883672e-011 + (-296.320827232793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2))) + (_pi) * ((2.57526266427144e-007) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (4.1627860840696e-019 + (-1.0234747095929e-012 + (-1.40254511313154e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (-2.34560435076256e-009 + (5.3465159397045) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_tau2)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (1.78371690710842e-023 + (1.07202609066812e-011 + (-0.000201611844951398) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_tau2))))) + (_pi) * ((_pi) * ((0.000200482822351322) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * ((1.90027787547159e-027 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (2.21658861403112e-015 + (-5.47344301999018e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))) * ((_pi) * (_tau2)))) + (-4.97975748452559e-014) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))))))) + (-1.24017662339842e-024) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))) + (-19.1874828272775) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))))))))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_real _p)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_real _plim;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  Modelica_Media_Common_HelmholtzDerivs tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(threadData, _bpro); // _bpro has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  _plim = fmin(_p,22063999.9999999);
  _bpro._R_s = 461.526;

  _bpro._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _plim);

  _bpro._dpT = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _bpro._T);

  _bpro._region3boundary = (_bpro._T > 623.15);

  if((!_bpro._region3boundary))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _bpro._T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    tmp2 = (((_g._gpi) * (_g._pi)) * (_bpro._T)) * (_bpro._R_s);
    _bpro._d = (_p) / tmp2;

    _bpro._h = ((_p > _plim)?2087546.84511715:(_bpro._R_s) * ((_bpro._T) * ((_g._tau) * (_g._gtau))));

    _bpro._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp3 = _g._tau;
    _bpro._cp = ((-_bpro._R_s)) * (((tmp3 * tmp3)) * (_g._gtautau));

    tmp4 = _p;
    _bpro._vt = (_bpro._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp4);

    tmp5 = _g._pi;
    _bpro._vp = (_bpro._R_s) * ((_bpro._T) * ((real_int_pow(threadData, _p, -2)) * (((tmp5 * tmp5)) * (_g._gpipi))));

    tmp6 = ((_g._pi) * (_g._gpipi)) * (_bpro._T);
    _bpro._pt = ((_p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp6;

    tmp7 = _g._gpi;
    tmp8 = _g._gpipi;
    _bpro._pd = ((-_bpro._R_s)) * ((_bpro._T) * (((tmp7 * tmp7)) / tmp8));
  }
  else
  {
    _bpro._d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _plim);

    tmp9 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _bpro._d, _bpro._T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp9, _f);;

    _bpro._h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData, _plim);

    _bpro._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

    tmp10 = _f._tau;
    _bpro._cv = (_bpro._R_s) * (((-((tmp10 * tmp10)))) * (_f._ftautau));

    _bpro._pt = (_bpro._R_s) * ((_bpro._d) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

    _bpro._pd = (_bpro._R_s) * ((_bpro._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));
  }
  _return: OMC_LABEL_UNUSED
  return _bpro;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  modelica_metatype out_bpro;
  modelica_metatype tmpMeta[13] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  _bpro = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, tmp1);
  tmpMeta[0] = mmc_mk_icon(_bpro._region3boundary);
  tmpMeta[1] = mmc_mk_rcon(_bpro._R_s);
  tmpMeta[2] = mmc_mk_rcon(_bpro._T);
  tmpMeta[3] = mmc_mk_rcon(_bpro._d);
  tmpMeta[4] = mmc_mk_rcon(_bpro._h);
  tmpMeta[5] = mmc_mk_rcon(_bpro._s);
  tmpMeta[6] = mmc_mk_rcon(_bpro._cp);
  tmpMeta[7] = mmc_mk_rcon(_bpro._cv);
  tmpMeta[8] = mmc_mk_rcon(_bpro._dpT);
  tmpMeta[9] = mmc_mk_rcon(_bpro._pt);
  tmpMeta[10] = mmc_mk_rcon(_bpro._pd);
  tmpMeta[11] = mmc_mk_rcon(_bpro._vt);
  tmpMeta[12] = mmc_mk_rcon(_bpro._vp);
  out_bpro = mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10], tmpMeta[11], tmpMeta[12]);
  return out_bpro;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_real _t)
{
  modelica_real _p;
  real_array _n;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  alloc_real_array(&(_n), 1, 5);
  real_array_copy_data(_OMC_LIT77, _n);
  
  _p = (1000000.0) * (348.05185628969 + (_t) * (-1.1671859879975 + (0.0010192970039326) * (_t)));
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_metatype _t)
{
  modelica_real tmp1;
  modelica_real _p;
  modelica_metatype out_p;
  tmp1 = mmc_unbox_real(_t);
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_real _p)
{
  modelica_real _t;
  real_array _n;
  modelica_real _pi;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  alloc_real_array(&(_n), 1, 5);
  real_array_copy_data(_OMC_LIT77, _n);
  
  // _pi has no default value.
  _pi = (1e-006) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT78,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",222,9,225,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  tmp4 = -13655.33276873084 + (981.0683207562179) * (_pi);
  if(!(tmp4 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13655.33276873084 + 981.0683207562179 * pi) was %g should be >= 0", tmp4);
  }
  _t = 572.54459862746 + sqrt(tmp4);
  _return: OMC_LABEL_UNUSED
  return _t;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _t;
  modelica_metatype out_t;
  tmp1 = mmc_unbox_real(_p);
  _t = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, tmp1);
  out_t = mmc_mk_rcon(_t);
  return out_t;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _d;
  modelica_real _pi;
  modelica_real _pi1;
  modelica_real _tau;
  modelica_real _tau1;
  modelica_real _gpi;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _pi has no default value.
  // _pi1 has no default value.
  // _tau has no default value.
  // _tau1 has no default value.
  // _gpi has no default value.
  alloc_real_array(&(_o), 1, 11); // _o has no default value.
  _pi = (6.049606775559589e-008) * (_p);

  tmp1 = _T;
  _tau = (1386.0) / tmp1;

  _pi1 = 7.1 - _pi;

  _tau1 = -1.222 + _tau;

  tmp2 = _tau1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp2 * tmp2);

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp3 * tmp3);

  tmp4 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp4 * tmp4);

  real_array_get(_o, 1, ((modelica_integer) 4)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));

  real_array_get(_o, 1, ((modelica_integer) 5)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_tau1);

  tmp5 = _pi1;
  real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));
  real_array_get(_o, 1, ((modelica_integer) 8)) = (tmp6 * tmp6);

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)));
  real_array_get(_o, 1, ((modelica_integer) 9)) = (tmp7 * tmp7);

  tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp8 * tmp8);

  tmp9 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  tmp11 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  tmp13 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp14 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))));
  tmp15 = ((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_tau1);
  tmp16 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))));
  tmp17 = (((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp18 = ((((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp19 = (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * (_tau1);
  tmp20 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  tmp21 = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau1);
  _gpi = (_pi1) * ((_pi1) * ((9.503893453516201e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (8.4812393955936e-006 + (2.55615384360309e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))))) / tmp10 + (_pi1) * ((8.970112763199999e-006 + (2.60684891582404e-006 + (5.7366919751696e-013) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))) / tmp11 + (_pi1) * ((2.02584984300585e-006) / tmp12 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * ((_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * ((_pi1) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * ((_pi1) * ((_pi1) * ((2.99318679335866e-024) * ((_pi1) / tmp13) + (-5.65070932023524e-023) / tmp14) + (3.5842867920213e-022) / tmp15) + (-7.63737668221055e-022) / tmp16)) + (-3.33001080055983e-019) / tmp17) + (1.44400475720615e-017) / tmp18))) + (1.01874413933128e-008 + (1.39398969845072e-009) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))) / tmp19))))) + (0.00094368642146534 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (0.00060003561586052 + (-9.5322787813974e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (8.828369066169199e-006 + (1.45389992595188e-015) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))))))) * (_tau1))) / tmp20) + (-0.00028319080123804 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (0.00060706301565874 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (0.018990068218419 + (_tau1) * (0.032529748770505 + (0.021841717175414 + (5.283835796993e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1))))) * (_tau1))))) / tmp21;

  tmp22 = ((_gpi) * (_pi)) * (_T);
  _d = (0.002166725168246209) * ((_p) / tmp22);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, tmp1, tmp2);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _d;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _tau2;
  modelica_real _gpi;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _pi has no default value.
  // _tau has no default value.
  // _tau2 has no default value.
  // _gpi has no default value.
  alloc_real_array(&(_o), 1, 12); // _o has no default value.
  _pi = (1e-006) * (_p);

  tmp1 = _T;
  _tau = (540.0) / tmp1;

  _tau2 = -0.5 + _tau;

  tmp2 = _tau2;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp2 * tmp2);

  real_array_get(_o, 1, ((modelica_integer) 2)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (_tau2);

  tmp3 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp3 * tmp3);

  tmp4 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)));
  real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp5 * tmp5);

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (_tau2));

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))));

  tmp6 = _pi;
  real_array_get(_o, 1, ((modelica_integer) 9)) = (tmp6 * tmp6);

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp7 * tmp7);

  real_array_get(_o, 1, ((modelica_integer) 11)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2));

  tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (tmp8 * tmp8);

  tmp9 = _pi;
  _gpi = (1.0 + (_pi) * (-0.0017731742473213 + (_tau2) * (-0.017834862292358 + (_tau2) * (-0.045996013696365 + (-0.057581259083432 + (-0.05032527872793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) * (_tau2))) + (_pi) * ((_tau2) * (-6.6065283340406e-005 + (-0.0003789797503263 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-0.007878555448671 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-0.087594591301146 + (-5.3349095828174e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))))) * (_tau2)) + (_pi) * (6.1445213076927e-008 + (1.31612001853305e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-9.683303171571e-005 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-0.0045101773626444 + (-0.122004760687947) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))))) * (_tau2) + (_pi) * ((_tau2) * (-3.15389238237468e-009 + (5.116287140914e-008 + (1.92901490874028e-006) * (_tau2)) * (_tau2)) + (_pi) * ((1.14610381688305e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau2))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-1.00288598706366e-010 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (-0.012702883392813 + (-143.374451604624) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2))))) + (_pi) * (-4.1341695026989e-017 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((-8.8352662293707e-006 + (-0.272627897050173) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))) * (_tau2))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (9.0049690883672e-011 + (-65.8490727183984) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5))))))) + (_pi) * ((1.78287415218792e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (1.0406965210174e-018 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((-1.0234747095929e-012 + (-1.0018179379511e-008) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * ((-1.29412653835176e-009 + (1.71088510070544) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (1.78371690710842e-023 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * ((6.1258633752464e-012 + (-8.4004935396416e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))) * (_tau2)))))) + (_pi) * ((_pi) * ((8.32192847496054e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2)))) + (_pi) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((1.75410265428146e-027 + (1.32995316841867e-015 + (-2.26487297378904e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))) * (_pi)))) + (-2.93678005497663e-014) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * (_tau2)))))) + (-1.24017662339842e-024) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))))) + (-6.05920510335078) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_tau2)))))))))))))))))) / tmp9;

  tmp10 = ((_gpi) * (_pi)) * (_T);
  _d = (0.002166725168246209) * ((_p) / tmp10);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, tmp1, tmp2);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_real _p)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_real _plim;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  Modelica_Media_Common_HelmholtzDerivs tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(threadData, _bpro); // _bpro has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  _plim = fmin(_p,22063999.9999999);
  _bpro._R_s = 461.526;

  _bpro._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _plim);

  _bpro._dpT = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _bpro._T);

  _bpro._region3boundary = (_bpro._T > 623.15);

  if((!_bpro._region3boundary))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _bpro._T, 1);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    tmp2 = (((_g._gpi) * (_g._pi)) * (_bpro._T)) * (_bpro._R_s);
    _bpro._d = (_p) / tmp2;

    _bpro._h = ((_p > _plim)?2087546.84511715:(_bpro._R_s) * ((_bpro._T) * ((_g._tau) * (_g._gtau))));

    _bpro._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp3 = _g._tau;
    _bpro._cp = ((-_bpro._R_s)) * (((tmp3 * tmp3)) * (_g._gtautau));

    tmp4 = _p;
    _bpro._vt = (_bpro._R_s) * (((_g._pi) * (_g._gpi) - ((_g._tau) * ((_g._pi) * (_g._gtaupi)))) / tmp4);

    tmp5 = _g._pi;
    _bpro._vp = (_bpro._R_s) * ((_bpro._T) * ((real_int_pow(threadData, _p, -2)) * (((tmp5 * tmp5)) * (_g._gpipi))));

    tmp6 = ((_g._pi) * (_g._gpipi)) * (_bpro._T);
    _bpro._pt = ((_p) * ((_g._tau) * (_g._gtaupi) - _g._gpi)) / tmp6;

    tmp7 = _g._gpi;
    tmp8 = _g._gpipi;
    _bpro._pd = ((-_bpro._R_s)) * ((_bpro._T) * (((tmp7 * tmp7)) / tmp8));
  }
  else
  {
    _bpro._d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _plim);

    tmp9 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _bpro._d, _bpro._T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp9, _f);;

    _bpro._h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData, _plim);

    _bpro._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

    tmp10 = _f._tau;
    _bpro._cv = (_bpro._R_s) * (((-((tmp10 * tmp10)))) * (_f._ftautau));

    _bpro._pt = (_bpro._R_s) * ((_bpro._d) * ((_f._delta) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)))));

    _bpro._pd = (_bpro._R_s) * ((_bpro._T) * ((_f._delta) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta))));
  }
  _return: OMC_LABEL_UNUSED
  return _bpro;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  modelica_metatype out_bpro;
  modelica_metatype tmpMeta[13] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  _bpro = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, tmp1);
  tmpMeta[0] = mmc_mk_icon(_bpro._region3boundary);
  tmpMeta[1] = mmc_mk_rcon(_bpro._R_s);
  tmpMeta[2] = mmc_mk_rcon(_bpro._T);
  tmpMeta[3] = mmc_mk_rcon(_bpro._d);
  tmpMeta[4] = mmc_mk_rcon(_bpro._h);
  tmpMeta[5] = mmc_mk_rcon(_bpro._s);
  tmpMeta[6] = mmc_mk_rcon(_bpro._cp);
  tmpMeta[7] = mmc_mk_rcon(_bpro._cv);
  tmpMeta[8] = mmc_mk_rcon(_bpro._dpT);
  tmpMeta[9] = mmc_mk_rcon(_bpro._pt);
  tmpMeta[10] = mmc_mk_rcon(_bpro._pd);
  tmpMeta[11] = mmc_mk_rcon(_bpro._vt);
  tmpMeta[12] = mmc_mk_rcon(_bpro._vp);
  out_bpro = mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, tmpMeta[0], tmpMeta[1], tmpMeta[2], tmpMeta[3], tmpMeta[4], tmpMeta[5], tmpMeta[6], tmpMeta[7], tmpMeta[8], tmpMeta[9], tmpMeta[10], tmpMeta[11], tmpMeta[12]);
  return out_bpro;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _x;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _x has no default value.
  tmp1 = (4.532269760696156e-008) * (_p);
  if(!(tmp1 >= -1.0 && tmp1 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of acos(4.532269760696156e-008 * p) outside the domain -1.0 <= %g <= 1.0", tmp1);
  }
  _x = acos(tmp1);

  _h = (2087546.84511715) * (1.0 + (_x) * (-0.4945586958175176 + (_x) * (1.346800016564904 + (_x) * (-3.889388153209752 + (_x) * (6.679385472887931 + (_x) * (-6.75820241066552 + (_x) * (3.558919744656498 + (-0.717981855497894 + (-0.0001152032945617821) * (_x)) * (_x))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi1;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi1 has no default value.
  alloc_real_array(&(_o), 1, 3); // _o has no default value.
  _pi1 = 7.1 + (-6.049606775559589e-008) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT79,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",310,9,313,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  tmp4 = _pi1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp6 * tmp6);

  _h = (639675.036) * (0.173379420894777 + (_pi1) * (-0.022914084306349 + (_pi1) * (-0.00017146768241932 + (_pi1) * (-4.18695814670391e-006 + (_pi1) * (-2.41630417490008e-007 + (_pi1) * (1.73545618580828e-011 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_pi1) * (8.43755552264362e-014 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((_pi1) * (5.35429206228374e-035 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-8.12140581014818e-038 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-1.43870236842915e-044 + (_pi1) * (1.73894459122923e-045 + (-7.06381628462585e-047 + (9.64504638626269e-049) * (_pi1)) * (_pi1))))))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_real _q1;
  modelica_real _q2;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  // _q1 has no default value.
  // _q2 has no default value.
  alloc_real_array(&(_o), 1, 18); // _o has no default value.
  _pi = (1e-006) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT80,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",416,9,419,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  tmp4 = -13.91883977887 + _pi;
  if(!(tmp4 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp4);
  }
  _q1 = 572.54459862746 + (31.3220101646784) * (sqrt(tmp4));

  tmp5 = _q1;
  _q2 = -0.5 + (540.0) / tmp5;

  tmp6 = _q1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp6 * tmp6);

  tmp7 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp7 * tmp7);

  tmp8 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp8 * tmp8);

  tmp9 = _pi;
  real_array_get(_o, 1, ((modelica_integer) 4)) = (tmp9 * tmp9);

  tmp10 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)));
  real_array_get(_o, 1, ((modelica_integer) 5)) = (tmp10 * tmp10);

  tmp11 = _q2;
  real_array_get(_o, 1, ((modelica_integer) 6)) = (tmp11 * tmp11);

  tmp12 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)));
  real_array_get(_o, 1, ((modelica_integer) 7)) = (tmp12 * tmp12);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))));

  tmp13 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)));
  real_array_get(_o, 1, ((modelica_integer) 9)) = (tmp13 * tmp13);

  tmp14 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)));
  real_array_get(_o, 1, ((modelica_integer) 10)) = (tmp14 * tmp14);

  tmp15 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)));
  real_array_get(_o, 1, ((modelica_integer) 11)) = (tmp15 * tmp15);

  tmp16 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)));
  real_array_get(_o, 1, ((modelica_integer) 12)) = (tmp16 * tmp16);

  tmp17 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)));
  real_array_get(_o, 1, ((modelica_integer) 13)) = (tmp17 * tmp17);

  real_array_get(_o, 1, ((modelica_integer) 14)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_q2);

  real_array_get(_o, 1, ((modelica_integer) 15)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_q2);

  real_array_get(_o, 1, ((modelica_integer) 16)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))));

  real_array_get(_o, 1, ((modelica_integer) 18)) = ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_q2));

  tmp18 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  _h = (4636975733.03507 + (3.74686560065793) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) + (3.57966647812489e-006) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))) + (2.81881548488163e-013) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) + (-76465233.24521451) * (_q1) + (-0.00450789338787835) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_q1)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (2513837.07870341 + (-1.55131504410292e-009) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (_q1)) + (-4781981.98764471) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))))))) + (49.9651389369988) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) * ((1.03746636552761e-013 + (-0.00349547959376899) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16)))) + (-2.55074501962569e-007) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9))))) + ((-242662.235426958) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12))))) + (-3.46022402653609) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 16))))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (_pi)) + (0.109336249381227 + (-2248.08924686956) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + (-354742.725841972) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) + (-24.1331193696374) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6))))) * (_pi)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((-3.09081828396912e-019) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_pi)))) + (-1.24107527851371e-008) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_pi))))))) + (3.99891272904219) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) * (_pi))) + (0.0641817365250892) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * (_pi)))) + (_pi) * (-4444.87643334512 + (-75253.6156722047) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 14)))) + (-43051.9020511789) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) + (-22926.6247146068) * (_q2)) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (-8.23252840892034 + (-3927.0508365636) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 15)))) + (-239.325789467604) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18)))) + (-76407.3727417716) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 8)))) + (-94.4508644545118) * (_q2)) + (0.360567666582363) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((-0.0161221195808321 + _q2) * (0.0338039844460968 + _q2))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * ((1332480.30241755) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (_q2))) + (-0.000584580992538624) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7))))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * ((2.24425477627799e-005) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_q2))) + (-73850273.6990986) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 18))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 4)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((-208438767.026518) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) + (-1.24971648677697e-005) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) + (-8442.30378348203) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_q2)))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 11)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 9)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * ((4.73594929247646e-022) * (_q2) + (-13.6411358215175) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (_q2)))) + (5.52427169406836e-010) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_q2))))) + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 5)))) * ((2.67174673301715e-006) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 17)))) + (4.44545133805865e-018) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 12)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (_q2))) + (-50.2465185106411) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 10)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 13)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 6)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 7)))) * (_q2))))))))) / tmp18;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  _pi = (1e-006) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT81,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",238,9,241,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _h = (461526.0) * (9.01505286876203 + (_pi) * (-0.009790434902460921 + (-2.03245575263501e-005 + (3.36540214679088e-007) * (_pi)) * (_pi)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi1;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi1 has no default value.
  alloc_real_array(&(_o), 1, 3); // _o has no default value.
  _pi1 = 7.1 + (-6.049606775559589e-008) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT82,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",336,9,339,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  tmp4 = _pi1;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp5 * tmp5);

  tmp6 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)));
  real_array_get(_o, 1, ((modelica_integer) 3)) = (tmp6 * tmp6);

  _h = (639675.036) * (2.42896927729349 + (_pi1) * (-0.00141131225285294 + (_pi1) * (0.00143759406818289 + (_pi1) * (0.000125338925082983 + (_pi1) * (1.23617764767172e-005 + (_pi1) * (3.17834967400818e-006 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * ((_pi1) * (1.46754947271665e-008 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 3)))) * ((_pi1) * (1.86779322717506e-017 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-4.18568363667416e-019 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2)))) * (-9.19148577641497e-022 + (_pi1) * (4.27026404402408e-022 + (-6.66749357417962e-023 + (3.49930466305574e-024) * (_pi1)) * (_pi1))))))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  real_array _o;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  alloc_real_array(&(_o), 1, 2); // _o has no default value.
  _pi = (1e-006) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT83,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",478,9,481,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  tmp4 = _pi;
  real_array_get(_o, 1, ((modelica_integer) 1)) = (tmp4 * tmp4);

  tmp5 = (*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)));
  real_array_get(_o, 1, ((modelica_integer) 2)) = (tmp5 * tmp5 * tmp5);

  _h = 4160663.37647071 + (_pi) * (-4518.48617188327 + (_pi) * (-8.53409968320258 + (_pi) * (0.109090430596056 + (_pi) * (-0.000172486052272327 + (_pi) * (4.2261295097284e-015 + (_pi) * (-1.27295130636232e-010 + (_pi) * (-3.79407294691742e-025 + (_pi) * (7.56960433802525e-023 + (_pi) * (7.16825117265975e-032 + (_pi) * (3.37267475986401e-021 + (-7.5656940729795e-074 + ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))) * (-8.00969737237617e-134 + (1.6746290980312e-065 + (_pi) * (-3.71600586812966e-069 + (_pi) * (8.066305891708841e-129 + (-1.76117969553159e-103 + (1.88543121025106e-084) * (_pi)) * (_pi)))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 1)))))) * ((*real_array_element_addr1(&_o, 1, ((modelica_integer) 2))))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_string tmp1;
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  _pi = (1e-006) * (_p);

  {
    if(!(_p > 611.657))
    {
      tmp1 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(_OMC_LIT84,tmp1);
      tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT31);
      tmp2 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp2);
      tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT32);
      {
        FILE_INFO info = {"C:/OpenModelica1.16.5-64bit/lib/omlibrary/Modelica 4.0.0/Media/Water/IF97_Utilities.mo",255,9,258,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }

  _h = (461526.0) * (15.9838891400332 + (_pi) * (-0.000489898813722568 + (-5.01510211858761e-008 + (7.5006972718273e-008) * (_pi)) * (_pi)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _x;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _x has no default value.
  tmp1 = (4.532269760696156e-008) * (_p);
  if(!(tmp1 >= -1.0 && tmp1 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of acos(4.532269760696156e-008 * p) outside the domain -1.0 <= %g <= 1.0", tmp1);
  }
  _x = acos(tmp1);

  _h = (2087546.84511715) * (1.0 + (_x) * (0.4880153718655694 + (_x) * (0.2079670746250689 + (_x) * (-6.084122698421623 + (_x) * (25.08887602293532 + (_x) * (-48.38215180269516 + (_x) * (45.66489164833212 + (-16.98555442961553 + (0.0006616936460057692) * (_x)) * (_x))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_real _p, Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = _bpro._h;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_metatype _p, modelica_metatype _bpro)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp2;
  modelica_integer tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real _h;
  modelica_metatype out_h;
  modelica_metatype tmpMeta[13] __attribute__((unused)) = {0};
  tmp1 = mmc_unbox_real(_p);
  tmpMeta[0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 2)));
  tmp3 = mmc_unbox_integer(tmpMeta[0]);
  tmp2._region3boundary = tmp3;
  tmpMeta[1] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 3)));
  tmp4 = mmc_unbox_real(tmpMeta[1]);
  tmp2._R_s = tmp4;
  tmpMeta[2] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 4)));
  tmp5 = mmc_unbox_real(tmpMeta[2]);
  tmp2._T = tmp5;
  tmpMeta[3] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 5)));
  tmp6 = mmc_unbox_real(tmpMeta[3]);
  tmp2._d = tmp6;
  tmpMeta[4] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 6)));
  tmp7 = mmc_unbox_real(tmpMeta[4]);
  tmp2._h = tmp7;
  tmpMeta[5] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 7)));
  tmp8 = mmc_unbox_real(tmpMeta[5]);
  tmp2._s = tmp8;
  tmpMeta[6] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 8)));
  tmp9 = mmc_unbox_real(tmpMeta[6]);
  tmp2._cp = tmp9;
  tmpMeta[7] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 9)));
  tmp10 = mmc_unbox_real(tmpMeta[7]);
  tmp2._cv = tmp10;
  tmpMeta[8] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 10)));
  tmp11 = mmc_unbox_real(tmpMeta[8]);
  tmp2._dpT = tmp11;
  tmpMeta[9] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 11)));
  tmp12 = mmc_unbox_real(tmpMeta[9]);
  tmp2._pt = tmp12;
  tmpMeta[10] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 12)));
  tmp13 = mmc_unbox_real(tmpMeta[10]);
  tmp2._pd = tmp13;
  tmpMeta[11] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 13)));
  tmp14 = mmc_unbox_real(tmpMeta[11]);
  tmp2._vt = tmp14;
  tmpMeta[12] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 14)));
  tmp15 = mmc_unbox_real(tmpMeta[12]);
  tmp2._vp = tmp15;
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _mode)
{
  modelica_integer _region;
  _tailrecursive: OMC_LABEL_UNUSED
  // _region has no default value.
  if((_mode != ((modelica_integer) 0)))
  {
    _region = _mode;
  }
  else
  {
    if((_p < 16529200.0))
    {
      if((_T > 1073.15))
      {
        _region = ((modelica_integer) 5);
      }
      else
      {
        if((_T > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p)))
        {
          _region = ((modelica_integer) 2);
        }
        else
        {
          _region = ((modelica_integer) 1);
        }
      }
    }
    else
    {
      if((_T < 623.15))
      {
        _region = ((modelica_integer) 1);
      }
      else
      {
        if((_T < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, _p)))
        {
          _region = ((modelica_integer) 3);
        }
        else
        {
          _region = ((modelica_integer) 2);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _region;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _mode)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer _region;
  modelica_metatype out_region;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_mode);
  _region = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData, tmp1, tmp2, tmp3);
  out_region = mmc_mk_icon(_region);
  return out_region;
}

DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _mode)
{
  modelica_integer _region;
  modelica_boolean _hsubcrit;
  modelica_real _Ttest;
  modelica_real _hl;
  modelica_real _hv;
  _tailrecursive: OMC_LABEL_UNUSED
  // _region has no default value.
  // _hsubcrit has no default value.
  // _Ttest has no default value.
  // _hl has no default value.
  // _hv has no default value.
  if((_mode != ((modelica_integer) 0)))
  {
    _region = _mode;
  }
  else
  {
    _hl = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, _p);

    _hv = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, _p);

    if((_phase == ((modelica_integer) 2)))
    {
      _region = ((modelica_integer) 4);
    }
    else
    {
      if((((((_p < 611.657) || (_p > 100000000.0)) || (_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData, _p))) || ((_p < 10000000.0) && (_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, _p)))) || ((_p >= 10000000.0) && (_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData, _p)))))
      {
        _region = ((modelica_integer) -1);
      }
      else
      {
        _hsubcrit = (_h < 2087546.84511715);

        if((_p < 16529200.0))
        {
          if(_hsubcrit)
          {
            if((_phase == ((modelica_integer) 1)))
            {
              _region = ((modelica_integer) 1);
            }
            else
            {
              if((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p))))
              {
                _region = ((modelica_integer) 1);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
          else
          {
            if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData, _p)))
            {
              if(((_p < 10000000.0) && (_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, _p))))
              {
                _region = ((modelica_integer) 5);
              }
              else
              {
                _region = ((modelica_integer) -2);
              }
            }
            else
            {
              if((_phase == ((modelica_integer) 1)))
              {
                _region = ((modelica_integer) 2);
              }
              else
              {
                if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p))))
                {
                  _region = ((modelica_integer) 2);
                }
                else
                {
                  _region = ((modelica_integer) 4);
                }
              }
            }
          }
        }
        else
        {
          if(_hsubcrit)
          {
            if((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData, _p)))
            {
              _region = ((modelica_integer) 1);
            }
            else
            {
              if(((_h < _hl) || (_p > 22064000.0)))
              {
                _region = ((modelica_integer) 3);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
          else
          {
            if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData, _p)))
            {
              _region = ((modelica_integer) 2);
            }
            else
            {
              if(((_h > _hv) || (_p > 22064000.0)))
              {
                _region = ((modelica_integer) 3);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _region;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _mode)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer _region;
  modelica_metatype out_region;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_mode);
  _region = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData, tmp1, tmp2, tmp3, tmp4);
  out_region = mmc_mk_icon(_region);
  return out_region;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _dl;
  modelica_real _x;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dl has no default value.
  // _x has no default value.
  if((_p < 22064000.0))
  {
    tmp1 = (4.532269760696156e-008) * (_p);
    if(!(tmp1 >= -1.0 && tmp1 <= 1.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of acos(4.532269760696156e-008 * p) outside the domain -1.0 <= %g <= 1.0", tmp1);
    }
    _x = acos(tmp1);

    _dl = (322.0) * (1.0 + (_x) * (1.903224079094824 + (_x) * (-2.531486180240112 + (_x) * (-8.191449323843552 + (_x) * (94.34196116778385 + (_x) * (-369.3676833623383 + (_x) * (796.6627910598293 + (_x) * (-994.5385383600702 + (_x) * (673.2581177021598 + (-191.4307733640516 + (0.00052536560808895) * (_x)) * (_x))))))))));
  }
  else
  {
    _dl = 322.0;
  }
  _return: OMC_LABEL_UNUSED
  return _dl;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _dl;
  modelica_metatype out_dl;
  tmp1 = mmc_unbox_real(_p);
  _dl = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, tmp1);
  out_dl = mmc_mk_rcon(_dl);
  return out_dl;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _dv;
  modelica_real _x;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dv has no default value.
  // _x has no default value.
  if((_p < 22064000.0))
  {
    tmp1 = (4.532269760696156e-008) * (_p);
    if(!(tmp1 >= -1.0 && tmp1 <= 1.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of acos(4.532269760696156e-008 * p) outside the domain -1.0 <= %g <= 1.0", tmp1);
    }
    _x = acos(tmp1);

    _dv = (322.0) * (1.0 + (_x) * (-1.84638508033626 + (_x) * (-1.144787271887849 + (_x) * (59.18702203076563 + (_x) * (-403.5391431811611 + (_x) * (1437.200724533239 + (_x) * (-3015.853540307519 + (_x) * (3740.579034867006 + (_x) * (-2537.375817253895 + (725.8761975803782 + (-0.001115111165833234) * (_x)) * (_x))))))))));
  }
  else
  {
    _dv = 322.0;
  }
  _return: OMC_LABEL_UNUSED
  return _dv;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _dv;
  modelica_metatype out_dv;
  tmp1 = mmc_unbox_real(_p);
  _dv = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, tmp1);
  out_dv = mmc_mk_rcon(_dv);
  return out_dv;
}

Modelica_Media_Water_WaterIF97__pT_FluidConstants omc_Modelica_Media_Water_WaterIF97__pT_FluidConstants(threadData_t *threadData, modelica_string omc_iupacName, modelica_string omc_casRegistryNumber, modelica_string omc_chemicalFormula, modelica_string omc_structureFormula, modelica_real omc_molarMass, modelica_real omc_criticalTemperature, modelica_real omc_criticalPressure, modelica_real omc_criticalMolarVolume, modelica_real omc_acentricFactor, modelica_real omc_triplePointTemperature, modelica_real omc_triplePointPressure, modelica_real omc_meltingPoint, modelica_real omc_normalBoilingPoint, modelica_real omc_dipoleMoment, modelica_boolean omc_hasIdealGasHeatCapacity, modelica_boolean omc_hasCriticalData, modelica_boolean omc_hasDipoleMoment, modelica_boolean omc_hasFundamentalEquation, modelica_boolean omc_hasLiquidHeatCapacity, modelica_boolean omc_hasSolidHeatCapacity, modelica_boolean omc_hasAccurateViscosityData, modelica_boolean omc_hasAccurateConductivityData, modelica_boolean omc_hasVapourPressureCurve, modelica_boolean omc_hasAcentricFactor, modelica_real omc_HCRIT0, modelica_real omc_SCRIT0, modelica_real omc_deltah, modelica_real omc_deltas)
{
  Modelica_Media_Water_WaterIF97__pT_FluidConstants tmp1;
  tmp1._iupacName = omc_iupacName;
  tmp1._casRegistryNumber = omc_casRegistryNumber;
  tmp1._chemicalFormula = omc_chemicalFormula;
  tmp1._structureFormula = omc_structureFormula;
  tmp1._molarMass = omc_molarMass;
  tmp1._criticalTemperature = omc_criticalTemperature;
  tmp1._criticalPressure = omc_criticalPressure;
  tmp1._criticalMolarVolume = omc_criticalMolarVolume;
  tmp1._acentricFactor = omc_acentricFactor;
  tmp1._triplePointTemperature = omc_triplePointTemperature;
  tmp1._triplePointPressure = omc_triplePointPressure;
  tmp1._meltingPoint = omc_meltingPoint;
  tmp1._normalBoilingPoint = omc_normalBoilingPoint;
  tmp1._dipoleMoment = omc_dipoleMoment;
  tmp1._hasIdealGasHeatCapacity = omc_hasIdealGasHeatCapacity;
  tmp1._hasCriticalData = omc_hasCriticalData;
  tmp1._hasDipoleMoment = omc_hasDipoleMoment;
  tmp1._hasFundamentalEquation = omc_hasFundamentalEquation;
  tmp1._hasLiquidHeatCapacity = omc_hasLiquidHeatCapacity;
  tmp1._hasSolidHeatCapacity = omc_hasSolidHeatCapacity;
  tmp1._hasAccurateViscosityData = omc_hasAccurateViscosityData;
  tmp1._hasAccurateConductivityData = omc_hasAccurateConductivityData;
  tmp1._hasVapourPressureCurve = omc_hasVapourPressureCurve;
  tmp1._hasAcentricFactor = omc_hasAcentricFactor;
  tmp1._HCRIT0 = omc_HCRIT0;
  tmp1._SCRIT0 = omc_SCRIT0;
  tmp1._deltah = omc_deltah;
  tmp1._deltas = omc_deltas;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Water_WaterIF97__pT_FluidConstants(threadData_t *threadData, modelica_metatype _iupacName, modelica_metatype _casRegistryNumber, modelica_metatype _chemicalFormula, modelica_metatype _structureFormula, modelica_metatype _molarMass, modelica_metatype _criticalTemperature, modelica_metatype _criticalPressure, modelica_metatype _criticalMolarVolume, modelica_metatype _acentricFactor, modelica_metatype _triplePointTemperature, modelica_metatype _triplePointPressure, modelica_metatype _meltingPoint, modelica_metatype _normalBoilingPoint, modelica_metatype _dipoleMoment, modelica_metatype _hasIdealGasHeatCapacity, modelica_metatype _hasCriticalData, modelica_metatype _hasDipoleMoment, modelica_metatype _hasFundamentalEquation, modelica_metatype _hasLiquidHeatCapacity, modelica_metatype _hasSolidHeatCapacity, modelica_metatype _hasAccurateViscosityData, modelica_metatype _hasAccurateConductivityData, modelica_metatype _hasVapourPressureCurve, modelica_metatype _hasAcentricFactor, modelica_metatype _HCRIT0, modelica_metatype _SCRIT0, modelica_metatype _deltah, modelica_metatype _deltas)
{
  return mmc_mk_box(29, 3, &Modelica_Media_Water_WaterIF97__pT_FluidConstants__desc, _iupacName, _casRegistryNumber, _chemicalFormula, _structureFormula, _molarMass, _criticalTemperature, _criticalPressure, _criticalMolarVolume, _acentricFactor, _triplePointTemperature, _triplePointPressure, _meltingPoint, _normalBoilingPoint, _dipoleMoment, _hasIdealGasHeatCapacity, _hasCriticalData, _hasDipoleMoment, _hasFundamentalEquation, _hasLiquidHeatCapacity, _hasSolidHeatCapacity, _hasAccurateViscosityData, _hasAccurateConductivityData, _hasVapourPressureCurve, _hasAcentricFactor, _HCRIT0, _SCRIT0, _deltah, _deltas);
}

#ifdef __cplusplus
}
#endif
