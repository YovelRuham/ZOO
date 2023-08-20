// Cat.h
#ifndef __CAT_H
#define __CAT_H

#include "Animals.h"

class Cat : public Animals
{
public:
    Cat(const char*, const int&, const double&);
    Cat(const Cat&);
    ~Cat();
    const Cat& operator=(const Cat&);
    void show() const;
    void updateHungerLevel() override;


private:
    double mustacheLength;
};
#endif
