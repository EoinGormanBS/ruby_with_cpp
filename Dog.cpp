#include"Dog.h"

Dog::Dog(std::string name){
  m_name = name;
  m_noise = "Dog Noise";
}

void Dog::iWantAHumanName() {
  m_name = "Rusty";
}
