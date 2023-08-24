within MOSES.Simulations;

model ACTS_desorption
 // -----------------------------------------------------------------------------------------------------------------//
  //  Description: test - heat transfer coupled to media model                                                        //
  //  Authors:     Silva, R., Piccoli, E.                                                                             //
  //  Version:     2.1.4                                                                                              //
  //  Date:        02-11-2022                                                                                         //
  //                                                                                                                  //
  //  structure:   design parameters definition                                                                       //
  //               reactor instantiation                                                                              //
  // -----------------------------------------------------------------------------------------------------------------//
  
  
  //model configurations
  parameter Integer Granular_Physics_detail=1;                   //1-simple-robust,2-complex-detailed
  parameter Integer PDE_Mass_detail=1;                           //1-simple-robust,2-complex-detailed
  parameter Integer PDE_Energy_detail=1;                         //1-simple-robust,2-complex-detailed
  parameter Integer PDE_Species_detail=1;                        //1-simple-robust,2-complex-detailed
  parameter Integer U_Heat_transfer_detail=1;                    //1-simple-robust,2-complex-detailed
  parameter Integer U_Heat_ambient_detail=1;                     //1-simple-robust,2-complex-detailed
  parameter Integer K_Species_transfer_detail=1;                 //1-simple-robust,2-complex-detailed
  parameter Integer K_Species_diffuser_detail=1;                 //1-simple-robust,2-complex-detailed
  parameter Integer MonitorVariables=1;                          //1-computes monitor variables,   2-does not compute monitor variables
  parameter Integer ObjectiveFunctions=1;                        //1-computes objective functions, 2-does not compute objective functions
  parameter Integer Lagrange_Euler_mode=2;                       //fixed to 2 -Euler - to test reactor continuous media                     [-]
  parameter Integer mode=2;                                      //1-concurrent_flow 2-counter-flow
  parameter Integer N=20;                        //=20 for robust, =integer(ceil(L/p)) for determined length - number of particles/segments                        [-]
 
  //reactor full power goal - for system-level integration
  parameter Real Qr=6000;                                        //reactor total power  [W]  INPUT - from ROBERT - for space heating application?

  //reactor geometry
  parameter Real dp=0.001;                         //particle diameter                                                        [m]   //It is sent to material properties now, can be put in the top level as design parameter
  parameter Real L=0.3168;                             //length                                                                   [m]
  parameter Real Do=0.025;                            //outer diameter                                                           [m]
  parameter Real Di=0.005;                           //shaft inner diameter                                                     [m]
  parameter Real Dii=0.0;                            //annulus inner diameter                                                   [m]
  parameter Real p=0.02;                             //pitch                                                                    [m]
  parameter Real s=0.001;                            //blades thickness                                                         [m]
  parameter Real c=0.002;                            //gap clearence                                                            [m]   function of particle diameter
  parameter Real e=0.001;                            //shaft tube thickness                                                     [m]
  parameter Real t_fin=0.003;                        //fins thickness                                                           [m]
  parameter Real f_p=0.609;                          //packing factor                                                           [-]   "poured random packing" of solid spheres =0.609 (conservative) (source: from Wikipedia)

  //boundary conditions
  parameter Real T2(unit="K",displayUnit="degC")=38.8+273.15;     //temperature boundary condition in the fluid condenser/evaporator side    [K]  desorption T2=38.8°C, adsorption T2=10°C, note: it is not necessarily the saturation temperature (can be superheated)
  parameter Real Psat_theo(displayUnit="Pa")=6283;                   //saturation pressure boundary condition in the condenser/evaporator side  [Pa] desorption Psat=6283Pa (slight overheat) (Tamb=°C?), adsorption Psat=1166Pa (slight overheat) (Tamb=°C?)

  //initial conditions
  parameter Real Ti(unit="K",displayUnit="degC")=307.63;  //initial temperature of the particles                                     [K]
  parameter Real Wi=0.108858;                                     //initial loading state of the particles                                   [-]

  //inlet conditions
  parameter Real T_h_in(unit="K",displayUnit="degC")=90+273.15; //inlet temperature of heat transfer fluid                                 [K] desorption Th_in=90°C, Th_in=adsorption=25°C
  parameter Real T_b_in(unit="K",displayUnit="degC")=Ti;        //inlet temperature of beads                                               [K]
  parameter Real w_in=Wi;                                       //inlet loading                                                            [-] desorption Win=0.3, adsorption Win=0.03771
  parameter Real Wmin1=0.05193;
  parameter Real Wmin2=0.05685;
  
  parameter Real mdot_h=0.00229;                                 //inlet heat transfer fluid mass flow rate                                 [kg/s]
  parameter Real mdot_v_in=1E-9;                                //inlet vapor mass flow rate                                               [kg/s] (for PDE inlet conditions)
  parameter Real M_v_in=8E-13;                                  //inlet vapor mass (per particle)                                          [kg]   (for PDE inlet conditions)

  //operation conditions
  parameter Real f=0.5;                                          //shaft rotation frequency                                                 [Hz]   [0.03-0.1] limited by mechanical resistance of material

  //overall heat transfer
  parameter Real U_fixed=586;                                    //overall heat transfer coefficient  (only used if fixed - mode_heat=1)    [W/m2.K] [300-600] source: bibliography
  parameter Real k_t=401;                                        //shaft tube material thermal conductivity                                 [W/m.K]  (copper - source: Incropera)

  //reactor instantiation
  MOSES.Reactors.ACTS_reactor reactor(Granular_Physics_detail = Granular_Physics_detail, PDE_Mass_detail = PDE_Mass_detail, PDE_Energy_detail = PDE_Energy_detail, PDE_Species_detail = PDE_Species_detail, U_Heat_transfer_detail = U_Heat_transfer_detail, U_Heat_ambient_detail = U_Heat_ambient_detail, K_Species_transfer_detail = K_Species_transfer_detail, K_Species_diffuser_detail = K_Species_diffuser_detail, MonitorVariables = MonitorVariables, ObjectiveFunctions = ObjectiveFunctions, Lagrange_Euler_mode = Lagrange_Euler_mode, mode=mode,N = N, dp = dp, L = L, Do = Do, Di = Di, Dii = Dii, p = p, s = s, c = c, e = e, t_fin = t_fin, f_p = f_p, U_fixed = U_fixed, k_t = k_t, f = f, mdot_h = mdot_h, T2 = T2, Psat_theo = Psat_theo, Ti = Ti, Wi = Wi, T_h_in = T_h_in, T_b_in = T_b_in, w_in = w_in, M_v_in = M_v_in, mdot_v_in = mdot_v_in);
  
equation

  annotation(
    experiment(StartTime = 0, StopTime = 1e6, Tolerance = 1e-06, Interval = 2),
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", steadyState = "()"));

end ACTS_desorption;
