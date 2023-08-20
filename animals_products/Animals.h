// Animals.h
#ifndef __ANIMAL_H
#define __ANIMAL_H

class Animals
{
public:
    Animals(const char*, const int&);
    Animals(const Animals&);
    virtual ~Animals();
    const Animals& operator=(const Animals&);
    bool isHungry() const;
    bool foodIsAvailable(const int&) const;
    virtual int toEat();
    virtual void updateHungerLevel() = 0;
    virtual void show() const;

protected:
    int howMuchFoodToBeFUll = 10;
    int hungerLevel = 100;

private:
    char* name;
    int age;
};
#endif