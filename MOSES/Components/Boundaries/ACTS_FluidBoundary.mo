within MOSES.Components.Boundaries;

model ACTS_FluidBoundary
  Modelica.Units.SI.SpecificEnthalpy hOut;
  Modelica.Units.SI.MassFlowRate mDot;
  Modelica.Units.SI.Pressure Psat; //Defining a constant pressure of the vapor
  Modelica.Units.SI.Temperature T;
        Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0))); //Defining a constant temperature of the vapor
equation
  fluidConnector.p=Psat;
  fluidConnector.hOut=hOut;
  fluidConnector.mDot=mDot;
  hOut=Modelica.Media.Water.WaterIF97_pT.specificEnthalpy_pT(Psat,T,0);
annotation(
    Icon(graphics = {Line(origin = {8.189, -6.924}, points = {{-8.189, 106.924}, {-8.189, -93.076}, {-8.189, -93.076}})}));

end ACTS_FluidBoundary;
