#include "dog.h"

#include <string>

Dog::Dog() {
    numOfLegs = 4;
}

std::string Dog::Name() const {
    return "Dog";
}

std::string Dog::Greeting() const {
    return "Woof! Let me out of this cage!";
}

std::string Dog::eat() const {
    return "omnomnom";
}
