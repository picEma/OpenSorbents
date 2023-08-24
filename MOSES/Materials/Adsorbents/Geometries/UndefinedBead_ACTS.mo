within MOSES.Materials.Adsorbents.Geometries;

model UndefinedBead_ACTS
  // ----------------------------------------------------------------------------------------------------------------------//    
  //  Description: Solid particle sorption                                                                                 //
  //                                                                                                                       //
  //  Type:        (1) Lagrange mode -> 0D lumped ODE model  (2) Euler mode -> 1D FDM PDE model                            //
  //  Authors:     Piccoli, E., Silva, R.                                                                                  //
  //  Version:     1.0.2                                                                                                   //
  //  Structure:   possibility of two operation modes: (1) Lagrange mode (particle tracking) (2) Euler mode (field)        //
  //  Validation:  ...                                                                                                     //
  //  Structure:   in (1) Lagrange mode -> all the calculation are done here (locally) - in the particle                   //  
  //               in (2) Euler mode -> energy and mass balance equation terms  are done at the top-level (need the field) //
  //                      the energy and mass balance terms - they come all from top-level                                 //   
  //  Nomenclature: consistent with the publication                                                                        //
  // ----------------------------------------------------------------------------------------------------------------------//

  //replaceable function Diffusion = MOSES.MassTransfer.FickianSphereDiffusion;
  
  parameter Integer Lagrange_Euler_mode;      //1 - Lagrangian (particle tracking) 2 - Eulerean (distributed field)
  
  //initial conditions
  
  Temperature Ti;                             //initial temperature
  Loading Wi;                                 //initial loading
  
  //material properties  

  parameter Density rhoWatLiq=997;            //liquid water approximation - since it is adsorbed - it is phase layer location dependent 
  Length r_sor;                               //bead radius
  Density ro_a_env;                           //adsorbent envelope density
  Density ro_a_tap;                           //adsorbent tap density
  SpecificHeatCapacity c_a;                   //specific heat capacity solid phase
  SpecificHeatCapacity c_l;                   //specific heat capacity adsorbed liquid phase
  SpecificHeatCapacity c_b;                   //total bead specific heat capacity
  DiffusionCoefficient D;                     //gas diffusion coefficient  

  //mass and volume of multi-phases
 
  Mass M_l;                                   //adsorbed phase mass  
  Mass M_a;                                   //solid phase mass
  Mass M_v;                                   //mass of vapor in pores   
  Volume V_b;                                 //bead envelope volume
  Volume V_v;                                 //bead available vapor volume - vapor volume in the particle pores
   
  //state variables
  
  Temperature T_b;                            //temperature of the bead (uniform in space, and the same for all the phases)  
  Pressure pext;                              //pressure of vapor outside the pores
  Pressure pvap;                              //pressure of vapor inside the pores
  Pressure p_sat;                             //saturation vapor pressure at the bead temperature != pext and pvap
  MassConcentration gama_i;                   //concentration of vapor inside the pores
  MassConcentration gama_e;                   //concentration of vapor outside the pores
  Loading w;                                  //adsorbate loading - rough tested range of validity = ]0,1] (the limits depend on the state of the material) (NOTE: doesn't allow w=0)
  Loading w_eq;                               //equilibrium loading - the loading if the particle was in equilibrium (assumption) (used in some models)

  //specific enthalpies and energies
 
  SpecificEnthalpy hv;                        //enthalpy of vapor actually being flowing
  SpecificEnergy delta_H;                     //specific adsorption enthalpy
  SpecificEnthalpy deltah_v_ei;               //specific enthalpy difference between inside and outside the pores
  SpecificEnthalpy h_vi;                      //enthalpy of vapor inside the pores
  SpecificEnthalpy h_ve;                      //enthalpy of vapor outside the pores
  EnthalpyFlowRate H;                         //enthalpy flux due to difference in state inside and outside the pores

  //heat flow rates

  HeatFlowRate Q;                             //heat flow rate through conduction to contact point       
  HeatFlowRate Qsolid;                        //heat balance component of solid phase      
  HeatFlowRate Qliquid;                       //heat balance component of liquid phase      
  HeatFlowRate Qvapor;                        //heat balance component of gas phase 
  HeatFlowRate Qads;                          //adsorption term of heat balance
  
  //mass flow rates 

  MassFlowRate mdot_e;                        //vapor mass flow rate
  
  //mass balance
    
  Real deltaMload;                            //mass variation due to loading
  Real deltaMvaporConc;                       //mass variation of vapor due to concentration
  Real deltaMvaporLoad;                       //mass variation of vapor due to loading
    
  //mass transfer
  
  Real epsilon;                               //intraparticle porosity  
  DiffusionResistance phi_t;                  //diffusion mass transfer resistance 
  
  //SpecificEnergy L_vc;                      //latent heat of vaporizating/condensation of water
 
  //heat transfer - top-level variables coupling
  
  Real qh1p;                                 //unsteady-state (transient)        
  Real qh2p;                                 //unsteady-state (transient)
  Real qh3p;                                 //unsteady-state (transient)
  Real qh4p;                                 //unsteady-state (transient)
  Real qh5p;                                 //unsteady-state (transient)
  Real qh6p;                                 //steady-state (transported) 
  Real qh7p;                                 //steady-state (transported)
  Real qh8p;                                 //steady-state (transported)
  Real qh9p;                                 //steady-state (transported)
  Real qh10p;                                //steady-state (transported)
  Real qh11p;                                //steady-state (transported)
  Real qh12p;                                //steady-state (heat exchanger)  

  //mass transfer - top-level variables coupling
  
  Real qm1p;                                 //unsteady-state (transient)
  Real qm2p;                                 //unsteady-state (transient)
  Real qm3p;                                 //unsteady-state (transient)
  Real qm4p;                                 //steady-state (transported)
  Real qm5p;                                 //steady-state (transported)
  Real qm6p;                                 //steady-state (external)
 
  Components.Connectors.FluidConnector fluidConnector annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Components.Connectors.ThermalConnector thermalConnector annotation(
    Placement(visible = true, transformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-102, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  replaceable model Sorbent = MOSES.Materials.Adsorbents.Properties.Silica_Radu2017;// MTSPG_own;// 
  replaceable model Fluid = MOSES.Fluids.SaturatedLiquidWater;
  Sorbent sorbent annotation(
    Placement(visible = true, transformation(origin = {-52, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Fluid fluid annotation(
    Placement(visible = true, transformation(origin = {56, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  replaceable model DiffMod = MOSES.MassTransfer.Diffusion_CarslawJaeger_WaterSteadyState;
  DiffMod diffusion_CarslawJaeger_Water annotation(
    Placement(visible = true, transformation(origin = {-3, -15}, extent = {{-61, -61}, {61, 61}}, rotation = 0)));

initial equation

  T_b = Ti;
  //w = Wi;
  
equation

  pext=fluidConnector.p;  
  thermalConnector.Q=Q;                                           //saving Q for heat balance 
  thermalConnector.T=T_b;                                         //saving T for properties and heat balance 
  fluid.T=T_b;                                                    //inside the pores, saturated steam at particle temperature
  p_sat=fluid.Psat;
  c_l=fluid.Cp;                                                   //the specific heat of the adsorbed phase!
  hv=actualStream(fluidConnector.hOut);
  //L_vc=fluid.L_vc;
  
  //geometry
  
  V_b=4/3*pi*r_sor^3;
  
  //evaluating properties based on T,p,w
  
  sorbent.T=T_b;
  sorbent.p_sat=p_sat;
  
  //sorbent.L_vc=L_vc;
  
  sorbent.w=w;
  w_eq=sorbent.w_eq;
  r_sor=sorbent.r;
  D=sorbent.D;
  ro_a_env=sorbent.rho_env;
  ro_a_tap=sorbent.rho_env;
  delta_H=sorbent.H_ads;
  c_a=sorbent.Cp;
  pvap=sorbent.p;
  c_b=sorbent.Cptot;
  
  //passing properties to diffusion model
  
  diffusion_CarslawJaeger_Water.rho_env=sorbent.rho_env;
  diffusion_CarslawJaeger_Water.w=sorbent.w;
  diffusion_CarslawJaeger_Water.epsilon=sorbent.epsilon;
  diffusion_CarslawJaeger_Water.D=D;
  diffusion_CarslawJaeger_Water.rp=r_sor;
  diffusion_CarslawJaeger_Water.p=pvap;
  diffusion_CarslawJaeger_Water.p_sat=fluid.Psat;
  diffusion_CarslawJaeger_Water.mDot=mdot_e;
  diffusion_CarslawJaeger_Water.V=V_v;

  //receiving results from diffusion model
  
  gama_i=diffusion_CarslawJaeger_Water.c;
  gama_e=diffusion_CarslawJaeger_Water.cext;
  phi_t=diffusion_CarslawJaeger_Water.Rmass;
  epsilon=sorbent.epsilon;
  h_vi=diffusion_CarslawJaeger_Water.h;
  h_ve=diffusion_CarslawJaeger_Water.hext;
  deltah_v_ei=diffusion_CarslawJaeger_Water.Dh;
  
 
  //(1) Lagrange mode - particle-tracking - computes all the particle terms here (locally)        (doesn't need the field distribution) 
                                                                  
  if Lagrange_Euler_mode==1 then                                     
                                                                           
    //energy balance

    Q+H=Qsolid+Qliquid; 
                                                         
    Qsolid=M_a*c_a*der(T_b);
    Qliquid=M_l*c_l*der(T_b)-delta_H*der(M_l);
    Qads=delta_H*der(M_l);
    H=mdot_e*deltah_v_ei;                                                    
            
    //species balance
      
    M_a*der(w)=(gama_e-gama_i)/phi_t;      //water mass balance

    deltaMload=M_a*der(w);                                                                        //transient water liquid mass due to loading
    deltaMvaporConc=V_v*der(gama_i);                                                              //transient water vapor mass due to concentration variation
    deltaMvaporLoad=-gama_i*V_b*(ro_a_env/rhoWatLiq)*der(w);                                      //transient water vapor mass due to loading variation
    mdot_e=(gama_e-gama_i)/phi_t;                                                                 //external vapor mass flow rate   
    M_a=V_b*ro_a_env;                                                                             //mass of solid phase
    M_l=M_a*w;                                                                                    //mass of liquid phase 
    M_v=V_v*gama_i;                                                                               //mass if vapor phase   
    V_v=V_b*(epsilon-ro_a_env/rhoWatLiq*w);                                                       //volume of vapor phase
                                                                             
    //heat and mass transfer (dummy variables - not needed in lagrange mode)
          
    qh1p=0;                                                                          
    qh2p=0;                                                                  
    qh3p=0;                                                                  
    qh4p=0;                                                                  
    qh5p=0;                                                                 
    qh6p=0;                                                                  
    qh7p=0;                                                                  
    qh8p=0;                                                                  
    qh9p=0;                                                                  
    qh10p=0;                                                                
    qh11p=0;                                                                 
    qh12p=0;                                                                                    
    qm1p=0;
    qm2p=0;
    qm3p=0;
    qm4p=0;
    qm5p=0;
    qm6p=0;      
   
  //(2) Euler mode - field  - computes the unsteady-state and steady-state at the top-level - because it needs the field distribution 
        
  elseif Lagrange_Euler_mode==2 then                
                               
    //energy balance - receives the individual heat balance terms from reactor-level calculations
   
    Qsolid=qh1p;                                                                 
    Qliquid=delta_H*der(M_l)-qh2p; 
    Qvapor=qh3p;     
    Qads=qh4p;                                                                
    H=qh11p;        

    //species balance - receives the individual species balance terms from reactor-level calculations 
         
    deltaMload=qm1p;                                                                             //transient liquid mass variation due to loading variation    
    deltaMvaporConc=qm2p;                                                                        //transient vapor mass variation due to vapor concentration variation
    deltaMvaporLoad=qm3p;                                                                        //transient vapor mass variation due to loading variation
    mdot_e=qm6p;                                                                                 //external vapor mass flow rate 
    M_a=V_b*ro_a_env;                                                                            //mass of solid phase
    M_l=M_a*w;                                                                                   //mass of liquid phase
    M_v=V_v*gama_i;                                                                              //mass of vapor phase  
    V_v=V_b*(epsilon-ro_a_env/rhoWatLiq*w);                                                      //volume of vapor phase
                                                                          
  end if;
  
  connect(fluidConnector, diffusion_CarslawJaeger_Water.fluidConnector) annotation(
    Line(points = {{100, 0}, {60, 0}, {60, -14}, {58, -14}}));
  connect(diffusion_CarslawJaeger_Water.thermalConnector, thermalConnector) annotation(
    Line(points = {{-64, -14}, {-98, -14}, {-98, 0}, {-102, 0}}, color = {85, 0, 255}));
  annotation(
    Icon(graphics = {Ellipse(lineColor = {255, 0, 0}, fillColor = {255, 0, 0}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}, endAngle = 360), Ellipse(lineColor = {255, 85, 0}, fillColor = {255, 85, 0}, fillPattern = FillPattern.Solid, extent = {{-80, 80}, {80, -80}}, endAngle = 360), Ellipse(lineColor = {255, 170, 0}, fillColor = {255, 170, 0}, fillPattern = FillPattern.Solid, extent = {{-60, 60}, {60, -60}}, endAngle = 360), Ellipse(lineColor = {255, 255, 0}, fillColor = {255, 255, 0}, fillPattern = FillPattern.Solid, extent = {{-40, 40}, {40, -40}}, endAngle = 360), Ellipse(lineColor = {255, 255, 127}, fillColor = {255, 255, 127}, fillPattern = FillPattern.Solid, extent = {{-20, 20}, {20, -20}}, endAngle = 360)}));

end UndefinedBead_ACTS;
