within MOSES.Components.Boundaries;

model TRamp_HeatBoundary_EuroSun2022
  extends MOSES.Components.Boundaries.Undef_HeatBoundary;
  
  Temperature Ti "initial temperature";//set in Main()
  Temperature Tf "regime temperature";//set in Main()
  Time SET_Period;//set in Main()
  Real SET_DutyCycle;//set in Main()
  Integer AUTOSET_SorptionCondition;//this is SET HERE automatically and SENT to Main()
  
  Real derT;
  Real AUX_wave;
  Time AUX_PeriodStartTime;//trigger
  //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
equation
  AUX_wave = sin(time * 2 * pi / SET_Period);//(the square wave BC is driven by a sine wave)

  when AUX_wave>=0 then
    AUX_PeriodStartTime = time;//trigger on the period start
  end when;
  
  if time-AUX_PeriodStartTime<SET_Period*SET_DutyCycle then
    AUTOSET_SorptionCondition = 0;//DES
    T=Tf;
  else
    AUTOSET_SorptionCondition = 1;//ADS
    T=Ti;
  end if;
  
  derT=der(T);

end TRamp_HeatBoundary_EuroSun2022;
