within MOSES.MassTransfer;

model DiffusionWater_CarslawJaeger
  Density rho_env;
  Loading w;
  Real epsilon;
  DiffusionCoefficient D;
  Length rp;
  DiffusionResistance Rmass_ss;
  DiffusionResistance Rmass_psiA;
  MassConcentration cext;
  MassConcentration c;
  MassConcentration ci;
  parameter MolarMass M=0.0180153;
  parameter Density rho_l=997;
  Pressure p_sat;
  Temperature T;
  Temperature Text;
  HeatFlowRate Q;
  Pressure p;
  Pressure pext;
  MassFlowRate mDot;
  SpecificEnthalpy h;
  SpecificEnthalpy hext;
  SpecificEnthalpy Dh;
  Volume V; //vapor volume (pore volume-adsorbed water volume)
  
  Real n "number of particles";

  
  Real psiA;
  //Real psiC;
  
  /*For debugging*/
  Real diffc;
  /*end of For debugging*/
  
  
  Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  replaceable package sorbate = Modelica.Media.Water.WaterIF97_pT; // like this the sorbate can be replaced more easily ...
equation
  
  /*start debugging*/
  diffc=(c-cext)/(ci-cext);
  /*stop debugging*/
  
  //limiting psiA at 1 for zero concentration gradient 
  if diffc>=0 then
    (c-cext)/(ci-cext)=6/pi^2*(1.36*exp(-15.73*psiA)+0.2393*exp(-575.3*psiA));
  else 
    (-c+cext)/(ci-cext)=6/pi^2*(1.36*exp(-15.73*psiA)+0.2393*exp(-575.3*psiA));
  //else
  //  psiA=1;
  end if;
  //der(c)=(cext-ci)*6*D/rp^2*(0.003478/(6.415e-5+psiB)+6.552*exp(-208.2*psiB));
  //(cext-c)=der(c)*rp^2/pi^2/D*(1-0.1735*exp(-938.9*psiC)-0.7836*exp(-39.67*psiC));
  
  //thermal connector, determining vapor temperature in pores
  T=thermalConnector.T;
  Q-thermalConnector.Q=0;
  //Condition of vapor inside the pores (at pressure below saturated steam, but thermal equilibrium with particle)
  if p>611.658 then
  h=-2.4896E-02*T^3 + 2.5887E+01*T^2 - 7.2136E+03*T + 3.0534E+06;
  else
  h=-2.4896E-02*T^3 + 2.5887E+01*T^2 - 7.2136E+03*T + 3.0534E+06;
  end if;
  //fluid connector, determining incoming/outgoing vapor condition
  fluidConnector.hOut=h;
  hext=inStream(fluidConnector.hOut);
  fluidConnector.mDot=mDot;
  pext=fluidConnector.p;
  Text=sorbate.temperature_ph(pext,hext,0,0);
  //enthalpy change in vapour
  Dh=hext-h;
  //internal and external concentrations
  c=M*p/(R*T);//rho_env/epsilon*w;
  cext=M*pext/(R*Text);
  //Diffusion resistance
  //Rmass=rp^2/(15*D); //FickSphere
  
  // Previous version R2 0.9894 
  //Rmass=3/(4*pi^3*rp*D*epsilon)*(1-0.1282/(12.34*D*time/rp^2+0.1371))
  
  //Current version R2 0.9979
  //Rmass=rp^2/(V*pi^2*D)*(1-0.1735*exp(-938.9*D*time/rp^2)-0.7836*exp(-39.67*D*time/rp^2));
  Rmass_psiA=rp^2/(V*pi^2*D)*1e-4;//(1-0.1735*exp(-938.9*psiA)-0.7836*exp(-39.67*psiA));
  Rmass_ss=rp^2/(V*pi^2*D);
  
  //Version accounting for adsorption, but analytical solution of c and der(c) is wrong for this case
  
 // 1/Rmass_new=pi^3*152*rp*D*(D*tau/rp^2+0.03548)*(1+0.3137/(D*tau/rp^2+0.003627))*((epsilon-rho_env/rho_l*exp(a-b*R*T*log(R*T/(M*p_sat)*cext*(1-6/pi^2*0.05262/(D*tau/rp^2+0.03548)))))+cext*(1-0.3157/pi^2/(D*tau/rp^2+0.03548))*rho_env/rho_l*exp(a)*(-b*R*T)*R*T/(M*p_sat)*(R*T/(M*p_sat)*cext*(1-6/pi^2*0.05262/(D*tau/rp^2+0.03548)))^(-b*R*T-1)+rho_env*exp(a)*(-b*R*T)*R*T/(M*p_sat)*(R*T/(M*p_sat)*cext*(1-6/pi^2*0.05262/(D*tau/rp^2+0.03548)))^(-b*R*T-1));
  
  //mass flow definition
  //mDot=n*(cext-c)/Rmass;
  //der(c)=(cext-c)/(4/3*pi*rp^3*epsilon*Rmass);
  
annotation(
    Icon(coordinateSystem(initialScale = 0.1), graphics = {Ellipse(fillPattern = FillPattern.Cross, lineThickness = 1.25,extent = {{-100, 100}, {100, -100}}, endAngle = 360), Line(origin = {-0.09, 2.68}, points = {{98.0894, 11.3172}, {80.0894, 3.31725}, {70.0894, 15.3172}, {78.0894, 43.3172}, {70.0894, 69.3172}, {62.0894, 75.3172}, {58.0894, 67.3172}, {66.0894, 45.3172}, {64.0894, 27.3172}, {42.0894, 19.3172}, {30.0894, 31.3172}, {44.0894, 27.3172}, {58.0894, 31.3172}, {52.0894, 41.3172}, {38.0894, 35.3172}, {24.0894, 39.3172}, {52.0894, 53.3172}, {38.0894, 71.3172}, {42.0894, 83.3172}, {26.0894, 91.3172}, {20.0894, 81.3172}, {30.0894, 79.3172}, {26.0894, 71.3172}, {4.08945, 73.3172}, {12.0894, 81.3172}, {10.0894, 89.3172}, {6.08945, 95.3172}, {-9.91055, 87.3172}, {-7.91055, 81.3172}, {-23.9106, 85.3172}, {-21.9106, 91.3172}, {-35.9106, 89.3172}, {-35.9106, 77.3172}, {-13.9106, 75.3172}, {2.08945, 81.3172}, {-5.91055, 69.3172}, {24.0894, 65.3172}, {32.0894, 55.3172}, {-9.91055, 37.3172}, {-9.91055, 49.3172}, {4.08945, 51.3172}, {10.0894, 57.3172}, {-13.9106, 53.3172}, {-13.9106, 65.3172}, {-27.9106, 69.3172}, {-31.9106, 61.3172}, {-21.9106, 59.3172}, {-17.9106, 33.3172}, {-7.91055, 21.3172}, {12.0894, 33.3172}, {24.0894, 19.3172}, {24.0894, 3.31725}, {-3.91055, 3.31725}, {-1.91055, 11.3172}, {14.0894, 11.3172}, {14.0894, 23.3172}, {6.08945, 21.3172}, {-9.91055, 13.3172}, {-47.9106, 15.3172}, {-47.9106, 25.3172}, {-31.9106, 23.3172}, {-25.9106, 31.3172}, {-43.9106, 41.3172}, {-39.9106, 47.3172}, {-31.9106, 43.3172}, {-27.9106, 47.3172}, {-45.9106, 55.3172}, {-55.9106, 39.3172}, {-41.9106, 33.3172}, {-61.9106, 33.3172}, {-61.9106, 45.3172}, {-37.9106, 67.3172}, {-47.9106, 73.3172}, {-55.9106, 59.3172}, {-67.9106, 63.3172}, {-71.9106, 57.3172}, {-67.9106, 51.3172}, {-73.9106, 43.3172}, {-71.9106, 31.3172}, {-85.9106, 33.3172}, {-87.9106, 21.3172}, {-61.9106, 21.3172}, {-61.9106, 11.3172}, {-75.9106, 11.3172}, {-75.9106, 17.3172}, {-93.9106, 15.3172}, {-93.9106, -2.68275}, {-85.9106, -2.68275}, {-85.9106, 7.31725}, {-85.9106, 9.31725}, {-81.9106, 9.31725}, {-81.9106, 3.31725}, {-59.9106, 3.31725}, {-43.9106, -20.6828}, {-57.9106, -26.6828}, {-69.9106, -22.6828}, {-57.9106, -14.6828}, {-65.9106, -2.68275}, {-87.9106, -16.6828}, {-85.9106, -34.6828}, {-65.9106, -70.6828}, {-35.9106, -64.6828}, {-35.9106, -56.6828}, {-57.9106, -60.6828}, {-71.9106, -38.6828}, {-61.9106, -36.6828}, {-53.9106, -54.6828}, {-31.9106, -48.6828}, {-25.9106, -64.6828}, {-35.9106, -72.6828}, {-27.9106, -80.6828}, {-19.9106, -64.6828}, {-21.9106, -54.6828}, {-13.9106, -50.6828}, {-17.9106, -40.6828}, {-23.9106, -42.6828}, {-23.9106, -48.6828}, {-27.9106, -50.6828}, {-31.9106, -40.6828}, {-47.9106, -44.6828}, {-51.9106, -34.6828}, {-39.9106, -38.6828}, {-21.9106, -36.6828}, {-23.9106, -28.6828}, {-39.9106, -32.6828}, {-39.9106, -28.6828}, {-21.9106, -20.6828}, {-25.9106, -12.6828}, {-35.9106, -16.6828}, {-49.9106, 1.31725}, {-29.9106, 3.31725}, {-29.9106, -0.682751}, {-35.9106, -4.68275}, {-33.9106, -8.68275}, {-21.9106, -6.68275}, {-21.9106, 5.31725}, {-13.9106, -0.682751}, {-15.9106, -22.6828}, {-3.91055, -42.6828}, {-11.9106, -58.6828}, {-1.91055, -72.6828}, {-3.91055, -78.6828}, {-13.9106, -72.6828}, {-17.9106, -80.6828}, {-7.91055, -84.6828}, {-9.91055, -90.6828}, {-39.9106, -80.6828}, {-39.9106, -86.6828}, {-9.91055, -98.6828}, {14.0894, -98.6828}, {14.0894, -92.6828}, {4.08945, -94.6828}, {2.08945, -86.6828}, {20.0894, -82.6828}, {20.0894, -92.6828}, {48.0894, -84.6828}, {60.0894, -76.6828}, {54.0894, -68.6828}, {44.0894, -72.6828}, {46.0894, -76.6828}, {34.0894, -82.6828}, {26.0894, -54.6828}, {32.0894, -54.6828}, {36.0894, -68.6828}, {46.0894, -66.6828}, {38.0894, -48.6828}, {20.0894, -48.6828}, {16.0894, -56.6828}, {24.0894, -74.6828}, {6.08945, -76.6828}, {6.08945, -70.6828}, {12.0894, -68.6828}, {12.0894, -60.6828}, {4.08945, -62.6828}, {0.0894477, -58.6828}, {4.08945, -50.6828}, {12.0894, -50.6828}, {16.0894, -42.6828}, {22.0894, -26.6828}, {30.0894, -28.6828}, {30.0894, -40.6828}, {38.0894, -40.6828}, {38.0894, -28.6828}, {38.0894, -22.6828}, {16.0894, -18.6828}, {6.08945, -36.6828}, {-3.91055, -22.6828}, {2.08945, -8.68275}, {6.08945, -8.68275}, {2.08945, -20.6828}, {4.08945, -24.6828}, {16.0894, -6.68275}, {30.0894, -10.6828}, {38.0894, -4.68275}, {32.0894, 7.31725}, {50.0894, 13.3172}, {52.0894, 3.31725}, {42.0894, 3.31725}, {42.0894, -4.68275}, {50.0894, -4.68275}, {50.0894, -10.6828}, {36.0894, -12.6828}, {30.0894, -16.6828}, {42.0894, -16.6828}, {74.0894, -20.6828}, {76.0894, -14.6828}, {60.0894, -10.6828}, {62.0894, 3.31725}, {84.0894, -12.6828}, {78.0894, -28.6828}, {50.0894, -24.6828}, {44.0894, -42.6828}, {50.0894, -60.6828}, {66.0894, -72.6828}, {72.0894, -66.6828}, {62.0894, -60.6828}, {52.0894, -44.6828}, {58.0894, -34.6828}, {68.0894, -36.6828}, {66.0894, -44.6828}, {58.0894, -42.6828}, {58.0894, -48.6828}, {66.0894, -50.6828}, {68.0894, -56.6828}, {78.0894, -56.6828}, {86.0894, -46.6828}, {78.0894, -42.6828}, {74.0894, -48.6828}, {74.0894, -38.6828}, {82.0894, -36.6828}, {88.0894, -40.6828}, {94.0894, -18.6828}, {90.0894, -6.68275}, {96.0894, -0.682751}, {98.0894, 11.3172}, {98.0894, 11.3172}}, color = {0, 85, 255}, thickness = 2)}));
algorithm

end DiffusionWater_CarslawJaeger;
