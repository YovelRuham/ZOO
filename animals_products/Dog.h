// Dog.h
#ifndef __DOG_H
#define __DOG_H

#include "Animals.h"


class Dog : public Animals
{
public:
    Dog(const char*, const int&, const char*);
    Dog(const Dog&);
    const Dog& operator=(const Dog&);
    virtual ~Dog();
    virtual void show() const;
    void updateHungerLevel() override;

private:
    char* breed;
};
#endif