within MOSES.Materials.Adsorbents.Properties;

model RMFAC
  extends MOSES.Materials.Adsorbents.Properties.GeneralAdsorbent; //this now extends a new model without geometry finally...
  
  //Boolean sorptionSettings; //0.ADS - 1.DES // deprecated for now
  Loading Wi;
  
  parameter DiffusionCoefficient D0 = 0.0043; //???
  parameter MolarEnergy Ea = 41500; //???
  constant Density rho = 430; //RMF-AC WP4
  constant Density rho_t = 430;
  constant Density rho_s = 2000; //RMF-AC WP4
  Density rho_tot;
  Real epsilon; //-----------------------------------FIX!!!!!!!!!!!!!!
  constant Real totalPoreVol_cm3 = 1.83;
  parameter ThermalConductivity kDry = 0.1005; //RMF-AC WP4
  constant ThermalConductivity kWat = 0.58;
  constant ThermalConductivity kVap = 0.0195;
  SpecificHeatCapacity cpDry;
  constant SpecificHeatCapacity cpWat = 4182;
  constant SpecificHeatCapacity cpVap = 1880;
  parameter SpecificEnergy Hs = 2.693e6 "Specific heat of sorption";
  constant MolarMass M = 0.018;
  SpecificHeatCapacity Cptot;
  Loading wa;
  Loading wd;
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
  //constant Real Vtot = 1.83; //[cm^3/g] //RMF-AC WP4
  //constant Real Vmicro = 0.41; //[cm^3/g] //RMF-AC WP4
  //constant Real Vmeso = 0.01; //[cm^3/g] //RMF-AC WP4
  //constant Real Vmacro = 1.41; //[cm^3/g] //RMF-AC WP4
  //constant Real Amicro = 1088; //[m^2/g] //RMF-AC WP4
  //constant Real Ameso = 1; //[m^2/g] //RMF-AC WP4
  //constant Real dmicro = 0.38; //avg pore diam [nm] //RMF-AC WP4
  //constant Real dmeso = 40; //avg pore diam [nm] //RMF-AC WP4
  
  Velocity velocity_rms;//-----------------AGO-2022
  Length mean_free_math;//-----------------AGO-2022
  DiffusionCoefficient D_micro;
  DiffusionCoefficient D_macro;
  //DiffusionCoefficient D_kn;
  parameter Length pore_size=5e-6;
  parameter Length microradius=2e-6;
  parameter Real tortuosity=1;
  constant Real probability_sorption = 1;//-----------------AGO-2022
  
  constant Real surface_area_BET = 1088 * 1000;
  
  //Real FIT_Tavg;
  //Pressure AUX_phantom_p_sat;
  //Real AUX_phantom_w;
  //Real AUX_phantom_A;
  
equation
  epsilon = totalPoreVol_cm3 * rho_env / 1000;

  dn2 = 6.6 - 0.02 * T; //RMF-AC WP4
  cpDry = 1000 * (0.93 + 0.0063 * (T-273.15)); //RMF-AC WP4
  rho_skel = rho_s;
  rho_env = rho;
  rho_tap = rho_t;
  rho_tot = rho_env * (1 + w);
  k = kDry + 997 / rho * w * kWat;
  //D = rho * R * T * w * Ds / (epsilon * M * p);
  
  velocity_rms = sqrt(3 * Modelica.Constants.R * T / M);//-----------------AGO-2022
  mean_free_math = Modelica.Constants.k * T / pi / p / sqrt(2) / (265e-12)^2;//-----------------AGO-2022
  D_micro = D0 * exp(- Ea / R / T) * probability_sorption;
  D_macro = velocity_rms * pore_size / 3 /tortuosity;
  //D_macro = velocity_rms * mean_free_math / 3 ;
  D = D_micro * D_macro / (D_micro + D_macro);
  
  
  //Ds = D0 * exp(-Ea / (R * T));
  Cp = cpDry;
  Cptot = cpDry + w * cpWat;
  if p >= p_sat then
    A = 0;
  else
    A = -R * T * log(p / p_sat) / M;
  end if;
  H_ads = 1000*(3167-2.4337*T)+A;
  
  //wa=w01 * exp(-(A / (C1)) ^ (n1)) + w02 * exp(-(A / (C2)) ^ (n2));//DEFAULT from WP4 data fits
  //wd=w01 * exp(-(A / (C1 + dC1)) ^ (n1 + dn1)) + w02 * exp(-(A / (C2 + dC2)) ^ (n2 + dn2));
  
  /*
  wa = some_fit_function();//when using fit from IN-SITU TJS EQUILIBRIUM CURVE (see experiment runs from july2022-aug2022 on OKSG and RMFAC)
  wd = wa;
  */
  
  //NEW EQUILIBRIUM CURVES FROM PYTHON JUPYTER NOTEBOOK FITS-----
  wa=0.3037*exp(-(A/145600)^(2.072));//carefull validity domain see python jupyter notebnook
  wd=wa;
  
  /*AUX_phantom_w = 0.3037*exp(-(AUX_phantom_A/145600)^2.072);
  if p >= AUX_phantom_p_sat then
    AUX_phantom_A = 0;
  else
    AUX_phantom_A = -R * (FIT_Tavg+273.15) * log(p / AUX_phantom_p_sat) / M;
  end if;
  AUX_phantom_p_sat = 611.21*exp((18.678-(FIT_Tavg)/234.5)*((FIT_Tavg)/(257.14+FIT_Tavg)));*/
  //-----
  w=w_eq;
  w_eq=wa;
  /*
  if sorptionSettings==false then
    //ads
    w_eq = wa;
    if w_eq>=Wi then
      w=w_eq;
    else
      w=Wi;
    end if;
  else
     //des
    w_eq = wd;
    if w_eq<=Wi then
      w=w_eq;
    else
      w=Wi;
    end if;
  end if;
 */
 
  //w_eq = wd;
  //w = wd;
  
end RMFAC;
