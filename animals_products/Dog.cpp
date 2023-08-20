// Dog.cpp
#include <iostream>
#include <cstring>
#include "Dog.h"

Dog::Dog(const char* name, const int& age, const char* breed)
    : Animals(name, age)
{
    howMuchFoodToBeFUll = 30;
    this->breed = new char[strlen(breed) + 1];
    strcpy(this->breed, breed);
}

Dog::Dog(const Dog& other)
    : breed(nullptr), Animals(other)  // Initialize base class using the copy constructor
{
    *this = other;
}

Dog::~Dog()
{
    delete[] this->breed;
}

const Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {   
        Animals::operator=(other);
        delete[] this->breed;
        this->breed = new char[strlen(other.breed) + 1];
        strcpy(this->breed, other.breed);
    }
    return *this;
}

void Dog::show() const
{
    Animals::show();
    std::cout << ", Breed: " << this->breed;
}

void Dog::updateHungerLevel()
{
    hungerLevel -= 15;
}