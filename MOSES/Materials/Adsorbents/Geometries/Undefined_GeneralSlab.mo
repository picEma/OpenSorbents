within MOSES.Materials.Adsorbents.Geometries;


model Undefined_GeneralSlab
  //initial condition
  Temperature Ti;
  Loading Wi;
  //Geometry
  Length thickness;
  Area area;
  Volume slabVol;
  //material properties saved locally for fanciness (radu)
  Mass Msor;
  DiffusionCoefficient D;
  Density rho_env;
  Loading w_eq;
  SpecificEnergy Hads;
  SpecificHeatCapacity Cp;
  SpecificHeatCapacity Cp_f;
  SpecificHeatCapacity Cptot;
  MassFlowRate Mdot;
  Mass Mad;
  Loading w;
  Pressure p_sat;
  //SpecificEnergy L_vc;
  //InternalEnergy U;
  HeatFlowRate Q;
  //HeatFlowRate Qsolid;
  //HeatFlowRate Qliquid;
  //HeatFlowRate Qvapor;
  HeatFlowRate Qsensible_solid;
  HeatFlowRate Qsensible_liquid;
  HeatFlowRate Qsorption;
  HeatFlowRate Qvapor;
  EnthalpyFlowRate H;
  //SpecificEnthalpy hv;
  SpecificEnthalpy Dh;
  SpecificEnthalpy hv_int;
  //SpecificEnthalpy hv_ext;
  MassConcentration c;
  MassConcentration c_ext;
  DiffusionResistance Rmass;
  Real epsilon;
  Real t_diff;
  Real t_ads;
  Real t_conc;
  Length microradius;
  Volume V;
  Mass Mvap;
  //mass of non adsorbed but adsorbable vapor in pores (radu)
  parameter Density rhoWatLiq = 997;
  //this should be taken from some property instead (radu)
  Temperature T;
  //Pressure pext;
  Pressure pvap (start=3000);
  
  Real m_flux;
  Real m_volume;
  Real m_conc;
  Real m_sor;
  Real m_vap;
  
  //################################################################################################################################
  Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  //replaceable model Sorbent = Silica_Radu2017;
  // MTSPG_own;//
  
  
  //-----------------------CHECK THE FLUID!!!!!!!!!
  MOSES.Fluids.SaturatedLiquidWater fluid annotation(
    Placement(visible = true, transformation(origin = {56, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  replaceable package sorbate = Modelica.Media.Water.WaterIF97_pT;
  replaceable model Adsorbent = MOSES.Materials.Adsorbents.Properties.RMFAC annotation(
    Placement(visible = true, transformation(origin = {-52, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Adsorbent sorbent;
  //################################################################################################################################
initial equation
  T = Ti;
  w = Wi;
equation
  pvap = sorbent.p;
  fluidConnector.p = pvap;
//saving Q for heat balance
  thermalConnector.Q = Q;
//saving T for properties and heat balance
  thermalConnector.T = T;
//inside the pores, saturated steam at particle temperature
  fluid.T = T;
  p_sat = fluid.Psat;
//L_vc=fluid.L_vc;
//the specific heat of the adsorbed phase!
  Cp_f = fluid.Cp;
  //hv = actualStream(fluidConnector.hOut);
  if pvap > 611.658 then 
  hv_int = sorbate.specificEnthalpy_pT(pvap, T, 0);
  else 
  hv_int = sorbate.specificEnthalpy_pT(611.659, T, 0);
  end if;
  fluidConnector.hOut = hv_int;
//Evaluating properties based on T,p,w
  sorbent.T = T;
  sorbent.p_sat = p_sat;
//sorbent.L_vc=L_vc;
  sorbent.w = w;
  w_eq = sorbent.w_eq;
  D = sorbent.D;
  rho_env = sorbent.rho_env;
  Hads = sorbent.H_ads;
  Cp = sorbent.Cp;
  //pvap = sorbent.p;
  Cptot = sorbent.Cptot;
  fluidConnector.mDot = Mdot;
  epsilon = sorbent.epsilon;
  sorbent.r=thickness;
  slabVol = area * thickness;
  sorbent.microradius=microradius;
  

  //OLD -> der(c) = (c_ext - c) / (Rmass * V) + slabVol * rho_env / V * (c / rhoWatLiq - 1) * der(w); //-------------FIX
  c*der(V) + V*der(c) + slabVol * rho_env *  der(w)= (c_ext - c) / (Rmass);//ema-28mar2022 new eq mass balance

  
  V = slabVol * (epsilon - rho_env / rhoWatLiq * w); //-------------FIX
  
  t_diff = Mdot;
  t_ads = slabVol * rho_env * (c / rhoWatLiq - 1) * der(w);
  t_conc = der(c) * V;
  Mvap = V * c;
  Msor = slabVol * rho_env;
  Mad = Msor * w;
  //Mdot = (c_ext - c) / Rmass;
  Mdot = (c_ext - c) / Rmass;
  
  m_flux=(c_ext - c) / (Rmass);
  m_volume=c*der(V);
  m_conc= V*der(c);
  m_vap=m_volume+m_conc;
  m_sor=slabVol * rho_env *  der(w);
  
//Heat Balance
//previous version
//der(U)=(Mad+Msor)*Cptot * der(T)-Hads * der(Mad);
//Qad=Hads * der(Mad);
//Qint=(Mad+Msor)*Cptot* der(T);
//der(U)=Hv+Q;
//Hv=der(Mvap)*(diffusion_CarslawJaeger_Water.Dh); //ATTENTION: introduced a term to account for temperature change of the vapor within the pores, as it is assumed to be in thermal equilibrium with the particle
//actual version
  //Q + H = Qsolid + Qliquid + Qvapor;
  Q + H = Qsensible_solid + Qsensible_liquid + Qsorption + Qvapor;
  //Qsolid = Msor * Cp * der(T);
  //Qliquid = Mad * Cp_f * der(T) - Hads * der(Mad);
  //Qvapor = Mvap * der(hv_int);
  Qsensible_solid=Msor * Cp * der(T);
  Qsensible_liquid=Mad * Cp_f * der(T);//+T*Cp_f*der(Mad);
  Qsorption=- Hads * der(Mad);
  Qvapor = Mvap * der(hv_int);
/*+hv_int*der(Mvap)*/
// here I think there are two problems: a) the change of energy/temperature coming from the adsorption part of der(Mvap) has already been taken into account by Hads*der(Mad). The second is that the change of internal energy due to the incoming stream has already been taken into account by H. Thus the term hv_int*der(Mvap) should be removed ...
  H = Dh * Mdot;
  annotation(
    Icon(graphics = {Ellipse(lineColor = {255, 0, 0}, fillColor = {255, 0, 0}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Ellipse(lineColor = {255, 85, 0}, fillColor = {255, 85, 0}, fillPattern = FillPattern.Solid, extent = {{-80, 80}, {80, -80}}, endAngle = 360), Ellipse(lineColor = {255, 170, 0}, fillColor = {255, 170, 0}, fillPattern = FillPattern.Solid, extent = {{-60, 60}, {60, -60}}, endAngle = 360), Ellipse(lineColor = {255, 255, 0}, fillColor = {255, 255, 0}, fillPattern = FillPattern.Solid, extent = {{-40, 40}, {40, -40}}, endAngle = 360), Ellipse(lineColor = {255, 255, 127}, fillColor = {255, 255, 127}, fillPattern = FillPattern.Solid, extent = {{-20, 20}, {20, -20}}, endAngle = 360)}));
end Undefined_GeneralSlab;
