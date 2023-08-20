// CatFactory.h
#ifndef __CATFACTORY_H
#define __CATFACTORY_H
#include "../animals_products/Cat.h"
#include "AnimalFactory.h"

class CatFactory : public AnimalFactory
{
public:
    Animals* createAnimal(const char*, const int&, const double&) override;
    Animals* createAnimal(const char*, const int&, const char*) override;
};

#endif

