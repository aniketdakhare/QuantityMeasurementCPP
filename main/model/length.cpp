#include "../model/length.h"

Length::Length(double value, Unit unit) : value(value), unit(unit){};

bool Length::operator== (Length other) const 
{
	return (this->value == other.value && this->unit.unitType == other.unit.unitType);
}

bool Length::operator== (Length *other) const 
{
	if(other == nullptr || this == nullptr) 
		return false;

	if(this == other) 
		return true;
	
	return (this->value == other->value && this->unit.unitType == other->unit.unitType);
}