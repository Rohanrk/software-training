#include "human.h"

#include <string>

Human::Human() {
    numOfLegs = 2;
}

std::string Human::Name() const {
    return "Human";
}

std::string Human::Greeting() const {
    return "Hey! Let me out of this cage!";
}

std::string Human::eat() const {
    return "Eww veggies!";
}
