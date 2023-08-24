within MOSES.Simulations;

model EuroSun2022_RMFAC_SquareWave
/*
See Piccoli et al, Optimized Adsorption Heat Pump for Efficiency Increase of District Heating Networks, EuroSun 2022

or

Piccoli, Selection and Optimal Use of Nanoporous Materials for Adsorption Energy Technology, Chapter 4.2, 2023
*/

/////////////////////////////////////

//This is the model framework, the correct settings and results analysis should be performed from the relative Python script

///////////////////////////////////////

//SETTINGS
  Integer AUTOSET_SorptionCondition;
  parameter Time SET_Period = 67.01;
  parameter Real SET_DutyCycle = 0.3291;
  parameter Pressure SET_Pi = 720;
  parameter Temperature SET_Ti = Tads;
  parameter Temperature SET_Tf = Thot-5;
  
  parameter Length sampleThickness = 0.00997;
  constant Area sampleArea = 98e-6 "imageJ derived";//may be set to 1 for results per m2
  
  parameter Temperature Teva=285.1;
  parameter Temperature Tcond=330.8;
  parameter Temperature Thot=343.2;
  parameter Temperature Tads=Tcond+5;
  
  parameter Length SET_microradius = 2e-6;//used in diff_water
  
  //KPI
  Real Leva;
  Real Lcond;
  HeatFlowRate Qeva;
  HeatFlowRate Qcond;
  HeatFlowRate Qads;
  HeatFlowRate Qhot;
  Energy Eeva;
  Energy Ehot;
  Energy Econd;
  Energy Eads;
  Real COPcool;
  Real COPheat;
  
  Real KPIcool;
  Real KPIheat;
  
  //Pyrolysis control parameters
  parameter Real Tpyr=845.6;
  parameter Real Dpyr=323.5;
  
  //----------------------------------------------------------------------------------------------------------------------
  Real initial_A;
  Pressure initial_p_sat;
  Loading Wi;
  Real RES_Tb_norm;
  Real RES_Tc_norm;
  Temperature RES_Tb;
  Temperature RES_Tc;
  Real RES_w;
  //----------------------------------------------------------------------------------------------------------------------
  Real FIT_uAverage_des_adim_inferred;
  Real FIT_uSurface_des_adim_inferred;
  Real RES_tau;
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  MOSES.HeatTransfer.ThermalResistance_Slab_EuroSun2022 contactResistance_RMFAC annotation(
    Placement(visible = true, transformation(origin = {-56, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.MassTransfer.DiffusionWater_RMFAC diffusionWater_RMFAC annotation(
    Placement(visible = true, transformation(origin = {42, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Components.Boundaries.TRamp_HeatBoundary_EuroSun2022 tRamp_HeatBoundary_RMFAC annotation(
    Placement(visible = true, transformation(origin = {-88, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Materials.Adsorbents.Geometries.Slab_ParametricPyrolysisAC slab_rito2022(pvap(displayUnit = "Pa"))  annotation(
    Placement(visible = true, transformation(origin = {-8, 46}, extent = {{-22, -22}, {22, 22}}, rotation = 0)));
  MOSES.Components.Boundaries.PT_FluidBoundary_EuroSun2022 pT_FluidBoundary  annotation(
    Placement(visible = true, transformation(origin = {86, 16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Hydraulics.Valves.LinearValve_Dummy linearValve_FakeCompany annotation( Placement(visible = true, transformation(origin = {70, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation
  
  //determining properties by DOE
  slab_rito2022.sorbent.Tpyr=Tpyr;
  slab_rito2022.sorbent.Dpyr=Dpyr;
  
  //Setting boundary conditions
  pT_FluidBoundary.peva=22064000*exp(647/Teva*(-7.86*(1-Teva/647)+1.844*(1-Teva/647)^1.5-11.79*(1-Teva/647)^3+22.68*(1-Teva/647)^3.5-15.96*(1-Teva/647)^4+1.801*(1-Teva/647)^7.5));
  pT_FluidBoundary.pcond=22064000*exp(647/Tcond*(-7.86*(1-Tcond/647)+1.844*(1-Tcond/647)^1.5-11.79*(1-Tcond/647)^3+22.68*(1-Tcond/647)^3.5-15.96*(1-Tcond/647)^4+1.801*(1-Tcond/647)^7.5));
  pT_FluidBoundary.teva=Teva;
  pT_FluidBoundary.tcond=Tcond;
  
  linearValve_FakeCompany.p0=SET_Pi;
  linearValve_FakeCompany.chamberT=pT_FluidBoundary.T;
  linearValve_FakeCompany.mDotAds=slab_rito2022.Mdot;
  
  pT_FluidBoundary.SET_DutyCycle = SET_DutyCycle;
  pT_FluidBoundary.SET_Period = SET_Period;
  //-----------------------------------------------------------------------------------------------------------
  
  if AUTOSET_SorptionCondition == 0 then
    FIT_uAverage_des_adim_inferred = (1 - 0.82242203 * exp(-RES_tau / 0.10016136) - (1 - 0.82242203) * exp(-RES_tau / 0.0046461)) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti)) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
    FIT_uSurface_des_adim_inferred = (1 - 0.3602429839185508 * exp(-(RES_tau / 0.22086336197141038) ^ 1.6855937204150009) - 0.22069379632319797 * exp(-(RES_tau / 0.054189378454467634) ^ 2.534194545513618) - (1 - 0.3602429839185508 - 0.22069379632319797) * exp(-(RES_tau / 0.11485659915088539) ^ 2.003964233348046)) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti)) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
  else  
    FIT_uAverage_des_adim_inferred = (1 - (0.82242203 * exp(-RES_tau / 0.10016136) + (1 - 0.82242203) * exp(-RES_tau / 0.0046461)) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti))) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
    FIT_uSurface_des_adim_inferred = (1 - (0.3602429839185508 * exp(-(RES_tau / 0.22086336197141038) ^ 1.6855937204150009) + 0.22069379632319797 * exp(-(RES_tau / 0.054189378454467634) ^ 2.534194545513618) + (1 - 0.3602429839185508 - 0.22069379632319797) * exp(-(RES_tau / 0.11485659915088539) ^ 2.003964233348046)) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti))) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
  end if;
  //-----------------------------------------------------------------------------------------------------------
  
  AUTOSET_SorptionCondition = tRamp_HeatBoundary_RMFAC.AUTOSET_SorptionCondition;
  RES_Tb_norm = (contactResistance_RMFAC.Tb - SET_Ti) / (SET_Tf - SET_Ti);
  RES_Tc_norm = (contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti);
  RES_Tb = contactResistance_RMFAC.Tb;
  RES_Tc = contactResistance_RMFAC.Tc;
  RES_w = slab_rito2022.w;
  RES_tau = contactResistance_RMFAC.tau;
  //-----------------------------------------------------------------------------------------------------------
  
  initial_p_sat = 1000 * 0.61121 * exp((18.678 - (SET_Ti - 273.15) / 234.5) * ((SET_Ti - 273.15) / (257.14 + SET_Ti - 273.15)));//Buck's formula
  if SET_Pi >= initial_p_sat then
    initial_A = 0;
  else
    initial_A = -R * SET_Ti * log(SET_Pi / initial_p_sat) / 0.018;
  end if;
  Wi = 0.2695525122176473 * exp(-(initial_A / 145749.9168262312) ^ 2.072685998288002);
  //-----------------------------------------------------------------------------------------------------------
  
  if AUTOSET_SorptionCondition == 0 then//DES
    tRamp_HeatBoundary_RMFAC.Ti = SET_Ti + 1e-3;
  else//ADS
    tRamp_HeatBoundary_RMFAC.Ti = SET_Ti - 1e-3;
  end if;
  
  tRamp_HeatBoundary_RMFAC.Tf = SET_Tf;
  tRamp_HeatBoundary_RMFAC.SET_DutyCycle = SET_DutyCycle;
  tRamp_HeatBoundary_RMFAC.SET_Period = SET_Period;
  tRamp_HeatBoundary_RMFAC.AUTOSET_SorptionCondition = contactResistance_RMFAC.AUTOSET_SorptionCondition;
  
  contactResistance_RMFAC.Ti = slab_rito2022.Ti;
  contactResistance_RMFAC.k = slab_rito2022.sorbent.k;
  contactResistance_RMFAC.rho = slab_rito2022.sorbent.rho_tot;
  contactResistance_RMFAC.cp = slab_rito2022.sorbent.Cptot;
  contactResistance_RMFAC.thickness = sampleThickness;
  contactResistance_RMFAC.sampleVol = sampleArea * sampleThickness;
  contactResistance_RMFAC.T0 = SET_Ti - 1e-3;
  contactResistance_RMFAC.Tf = SET_Tf;
  
  diffusionWater_RMFAC.V = slab_rito2022.V;
  diffusionWater_RMFAC.thickness = sampleThickness;
  diffusionWater_RMFAC.T0 = SET_Tf;
  diffusionWater_RMFAC.Fmass = 1 - contactResistance_RMFAC.Fheat;
  diffusionWater_RMFAC.sample_volume = sampleArea * sampleThickness;
  diffusionWater_RMFAC.sample_area = sampleArea;
  diffusionWater_RMFAC.microradius=slab_rito2022.microradius;
  diffusionWater_RMFAC.epsilon=slab_rito2022.epsilon;
  
  slab_rito2022.microradius = SET_microradius;
  slab_rito2022.Wi = Wi;
  slab_rito2022.Ti = SET_Ti;
  slab_rito2022.c = diffusionWater_RMFAC.c;
  slab_rito2022.c_ext = diffusionWater_RMFAC.cext;
  slab_rito2022.Rmass = diffusionWater_RMFAC.Rmass;
  slab_rito2022.Dh = diffusionWater_RMFAC.Dh;
  slab_rito2022.T = diffusionWater_RMFAC.T;
  slab_rito2022.area = sampleArea;
  slab_rito2022.thickness = sampleThickness;
  
  slab_rito2022.sorbent.Wi = Wi;
  slab_rito2022.sorbent.D_micro = diffusionWater_RMFAC.D_micro;
  slab_rito2022.sorbent.D_macro = diffusionWater_RMFAC.D_macro;
  slab_rito2022.sorbent.rho_env = diffusionWater_RMFAC.rho_env;
  slab_rito2022.sorbent.surface_area_BET = diffusionWater_RMFAC.surface_area_BET;
//######################################################################################################################

//KPI
  Leva=1000*(3221-2.608*Teva);// J/kg
  Lcond=1000*(3221-2.608*Tcond);// J/kg
  
  if AUTOSET_SorptionCondition==1 then//ADS
    Qeva=-Leva*(pT_FluidBoundary.mDot);
    Qcond=0;
    Qads=-slab_rito2022.Q;
    Qhot=0;
  else//DES
    Qeva=0;
    Qcond=Lcond*(pT_FluidBoundary.mDot);
    Qads=0;
    Qhot=slab_rito2022.Q;
  end if;
  
  /*
  if slab_rito2022.Q>0 then
    Qhot=abs(slab_rito2022.Q);
    Qads=0;
  else
    Qhot=0;
    Qads=abs(slab_rito2022.Q);
  end if;
  
  if pT_FluidBoundary.mDot>0 then
    Qcond=Lcond*abs(pT_FluidBoundary.mDot);
    Qeva=0;
  else
    Qcond=0;
    Qeva=Leva(pT_FluidBoundary.mDot);
  end if;
  */
  
  der(Eeva)=Qeva;
  der(Econd)=Qcond;
  der(Eads)=Qads;
  der(Ehot)=Qhot;
  COPcool=Eeva/Ehot;
  COPheat=(Econd+Eads)/Ehot;
  KPIcool=COPcool*Eeva/time;
  KPIheat=COPheat*(Econd+Eads)/time;
  
  linearValve_FakeCompany.ADS=tRamp_HeatBoundary_RMFAC.AUTOSET_SorptionCondition;
  
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
  connect(tRamp_HeatBoundary_RMFAC.thermalConnector, contactResistance_RMFAC.thermalConnector) annotation(
    Line(points = {{-88, 0}, {-79, 0}, {-79, -46}, {-66, -46}}, color = {85, 0, 255}));
  connect(contactResistance_RMFAC.thermalConnector1, slab_rito2022.thermalConnector) annotation(
    Line(points = {{-46, -46}, {-45, -46}, {-45, 46}, {-30, 46}}, color = {85, 0, 255}));
  connect(slab_rito2022.fluidConnector, diffusionWater_RMFAC.fluidConnector1) annotation(
    Line(points = {{14, 46}, {32, 46}, {32, -62}}));
  //connect(diffusionWater_RMFAC.fluidConnector,pT_FluidBoundary.fluidConnector);
  connect(diffusionWater_RMFAC.fluidConnector,linearValve_FakeCompany.fluidConnectorA);
  connect(linearValve_FakeCompany.fluidConnectorB,pT_FluidBoundary.fluidConnector);
  
end EuroSun2022_RMFAC_SquareWave;
