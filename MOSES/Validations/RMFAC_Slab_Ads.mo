within MOSES.Validations;

model RMFAC_Slab_Ads

  /*
  A single temperature swing experiment performed at IBM Research by Emanuele Piccoli
  
  from 25°C to 45°C at arund 10mbar, in constant volume of 1.93 loop
  
  A sandpapered (thinnining to decrease cycled mass and consequent pressure variations in the chamber) RMF Activated Carbon sample was glued to an Al-substrate
  
  for reference see Piccoli et al, A Lightweight Modelling Approach for Coupled Heat and Mass Transfer During Adsorption and Desorption, International Journal of Heat and Mass Transfer, submitted
  
  or 
  
  Piccoli, Selection and Optimal Use of Nanoporous Materials for Adsorption Energy Technology, Chapter 3, 2023
  
  */
  
  ///////////////////////////////////////////////////////////////////////////
  
  /*
  For the simulation
  
  Simulation time 100 s
  
  Model parameters
  [ADS]dw=7% Tmin=25.38 Tmax=44.93 wMin=0.0121 wMax=0.0871 p0=1158
  */

  
  //Experiment identifier
  constant String step = "091mm10mbarB_S25";
  //
  ///////////////////////////////////////////////////////////////////////////////////////
  //type of reaction Adsorption/Desorption
  constant String SET_StepType = "ADS";
  //Sample Geometry
  constant Length sampleThickness = 0.81e-3;
  constant Area sampleArea = 98e-6;
  // "imageJ"
  //Variables
  Pressure SET_Pi;
  Temperature SET_Ti;
  Temperature SET_Tf;
  Real initial_A;
  Real initial_p_sat;
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
  Real der_Tb;
  Real AUX_ratio_p_pSat;
  //----------------------------------------------------------------------------------------------------------------------
  Real EXP_Loading;
  Temperature EXP_Tsurface;
  Temperature EXP_Thexchanger;
  //----------------------------------------------------------------------------------------------------------------------
  Real metric;
  parameter Real simul_Pi = 1158;
  Real wnorm;
  //----------------------------------------------------------------------------------------------------------------------
  MOSES.HeatTransfer.ThermalResistance_Slab contactResistance_RMFAC annotation(
    Placement(visible = true, transformation(origin = {-56, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.MassTransfer.DiffusionWater_RMFAC diffusionWater_RMFAC annotation(
    Placement(visible = true, transformation(origin = {56, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Components.Boundaries.V_FluidBoundary v_FluidBoundary_RMFAC annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Boundaries.TDoubleExp_HeatBoundary tRamp_HeatBoundary_RMFAC annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Materials.Adsorbents.Geometries.Slab_rito2022 slab_rito2022 annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-22, -22}, {22, 22}}, rotation = 0)));
equation
//%%%%%%%%%%[ SETTINGS ]%%%%%%%%%%

  if step == "091mm10mbarB_S25" then
//ADSORPTION STEP
    SET_Ti = 273.15 + 44.93;
    SET_Tf = 273.15 + 25.08;
    SET_Pi = 1158;
//correct for tortuosity=1
    tRamp_HeatBoundary_RMFAC.SET_x0 = 0.03177;
    tRamp_HeatBoundary_RMFAC.SET_x1 = 96.69;
    tRamp_HeatBoundary_RMFAC.SET_x2 = 2.846;
    EXP_Loading = (0.08591 - 0.001711) * (1 - exp(-time / 23.05)) + 0.001711;
    wnorm = 1 - exp(-time / 23.05);
    EXP_Tsurface = (1 - 0.5854 * exp(-time / 32.91) - (1 - 0.5854) * exp(-(time / 6.678) ^ 1.427)) * (SET_Tf - SET_Ti - 0.3) + SET_Ti;
    EXP_Thexchanger = (1 - 0.03177 * exp(-time / 96.69) - (1 - 0.03177) * exp(-time / 2.846)) * (SET_Tf - SET_Ti) + SET_Ti;
    tRamp_HeatBoundary_RMFAC.Relax=-0.3;
  end if;
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  EXP_Tsurface = contactResistance_RMFAC.Ts;
  tRamp_HeatBoundary_RMFAC.EXP_Thexchanger = EXP_Thexchanger;
//----------------------------------------------------------------------------------------------------------------------
  AUX_ratio_p_pSat = v_FluidBoundary_RMFAC.p / 3362;
//pSat at 26°C - aux value to monitor p/pSat in the chamber
  der_Tb = contactResistance_RMFAC.der_Tb;
  RES_tau = contactResistance_RMFAC.tau;

  if SET_StepType == "ADS" then
    FIT_uAverage_des_adim_inferred = (1 - (0.82242203 * exp(-RES_tau / 0.10016136) + (1 - 0.82242203) * exp(-RES_tau / 0.0046461))) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti)) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
    
    FIT_uSurface_des_adim_inferred = (1 - (0.3602429839185508 * exp(-(RES_tau / 0.22086336197141038) ^ 1.6855937204150009) + 0.22069379632319797 * exp(-(RES_tau / 0.054189378454467634) ^ 2.534194545513618) + (1 - 0.3602429839185508 - 0.22069379632319797) * exp(-(RES_tau / 0.11485659915088539) ^ 2.003964233348046))) * ((contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti)) * (SET_Tf - SET_Ti) + SET_Ti - 273.15;
  end if;
//######################################################################################################################
  RES_Tb_norm = (contactResistance_RMFAC.Tb - SET_Ti) / (SET_Tf - SET_Ti);
  RES_Tc_norm = (contactResistance_RMFAC.Tc - SET_Ti) / (SET_Tf - SET_Ti);
  RES_Tb = contactResistance_RMFAC.Tb;
  RES_Tc = contactResistance_RMFAC.Tc;
  RES_w = slab_rito2022.w;
  contactResistance_RMFAC.T0 = SET_Ti ;
//######################################################################################################################
  initial_p_sat = 1000 * 0.61121 * exp((18.678 - (SET_Ti - 273.15) / 234.5) * ((SET_Ti - 273.15) / (257.14 + SET_Ti - 273.15)));
//Buck's formula
  if SET_Pi >= initial_p_sat then
    initial_A = 0;
  else
    initial_A = -R * SET_Ti * log(SET_Pi / initial_p_sat) / 0.018;
  end if;
  Wi = 0.3037 * exp(-(initial_A / 145600) ^ 2.072); //for RMFAC091mm10mbarB EqCurve
//######################################################################################################################
  v_FluidBoundary_RMFAC.rhoEnv = slab_rito2022.rho_env;
//----------toBeChanged

  if SET_StepType == "ADS" then
    tRamp_HeatBoundary_RMFAC.Ti = SET_Ti - 1e-3;
  end if;
  if SET_StepType == "DES" then
    tRamp_HeatBoundary_RMFAC.Ti = SET_Ti + 1e-3;
  end if;
  tRamp_HeatBoundary_RMFAC.Tf = SET_Tf;
  v_FluidBoundary_RMFAC.p0 = SET_Pi;
  v_FluidBoundary_RMFAC.sampleVol = sampleThickness * sampleArea;
  contactResistance_RMFAC.Ti = slab_rito2022.Ti;
  contactResistance_RMFAC.k = slab_rito2022.sorbent.k;
  contactResistance_RMFAC.rho = slab_rito2022.sorbent.rho_tot;
  contactResistance_RMFAC.cp = slab_rito2022.sorbent.Cptot;
  diffusionWater_RMFAC.V = slab_rito2022.V;
  diffusionWater_RMFAC.thickness = sampleThickness;
  diffusionWater_RMFAC.T0 = SET_Tf;
  diffusionWater_RMFAC.Fmass = 1;
  diffusionWater_RMFAC.sample_volume = sampleArea * sampleThickness;
  diffusionWater_RMFAC.sample_area = sampleArea;
  diffusionWater_RMFAC.epsilon = slab_rito2022.epsilon;  
  diffusionWater_RMFAC.microradius=slab_rito2022.microradius;
  
  slab_rito2022.Wi = Wi;
  slab_rito2022.sorbent.Wi = Wi;
  slab_rito2022.Ti = SET_Ti;
  slab_rito2022.c = diffusionWater_RMFAC.c;
  slab_rito2022.c_ext = diffusionWater_RMFAC.cext;
  slab_rito2022.Rmass = diffusionWater_RMFAC.Rmass;
  slab_rito2022.Dh = diffusionWater_RMFAC.Dh;
  slab_rito2022.T = diffusionWater_RMFAC.T;
  slab_rito2022.area = sampleArea;
  slab_rito2022.thickness = sampleThickness;
  slab_rito2022.sorbent.D_micro = diffusionWater_RMFAC.D_micro;
  slab_rito2022.sorbent.D_macro = diffusionWater_RMFAC.D_macro;
  slab_rito2022.sorbent.rho = diffusionWater_RMFAC.rho_env;
  slab_rito2022.sorbent.surface_area_BET = diffusionWater_RMFAC.surface_area_BET;
  contactResistance_RMFAC.thickness = sampleThickness;
  contactResistance_RMFAC.sampleVol = sampleArea * sampleThickness;
  der(metric) = sqrt((RES_w - EXP_Loading) ^ 2) / (time + 1e-6);
//######################################################################################################################
//######################################################################################################################
  connect(diffusionWater_RMFAC.fluidConnector, v_FluidBoundary_RMFAC.fluidConnector) annotation(
    Line(points = {{66, 0}, {90, 0}}));
  connect(tRamp_HeatBoundary_RMFAC.thermalConnector, contactResistance_RMFAC.thermalConnector) annotation(
    Line(points = {{-90, 0}, {-66, 0}}, color = {85, 0, 255}));
  connect(contactResistance_RMFAC.thermalConnector1, slab_rito2022.thermalConnector) annotation(
    Line(points = {{-46, 0}, {-22, 0}}, color = {85, 0, 255}));
  connect(slab_rito2022.fluidConnector, diffusionWater_RMFAC.fluidConnector1) annotation(
    Line(points = {{22, 0}, {46, 0}}));
end RMFAC_Slab_Ads;
