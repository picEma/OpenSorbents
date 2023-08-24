within MOSES.Components.Boundaries;

model TDoubleExp_HeatBoundary
  extends MOSES.Components.Boundaries.Undef_HeatBoundary;
  
  Temperature EXP_Thexchanger;
  Real Relax "relaxation factor";
  Temperature Ti "initial temperature";
  Temperature Tf "regime temperature";
  parameter Real SET_tRamp = 6 "linear ramp time for case equation (0)";
  Real derT;
  Real SET_x0 "constant for average double exponential fit"; 
  Real SET_x1 "constant for average double exponential fit"; 
  Real SET_x2 "constant for average double exponential fit"; 
equation

  if false then//---SET---LINEAR TEMPER RAMP
    if time<SET_tRamp then
      derT=(Tf-Ti)/SET_tRamp;
      T=Ti+derT*time;
    else
      derT=0;
      T=Tf;
    end if;
  end if;
  
  if true then//---SET---AVG DOUBLE EXPONENTIAL FIT TEMPER RAMP
    T = (1-SET_x0*exp(-time/SET_x1) - (1-SET_x0)*exp(-time/SET_x2)) * (Tf - Ti) + Ti + Relax;
    derT=der(T);
  end if;
  
  if false then//---SET---EXPERIMENTAL FIT T_hexchanger PROBE
    T = EXP_Thexchanger;
    derT=der(T);
  end if;

end TDoubleExp_HeatBoundary;
