#pragma once
#include "../enums/UnitType.h"
using namespace std;

class Feet 
{
    double value;
    UnitType unitType;
    
public:
    Feet(double, UnitType);
   
    bool operator== (Feet) const;
    bool operator== (Feet *other) const;
};