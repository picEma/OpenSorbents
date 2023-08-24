within MOSES.Components.Boundaries;

model PT_FluidBoundary_EuroSun2022
    extends MOSES.Components.Boundaries.Undef_FluidBoundary;
  Pressure peva;
  Pressure pcond;
  Temperature teva;
  Temperature tcond;
  Temperature T;
  SpecificEnthalpy hsat;
  
  Time SET_Period;//set in Main()
  Real SET_DutyCycle;//set in Main()
  
  Real AUX_wave;
  Time AUX_PeriodStartTime;
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
equation
  hOut=hsat;//Modelica.Media.Water.WaterIF97_pT.specificEnthalpy_pT(p,T,0);
  hsat= -2.4896E-02*T^3 + 2.5887E+01*T^2 - 7.2136E+03*T + 3.0534E+06;
  
  AUX_wave = sin(time * 2*pi/SET_Period);

  when AUX_wave>=0 then
    AUX_PeriodStartTime = time;//trigger on period start
  end when;
  
  if time-AUX_PeriodStartTime<SET_Period*SET_DutyCycle then
    p=pcond;
    T=tcond;
  else
    p=peva;
    T=teva;
  end if;
  
  
end PT_FluidBoundary_EuroSun2022;
