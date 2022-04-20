// Created by Camden on 4/20/2022.
/* Changelog:
    - Added member functions
    - Added default and parameterized constructors
 */

#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal() {
    setType("");
    setName("");
    setAge(0);
    setWeight(0);
    setBreed("");
    setColor("");
    setHealth("");
    setSound("");
}
Animal::Animal(string type, string name, int age, int weight, string breed, string color, string health, string sound) {
    setType(type);
    setName(name);
    setAge(age);
    setWeight(weight);
    setBreed(breed);
    setColor(color);
    setHealth(health);
    setSound(sound);
}
void Animal::setType(string newType) {
    type = newType;
}
void Animal::setName(string newName) {
    name = newName;
}
void Animal::setAge(int newAge) {
    age = newAge;
}
void Animal::setWeight(int newWeight) {
    weight = newWeight;
}
void Animal::setBreed(string newBreed) {
    breed = newBreed;
}
void Animal::setColor(string newColor) {
    color = newColor;
}
void Animal::setHealth(string newHealth) {
    health = newHealth;
}
void Animal::setSound(string newSound) {
    sound = newSound;
}

