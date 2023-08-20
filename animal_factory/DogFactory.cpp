// DogFactory.cpp
#include "DogFactory.h"

Animals* DogFactory::createAnimal(const char* name, const int& age, const double& mustacheLength)
{
    // Implement this if needed
    return nullptr;
}

Animals* DogFactory::createAnimal(const char* name, const int& age, const char* breed)
{
    return new Dog(name, age, breed);
}
