#include "../enums/UnitType.h"

class Unit
{
public:
    double conversionFactor;

    UnitType unitType;

    Unit() {}

private:
    Unit(double value, UnitType type);

public:
    static const Unit INCH, FEET, YARD, CENTIMETER, GALLON, LITRE, MILLILITRE,
    KILOGRAM, GRAM, TONNE, CELSIUS, FAHRENHEIT;

    bool operator== (Unit) const;
};