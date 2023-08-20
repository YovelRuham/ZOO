#ifndef __FOODBOWL_H
#define __FOODBOWL_H

class FoodBowl
{
public:
    static FoodBowl* getInstance(const int&);
    void fill();
    bool eat(const int&);
    int getAmountOfFood();


private:
    FoodBowl(const int&);
    ~FoodBowl();

    static FoodBowl* instance;
    int amountOfFood;
    int sizeOFBowl;
};
#endif