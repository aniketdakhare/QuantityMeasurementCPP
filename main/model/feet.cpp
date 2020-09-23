#include "../model/feet.h"

Feet::Feet(double value, UnitType unitType) : value(value), unitType(unitType){};

bool Feet::operator== (Feet other) const 
{
	return (this->value == other.value && this->unitType == other.unitType);
}

bool Feet::operator== (Feet *other) const 
{
	if(other == nullptr && this == nullptr) 
		return false;

	if(this == other) 
		return true;
	
	return (this->value == other->value && this->unitType == other->unitType);
}