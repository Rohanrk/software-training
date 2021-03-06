#pragma once

#include <string>

#include "herbivore.h"

class Human : public Herbivore {
 public:
     Human();
     std::string Name() const override;

     std::string Greeting() const override;

     std::string eat() const override;
 };
