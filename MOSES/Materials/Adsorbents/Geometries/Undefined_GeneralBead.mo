within MOSES.Materials.Adsorbents.Geometries;

model Undefined_GeneralBead
replaceable function Diffusion = MOSES.MassTransfer.FickianSphereDiffusion;
  //initial condition
  Temperature Ti;
  Loading Wi;
  //material properties saved locally for fanciness
  Mass Msor;
  Length r_sor;
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
  HeatFlowRate Qsolid;
  HeatFlowRate Qliquid;
  HeatFlowRate Qvapor;
  EnthalpyFlowRate H;
  SpecificEnthalpy hv;
  SpecificEnthalpy Dh;
  SpecificEnthalpy hv_int;
  SpecificEnthalpy hv_ext;
  MassConcentration c;
  MassConcentration c_ext;
  DiffusionResistance Rmass_psiA;
  Real epsilon;
  Real t_diff;
  Real t_ads;
  Real t_conc;
  Real t_vol;
  Volume Vp;
  Volume V;
  Volume Vl;
  Mass Mvap;
  //mass of non adsorbed but adsorbable vapor in pores
  parameter Density rhoWatLiq = 997;
  //this should be taken from some property instead
  Temperature T;
  Pressure pext;
  Pressure pvap;
  Real n;
  //number of particles
  Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  replaceable model Sorbent = MOSES.Materials.Adsorbents.Properties.Silica_Radu2017;// MTSPG_own;// 
  replaceable model Fluid = Fluids.SaturatedLiquidWater;
  Sorbent sorbent annotation(
    Placement(visible = true, transformation(origin = {-52, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Fluids.SaturatedLiquidWater fluid annotation(
    Placement(visible = true, transformation(origin = {56, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  replaceable model DiffMod = MOSES.MassTransfer.DiffusionWater_CarslawJaeger;
  DiffMod diffusion_CarslawJaeger_Water annotation(
    Placement(visible = true, transformation(origin = {-3, -15}, extent = {{-61, -61}, {61, 61}}, rotation = 0)));
initial equation
  T = Ti;
  w = Wi;
  //Vp=V+Vl;
equation
  pext = fluidConnector.p;
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
  hv = actualStream(fluidConnector.hOut);
//Evaluating properties based on T,p,w
  sorbent.T = T;
  sorbent.p_sat = p_sat;
//sorbent.L_vc=L_vc;
  sorbent.w = w;
  w_eq = sorbent.w_eq;
  r_sor = sorbent.r;
  D = sorbent.D;
  rho_env = sorbent.rho_env;
  Hads = sorbent.H_ads;
  Cp = sorbent.Cp;
  pvap = sorbent.p;
  Cptot = sorbent.Cptot;
//Passing properties to diffusion model
  diffusion_CarslawJaeger_Water.rho_env = sorbent.rho_env;
  diffusion_CarslawJaeger_Water.w = sorbent.w;
  diffusion_CarslawJaeger_Water.epsilon = sorbent.epsilon;
  diffusion_CarslawJaeger_Water.D = D;
  diffusion_CarslawJaeger_Water.rp = r_sor;
  diffusion_CarslawJaeger_Water.p = pvap;
  diffusion_CarslawJaeger_Water.n = n;
  diffusion_CarslawJaeger_Water.p_sat = fluid.Psat;
  diffusion_CarslawJaeger_Water.mDot = Mdot;
  diffusion_CarslawJaeger_Water.V = V;
  c = diffusion_CarslawJaeger_Water.c;
  c_ext = diffusion_CarslawJaeger_Water.cext;
  Rmass_psiA = diffusion_CarslawJaeger_Water.Rmass_psiA;
  epsilon = sorbent.epsilon;
  hv_int = diffusion_CarslawJaeger_Water.h;
  hv_ext = diffusion_CarslawJaeger_Water.hext;
  Dh = diffusion_CarslawJaeger_Water.Dh;
//Mass balance
//OLD
//  Msor=n*rho_env*4/3*pi*r_sor^3;
//  Mad=Msor*w;
//  Vtot=n*sorbent.epsilon*4/3*pi*r_sor^3;
//  Vvap=Vtot-Mad/rhoWatLiq;
//  Mvap=Vvap*c;
//  (c_ext-c)/Rmass-Msor*der(w)=Vvap*der(c)+c*der(Vvap);//der(Mvap);//Vvap*der(c)+
//Mdot/Vvap-Mvap*der(1/Vvap)-sorbent.rho_env/sorbent.epsilon*der(w)=der(diffusion_CarslawJaeger_Water.c);
//der(diffusion_CarslawJaeger_Water.c)=if noEvent(Vvap>=0) then (Mdot/Vvap-Mvap*der(1/Vvap)-sorbent.rho_env/sorbent.epsilon*der(w)) else 0;
//Mdot = if noEvent(Mvap>0 and Mad>0) then (der(Mvap)+der(Mad)) else 0;
//der(c)=der(diffusion_CarslawJaeger_Water.c);
  Vp = 4 / 3 * pi * r_sor ^ 3;
  V = Vp * (epsilon - rho_env / rhoWatLiq * w);
  Vl=w*rho_env/rhoWatLiq*Vp;
  //c*der(V)+V*der(c) = (c_ext - c) / (Rmass_psiA) + Vp * rho_env * (c / rhoWatLiq - 1) * der(w); //original + t_vol
  c*der(V)+V*der(c) + Vp * rho_env *  der(w)= (c_ext - c) / (Rmass_psiA) ; //reorder
  t_diff = Mdot;
  t_ads = Vp * rho_env * (c / rhoWatLiq - 1) * der(w);
  t_conc = der(c) * V;
  t_vol=c*der(V);
  Mvap = V * c;
  Msor = Vp * rho_env;
  Mad = Msor * w;
  Mdot = (c_ext - c) / Rmass_psiA;
//Heat Balance
//previous version
//der(U)=(Mad+Msor)*Cptot * der(T)-Hads * der(Mad);
//Qad=Hads * der(Mad);
//Qint=(Mad+Msor)*Cptot* der(T);
//der(U)=Hv+Q;
//Hv=der(Mvap)*(diffusion_CarslawJaeger_Water.Dh); //ATTENTION: introduced a term to account for temperature change of the vapor within the pores, as it is assumed to be in thermal equilibrium with the particle
//actual version
  Q + H = Qsolid + Qliquid + Qvapor;
  Qsolid = Msor * Cp * der(T);
  Qliquid = Mad * Cp_f * der(T) - Hads * der(Mad);
  Qvapor = Mvap * der(hv_int);
/*+hv_int*der(Mvap)*/
// here I think there are two problems: a) the change of energy/temperature coming from the adsorption part of der(Mvap) has already been taken into account by Hads*der(Mad). The second is that the change of internal energy due to the incoming stream has already been taken into account by H. Thus the term hv_int*der(Mvap) should be removed ...
  H = Dh * Mdot;
  connect(fluidConnector, diffusion_CarslawJaeger_Water.fluidConnector) annotation(
    Line(points = {{100, 0}, {60, 0}, {60, -14}, {58, -14}}));
  connect(diffusion_CarslawJaeger_Water.thermalConnector, thermalConnector) annotation(
    Line(points = {{-64, -14}, {-98, -14}, {-98, 0}, {-102, 0}}, color = {85, 0, 255}));
  annotation(
    Icon(graphics = {Ellipse(lineColor = {255, 0, 0}, fillColor = {255, 0, 0}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Ellipse(lineColor = {255, 85, 0}, fillColor = {255, 85, 0}, fillPattern = FillPattern.Solid, extent = {{-80, 80}, {80, -80}}, endAngle = 360), Ellipse(lineColor = {255, 170, 0}, fillColor = {255, 170, 0}, fillPattern = FillPattern.Solid, extent = {{-60, 60}, {60, -60}}, endAngle = 360), Ellipse(lineColor = {255, 255, 0}, fillColor = {255, 255, 0}, fillPattern = FillPattern.Solid, extent = {{-40, 40}, {40, -40}}, endAngle = 360), Ellipse(lineColor = {255, 255, 127}, fillColor = {255, 255, 127}, fillPattern = FillPattern.Solid, extent = {{-20, 20}, {20, -20}}, endAngle = 360)}));

end Undefined_GeneralBead;
