within MOSES.Materials.Adsorbents.Properties;

partial model GeneralAdsorbent
  //input
  Temperature T;
  Pressure p;
  Pressure p_sat;
  Loading w;
  
  //output
  Density rho_skel;
  Density rho_env;
  Density rho_tap;
  ThermalConductivity k "thermal conductivity of a single particle";
  SpecificHeatCapacity Cp;
  Loading w_eq;
  DiffusionCoefficient D;
  Length r;
  SpecificEnergy H_ads;
  SpecificEnergy A;
  annotation(
    Diagram,
    Icon(graphics = {Ellipse(lineColor = {85, 255, 127}, lineThickness = 2, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {14, -14}, lineColor = {85, 255, 127}, lineThickness = 2, extent = {{-114, 114}, {86, -86}}, textString = "A")}));
end GeneralAdsorbent;
