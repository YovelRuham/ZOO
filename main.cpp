#include "animal_factory/CatFactory.h"
#include "animal_factory/DogFactory.h"
#include "FoodBowl.h"
#include <iostream>


void animalsHandler(Animals* animalsObject, FoodBowl* myFoodBowl)
{   
    int howMuchFoodIsInTheBowl = 0;
    howMuchFoodIsInTheBowl = myFoodBowl->getAmountOfFood();
    animalsObject->updateHungerLevel();
    if (animalsObject->isHungry() && animalsObject->foodIsAvailable(howMuchFoodIsInTheBowl))
    {
        myFoodBowl->eat(animalsObject->toEat());
    }
    animalsObject->show();
    std::cout << std::endl;
}


int main()
{   
    FoodBowl* myFoodBowl = FoodBowl::getInstance(100);
    myFoodBowl->fill();

    AnimalFactory* catFactory = new CatFactory();
    Animals* cat = catFactory->createAnimal("Whiskers", 3, 2.5);

    AnimalFactory* dogFactory = new DogFactory();
    Animals* dog = dogFactory->createAnimal("Buddy", 5, "Golden Retriever");

    int i = 0;
    while (i < 50) {
        
        animalsHandler(cat, myFoodBowl);
        animalsHandler(dog, myFoodBowl);
        myFoodBowl->fill();
        i++;
    }
    

    delete dog;
    delete cat;

    delete catFactory;
    delete dogFactory;

    return 0;
}

/*
Compile the code:
g++ -std=c++17 -o myprogram animal_factory/*.cpp animals_products/*.cpp FoodBowl.cpp main.cpp 

Run the program:
./myprogram
*/