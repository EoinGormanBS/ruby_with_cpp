#ifndef DOG_H_
#define DOG_H_
#endif

#include "Animal.h"

class Dog: public Animal {
  public:
    Dog(std::string name);
    void iWantAHumanName();
};
