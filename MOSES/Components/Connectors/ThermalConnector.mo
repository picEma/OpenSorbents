within MOSES.Components.Connectors;

connector ThermalConnector
  Temperature T;
  flow HeatFlowRate Q;
  annotation(
    Icon(graphics = {Ellipse(lineColor = {85, 0, 255}, fillColor = {85, 0, 255}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {5, -4}, lineColor = {255, 255, 255}, lineThickness = 2, extent = {{-105, 104}, {95, -96}}, textString = "T")}));
end ThermalConnector;
