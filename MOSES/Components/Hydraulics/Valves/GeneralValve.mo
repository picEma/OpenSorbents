within MOSES.Components.Hydraulics.Valves;

model GeneralValve
  MOSES.Components.Connectors.FluidConnector fluidConnectorA annotation(
    Placement(visible = true, transformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Components.Connectors.FluidConnector fluidConnectorB annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  

equation
  //Isoenthalpic valve
  fluidConnectorB.hOut=inStream(fluidConnectorA.hOut); 
  fluidConnectorA.hOut=inStream(fluidConnectorB.hOut);
  
  fluidConnectorA.mDot + fluidConnectorB.mDot = 0; //Mass balance in the component
  
  // The characteristic equation of the pressure drop must be defined in the "final" extended model
  
  annotation(
    Icon(graphics = {Line(points = {{-100, 100}, {-100, -100}, {100, 100}, {100, -100}, {-100, 100}}, thickness = 2)}));

end GeneralValve;
