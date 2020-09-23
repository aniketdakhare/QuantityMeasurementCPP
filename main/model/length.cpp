#include "../model/length.h"

Length::Length(double value, Unit unit) : value(value), unit(unit){};

bool Length::operator== (Length other) const 
{
	return (this->value == other.value && this->unit == other.unit);
}

bool Length::operator== (Length *other) const 
{
	if(other == nullptr || this == nullptr) 
		return false;

	if(this == other) 
		return true;
	
	return (this->value == other->value && this->unit == other->unit);
}

bool Length::compare(Length other)
{
    if ((this->unit) == (other.unit))
        return (this == &other);
    return (int)(this->value * this->unit.conversionFactor) == (int)(other.value * other.unit.conversionFactor);
}

double Length::addValues(Length length1, Length length2)
{
    return (int)(length1.value * length1.unit.conversionFactor) + (int)(length2.value * length2.unit.conversionFactor);
}