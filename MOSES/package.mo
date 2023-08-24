package MOSES
  import Modelica.Constants.*;
  import Modelica.Math.*;
  import Modelica.Units.SI.*;
  type Loading = Real(unit = "kg_wat/kg_sor");
  type EHTC = Real(unit = "W/K");
  type FrictionCoefficient = Real(unit = "1/m");
  type DiffusionResistance = Real(unit = "s/m3");
annotation(
    Icon(graphics = {Rectangle(lineColor = {0, 170, 0}, lineThickness = 1, extent = {{-100, 100}, {100, -100}}), Text(origin = {-1, 11}, lineColor = {0, 170, 0}, lineThickness = 1, extent = {{-99, -111}, {101,89}}, textString = "M")}));
 
end MOSES;
