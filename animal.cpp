// Created by Camden on 4/20/2022.
/* Changelog:
    - Added member functions
    - Added default and parameterized constructors
    - defined getType member function
 */

#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

int Animal::nbrOfAnimals = 0;

Animal::Animal() {
    setType("unknown");
    setName("unknown");
    setAge(0);
    setWeight(0);
    setBreed("unknown");
    setColor("unknown");
    setHealth("unknown");
    setSound("growl");
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
string Animal::getType() {
    return type;
}
//animal/cat/dog speak and
//then say its name, age, color, health, etc
void Animal::introduceSelf() {
    cout << "\n" << Animal::sound << endl;
    cout << "My name is " << Animal::name << endl;
    if (Animal::age != 0) {
        cout << "I am " << Animal::age << " years of age." << endl;
    } else {
        cout << "My age is unknown." << endl;
    }
    if (Animal::weight != 0) {
        cout << "I weigh " << Animal::weight << "." << endl;
    } else {
        cout << "My weight is unknown." << endl;
    }
    cout << "I'm a " << Animal::type << ", and a " << Animal::breed << " breed." << endl;
    cout << "I am " << Animal::color << " in color." << endl;
    cout << "My health is " << Animal::health << "." << endl;
    cout << "I'm animal number " << Animal::animalNbr << "." << endl;
}