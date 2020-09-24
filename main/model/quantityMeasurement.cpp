#include<math.h> 
#include "../model/quantityMeasurement.h"

QuantityMeasurement::QuantityMeasurement(double value, Unit unit) : value(value), unit(unit){};

bool QuantityMeasurement::operator== (QuantityMeasurement other) const 
{
	return (this->value == other.value && this->unit == other.unit);
}

bool QuantityMeasurement::operator== (QuantityMeasurement *other) const 
{
	if(other == nullptr || this == nullptr) 
		return false;

	if(this == other) 
		return true;
	
	return (this->value == other->value && this->unit == other->unit);
}

bool QuantityMeasurement::compare(QuantityMeasurement other)
{
	if(this->unit.unitType != other.unit.unitType)
		throw DifferentQuantityTypeException();

    if ((this->unit) == (other.unit))
        return (this == &other);

	if(this->unit.unitType == TEMPERATURE || other.unit.unitType == TEMPERATURE)
	{
	    if (this->unit.conversionFactor == 1.8)
			return (round((other.value - other.unit.conversionFactor) * 1/this->unit.conversionFactor) == this->value);
		return (round((other.value * other.unit.conversionFactor) + this->unit.conversionFactor) == this->value);
	}

    return round(this->value * this->unit.conversionFactor) == round(other.value * other.unit.conversionFactor);
}

double QuantityMeasurement::addValues(QuantityMeasurement quantity1, QuantityMeasurement quantity2)
{
	if(quantity1.unit.unitType != quantity2.unit.unitType)
		throw DifferentQuantityTypeException();
    
	return (quantity1.value * quantity1.unit.conversionFactor) + (quantity2.value * quantity2.unit.conversionFactor);
}