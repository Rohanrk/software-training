#pragma once

#include <string>

#include "animal.h"

class Carnivore : public Animal {
 public:
    virtual std::string eat() const = 0;

};
