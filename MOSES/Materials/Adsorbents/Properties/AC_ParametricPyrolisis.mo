within MOSES.Materials.Adsorbents.Properties;

model AC_ParametricPyrolisis
  extends MOSES.Materials.Adsorbents.Properties.GeneralAdsorbent;
  //this now extends a new model without geometry finally...
  //Boolean sorptionSettings; //0.ADS - 1.DES // deprecated for now
  parameter DiffusionCoefficient D0 = 0.0043; //???
  parameter MolarEnergy Ea = 41500; //???
  //constant Density rho = 430; //RMF-AC WP4
  //constant Density rho_t = 430;
  //constant Density rho_s = 2000; //RMF-AC WP4
  Density rho_tot;
  Real epsilon; //-----------------------------------FIX!!!!!!!!!!!!!!
  Real totalPoreVol_cm3;
  constant ThermalConductivity kDry = 0.067; //RMF-AC WP4
  constant ThermalConductivity kWat = 0.58;
  constant ThermalConductivity kVap = 0.0195;
  SpecificHeatCapacity cpDry;
  constant SpecificHeatCapacity cpWat = 4182;
  constant SpecificHeatCapacity cpVap = 1880;
  parameter SpecificEnergy Hs = 2.693e6 "Specific heat of sorption";
  constant MolarMass M = 0.01801528;
  SpecificHeatCapacity Cptot;
  Real Tpyr;
  Real Dpyr;
  Length microradius;
  
  Loading Wi;//set in Main()
  Loading wa;
  Loading wd;
  Real a;
  Real b;
  Real c;
  /*
  //[note 1]a single equil equation derived from in-situ equilibrium is used hence WP4 fits are disabled
  constant Real w01 = 0.25; //RMF-AC WP4
  constant Real w02 = 0.12; //RMF-AC WP4
  constant Real C1 = 150000; //RMF-AC WP4
  constant Real C2 = 210000; //RMF-AC WP4
  constant Real n1 = 6.2; //RMF-AC WP4
  constant Real n2 = 1.5; //RMF-AC WP4
  constant Real dC1 = 0; //RMF-AC WP4
  constant Real dC2 = 21000; //RMF-AC WP4
  constant Real dn1 = 1.4; //RMF-AC WP4
  Real dn2;
  */
  /*
  constant Real Vtot = 1.83; //[cm^3/g] //RMF-AC WP4
  constant Real Vmicro = 0.41; //[cm^3/g] //RMF-AC WP4
  constant Real Vmeso = 0.01; //[cm^3/g] //RMF-AC WP4
  constant Real Vmacro = 1.41; //[cm^3/g] //RMF-AC WP4
  constant Real Amicro = 1088; //[m^2/g] //RMF-AC WP4
  constant Real Ameso = 1; //[m^2/g] //RMF-AC WP4
  constant Real dmicro = 0.38; //avg pore diam [nm] //RMF-AC WP4
  constant Real dmeso = 40; //avg pore diam [nm] //RMF-AC WP4
  */
  
  Velocity velocity_rms;
  Length mean_free_math;
  DiffusionCoefficient D_micro;
  DiffusionCoefficient D_macro;
  
  constant Real probability_sorption = 1;//this may be defined as a funtion()
  constant Real surface_area_BET = 1088 * 1000;
    
equation
//from DOE
  a=2.448e-6*Tpyr*Dpyr-1.308e-3*Dpyr;
  b=1000*(0.4274*Tpyr+1.224*Dpyr-0.001969*Tpyr*Dpyr);
  c=2.035;
  
  rho_skel=1000*(1.72+2.947e-6*Tpyr*Dpyr-2.065e-3*Dpyr);
  rho_env=1000*(5.605e-4*Tpyr+1.425e-3*Dpyr-2.403e-6*Tpyr*Dpyr);
  
  
  totalPoreVol_cm3=1/rho_env-1/rho_skel;
  ///////////////////////////////
  
  epsilon = totalPoreVol_cm3 * rho_env;//0.787 is this correct? check with ema

  //dn2 = 6.6 - 0.02 * T;//disabled: see [note 1] above
  cpDry = 1000 * (0.93 + 0.0063 * (T-273.15)); //RMF-AC WP4
  rho_env = rho_tap;
  rho_tot = rho_env * (1 + w);
  k = kDry + 997 / rho_env * w * kWat;
  //D = rho * R * T * w * Ds / (epsilon * M * p);
  
  velocity_rms = sqrt(3 * Modelica.Constants.R * T / M);
  mean_free_math = Modelica.Constants.k * T / pi / p / sqrt(2) / (265e-12)^2;
  D_micro = D0 * exp(- Ea / R / T) * probability_sorption;
  D_macro = velocity_rms * mean_free_math / 3;
  D = D_micro * D_macro / (D_micro + D_macro);
  
  
  //Ds = D0 * exp(-Ea / (R * T));
  Cp = cpDry;
  Cptot = cpDry + w * cpWat;
  if p >= p_sat then
    A = 0;
  else
    A = -R * T * log(p / p_sat) / M;
  end if;
  H_ads = Hs;
  
  /*
  //currently disabled: see [note 1] above
  wa=w01 * exp(-(A / (C1)) ^ (n1)) + w02 * exp(-(A / (C2)) ^ (n2));//DEFAULT from WP4 data fits
  wd=w01 * exp(-(A / (C1 + dC1)) ^ (n1 + dn1)) + w02 * exp(-(A / (C2 + dC2)) ^ (n2 + dn2));
  */
  
  //when using fit from IN-SITU TJS EQUILIBRIUM CURVE (see experiment runs from july2022-aug2022 on OKSG and RMFAC)
  wa = a*exp(-(A/b)^c);//carefull validity domain see python jupyter notebnook;
  wd = wa;
 
  w_eq = wa;
  w = w_eq;

end AC_ParametricPyrolisis;
