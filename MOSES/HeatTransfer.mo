within MOSES;

package HeatTransfer
  //within MOSES.HeatTransfer;
  
  model ThermalResistance_Slab
  
    ThermalConductivity k "slab thermal conductivity";
    ThermalDiffusivity alpha "slab thermal diffusivity";
    Density rho "slab density";
    SpecificHeatCapacity cp "slab specific heat capacity";
    //ThermalResistance Rss;
    //Real Fo;
    Temperature Tb;
    Temperature Tc;
    Temperature Ti;
    ThermalResistance Rheat_ss;
    ThermalResistance Rheat;
    Length thickness;
    Volume sampleVol;
    Real Fheat;
    Real tau(start=1e-9);
    Real Fo_half;
    //Fheat(tau) fit3 parameters (see .docx in 0_GeneralModelling)
    /*constant Real par_a = 0.0007461;
    constant Real par_b = 0.01287;
    constant Real par_c = 0.2788;*/
    constant Real par_a = 0.0008868;
    constant Real par_b = 0.01336;
    constant Real par_c = 0.3029;
    
    constant Real par_a1 = 0.1002;
    constant Real par_b1 = 0.004651;
    constant Real par_c1 = 0.8224;
    Temperature T0;
    ThermalResistance Rheat_start = Rheat_ss / 1e9;
    Real der_Tb;
    Temperature Ts;
    
    Real AUX_numeratore;
    Real AUX_denominatore;
    //#################################################################################################################################################
    MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
      Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    MOSES.Components.Connectors.ThermalConnector thermalConnector1 annotation(
      Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    //#################################################################################################################################################
  equation
    alpha = k / (rho * cp);
    Fo_half=alpha*time/10/(2*thickness)^2;
    Tc=thermalConnector.T;
    Tb=thermalConnector1.T;
//(Tb-Tc) / (T0-Tc) = par_c1*exp(-tau/par_a1) + (1-par_c1)*exp(-tau/par_b1);
//[CORRECT LAST VERION]-->(Ts-T0)/(Tc-T0) = 1 - (0.3602429839185508*exp(-(tau/0.22086336197141038)^1.6855937204150009) + 0.22069379632319797*exp(-(tau/0.054189378454467634)^2.534194545513618) + (1-0.3602429839185508-0.22069379632319797)*exp(-(tau/0.11485659915088539)^2.003964233348046));
    (Tb - T0) / (Tc - T0) = 1 - par_c1 * exp(-tau / par_a1) - (1 - par_c1) * exp(-tau / par_b1);
//tau = time * alpha / (2*thickness)^2;
    AUX_numeratore = Ts - T0;
    AUX_denominatore = (Tc-T0);
//(T0-Ts)/(T0-Tc) = 1 - 0.3602429839185508*exp(-(tau/0.22086336197141038)^1.6855937204150009) - 0.22069379632319797*exp(-(tau/0.054189378454467634)^2.534194545513618) - (1-0.3602429839185508-0.22069379632319797)*exp(-(tau/0.11485659915088539)^2.003964233348046);
    der_Tb = der(Tb);
//Rheat_ss = thickness / (area * pi^2 * alpha);
    Rheat_ss = (2 * thickness) ^ 2 / (pi ^ 2 * alpha) / (sampleVol * cp * rho);
    Fheat = 1 - par_c*exp(-(tau)/par_a) - (1-par_c)*exp(-(tau)/par_b);
    Rheat = Rheat_ss * Fheat + Rheat_start;
//#################################################################################################################################################
    thermalConnector.Q = (Tc - Tb) / Rheat;
//here or under?
    thermalConnector.Q = -thermalConnector1.Q;
//#################################################################################################################################################
  annotation(
      Icon(graphics = {Ellipse(extent = {{-100, 100}, {100, -100}}, endAngle = 360), Line(origin = {0, -9.96209}, points = {{-100, 9.96209}, {-60, 9.96209}, {-40, 49.9621}, {0, -50.0379}, {40, 49.9621}, {60, 9.96209}, {100, 9.96209}, {100, 9.96209}}), Text(origin = {-24, 76}, extent = {{-36, 24}, {84, -36}}, textString = "Rc")}));
  
  end ThermalResistance_Slab;

  model ContactResistance_SiuLee
    ThermalConductivity k "thermal conductivity of the particle";
    Temperature Tb;
    Temperature Tc;
    Temperature Ti;
    Real psi (start=0.0103);
    Real fpsi;
    Real eta;
    Real fTran;
    //Time tag(start=0, fixed=true);
    parameter Real gamma "ratio of contact radius over particle radius";
    Length rp "particle radius";
    
    /*start debugging*/
    Real logArg;
    ThermalResistance Rss;
    
    Real Fo;
    ThermalDiffusivity alfa "thermal diffusivity of the particle";
    Density rho "particle density";
    SpecificHeatCapacity cp "particle specific heat capacity";
    Real tau;
    ThermalResistance Rc "thermal contact resistance";
    ThermalResistance Rc2 "thermal contact resistance";
    /*end debugging*/
    
    MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
      Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    MOSES.Components.Connectors.ThermalConnector thermalConnector1 annotation(
      Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  initial equation
//Tb=Ti;
  equation
    /*start debugging*/
    alfa=k/(rho*cp);
    Rss=eta/(k*rp);
    Fo=alfa*tau/rp^2;
    Rc2=0.57588/(k*rp)*(gamma^(-1)-1.0929e-3*gamma^(-2)+3.0187e-5*gamma^(-3)-1.202e-7*gamma^(-4))/(1+1/3*(1/Fo^0.5)+1/50*(1/Fo^0.5)^2-1/400*(1/Fo^0.5)^3);
    Rc=eta/(k*rp)/(1+1/3*(1/psi^0.5)+1/50*(1/psi^0.5)^2-1/400*(1/psi^0.5)^3);
/*end debugging*/
//I redefined eta to be able to use it more universally ...
    eta = 0.57588 * (gamma ^ (-1) - 1.0929e-3 * gamma ^ (-2) + 3.0187e-5 * gamma ^ (-3) - 1.202e-7 * gamma ^ (-4));
//To avoid chattering when temperatures cross, I limit a maximum fpsi at temperature difference close to zero
    logArg = (Tb - Tc) / (Ti - Tc);
  if logArg > 0.001 then
//Explicit version
//fpsi=-0.5*4*pi*eta/3*log((Tb-Tc)/(Ti-Tc));
//Implicit version
      exp(-fpsi * 3 * 2 * 0.25 / pi / eta) = (Tb - Tc) / (Ti - Tc);
    elseif logArg < (-0.001) then
      exp(-fpsi * 3 * 2 * 0.25 / pi / eta) = ((-Tb) + Tc) / (Ti - Tc);
    else
      fpsi = 100;
    end if;
// I think we can easily improve this fit significantly. In particular I think we should solve for sqrt(psi) and not psi, as this would be easier and is actually the quantity we will need in the end, but for the moment I left it unchanged ...
//approximation between 0.01 and 10
//  if time-tag>0.001 then
    if fpsi < 0.0357135133338985 then
// use the quantity that can be calculated directly for the test, not the one that has to be solved for ...
      psi = 0.0103;
//      tag=time;
    elseif fpsi < 1.67166666666667 then
      fpsi = 2.908 * psi - 2.684 * psi ^ 2 + 1.499 * psi ^ 3;
//      tag=time;
    elseif fpsi < 12.1558179474689 then
//you already checked for psi >= 1, do not repeat here, logical tests take the equivalent of a complex operation of cpu ...
      fpsi = 1.479 * psi - 0.02937 * psi ^ 2;
// this can be solved analytically ...
//      tag=time;
    elseif fpsi < 106.759270070386 then
      psi = fpsi / 1.088;
//      tag=time;
    elseif fpsi < 1021.22016428725 then
      psi = fpsi / 1.028;
//      tag=time;
    elseif fpsi < 10066.8509234741 then
      psi = fpsi / 1.009;
//      tag=time;
    else
      psi = fpsi / 1.003 * psi;
//     tag=time;
    end if;
//else
//psi=fpsi/1.009;
//tag=time-0.001;
//end if;
    Tc = thermalConnector.T;
    Tb=thermalConnector1.T;
//here a factor 2 was missing as we are using the contact temperature here ...
    thermalConnector.Q = 2 * (thermalConnector.T - thermalConnector1.T) * k * rp / eta / fTran;
    fTran=1/(1+1/(3*sqrt(psi))+1/(50*psi)-1/(400*sqrt(psi)^3));
    thermalConnector.Q=-thermalConnector1.Q;
  annotation(
      Icon(graphics = {Ellipse(extent = {{-100, 100}, {100, -100}}, endAngle = 360), Line(origin = {0, -9.96209}, points = {{-100, 9.96209}, {-60, 9.96209}, {-40, 49.9621}, {0, -50.0379}, {40, 49.9621}, {60, 9.96209}, {100, 9.96209}, {100, 9.96209}}), Text(origin = {-24, 76}, extent = {{-36, 24}, {84, -36}}, textString = "Rc")}));
  
  end ContactResistance_SiuLee;
  
  model ThermalResistance_Slab_EuroSun2022
  
    ThermalConductivity k "slab thermal conductivity";
    ThermalDiffusivity alpha "slab thermal diffusivity";
    Density rho "slab density";
    SpecificHeatCapacity cp "slab specific heat capacity";
    Length thickness "slab thickness";
  //from Main()
    Volume sampleVol "slab volume";    
//from Main()
    Temperature Tb;
    Temperature Tc;
    Temperature Ti;
    Temperature Tf;
    Temperature T0;
  
    ThermalResistance Rheat_ss;
    ThermalResistance Rheat;
    
    Real Fheat;
    Real tau(start=1e-2);
    Real tau_calc(start=0);
  
    ThermalResistance Rheat_start = Rheat_ss / 1e2;
    Real der_Tb;
    
    Integer AUTOSET_SorptionCondition;    
//imported from imposed BC
    constant Real par_a = 0.0008868;
    constant Real par_b = 0.01336;
    constant Real par_c = 0.3029;
    constant Real par_a1 = 0.1002;
    constant Real par_b1 = 0.004651;
    constant Real par_c1 = 0.8224;
    
    Real numt;
    Real dent;
    //Real ratt;
    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
      Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    MOSES.Components.Connectors.ThermalConnector thermalConnector1 annotation(
      Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  equation
    alpha = k / (rho * cp);
    Tc=thermalConnector.T;
    Tb=thermalConnector1.T;
//tau = time * alpha / (2*thickness)^2;//EXPRESSION FOR tau EVALUATION WITHOUT ADSORPTION
    if AUTOSET_SorptionCondition == 0 then
//DES
      if Tb < Tc - 0.001 then
        (Tb - T0) / (Tc - T0) = 1 - 0.82242203 * exp(-tau_calc / 0.10016136) - (1 - 0.82242203) * exp(-tau_calc / 0.0046461);
      else
        tau_calc = 1e-2;
      end if;
      numt = Tb - T0;
      dent = Tc - T0;
//ratt=(Tb-Tf)/(Tc-Tf);
    else
//ADS
      if Tb > Tc + 0.001 then
        (Tb - Tf) / (Tc - Tf) = 1 - 0.82242203 * exp(-tau_calc / 0.10016136) - (1 - 0.82242203) * exp(-tau_calc / 0.0046461);
      else
        tau_calc = 1e-2;
      end if;
      numt = Tb - Tf;
      dent = Tc - Tf;
//ratt=(Tb-Tf)/(Tc-Tf);
    end if;
    if tau_calc>1e-2 then
    tau=tau_calc;
    else
    tau=1e-2;
    end if;
    
    der_Tb = der(Tb);
    
    Rheat_ss = (2*thickness)^2 / (pi^2 * alpha) / (sampleVol * cp * rho);
    Fheat = 1 - par_c*exp(-(tau)/par_a) - (1-par_c)*exp(-(tau)/par_b);
    Rheat = Rheat_ss * Fheat + Rheat_start;
//#########################################################################################################
    thermalConnector.Q = (Tc - Tb) / Rheat;
//here or under? a factor 2 was missing as we are using the contact temperature here ...
    thermalConnector.Q = -thermalConnector1.Q;
  annotation(
      Icon(graphics = {Ellipse(extent = {{-100, 100}, {100, -100}}, endAngle = 360), Line(origin = {0, -9.96209}, points = {{-100, 9.96209}, {-60, 9.96209}, {-40, 49.9621}, {0, -50.0379}, {40, 49.9621}, {60, 9.96209}, {100, 9.96209}, {100, 9.96209}}), Text(origin = {-24, 76}, extent = {{-36, 24}, {84, -36}}, textString = "Rc")}));
  
  end ThermalResistance_Slab_EuroSun2022;

  model ContactResistance_SiuLee_SteadyState
Modelica.Units.SI.ThermalConductivity k "thermal conductivity of the particle";
    Modelica.Units.SI.Temperature Tb;
    Modelica.Units.SI.Temperature Tc;
    Real eta;
    //Time tag(start=0, fixed=true);
    Real gamma "ratio of contact radius over particle radius";
    Modelica.Units.SI.Length rp "particle radius";
    Modelica.Units.SI.ThermalResistance Rss;
    Modelica.Units.SI.Density rho "particle density";
    Modelica.Units.SI.SpecificHeatCapacity cp "particle specific heat capacity";
    /*end debugging*/
    
    MOSES.Components.Connectors.ThermalConnector thermalConnector annotation(
      Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    MOSES.Components.Connectors.ThermalConnector thermalConnector1 annotation(
      Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  initial equation
  //Tb=Ti;
  equation
    Rss=eta/(k*rp);
    eta=0.57588/3*(gamma^(-1)-1.0929e-3*gamma^(-2)+3.0187e-5*gamma^(-3)-1.202e-7*gamma^(-4));
    
    Tc=thermalConnector.T;
    Tb=thermalConnector1.T;
    //thermalConnector.Q=2*(thermalConnector.T-thermalConnector1.T)/Rss;        //FIN-SPHERE CONTACT
    thermalConnector.Q=(thermalConnector.T-thermalConnector1.T)/Rss;            //SPHERE-SPHERE CONTACT
    thermalConnector.Q=-thermalConnector1.Q;
  annotation(
      Icon(graphics = {Ellipse(extent = {{-100, 100}, {100, -100}}, endAngle = 360), Line(origin = {0, -9.96209}, points = {{-100, 9.96209}, {-60, 9.96209}, {-40, 49.9621}, {0, -50.0379}, {40, 49.9621}, {60, 9.96209}, {100, 9.96209}, {100, 9.96209}}), Text(origin = {-24, 76}, extent = {{-36, 24}, {84, -36}}, textString = "Rc")}));
  
  end ContactResistance_SiuLee_SteadyState;
  annotation(
    Icon(graphics = {Rectangle(lineColor = {85, 85, 0}, lineThickness = 2, extent = {{-100, 100}, {100, -100}}), Text(origin = {-6, 0}, lineColor = {85, 85, 0}, lineThickness = 2, extent = {{-94, 100}, {106, -100}}, textString = "H")}));
end HeatTransfer;
