within MOSES.Components.Hydraulics.Valves;

model LinearValve_Dummy
  extends MOSES.Components.Hydraulics.Valves.GeneralValve;
  
  //parameters cannot be changed
  constant MolarMass M = 0.01801528;
  Pressure p0;
  Temperature chamberT;
  parameter Volume chamberV = 8.9e-8 "chamber volume";   //chamber volume=sample volume
  Pressure dp0 "Very pressure drop coefficient";
  Integer ADS;
  //Real n "num of mol in gas phase in the chamber";
  //Real n0 "num of mol in gas phase at t=0";
  MassFlowRate mDotAds;
initial equation
  //n=n0;
equation

  //n0 = p0 * chamberV / (R * chamberT);
  
  
  
  
  //Pressure drop only if going the wrong direction
  if ADS==1 then
    if fluidConnectorA.p <= fluidConnectorB.p then
      dp0=0;//1; //1Pa of pressure drop every kg/s of flow
      //fluidConnectorA.p - fluidConnectorB.p  = 0;
      //der(n) = 0;
    else
      dp0=1e100; //1e100Pa of pressure drop every kg/s of flow
      //der(n) = 0;//mDotAds / M;
      //fluidConnectorA.p - fluidConnectorB.p  = 0;//fluidConnectorA.p * chamberV = n * R * chamberT;//
    end if; 
  else
    if fluidConnectorA.p >= fluidConnectorB.p then
      dp0=0;//1; //1Pa of pressure drop every kg/s of flow
      //fluidConnectorA.p - fluidConnectorB.p  = 0;
      //der(n) = 0;
    else
      dp0=1e100; //1e100Pa of pressure drop every kg/s of flow
      //der(n) = 0;//mDotAds / M;
      //fluidConnectorA.p - fluidConnectorB.p  = 0;//fluidConnectorA.p * chamberV = n * R * chamberT;//
    end if;
    
    
  end if;
  
  fluidConnectorA.p - fluidConnectorB.p  = dp0*fluidConnectorA.mDot;

end LinearValve_Dummy;
