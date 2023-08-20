// AnimalFactory.h
#ifndef __ANIMALFACTORY_H
#define __ANIMALFACTORY_H

#include "../animals_products/Animals.h"

class AnimalFactory
{
public:
    virtual Animals* createAnimal(const char* name, const int& age, const double& mustacheLength) = 0;
    virtual Animals* createAnimal(const char* name, const int& age, const char* breed) = 0;
};
#endif



