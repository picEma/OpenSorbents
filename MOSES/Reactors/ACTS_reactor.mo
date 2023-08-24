within MOSES.Reactors;

model ACTS_reactor
 // ------------------------------------------------------------------------------------------------------------------//                                                                                                                                                                                                                        
  //  Description: Granular fluid-like solid sorption reactor                                                          //
  //                                                                                                                   //
  //  Type:        one-dimensional unsteady-state PDE system with non-linear terms                                     //
  //  Authors:     Silva, R., Piccoli, E.,                                                                             //
  //  Version:     4.4.3                                                                                               //
  //  Date:        05-12-2022                                                                                          //     
  //                                                                                                                   //
  //  structure:   multiphysics model (mechanics, continuity, energy, water, sorption)                                 //
  //                                                                                                                   //
  //               three one-dimensional dynamic partial differential equations with non-linear terms                  //
  //                 (1) energy conservation HTF                                                                       //
  //                 (2) energy conservation of media                                                                  //
  //                 (3) species conservation of media                                                                 //
  //                                                                                                                   //
  //               constitutive relations                                                                              //
  //                 (4) heat transfer                                                                                 //
  //                 (5) mass transfer                                                                                 //
  //                                                                                                                   //
  //               bi-directional coupling between reactor-level <-> material-level                                    //
  //                 (2) Euler mode formulation                                                                        //
  //  validation:                                                                                                      //                                                                                                                  //
  //     Euler mode (2) cross-validated with Lagrange mode (1) - with only transient terms gives same results          //
  // ----------------------------------------------------------------------------------------------------------------- //
  
  //model configurations
  parameter Integer Granular_Physics_detail;                                   //1-simple-robust,2-complex-detailed  
  parameter Integer PDE_Mass_detail;                                           //1-simple-robust,2-complex-detailed 
  parameter Integer PDE_Energy_detail;                                         //1-simple-robust,2-complex-detailed 
  parameter Integer PDE_Species_detail;                                        //1-simple-robust,2-complex-detailed 
  parameter Integer U_Heat_transfer_detail;                                    //1-simple-robust,2-complex-detailed 
  parameter Integer U_Heat_ambient_detail;                                     //1-simple-robust,2-complex-detailed 
  parameter Integer K_Species_transfer_detail;                                 //1-simple-robust,2-complex-detailed 
  parameter Integer K_Species_diffuser_detail;                                 //1-simple-robust,2-complex-detailed 
  parameter Integer MonitorVariables;                                          //1-computes monitor variables,   2-does not compute monitor variables
  parameter Integer ObjectiveFunctions;                                        //1-computes objective functions, 2-does not compute objective functions 
  parameter Integer Lagrange_Euler_mode;                                       //fixed to 2 - Euler - continuous media)   [-]
  parameter Integer N;                                                         //number of axial segments                 [-]
  parameter Integer mode;                                                      //1-concurrent_flow 2-counter-flow

  //reactor geometry  
  parameter Real dp;                                                           //particle diameter                        [m]
  parameter Real L;                                                            //length                                   [m]
  parameter Real Do;                                                           //outer diameter                           [m]
  parameter Real Di;                                                           //shaft diameter (outer annulus)           [m]
  parameter Real Dii;                                                          //inner annulus diameter                   [m]
  parameter Real p;                                                            //pitch                                    [m]   
  parameter Real s;                                                            //blades thickness                         [m]
  parameter Real c;                                                            //gap clearence                            [m] 
  parameter Real e;                                                            //shaft tube thickness                     [m]
  parameter Real t_fin;                                                        //fin thickness                            [m]

  //initial conditions
  parameter Real Ti(unit="K",displayUnit="degC");                              //initial temperature of the particles     [K]
  parameter Real Wi;                                                           //initial loading of the particles         [-]

  //boundary conditions
  parameter Real T2(unit="K",displayUnit="degC");                              //temperature b.c. in the cond/eva sid     [K]    it is not necessarily the saturation temperature (can be superheated)
  parameter Real Psat_theo;                                                    //saturation pressure b.c. cond/eva si     [Pa]
  
  //inlet conditions
  parameter Real T_h_in(unit="K", displayUnit="degC");                         //inlet temperature of heat transfer fluid [K]
  parameter Real T_b_in(unit="K", displayUnit="degC");                         //inlet temperature of beads               [K]  
  parameter Real w_in;                                                         //inlet loading                            [-] 
  parameter Real M_v_in;                                                       //vapor mass at inlet (per particle)       [kg]
  parameter Real mdot_v_in;                                                    //inlet vapor mass flow rate               [kg/s]
  
  //operation conditions   
  parameter Real mdot_h;                                                       //mass flow rate  heat transfer fluid      [kg/s]

  //0. DIFFERENTIALS --------------------------------------------------------------------------------------------------------
  
  Real dx;                                                                     //spatial axial differential of each section [m]
  Real dA;                                                                     //heat transfer area per section             [m2]
  Real dN;                                                                     //number of particles per section            [-]  

  //1. GEOMETRY -------------------------------------------------------------------------------------------------------------  
                                                                  
  Real A;                                                                      //heat exchanger surface transfer area [m2] 
  Real Ac_f;                                                                   //reactor fluid cross section          [m2]
  Real Ac_r;                                                                   //reactor media cross section          [m2]
  Real A_i;                                                                    //reactor tube internal surface area   [m2]
  Real V_r;                                                                    //reactor volume (outer)               [m3]
  Real V_i;                                                                    //reactor volume (inner)               [m3]
  Real V_m;                                                                    //volume of material                   [m3]
  Real V_p;                                                                    //adsorbent particle volume            [m3]
  Real p_d;                                                                    //screw pitch/diameter ratio           [-]
  Real f_p;                                                                    //packing factor                       [-]   "poured random packing" of solid spheres =0.609 (conservative) (source: from Wikipedia)
  Real Np;                                                                     //number of particles in the reactor   [-]
  
  //2. PROPERTIES -------------------------------------------------------------------------------------------------------------  
        
  Real M_a[N];                                                                 //adsorbent mass (per particle)        [kg]
  Real M_v[N];                                                                 //vapor mass     (per particle)        [kg]
  Real M_l[N];                                                                 //liquid mass    (per particle)        [kg]
  Real M_h[N];                                                                 //heat transfer fluid mass(per element)[kg]       
  Real V_v[N];                                                                 //vapor volume inside particle pores (per particle)[m3]   
  Real V_b[N];                                                                 //bead volume (per particle)                       [m3]   
  Real ro_h=1000;                                                              //heat transfer fluid density (water)             [kg/m3]
  Real ro_a;                                                                   //adsorbent average density in the reactor        [kg/m3]
  Real ro_a_env[N];                                                            //adsorbent local density                         [kg/m3] - the total dry weight divided by a solid sphere volume
  Real ro_a_tap[N];                                                            //adsorbent local density                         [kg/m3] - the total dry weight divided by a solid sphere volume
  Real rhoWatLiq[N];                                                           //water density   
  Real c_a[N];                                                                 //specific heat capacity of the bead solid phase  [J/kg.K]
  Real c_v[N];                                                                 //specific heat capacity of the bead vapor phase  [J/kg.K]
  Real c_b[N];                                                                 //specific heat capacity of the bead              [J/kg.K]
  Real c_l[N];                                                                 //specific heat capacity of the bead liquid phase [J/kg.K]
  Real c_h[N];                                                                 //specific heat capacity of heat transfer fluid   [J/kg.K]   
  Real h_ve[N];                                                                //enthalpy of vapor inside the pores                            
  Real h_vi[N];                                                                //enthalpy of vapor outside the pores 
  Real delta_H[N];                                                             //specific adsorption enthalpy
  
  //3. GRANULAR PHYSICS ------------------------------------------------------------------------------------------------------- 

  parameter Real f;                                                            //frequency of rotation                [Hz]  
  parameter Real effv=0.45;                                                    //volumetric efficiency                [-]    (UPDATE - should be computed with a model: first guess: value should be between 0.2 and 0.7 according to Roberts et al.)      
  Real u_x;                                                                    //media axial velocity                 [m/s]  
  Real qt;                                                                     //volumetric flow rate (theoretical)   [m3/s]
  Real qr;                                                                     //volumetric flow rate (real)          [m3/s]    

  //4. MASS CONSERVATION  ----------------------------------------------------------------------------------------------------- 
    
  Real mdot_a[N];                                                              //mass flow rate of adsorbent [kg/s]
  Real mdot_l[N];                                                              //mass flow rate of liquid    [kg/s]
  Real mdot_v[N];                                                              //mass flow rate of vapor     [kg/s]
  Real mdot_b[N];                                                              //mass flow rate of all 3 phases (solid+liquid+vapor) (per element) 
  Real mdot_e[N];                                                              //mass flow rate of sorbate MassFlowRate Mdot; (per particle)                                  

  //5. ENERGY CONSERVATION ----------------------------------------------------------------------------------------------------

  //5.1 heat transfer fluid (per element)  
  
  Real T_h[N](each unit="K", each displayUnit="degC", each start=90+173.15, each fixed=true);   //heat transfer fluid field temperature - state variable  [K]

  Real qf1[N];                                                                 //sensible heat transient   (per element) [W]
  Real qf2[N];                                                                 //heat from fluid to the HX (per element) [W]
  Real qf3[N];                                                                 //transported enthalpy      (per element) [W]             
                                                                   
  //5.2 material (per element)                 
  
  Real T_c[N](each unit="K", each displayUnit="degC");                         //bead external temperature (after intra particle contact resistance) [K]
  Real T_b[N](each unit="K", each displayUnit="degC");                         //bead field temperature - state variable                             [K] 
       
  Real qh1[N];                                                                 //unsteady-state (transient) (media)      
  Real qh2[N];                                                                 //unsteady-state (transient) (media)
  Real qh3[N];                                                                 //unsteady-state (transient) (media)
  Real qh4[N];                                                                 //unsteady-state (transient) (media) 
  Real qh5[N];                                                                 //unsteady-state (transient) (media) 
  Real qh6[N];                                                                 //steady-state (transported) (media)  
  Real qh7[N];                                                                 //steady-state (transported) (media) 
  Real qh8[N];                                                                 //steady-state (transported) (media) 
  Real qh9[N];                                                                 //steady-state (transported) (media) 
  Real qh10[N];                                                                //steady-state (transported) (media) 
  Real qh11[N];                                                                //steady-state (transported) (media)  
  Real qh12[N];                                                                //steady-state (heat exchan) (media)   
  
  //6. SPECIES CONSERVATION ---------------------------------------------------------------------------------------------------------    
  
  Real w[N](each start=Wi, each fixed=true);                                   //particle loading - state variable [-]
  Real pvap[N];                                                                //particle pressure - state variable [-]
  Real psat[N];                                                                //particle saturation pressure - state variable [-]
                      
  Real qm1[N];                                                                 //transient vapor concentration   (per element)         
  Real qm2[N];                                                                 //transient vapor volume          (per element) 
  Real qm3[N];                                                                 //transient liquid volume         (per element) 
  Real qm4[N];                                                                 //transported vapor concentration (per element) 
  Real qm5[N];                                                                 //transported vapor volume        (per element) 
  Real qm6[N];                                                                 //external mass transfer          (per element) (from condenser/evaporator) 
  
  //7. HEAT TRANSFER  ---------------------------------------------------------------------------------------------------------------

  parameter Real U_fixed;                                                      //overall heat transfer coefficient        [W/m2.K] 
  parameter Real Rfo=0.9E-4;                                                   //fouling factor                           [m2K/W]      Fouling factor =0.9x10-4 m2K/W  (Bejan et al.,) for treated feedwater
  parameter Real fin_in=50;                                                    //inner finned tube area increase factor   [-]          1.5-3 times of a bare tube "Zeng, Internally Finned Tubes and Annuli"        
  parameter Real k_t;                                                          //thermal conductivity of the shaft tube   [W/m.K]  

  Real U_t;                                                                    //overall heat transfer coefficient  [W/m2.K]   (except the particle intra-particle resistance - hence connected in series with it)    
  Real Un_ast;                                                                 //adimensionalized overall heat transfer coefficient dependence of frequency  [W/m2.K]
  Real Up_ast;                                                                 //adimensionalized overall heat transfer coefficient dependence of pitch  [W/m2.K]
  Real Umax=600;                                                               //maximum overall heat transfer coefficient dependence of frequency  [W/m2.K]
  Real Rt;                                                                     //total heat transfer resistance     [K/W]
  Real Rf;                                                                     //thermal resistance of inner fluid  [K/W] (annulus or tube) R[1]-inner fluid, R[2]-fouling, R[3]-tube , R[4]-fins + granular convection, R[5]-particle contact (not included), R[6]-intra-particle (not included)
  Real Rr;                                                                     //thermal resistance of fouling      [K/W]
  Real Rm;                                                                     //thermal resistance of metal tube   [K/W]
  Real Rg;                                                                     //thermal resistance of extended fins -granular convection [K/W]
  Real Rc;                                                                     //thermal resistance of particle-particle contact  [K/W]
  Real Ri;                                                                     //thermal resistance of intra-particle [K/W]       
  Real Dh;                                                                     //annulus hydraulic diameter [m]
  Real hf;                                                                     //internal convection coefficient
  Real kf;                                                                     //fluid thermal conduction
  Real muL;                                                                    //fluid dynamic viscosity                                                          
  Real ff=0.02;                                                                //internal tube fluid flow friction factor
  Real Pr;                                                                     //prandtl number
  Real ReD;                                                                    //reynolds number
  Real NuD;                                                                    //nusselt number
  Real vf;                                                                     //heat transfer fluid axial velocity [m/s]
  Real Fo;                                                                     //correction factor for annulus heat transfer
  Real Ug;                                                                     //granular heat transfer coefficient
  Real eff_fin;                                                                //fin efficiency
  Real mL_c;
  Real Lc;
  Real L_fin;
  Real A_p;
  
  //NOTE: add the exposed base (good for us) (we are being conservative)
 
  //8. MASS TRANSFER ----------------------------------------------------------------------------------------------------------------
     
  Real gama_i[N];                                                              //concentration of vapor inside the pores
  Real gama_e[N];                                                              //concentration of vapor outside the pores  
  Real phi_t[N];                                                               //mass transfer resistance   


  //9. OBJECTIVE FUNCTIONS  ---------------------------------------------------------------------------------------------------------
  
  Real delta_Th;                                                               //HTF temperature differential (outlet-inlet)         [K]
  Real delta_Tb;                                                               //adsorbent temperature differential (outlet-inlet)   [K]
  Real delta_w;                                                                //inlet-outlet loading variation [-]
  Real Et_v;                                                                   //energy per adsorbent unit volume         [kWh/m3]  
  Real Et_m;                                                                   //energy per adsorbent unit mass           [Wh/kg]
  Real Qt;                                                                     //total heat rate transfer                 [W]
  Real Qt_v;                                                                   //total heat rate transfer per unit volume [kW/m3]
  Real Qt_m;                                                                   //total heat rate transfer per unit mass   [W/kg]
  Real Mt;                                                                     //total mass rate transfer                 [W]


  //10. MONITORING VARIABLES ---------------------------------------------------------------------------------------------------------
 
  //10.1 average values
 
  Real Thm(unit="K",displayUnit="degC");                                       //HTF average temperature between inlet and outlet [K]
  Real Tbm(unit="K",displayUnit="degC");                                       //media average temperature [K]
  Real delta_T_ave;                                                            //average temperature difference between heat transfer fluid and media
  
  //10.2 energy terms 
  
  Real E1;                                                                     //adsorbent sensible energy (per particle)
  Real E2;                                                                     //water sensible energy     (per particle)
  Real E3;                                                                     //vapor sensible energy     (per particle)
  Real E4;                                                                     //sorption energy           (per particle)
  Real E5;                                                                     //vapor energy              (per particle)
  Real Et;                                                                     //total storage energy      (per particle)
  
  //10.3 power terms 
    
  Real Qh1;
  Real Qh2;
  Real Qh3;
  Real Qh4;
  Real Qh5;
  Real Qh6;
  Real Qh7;
  Real Qh8;
  Real Qh9;
  Real Qh10;
  Real Qh11;
  Real Qh12;
  
  //11 Mass Transfer
  
  Real A_cs;                                                                    //cross sectional area for interparticle mass transfer [m2]
  Real v_vap[N];                                                                //vapor velocity [m/s]
  Real mu_vap[N];                                                               //vapor dynamic viscosity [Pa*s]
  Real Re_vap[N];                                                               //Duct Reynolds number for vapor
  Real frict[N];                                                                //friction factor for vapor
  Real Dp[N] ;                                                                  //pressure drop in vapor interparticle
  Real R_inter[N];
  Real D_gas[N];
  Real mfp[N];
  Real vel_rms[N];
  Real tor;
  Real Pmedia[N](each start=Psat_theo, each fixed=true);
  Real Pext[N];//(each start=Psat_theo);
  Real gama_ext[N];
  Real gama_media[N];
  Real mdot_e_ext[N];
  Real V_cyl;
  Real M_v_inter[N];
  Real mdot_v_inter[N];
  parameter Real epsilon_bed=0.329;
    
                            
  MOSES.Materials.Adsorbents.Geometries.SteadyStateSilicaBead particle[N](each Lagrange_Euler_mode=Lagrange_Euler_mode,each particle_Radu2017_085.Sorbent.radius=dp/2);      //material field
  MOSES.Components.Boundaries.ACTS_FluidBoundary fluidBoundary[N]( each T(displayUnit="K")=T2);           //fluid (condenser/evaporator) boundaries
  MOSES.Components.Boundaries.Undef_HeatBoundary heatBoundary[N];                                          //heat (heat exchanger) boundaries   
   
equation

  for i in 1:N loop

    connect(heatBoundary[i].thermalConnector,particle[i].thermalConnector);
    connect(particle[i].fluidConnector,fluidBoundary[i].fluidConnector);
    particle[i].Ti=Ti;
    particle[i].Wi=Wi;    
  
  end for;

  //1. DIFFERENTIALS

  dx=L/N;                                                                      //lenght of each section
  dA=A/N;                                                                      //heat transfer area of each section
  dN=Np/N;                                                                     //number of particles of each section


  //2. GEOMETRY ------------------------------------------------------

  Np=floor(V_m/V_p);                                                           //number of particles in the reactor (SHOULD UPDATE THIS CALCULATION AND USE TAP DENSITY (MEASURED) - MORE PRECISE - TAKES IN ACCOUNT VARIATION OF DIAMETER OF PARTICLES  

  A=f_p*(2*(3.1415/4)*(Do^2-Di^2)*L/p+3.1415*Di*L-L/p*3.1415*Di*t_fin+L/p*3.1415*Do*t_fin);                                                    //heat transfer area - first estimation - for preliminary design, more precise for smaller pitchs to diameter ratios (can be improved with helicoidal formula)
  Ac_f=(3.1415/4)*(Di^2-Dii^2);                                                      //fluid media cross section area
  Ac_r=(3.1415/4)*(Do^2-Di^2);                                                 //reactor media cross section area
  A_i=3.1415*Di*L*fin_in;                                                      //reactor internal surface area 
  V_p=(4/3)*3.1415*(dp/2)^3;                                                   //particle volume (dry)   //THIS SHOULD COME FROM EMA - CHECK PREVIOUS VERSIONS WHERE WE COUPLED IT   //UPDATE THIS NOTATION TO THE PUBLICATION (UNIFY) 
  V_r=(3.1415/4)*(Do^2)*L;                                                     //reactor volume (outside) 
  V_i=(3.1415/4)*(Do^2-Di^2)*L;                                                //reactor volume (inner) (the volume available for media) - not considering the volume ocuppied by the fins
  V_m=V_i*f_p;                                                                 //media volume UPDATE!!(should be multiplied by the inner volume (more precise)
  p_d=p/Do;                                                                    //pitch to diameter ratio


  //3. MATERIAL STATE  -----------------------------------------------         
           
  for i in 1:N loop                                                            //receives material state and properties 
   
    M_a[i]=particle[i].particle_Radu2017_085.M_a;                              //adsorbent mass (per particle)
    M_v[i]=particle[i].particle_Radu2017_085.M_v;                              //vapor mass     (per particle)
    M_l[i]=particle[i].particle_Radu2017_085.M_l;                              //liquid mass    (per particle)
    M_h[i]=Ac_f*dx*ro_h;                                                       //heat transfer fluid mass (per element)
    V_v[i]=particle[i].particle_Radu2017_085.V_v;                              //vapor volume inside the particle pores   
    V_b[i]=particle[i].particle_Radu2017_085.V_b;                              //bead volume        
    ro_a_env[i]=particle[i].particle_Radu2017_085.ro_a_env;                    //rho_envelope in undefined particle - the total dry weight divided by a solid sphere volume
    ro_a_tap[i]=particle[i].particle_Radu2017_085.ro_a_tap;                    //rho_tap in undefined particle - the total dry weight divided by the media volume
    rhoWatLiq[i]=particle[i].particle_Radu2017_085.rhoWatLiq;                  //water density  
    c_a[i]=particle[i].particle_Radu2017_085.c_a;                              //bead solid phase specific capacity  
    c_v[i]=1996;                                                               //bead vapor phase specific capacity     //DUMMY - UPDATE!!
    c_b[i]=particle[i].particle_Radu2017_085.c_b;                              //bead specific capacity 
    c_l[i]=particle[i].particle_Radu2017_085.c_l;                              //bead liquid phase specific capacity 
    c_h[i]=4180;                                                               //heat transfer fluid specific capacity  //DUMMY - UPDATE!! 
    T_b[i]=particle[i].particle_Radu2017_085.T_b;                              //bead temperature             [K] 
    T_c[i]=heatBoundary[i].T;                                                  //bead external temperature    [K]  
    delta_H[i]=particle[i].particle_Radu2017_085.delta_H;                      //sorption enthalpy  
    h_vi[i]=particle[i].particle_Radu2017_085.h_vi;                            //specificEnthalpy hv_int;
    h_ve[i]=particle[i].particle_Radu2017_085.h_ve;                            //specificEnthalpy hvext     
    gama_i[i]=particle[i].particle_Radu2017_085.gama_i;                        //internal vapor concentration 
    gama_e[i]=particle[i].particle_Radu2017_085.gama_e;                        //external vapor concentration 
    phi_t[i]=particle[i].particle_Radu2017_085.phi_t;                          //mass tansfer resistance 
    w[i]=particle[i].particle_Radu2017_085.w;                                  //particle loading
    pvap[i]=particle[i].particle_Radu2017_085.pvap;                            //particle pressure
    psat[i]=particle[i].particle_Radu2017_085.p_sat;                           //particle saturation pressure
    mdot_e[i]=particle[i].particle_Radu2017_085.mdot_e;                        //external MassFlowRate Mdot (per particle)                                  
    //dp=particle[i].particle_Radu2017_085.sorbent.radius*2;                     //particle diameter
  end for;
 
  ro_a=sum(ro_a_env)/N;                                                        //average adsorbent density                     [kg/m3]                                                                                                                                          

  //4. GRANULAR PHYSICS ----------------------------------------------------

  qt=(1/8)*(((1+2*c/Do)^2)-(Di/Do)^2)*((p/Do)-(s/Do))*f*Do^3;                  //media volumetric flow rate (theoretical)
  qr=qt*effv;                                                                  //media volumetric flow rate (real)
  u_x=qr/Ac_r;                                                                 //velocity field UPDATE: should be updated with local variation due to density (expected small?)

      
  //5. MASS CONSERVATION -------------------------------------------------------------

  //5.1 media 
  
  for i in 1:N loop                                                            //mass conservation - integral form                                                         
  
    mdot_a[i]=ro_a_env[i]*qr;                                                  //mass flow rate of adsorbent [kg/s]  
    mdot_l[i]=mdot_a[i]*w[i];                                                  //mass flow rate of liquid    [kg/s]    
    mdot_v[i]=mdot_a[i]*(M_v[i]/M_a[i]);                                       //mass flow rate of vapor     [kg/s]    
    mdot_v_inter[i]=mdot_a[i]/ro_a_tap[i]*(1-f_p)*gama_media[i];                                //mass flow rate of interparticle vapor     [kg/s]    
    mdot_b[i]=mdot_a[i]+mdot_l[i]+mdot_v[i];                                   //mass flow rate of all 3 phases (solid+liquid+vapor) [kg/s]     

  end for;
 
  //6. MOMENTUM CONSERVATION ---------------------------------------------------------------

  //6.1 heat transfer fluid
  
  vf=mdot_h/(ro_h*Ac_f);                                                       //fluid axial velocity [m/s]
 
                       
  //7. ENERGY CONSERVATION  ----------------------------------------------------------

  
  // 7.1 ENERGY CONSERVATION - HEAT TRANSFER FLUID
  
  for i in 1:N loop
    
    qf1[i]=qf2[i]+qf3[i]; 
        
    if mode==1 then  //concurrent-flow
                   
      if i==1 then         
        qf1[i]=M_h[i]*c_h[i]*der(T_h[i]);
        qf2[i]=U_t*dA*(T_c[i]-T_h[i]);
        qf3[i]=-(mdot_h*c_h[i]*(T_h[i]-T_h_in)/dx)*dx;           
      else       
        qf1[i]=M_h[i]*c_h[i]*der(T_h[i]);
        qf2[i]=U_t*dA*(T_c[i]-T_h[i]);
        qf3[i]=-(mdot_h*c_h[i]*(T_h[i]-T_h[i-1])/dx)*dx;      
      end if;
      
     elseif mode==2 then   //counter-flow 
     
       if i==N then         
        qf1[i]=M_h[i]*c_h[i]*der(T_h[i]);
        qf2[i]=U_t*dA*(T_c[i]-T_h[i]);
        qf3[i]=-(mdot_h*c_h[i]*(T_h[i]-T_h_in)/dx)*dx;           
      else       
        qf1[i]=M_h[i]*c_h[i]*der(T_h[i]);
        qf2[i]=U_t*dA*(T_c[i]-T_h[i]);
        qf3[i]=(mdot_h*c_h[i]*(T_h[i+1]-T_h[i])/dx)*dx;   
      end if;    
     
     end if;
       
  end for;


  // 7.2 ENERGY CONSERVATION - MATERIAL
 
  for i in 1:N loop 
           
    qh1[i]+qh2[i]+qh3[i]+qh4[i]+qh5[i]=qh6[i]+qh7[i]+qh8[i]+qh9[i]+qh10[i]+qh11[i]+qh12[i]; //heat conservation PDE equation - per element - computes the temperature T - which is the state variable 
     
    // inlet node
    
    if i==1 then                                                               //inlet condition (node 1)
                                                                               
      qh1[i]=M_a[i]*c_a[i]*der(T_b[i])*dN;                                     //adsorbent sensible heat  (transient)   (per element)    
      qh2[i]=M_l[i]*c_l[i]*der(T_b[i])*dN;                                     //water sensible heat      (transient)   (per element) 
      qh3[i]=M_v[i]*c_v[i]*der(T_b[i])*dN;                                     //vapor sensible heat      (transient)   (per element) 
      qh4[i]=-M_a[i]*der(w[i])*delta_H[i]*dN;                                  //heat of sorption         (transient)   (per element)
      qh5[i]=h_vi[i]*der(M_v[i])*dN;                                           //vapor enthalpy           (transient)   (per element)   
      qh6[i]=-(mdot_a[i]*c_a[i]*(T_b[i]-T_b_in)/dx)*dx;                        //adsorbent sensible heat  (transported) (per element) 
      qh7[i]=-(mdot_l[i]*c_l[i]*(T_b[i]-T_b_in)/dx)*dx;                        //water sensible heat      (transported) (per element) 
      qh8[i]=-(mdot_v[i]*c_v[i]*(T_b[i]-T_b_in)/dx)*dx;                        //vapor sensible heat      (transported) (per element)
      qh9[i]=mdot_a[i]*((w[i]-w_in)/dx)*dx*delta_H[i];                         //heat of sorption         (transported) (per element) 
      qh10[i]=-h_vi[i]*((mdot_v[i]-mdot_v_in)/dx)*dx;                          //vapor enthalpy           (transported) (per element)       
      qh11[i]=mdot_e[i]*(h_ve[i]-h_vi[i])*dN;                                  //external sorbate enthalp (exterior)    (per element)  
      qh12[i]=U_t*dA*(T_h[i]-T_c[i]);                                          //heat exchanger           (exterior)    (per element)   //connected to the bead contact temperature (after the intra-particle resistance)
 
    // discretization nodes
    
    else
    
      qh1[i]=M_a[i]*c_a[i]*der(T_b[i])*dN;                                     //adsorbent sensible heat  (transient)   (per element)    
      qh2[i]=M_l[i]*c_l[i]*der(T_b[i])*dN;                                     //water sensible heat      (transient)   (per element) 
      qh3[i]=M_v[i]*c_v[i]*der(T_b[i])*dN;                                     //vapor sensible heat      (transient)   (per element) 
      qh4[i]=-M_a[i]*der(w[i])*delta_H[i]*dN;                                  //heat of sorption         (transient)   (per element)
      qh5[i]=h_vi[i]*der(M_v[i])*dN;                                           //vapor enthalpy           (transient)   (per element)       
      qh6[i]=-mdot_a[i]*c_a[i]*((T_b[i]-T_b[i-1])/dx)*dx;                      //adsorbent sensible heat  (transported) (per element) 
      qh7[i]=-mdot_l[i]*c_l[i]*((T_b[i]-T_b[i-1])/dx)*dx;                      //water sensible heat      (transported) (per element) 
      qh8[i]=-mdot_v[i]*c_v[i]*((T_b[i]-T_b[i-1])/dx)*dx;                      //vapor sensible heat      (transported) (per element)
      qh9[i]=mdot_a[i]*((w[i]-w[i-1])/dx)*dx*delta_H[i];                       //heat of sorption         (transported) (per element) 
      qh10[i]=-h_vi[i]*((mdot_v[i]-mdot_v[i-1])/dx)*dx;                        //vapor enthalpy           (transported) (per element)       
      qh11[i]=mdot_e[i]*(h_ve[i]-h_vi[i])*dN;                                  //external sorbate enthalp (exterior)    (per element)  
      qh12[i]=U_t*dA*(T_h[i]-T_c[i]);                                          //heat exchanger           (exterior)    (per element)  //connected to the bead contact temperature (after the intra-particle resistance)
 
    end if;   
    
    //bi-directional coupling reactor <-> material 
      
    particle[i].particle_Radu2017_085.Q=qh12[i]/dN;                            //heat exchanger           (external)    (per particle (note: Q=qh12p)  
    particle[i].particle_Radu2017_085.qh1p=qh1[i]/dN;                          //adsorbent sensible heat  (transient)   (per particle)
    particle[i].particle_Radu2017_085.qh2p=qh2[i]/dN;                          //water sensible heat      (transient)   (per particle) 
    particle[i].particle_Radu2017_085.qh3p=qh3[i]/dN;                          //vapor sensible heat      (transient)   (per particle)
    particle[i].particle_Radu2017_085.qh4p=qh4[i]/dN;                          //heat of sorption         (transient)   (per particle)                     
    particle[i].particle_Radu2017_085.qh5p=qh5[i]/dN;                          //vapor enthalpy           (transient)   (per particle)                      
    particle[i].particle_Radu2017_085.qh6p=qh6[i]/dN;                          //adsorbent sensible heat  (transported) (per particle)                      
    particle[i].particle_Radu2017_085.qh7p=qh7[i]/dN;                          //water sensible heat      (transported) (per particle)                      
    particle[i].particle_Radu2017_085.qh8p=qh8[i]/dN;                          //vapor sensible heat      (transported) (per particle)                      
    particle[i].particle_Radu2017_085.qh9p=qh9[i]/dN;                          //heat of sorption         (transported) (per particle)                     
    particle[i].particle_Radu2017_085.qh10p=qh10[i]/dN;                        //vapor enthalpy           (transported) (per particle)                      
    particle[i].particle_Radu2017_085.qh11p=qh11[i]/dN;                        //external sorbate enthalp (external)    (per particle) (H in the particle model)                    
    particle[i].particle_Radu2017_085.qh12p=qh12[i]/dN;                        //heat exchanger           (external)    (per particle)                                                              
    
  end for;
  

  //8. SPECIES CONSERVATION -------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
  for i in 1:N loop 
    
    qm1[i]+qm2[i]+qm3[i]=qm4[i]+qm5[i]+qm6[i];                                 //species balance - water mass conservation PDE equation        loading w is the state variable - (the external sorbate flow to the particle is computed)

    if i==1 then 
    
      qm1[i]=M_a[i]*der(w[i])*dN;                                              //liquid mass due to loading variation        (transient)   (per element) 
      qm2[i]=V_v[i]*der(gama_i[i])*dN;                                         //vapor mass due to concentration variation   (transient)   (per element) 
      qm3[i]=gama_i[i]*V_b[i]*(ro_a_env[i]/rhoWatLiq[i])*der(w[i])*dN;         //vapor mass due to volume variation          (transient)   (per element)   
      qm4[i]=(-mdot_a[i]*(w[i]-w_in)/dx)*dx;                                   //liquid mass                                 (transported) (per element)     
      qm5[i]=(-mdot_a[i]*(M_v[i]/M_a[i]-M_v_in/M_a[i])/dx)*dx;                 //vapor volume                                (transported) (per element)
      qm6[i]=((gama_e[i]-gama_i[i])/phi_t[i])*dN;                          //external mass flow rate                     (external)    (per element)       !!MODIFIED gama_media as gama_e!!

    else
    
      qm1[i]=M_a[i]*der(w[i])*dN;                                              //liquid mass due to loading variation        (transient)   (per element) 
      qm2[i]=V_v[i]*der(gama_i[i])*dN;                                         //vapor mass due to concentration variation   (transient)   (per element) 
      qm3[i]=gama_i[i]*V_b[i]*(ro_a_env[i]/rhoWatLiq[i])*der(w[i])*dN;         //vapor mass due to volume variation          (transient)   (per element)   
      qm4[i]=(-mdot_a[i]*(w[i]-w[i-1])/dx)*dx;                                 //liquid mass                                 (transported) (per element)     
      qm5[i]=(-mdot_a[i]*(M_v[i]/M_a[i]-M_v[i-1]/M_a[i-1])/dx)*dx;             //vapor volume                                (transported) (per element)
      qm6[i]=((gama_e[i]-gama_i[i])/phi_t[i])*dN;                          //external mass flow rate                     (external)    (per element)   !!MODIFIED gama_media as gama_e!!

    end if;                                                                

    //bi-directional coupling reactor <-> material                             //reactor <-> particle + conversion from per element to per particle
    
    particle[i].particle_Radu2017_085.qm1p=qm1[i]/dN;                          //liquid mass due to loading variation        (transient)   (per particle)
    particle[i].particle_Radu2017_085.qm2p=qm2[i]/dN;                          //vapor mass due to concentration variation   (transient)   (per particle)
    particle[i].particle_Radu2017_085.qm3p=qm3[i]/dN;                          //vapor mass due to volume variation          (transient)   (per particle)
    particle[i].particle_Radu2017_085.qm4p=qm4[i]/dN;                          //liquid mass                                 (transported) (per particle)
    particle[i].particle_Radu2017_085.qm5p=qm5[i]/dN;                          //vapor volume                                (transported) (per particle)
    particle[i].particle_Radu2017_085.qm6p=qm6[i]/dN;                          //exterior mass flow rate                     (exterior)    (per particle) (computed - the result)
     
  end for; 

 
  //9. HEAT TRANSFER -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
    
  //9.1 - overall heat transfer coefficient 
          
  U_t=1/(Rt*A);                                                            //NOTE: (overall heat transfer coefficient from HTF to the particle contact - doesn't include particle-particle contact and intra-particle)        
  Rt=Rf+Rr+Rm+Rg;                                                          //(the particle Rc and Ri thermal resistances are not included because they are connected afterwards in series)  (the U_T is between the temperature in the heat transfer fluid Th and the particle contact temperature Tc)      
                
  //9.2 - convection heat transfer in the interior of the shaft tube + fouling
    
  Dh=Di-Dii;                                                               //hydraulic diameter for a annulus
  Rf=(1/(hf*A_i));                                                         //heat transfer resistance of internal flow in shaft tube         
  hf=Fo*NuD*kf/Dh;                                                         //convection between fluid and pipe 
             
  if ReD<2300 then                                                         //laminar regime - and extrapolated to natural convection regime (non-conservative - but numerically more robust)
    NuD=4.36;    
  else                                                                     //turbulent regime
    NuD=(ff/8*(ReD-1000)*Pr)/(1+12.7*((ff/8)^0.5)*(Pr^(2/3)-1));           //internal convection in horizontal tube in single phase - Gnielinski's correlation valid for 0.5<Pr<2000 and ReD<5x10^6 , accuracy: 10%
  end if;
    
  Fo=1-0.14*(Dii/Di)^0.6;                                                  //annulus correction factor
    
  ReD=vf*Dh*ro_h/muL;                                                      //reynolds number [-]         
  kf=-0.0000061576*Thm^2+0.0050649447*Thm-0.3519099918;                                                                                                                         //fluid thermal conductivity (R²=0.9974)                         
  muL=0.0000000000009942412*Thm^4-0.00000000185060746766*Thm^3+0.000001285560020769*Thm^2-0.00039591549508075*Thm+0.0458710495545122;                                           //fluid viscosity (R²=0.9949)       
  Pr=-0.00000000002128362640*Thm^5+0.00000005179435506884*Thm^4-0.00005023236261567770*Thm^3+0.02429462269089810000*Thm^2-5.86785690221095000000*Thm+568.25246895019200000000;  //prandtl number    

  Rr=(Rfo/A_i);                                                            //heat transfer resistance of fouling in inner surface of the tube
  
  //9.3 - conduction on shaft tube
 
  Rm=(log((Di+e)/Di)/(2*3.1415*L*k_t));                                    //heat transfer resistance of shaft tube 
      
  //9.4 - heat transfer on the fins + granular media bulk                  //note: UPDATE!!! we are ignoring the base of the fin(the unfinned tube surface) contribution (conservative)
         
  //extended fins 
        
  eff_fin=tanh(mL_c)/mL_c;                                                 //fin efficiency     
  mL_c=((2*Ug/(k_t*A_p))^0.5)*(Lc)^(3/2);
  Lc=L_fin+t_fin/2;
  L_fin=Do/2-Di/2;
  A_p=Lc*t_fin;
  Rg=(1/(Ug*A*eff_fin));                                                   //heat transfer resistance in the fins to the bulk mixing of the media (includes the granular convection in the Ug)
    
  //granular convection
       
  Ug=Un_ast*Up_ast*Umax;     
  Un_ast=6.4097*f+0.376;                                                   //adimensional correction due to frequency
  Up_ast=(0.2302*(p/Do)^2)-0.5755*(p/Do)+1;                                //adimensional correction due to pitch

  //9.5 - particle-particle contact 
    
  Rc=particle[5].contactResistance_SiuLee.Rss/Np;                          //heat transfer resistance of particles contact
      
  //9.6 - intra-particle
    
  Ri=0;                                                                    //heat transfer resistance in intra-particle

  //10. MASS TRANSFER --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  A_cs=2/3*pi*L/N*(Do/2-Di/2);                                             //characteristic cross sectional area assuming perfect mixing
  tor=1.23*(1-epsilon_bed)^0.75/(epsilon_bed);                                               //tortuosity source https://doi.org/10.1016/j.ces.2009.11.011
  V_cyl=dx*pi*((Do^2)/4-(Di^2)/4);                                         //volume of the cylinder media 

  for i in 1:N loop
    
    //10.1 pressure drop due to friction 
    
    v_vap[i]=dN*mdot_e_ext[i]/(gama_media[i]*A_cs);                                                                                        //vapor velocity [m/s]
    mu_vap[i]=2.7686214E-15*T2^6-5.7810372E-12*T2^5+5.0267344E-09*T2^4-2.3305128E-06*T2^3+6.0786534E-04*T2^2-8.4621376E-02*T2+4.9162769E+00;  //vapor dynamic viscosity Pa*s
    Re_vap[i]=abs(2*(gama_media[i]*v_vap[i]*dp)/(3*mu_vap[i]*f_p));                                                                        //Duct Reynolds number
    
    if Re_vap[i]>1 then
      frict[i]=172/Re_vap[i]+4.36/Re_vap[i]^0.12;                                                                                                                    //friction coefficient                                               
    else
      frict[i]=1;
    end if;
    
    Dp[i]=frict[i]*gama_media[i]*v_vap[i]^2*((Do/2-Di/2)/3);                                                                               //pressure drop in vapor interparticle
    if v_vap[i]>0 then
      Pext[i]=Psat_theo-Dp[i];
    else
      Pext[i]=Psat_theo+Dp[i];
    end if;
    gama_ext[i]=0.01801*Pext[i]/(R*T2);
    
    //10.2 flow between the exterior and the media
    
    mdot_e_ext[i]=(gama_ext[i]-gama_media[i])/R_inter[i];
    R_inter[i]=log(Do/Di)*tor/(2*pi*p*D_gas[i]);                                                                                                                                  //now per perticle, multiply by dN if want total
    D_gas[i]=vel_rms[i]*mfp[i]/3;
    mfp[i]=Modelica.Constants.k*T_b[i]/pi/Pmedia[i]/sqrt(2)/(265e-12)^2;
    vel_rms[i]=sqrt(3*Modelica.Constants.R*T_b[i]/0.01801);
    
    //10.3 mass balance in cylinder media
    
    V_cyl*(1-f_p)*der(gama_media[i])=dN*(mdot_e_ext[i]-mdot_e[i]);
    
    M_v_inter[i]=V_cyl*(1-f_p)*gama_media[i]/N;
    
    gama_media[i]=0.01801*Pmedia[i]/(R*T2);
    
    //10.4 flow between particle and media solved as before within the particle
    
    fluidBoundary[i].Psat=Psat_theo; //Pmedia[i]; if activated Pmedia[i], and also gama_media in connecting equations
    
  end for;

 
  //11. MONITOR VARIABLES ----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
  //11.1 operation variables
   
  Thm=(T_h[N]+T_h[1])/2;                                                       //average fluid temperature                                 [K]
  Tbm=(T_b[N]+T_b[1])/2;                                                       //average media temperature                                 [K]
  delta_Tb=T_b[N]-T_b[1];                                                      //inlet-outlet adsorbent temperature differential           [K]
  delta_Th=T_h[N]-T_h[1];                                                      //inlet-outlet heat transfer fluid temperature differential [K]
  delta_w=w[N]-w[1];                                                           //inlet-outlet loading differential                         [-] 
  delta_T_ave=Thm-Tbm;
                                                 
  //11.2 energy storage

  Et=E1+E2+E3+E4+E5;                                                           //total energy              (per particle)
        
  E1=((M_a[N]*c_a[N]*T_b[N])-(M_a[1]*c_a[1]*T_b[1]));                          //adsorbent sensible energy (per particle)
  E2=((M_l[N]*c_l[N]*T_b[N])-(M_l[1]*c_l[1]*T_b[1]));                          //water sensible energy     (per particle)
  E3=((M_v[N]*c_v[N]*T_b[N])-(M_v[1]*c_v[1]*T_b[1]));                          //vapor sensible energy     (per particle)
  E4=-(((M_a[N]*w[N]*delta_H[N])-(M_a[1]*w[1]*delta_H[1])));                   //sorption energy           (per particle)
  E5=((h_vi[N]*M_v[N])-(h_vi[1]*M_v[1]));                                      //vapor energy              (per particle)
     
  //11.3 power 
       
  Qh1=sum(qh1);                                                                //adsorbent sensible heat    (per reactor)
  Qh2=sum(qh2);                                                                //water sensible heat        (per reactor) 
  Qh3=sum(qh3);                                                                //vapor sensible heat        (per reactor)
  Qh4=sum(qh4);                                                                //heat of sorption           (per reactor)
  Qh5=sum(qh5);                                                                //vapor enthalpy             (per reactor)
  Qh6=sum(qh6);                                                                //adsorbent sensible heat    (per reactor)
  Qh7=sum(qh7);                                                                //water sensible heat        (per reactor)
  Qh8=sum(qh8);                                                                //vapor sensible heat        (per reactor)
  Qh9=sum(qh9);                                                                //heat of sorption           (per reactor)
  Qh10=sum(qh10);                                                              //vapor enthalpy             (per reactor)
  Qh11=sum(qh11);                                                              //external sorbate enthalp   (per reactor)
  Qh12=sum(qh12);                                                              //heat exchanger             (per reactor)
    
       
  //12. PERFORMANCE INDICATORS  ---------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  //12.1 energy storage
  
  Et_v=Et/(V_p*1000*3600);                                                     //total energy per adsorbent unit volume                    [kWh/m3] 
  Et_m=Et/(V_p*ro_a*3600);                                                     //total energy per adsorbent unit mass                      [Wh/kg] 

  //12.2 power 
  
  Qt=Qh12;                                                                     //total heat rate transfer                                  [W] 
  Qt_v=Qt/(V_p*Np*1000);                                                       //total heat rate transfer per adsorbent volume             [kW/m3]
  Qt_m=Qt/(V_p*Np*ro_a);                                                       //total heat rate transfer per adsorbent mass               [W/kg] (SCP if for a cooling pump)
  
  //12.3 mass transfer
  
  Mt=sum(qm6);                                                                 //total water mass rate transfer                            [kg/s]
  
end ACTS_reactor;
