#pragma once
#include "../utility/unit.h"
using namespace std;

class Length 
{
    double value;
    Unit unit;
    
public:
    Length(double, Unit);
   
    bool operator== (Length) const;
    bool operator== (Length *other) const;
};