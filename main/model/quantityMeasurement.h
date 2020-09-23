#pragma once
#include "../utility/unit.h"
using namespace std;

class QuantityMeasurement 
{
    double value;
    Unit unit;
    
public:
    QuantityMeasurement(double, Unit);
   
    bool operator== (QuantityMeasurement) const;
    bool operator== (QuantityMeasurement *other) const;

    bool compare(QuantityMeasurement);
    double addValues(QuantityMeasurement , QuantityMeasurement);
};