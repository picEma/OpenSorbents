within MOSES.Components.Boundaries;

model V_FluidBoundary
  extends MOSES.Components.Boundaries.Undef_FluidBoundary;
  parameter Temperature chamberT = 273.15 + 26.7 "gas phase temperature in the chamber";
  parameter Volume chamberV = 1.93e-3 "chamber volume"; //1.93L
  constant MolarMass M = 0.01801528;
  Pressure p0;
  Real n "num of mol in gas phase in the chamber";
  Real n0 "num of mol in gas phase at t=0";
  Mass sampleMass;
  Density rhoEnv;
  Volume sampleVol;
  
initial equation
  n=n0;
equation
  sampleMass = sampleVol * rhoEnv;
  n0 = p0 * chamberV / (R * chamberT);
  der(n) = fluidConnector.mDot / M;
  p * chamberV = n * R * chamberT;
  
  hOut=Modelica.Media.Water.WaterIF97_pT.specificEnthalpy_pT(p,chamberT,0);
annotation(
    Icon(graphics = {Line(origin = {0, 0.5}, points = {{0, 99.5}, {0, -100.5}, {0, -98.5}})}));

end V_FluidBoundary;
