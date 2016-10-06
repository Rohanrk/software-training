#pragma once

#include <string>

#include "animal.h"

class Herbivore : public Animal {
 public:
    virtual std::string eat() const = 0;

};
