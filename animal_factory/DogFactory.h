// DogFactory.h
#ifndef __DOGFACTORY_H
#define __DogFACTORY_H
#include "../animals_products/Dog.h"
#include "AnimalFactory.h"

class DogFactory : public AnimalFactory
{
public:
    Animals* createAnimal(const char*, const int&, const double&) override;
    Animals* createAnimal(const char*, const int&, const char*) override;
};

#endif

