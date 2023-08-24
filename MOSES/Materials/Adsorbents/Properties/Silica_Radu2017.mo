within MOSES.Materials.Adsorbents.Properties;

model Silica_Radu2017
extends MOSES.Materials.Adsorbents.Properties.GeneralAdsorbent;
  parameter DiffusionCoefficient D0=4.3e-3;
  parameter MolarEnergy Ea=41500;
  parameter Density rho=1158;
  parameter Density rho_s=2079;
  parameter Density rho_t=777;
  parameter Real epsilon=0.37;
  parameter ThermalConductivity kDry=0.6;
  parameter ThermalConductivity kWat=0.58;
  parameter ThermalConductivity kVap=0.0195;
  parameter SpecificHeatCapacity cpDry=921;
  parameter SpecificHeatCapacity cpWat=4182;
  parameter SpecificHeatCapacity cpVap=1880;
  parameter SpecificEnergy Hs=2.693e6 "Specific heat of sorption";
  DiffusionCoefficient Ds;
  parameter MolarMass M=0.018;
  //parameter Length rc=0.000085; //contact radius -- should be property of contact?
  parameter Real a=-0.8841;
  parameter Real b=3.0757e-4;
  parameter Length radius;
  SpecificHeatCapacity Cptot;
  Density rho_tot;
  
equation
  r=radius;
  rho_skel=rho_s;
  rho_env=rho;
  rho_tap=rho_t;
  rho_tot=rho_env*(1+w);
  k=kDry+997/rho*w*kWat; //changed to volumetric proportions!! Not sure why rho cannot be used in the formula, but since anyway this model should be transformed in a replaceable package, I will not spend more time trying to debug it ...
  D=rho*R*T*w*Ds/(epsilon*M*p);
  Ds=D0*exp(-(Ea/(R*T)));
  Cp=cpDry;
  Cptot=cpDry+w*cpWat;
  if p>=p_sat then
    A=0;
  else
    A= -R * T * log(p/p_sat);
  end if;
  H_ads=Hs;
  w=exp((a) - b * A);
  w_eq=w;
end Silica_Radu2017;
