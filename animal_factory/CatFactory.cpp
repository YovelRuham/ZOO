// CatFactory.cpp
#include "CatFactory.h"

Animals* CatFactory::createAnimal(const char* name, const int& age, const double& mustacheLength)
{
    return new Cat(name, age, mustacheLength);
}

Animals* CatFactory::createAnimal(const char* name, const int& age, const char* breed)
{
    // Implement this if needed
    return nullptr;
}
