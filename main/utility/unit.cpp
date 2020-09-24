#include "unit.h"

Unit::Unit(double value, UnitType type) : conversionFactor(value), unitType(type) {}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);

const Unit Unit::YARD(36.0, LENGTH);

const Unit Unit::CENTIMETER(0.4, LENGTH);

const Unit Unit::GALLON(3.78, VOLUME);

const Unit Unit::LITRE(1.0, VOLUME);

const Unit Unit::MILLILITRE(0.001, VOLUME);

const Unit Unit::KILOGRAM(1.0, WEIGHT);

const Unit Unit::GRAM(0.001, WEIGHT);

const Unit Unit::TONNE(1000.0, WEIGHT);

bool Unit::operator==(Unit other) const
{
    return (this == &other);
}