#include <exception>

class DifferentQuantityTypeException : public std::exception
{
    public:
        virtual const char* what()
        { 
           return "Operations with different unit types.";
        }
};