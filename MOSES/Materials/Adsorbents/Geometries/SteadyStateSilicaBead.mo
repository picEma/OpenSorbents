within MOSES.Materials.Adsorbents.Geometries;

model SteadyStateSilicaBead
// ---------------------------------------------------------------------------------------------//
  //  Description: particle                                                                       //
  //  Authors:     Piccoli, E.                                                                    //
  //  Version:     1.0.1                                                                          //
  //  Date:        26-10-2022                                                                     //
  //  structure:   instantiates material, contact resistance, and thermal and fluid connectors    //
  // ---------------------------------------------------------------------------------------------//
 
  parameter Integer Lagrange_Euler_mode;                                          //(1) lagrange mode (particle tracking) (2) euler mode(field)
  parameter Real contact_ratio=0.1;                                               //thermal contact parameter r_contact/r_bead
  
  Temperature Ti;                                                                 //initial temperature
  Loading Wi;                                                                     //initial adsorbent loading
  
  MOSES.Materials.Adsorbents.Geometries.SilicaBead_ACTS particle_Radu2017_085(Lagrange_Euler_mode=Lagrange_Euler_mode) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-22, -22}, {22, 22}}, rotation = 0)));
  MOSES.HeatTransfer.ContactResistance_SiuLee_SteadyState contactResistance_SiuLee annotation(
    Placement(visible = true, transformation(origin = {-46, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {-100, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MOSES.Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation

  //coupling between thermal contact resistance and material properties
  contactResistance_SiuLee.k = particle_Radu2017_085.sorbent.k;
  contactResistance_SiuLee.rp=particle_Radu2017_085.sorbent.r;
  contactResistance_SiuLee.rho=particle_Radu2017_085.sorbent.rho_tot;
  contactResistance_SiuLee.cp=particle_Radu2017_085.sorbent.Cptot;
  contactResistance_SiuLee.gamma=contact_ratio;
  
  particle_Radu2017_085.Ti=Ti;
  particle_Radu2017_085.Wi=Wi;
  connect(particle_Radu2017_085.thermalConnector, contactResistance_SiuLee.thermalConnector1) annotation(
    Line(points = {{-22.44, 0}, {-36.44, 0}}, color = {85, 0, 255}));
  connect(particle_Radu2017_085.fluidConnector, fluidConnector) annotation(
    Line(points = {{22, 0}, {100, 0}}));
  connect(contactResistance_SiuLee.thermalConnector, thermalConnector) annotation(
    Line(points = {{-56, -1.77636e-16}, {-100, -1.77636e-16}, {-100, -2}}, color = {85, 0, 255}));

annotation(
    Icon(graphics = {Ellipse(fillColor = {255, 255, 127}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Text(origin = {0, 1}, extent = {{-72, 33}, {72, -33}}, textString = "1 Particle")}));

end SteadyStateSilicaBead;
