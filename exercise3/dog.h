#pragma once

#include <string>

#include "carnivore.h"

class Dog : public Carnivore {
 public:
     Dog();
     std::string Name() const override;

     std::string Greeting() const override;

     std::string eat() const override;
 };
