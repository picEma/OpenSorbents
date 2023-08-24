within MOSES.Fluids;

partial model GeneralSatFluid
  //input
  Temperature T;
  
  //output
  SpecificHeatCapacity Cp;
  Density rho;
  ThermalConductivity k;
  DynamicViscosity DV;
  Pressure Psat;
  SpecificHeatCapacity Cv;
  SpecificEntropy s;
  SpecificEnthalpy h;
  Real Pr;
  SpecificEnergy L_vc;
  
  annotation(
    Icon(graphics = {Ellipse(lineColor = {85, 85, 127}, lineThickness = 2, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {15, -10}, lineColor = {85, 85, 127}, lineThickness = 2, extent = {{-115, 110}, {85, -90}}, textString = "F")}));
annotation(
    Icon(coordinateSystem(initialScale = 0.1), graphics = {Ellipse(lineColor = {85, 85, 127}, lineThickness = 2, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {1, 8}, lineColor = {85, 85, 127}, lineThickness = 2, extent = {{-101, 92}, {99, -108}}, textString = "F")}));
end GeneralSatFluid;
