within MOSES.Components.Boundaries;

model PT_FluidBoundary
  extends MOSES.Components.Boundaries.Undef_FluidBoundary;
  parameter Pressure Psat;
  parameter Temperature T;
equation
  p=Psat;
  hOut=Modelica.Media.Water.WaterIF97_pT.specificEnthalpy_pT(p,T,0);
annotation(
    Icon(graphics = {Line(origin = {0, 0.5}, points = {{0, 99.5}, {0, -100.5}, {0, -98.5}})}));

end PT_FluidBoundary;
