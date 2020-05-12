#include "Animal.h"

Animal::Animal() {
  m_name = "pet";
  m_noise = "Generic Animal Noise";
}

Animal::~Animal() {
  std::cout << "Destroyed! \n";
}

std::string Animal::getName() {
  return m_name;
}

void Animal::speak() {
  std::cout << m_noise + "\n";
}