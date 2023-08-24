within MOSES.Validations;

model RaduMonolayer_BigDes
  /*
  A single temperature swing experiment analysed in by Radu et al, Insights from modeling dynamics of water sorption in spherical particles for adsorption heat pumps, International Journal of Heat and Mass Transfer, 2017
  
  from 50°C to 30°C at around 9mbar, in constant pressure
  
  A monolayer of beads of silica gel is laying on a heat exchanger
  
  for reference see Piccoli et al, A Lightweight Modelling Approach for Coupled Heat and Mass Transfer During Adsorption and Desorption, International Journal of Heat and Mass Transfer, submitted
  
  or 
  
  Piccoli, Selection and Optimal Use of Nanoporous Materials for Adsorption Energy Technology, Chapter 3, 2023
  
  */

  //Settings
  parameter Real n = 1;
  parameter Loading Wi = 0.12276;
  //Des= 0.12276; //Ads=0.04691;
  parameter Loading DWmax = -0.07568;
  //Des= -0.07568; //Ads=0.07505;
  parameter Temperature Ti_particle = 331.15;
  //Des= 331.15; //Ads=323.15;
  parameter Real parGamma = 0.12;
  parameter Real t0 = 14;
  Integer index(start = 1, fixed = true);
  parameter Length radius = 0.0004;
  parameter MassConcentration ci = 0.0284 "fake initial concentration parameter used in Carslaw model to determine the transient state, in such a way that it is as close as possible to the single step approximation";
  //ads=0.00595, des= 0.0284
  ///////////////////////////////////////////////////////////////////////////////////////////////////
  //Validation Metrics
  Real[16] rExp "normalized loading in Radu et al";
  //Des
  
    parameter Real[16] expX={0.364, 1.09, 5.47, 10.6, 14.9, 20.8, 28.8, 39.7, 55.8, 71.8, 104, 143, 183, 255, 375, 496};
    parameter Real[16] expY={0.192, 0.279, 0.394, 0.53, 0.633, 0.75, 0.835, 0.906, 0.957, 0.978, 0.99, 0.999, 1.002, 1.015, 1.024, 1.033};
    
  //Ads
  /*
  parameter Real[19] expX = {7.53, 10.54, 16.57, 24.1, 34.6, 48.2, 61.7, 82.8, 123.5, 164, 202, 241, 282, 325, 364, 405, 443, 485, 526};
  parameter Real[19] expY = {0.248, 0.321, 0.378, 0.469, 0.55, 0.658, 0.737, 0.81, 0.897, 0.936, 0.962, 0.973, 0.977, 0.987, 0.991, 0.998, 0.998, 0.992, 1.004};
  */
  
  ///////////////////////////////////////////////////////////////////////////
  //Variables
  Real metric(start = 0);
  Real err(start = 0, fixed = true);
  Real num(start = 0, fixed = true);
  Real Exp;
  Real WNorm "normalized loading";
  Real Tnorm "normalized temperature";
  Real derT;
  Real derW;
  //Real ExpDirect;
  //an UndefinedGeneralParticle using Radu et al properties
  replaceable MOSES.Materials.Adsorbents.Geometries.Bead_Radu2017 particle_Radu2017_085(sorbent.radius = radius) annotation(
    Placement(visible = true, transformation(origin = {2, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  //thermal contact separate to the particle as it connects two objects at uniform temperature
  MOSES.HeatTransfer.ContactResistance_SiuLee contactResistance_SiuLee(gamma = parGamma) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  /*the heat boundary is approximated as a very quick ramp, because I am not sure how this is actually implemented in Radu et al (if step or ramp). 
      To be noted how Ti is not 50°C but 49°C. this is to avoid initial 0 temperature difference which is problematic for thermal contact model*/
  Components.Boundaries.TRamp_HeatBoundary tRamp_HeatBoundary(Tf(displayUnit = "K") = 353.15, Ti(displayUnit = "K") = 353.15, tRamp = 10) annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  //for ads=303.15, des 353.15
  //external vapor is considered to be saturated steam at temperature (30°C)
  MOSES.Components.Boundaries.PT_FluidBoundary pT_FluidBoundary(Psat = 4280, T = 353.15) annotation(
    Placement(visible = true, transformation(origin = {88, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // for ads Psat=880, T=303.15, des 4280, 353.15
  /* some indicators to evaluate dynamic response
      time needed to get temperature 65%, 80% and 95% equilibrated */
  /*Time tau065T(start = 0);
    // for comparison with Radu et. al.
    Time tau080T(start = 0);
    Time tau095T(start = 0);
    //time needed to get loading equilibrated at 65%, 80% and 95%
    Time tau050(start = 0);
    Time tau065(start = 0);
    Time tau080(start = 0);
    Time tau095(start = 0);
    //time needed to get loading equilibrated at 65%, 80% and 95% in Radu et al
    Time tau050_exp(start = 0);
    Time tau065_exp(start = 0);
    Time tau080_exp(start = 0);
    Time tau095_exp(start = 0);*/
initial equation
//particle_Radu2017_085.pvap=70;
equation
//setting initial temperature of particle and contact point at 50°C. This means that at t=0 ther is little heat going from contact point to the fin
  particle_Radu2017_085.Ti = Ti_particle;
  contactResistance_SiuLee.Ti = particle_Radu2017_085.Ti;
//as said above, we need a parameter to describe the step-like adsorption
  particle_Radu2017_085.diffusion_CarslawJaeger_Water.ci = ci;
//variable transfer between submodels
  contactResistance_SiuLee.k = particle_Radu2017_085.sorbent.k;
  contactResistance_SiuLee.rp = particle_Radu2017_085.sorbent.r;
//number of particle and initial loading definition
  particle_Radu2017_085.n = n;
  particle_Radu2017_085.Wi = Wi;
//comparison of the results, we normalize the loading and we compare with their results
  WNorm = (particle_Radu2017_085.w - Wi) / DWmax;
  Tnorm = (contactResistance_SiuLee.Ti - contactResistance_SiuLee.Tb) / (contactResistance_SiuLee.Ti - contactResistance_SiuLee.Tc);
  derT = der(Tnorm);
  derW = der(WNorm);
//if time>10 then
//For Adsorption
//  Exp = (-0.7916 * exp(-time / 59.29)) - 0.2082 * exp(-time / 5.34) + 1;
//For Desorption
Exp = 1-0.2171*exp(-(time)/0.2076)-0.7831*exp(-(time)/19.25);
//For points only
  rExp = expX .+ t0;
//else
//  Exp=0;
//end if;
/*start debugging*/
//definind a non-zero time that can be useful in initialization
  contactResistance_SiuLee.tau = time + 1e-9;
  contactResistance_SiuLee.rho = particle_Radu2017_085.sorbent.rho_tot;
  contactResistance_SiuLee.cp = particle_Radu2017_085.sorbent.Cptot;
/*end debugging*/
//For function
/*
    err = (WNorm - Exp) ^ 2;
  der(num) = err*der(Exp);*/
  metric = sqrt(num / time);
//connections
  connect(particle_Radu2017_085.thermalConnector, contactResistance_SiuLee.thermalConnector1) annotation(
    Line(points = {{-18, 0}, {-30, 0}}, color = {85, 0, 255}));
  connect(contactResistance_SiuLee.thermalConnector, tRamp_HeatBoundary.thermalConnector) annotation(
    Line(points = {{-50, 0}, {-82, 0}}, color = {85, 0, 255}));
  connect(particle_Radu2017_085.fluidConnector, pT_FluidBoundary.fluidConnector) annotation(
    Line(points = {{22, 0}, {88, 0}}));
algorithm
//for dynamic indicators
  when time >= rExp[index] then
    err := (expY[index] - WNorm) ^ 2 * derW;
    index := index + 1;
    num := num + err;
  end when;
end RaduMonolayer_BigDes;
