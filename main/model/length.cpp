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
    return (this->value * this->unit.conversionFactor) == (other.value * other.unit.conversionFactor);
}