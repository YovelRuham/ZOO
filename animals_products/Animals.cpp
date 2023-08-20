// Animal.cpp
#include <iostream>
#include <cstring>
#include "Animals.h"


Animals::Animals(const char* name, const int& age)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->age = age;
}

Animals::Animals(const Animals& other)
    : name(nullptr)
{
    *this = other;
}

Animals::~Animals()
{
    delete[] this->name;
}

const Animals& Animals::operator=(const Animals& other)
{
    if (this != &other)
    {   
        delete [] this->name;
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
        this->age = other.age;
    }
    return *this;
}

bool Animals::isHungry() const
{
    return (hungerLevel <= 5);
}

bool Animals::foodIsAvailable(const int& amountOfFoodInBowl) const
{
    return (amountOfFoodInBowl >= howMuchFoodToBeFUll);
}

int Animals::toEat()
{
    hungerLevel = 100;
    return howMuchFoodToBeFUll;
}

void Animals::show() const
{
    std::cout << "Name: " << this->name << 
                 ", Age: " << this->age <<
                 ", Hunger Level: " << this->hungerLevel;
}
