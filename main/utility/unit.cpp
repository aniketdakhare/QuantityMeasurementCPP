#include "unit.h"

Unit::Unit(double value, UnitType type) : conversionFactor(value), unitType(type) {}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);