// Cat.cpp
#include <iostream>
#include "Cat.h"


Cat::Cat(const char* name, const int& age, const double& mustacheLength)
    : Animals(name, age), mustacheLength(mustacheLength)
{
    howMuchFoodToBeFUll = 5;
}

Cat::Cat(const Cat& other)
    : Animals(other), mustacheLength(other.mustacheLength) {}

Cat::~Cat() {}

const Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animals::operator=(other);
        this->mustacheLength = other.mustacheLength;
    }
    return *this;
}

void Cat::show() const
{
    Animals::show();
    std::cout << ", Mustache Lebgth: " << this->mustacheLength;    
}

void Cat::updateHungerLevel()
{
    hungerLevel -= 5;
}