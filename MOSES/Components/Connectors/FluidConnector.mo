within MOSES.Components.Connectors;

connector FluidConnector
  Pressure p;
  flow MassFlowRate mDot;
  stream SpecificEnthalpy hOut;

annotation(
    Icon(graphics = {Ellipse(fillColor = {85, 0, 255}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {3, -6}, lineColor = {255, 255, 255}, extent = {{-103, 106}, {97, -94}}, textString = "F")}, coordinateSystem(initialScale = 0.1)));
end FluidConnector;
