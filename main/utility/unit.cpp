#include "unit.h"

Unit::Unit(double value, UnitType type) : conversionFactor(value), unitType(type) {}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);

const Unit Unit::YARD(36.0, LENGTH);

const Unit Unit::CENTIMETER(0.40, LENGTH);

bool Unit::operator==(Unit other) const
{
    return (this == &other);
}