#ifndef ANIMAL_H_
#define ANIMAL_H_
#endif

#include <string>
#include <iostream>

class Animal {
  public:
    Animal();
    ~Animal();
    std::string getName();
    void speak();

  protected:
    std::string m_name;
    std::string m_noise;
};
