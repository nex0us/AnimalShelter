// Camden Alpert, David Sajdak, Abraham Cherian
/* Changelog:
    - Added member functions
    - Added default and parameterized constructors
    - defined getType member function
    - see animal.h changelog for method functions
 */

#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

int Animal::nbrOfAnimals = 1;
// -------------------CONSTRUCTORS-------------------
Animal::Animal() {
    setType("unknown");
    setName("unknown");
    setAge(0);
    setWeight(0);
    setBreed("unknown");
    setColor("unknown");
    setHealth("unknown");
    setSound("growl");
} //Default constructor
Animal::Animal(string type, string name, int age, int weight, string breed, string color, string health, string sound) {
    setType(type);
    setName(name);
    setAge(age);
    setWeight(weight);
    setBreed(breed);
    setColor(color);
    setHealth(health);
    setSound(sound);
    animalNbr = getNbrOfAnimals() - 1;
} //Parameterized constructor
// -------------------METHOD FUNCTIONS--------------------
void Animal::setAnimalNbr() {
    nbrOfAnimals++;
    animalNbr = nbrOfAnimals;
} //Animal::setAnimalNbr
int Animal::getAnimalNbr() {
    return animalNbr;
} //Animal::getAnimalNbr
int Animal::getNbrOfAnimals() {
    return nbrOfAnimals;
} //Animal::getNbrOfAnimals
void Animal::setType(string newType) {
    type = newType;
} //Animal::setType
void Animal::setName(string newName) {
    name = newName;
} //Animal::setName
void Animal::setAge(int newAge) {
    age = newAge;
} //Animal::setAge
void Animal::setWeight(int newWeight) {
    weight = newWeight;
} //Animal::setWeight
void Animal::setBreed(string newBreed) {
    breed = newBreed;
} //Animal::setBreed
void Animal::setColor(string newColor) {
    color = newColor;
} //Animal::setColor
void Animal::setHealth(string newHealth) {
    health = newHealth;
} //Animal::setHealth
void Animal::setSound(string newSound) {
    sound = newSound;
} //Animal::setSound
string Animal::getType() {
    return type;
} //Animal::getType
void Animal::introduceSelf() {
    cout << "\n" << Animal::sound << endl;
    cout << "My name is " << Animal::name << endl;
    if (Animal::age != 0) {
        cout << "I am " << Animal::age << " years of age." << endl;
    } else {
        cout << "My age is unknown." << endl;
    }
    if (Animal::weight != 0) {
        cout << "I weigh " << Animal::weight << " pounds." << endl;
    } else {
        cout << "My weight is unknown." << endl;
    }
    cout << "I'm a " << Animal::type << ", and a " << Animal::breed << " breed." << endl;
    cout << "I am " << Animal::color << " in color." << endl;
    cout << "My health is " << Animal::health << "." << endl;
} //Animal::introduceSelf
string Animal::checkHealth() {
    return health;
} //Animal::checkHealth
void Animal::listAttributes() {
    cout << "Name: " << name << ", Type: " << type << ", Breed: " << breed
        << ", Color: " << color << ", Age: " << age << ", Weight: " << weight <<
        ", Health: " << health << endl;
} //Animal::listAttributes