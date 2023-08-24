within MOSES.Components.Boundaries;

model TRamp_HeatBoundary
  extends MOSES.Components.Boundaries.Undef_HeatBoundary;
  parameter Temperature Ti "initial temperature";
  parameter Temperature Tf "regime temperature";
  parameter Time tRamp "ramp time";
  Real TRate;
equation

    TRate=(Tf-Ti)/tRamp;
    if time<tRamp then
     T=Ti+time*TRate;
    else
    T=Tf;
  end if;
end TRamp_HeatBoundary;
