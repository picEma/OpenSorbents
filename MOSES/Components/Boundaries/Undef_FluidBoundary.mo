within MOSES.Components.Boundaries;

model Undef_FluidBoundary
  MOSES.Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {0, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {1, -3}, extent = {{-43, -43}, {43, 43}}, rotation = 0)));
  Pressure p;
  SpecificEnthalpy hOut;
  MassFlowRate mDot;
equation
  fluidConnector.p=p;
  fluidConnector.hOut=hOut;
  fluidConnector.mDot=mDot
annotation(
    Icon(graphics = {Line(points = {{0, 100}, {0, -100}}), Text(origin = {2, 48}, extent = {{-98, 56}, {36, -28}}, textString = "p,mDot,h?")}));
end Undef_FluidBoundary;
