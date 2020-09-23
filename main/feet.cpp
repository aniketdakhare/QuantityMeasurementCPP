#include "feet.h"

Feet::Feet(double value)
{
	this->value = value;
}

bool Feet::operator== (Feet other) const 
{
	return (this->value == other.value);
}

bool Feet::operator== (Feet *other) const 
{
	if(other == nullptr && this == nullptr) 
		return false;

	if(this == other) 
		return true;
	
	return (this->value == other->value);
}