within MOSES.Components.Boundaries;

model Undef_HeatBoundary
HeatFlowRate Q;
Temperature T;
  MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 0}, extent = {{-46, -46}, {46, 46}}, rotation = 0)));
equation
  thermalConnector.Q=Q;
  thermalConnector.T=T;
annotation(
    Icon(graphics = {Line(points = {{0, 96}, {0, -98}}), Text(origin = {-62, 83}, extent = {{-24, 19}, {56, -45}}, textString = "T,Q?")}, coordinateSystem(initialScale = 0.1)));
end Undef_HeatBoundary;
