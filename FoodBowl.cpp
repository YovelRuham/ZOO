#include "FoodBowl.h"
#include "iostream"

FoodBowl* FoodBowl::instance = nullptr;

FoodBowl* FoodBowl::getInstance(const int& value)
{
    if (instance == nullptr)
    {   
        std::cout << "An instance of a " << value << " ml FoodBowl was created";
        instance = new FoodBowl(value);
    }
    return instance;
}

FoodBowl::FoodBowl(const int& value)
    : sizeOFBowl(value) {}

FoodBowl::~FoodBowl()
{
    delete instance;
}

void FoodBowl::fill()
{
    amountOfFood = sizeOFBowl;
}

int FoodBowl::getAmountOfFood()
{
    return amountOfFood;
}

bool FoodBowl::eat(const int& amount)
{
    if (amount <= amountOfFood)
    {
        amountOfFood -= amount;
        return true;
    }
    return false;
}