// Create 5 more classes for different zoo animals that implement the Animal
// interface. A Human class has been created for you, which can be used as a
// model and refresher on syntax.

#include <iostream>

// Import the header files for your classes here.
// Make sure they're alphabetized!
#include "animal.h"
#include "human.h"
#include "dog.h"

void PrintAnimal(const Animal& animal) {
  std::cout << "The " << animal.Name() << " says: " << animal.Greeting() << " It has " << animal.numOfLegs
            << " legs."
            << std::endl;
}

void Feed(const Carnivore& carnivore) {

    std::cout << "Let's go eat some meat!" << std::endl;
    std::cout << carnivore.eat() << std::endl;

}

void Feed(const Herbivore& herbivore) {
    std::cout << "Let's go get some vegetables" << std::endl;
    std::cout << herbivore.eat() << std::endl;
}

int main() {
  Human human;
  Dog dog;

  PrintAnimal(human);
  Feed(human);
  PrintAnimal(dog);
  Feed(dog);

  return 0;
}
