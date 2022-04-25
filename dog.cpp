/*
    Dog file for Animal Shelter
    Camden Alpert, David Sajdak, Abraham Cherian
    4/20/22 to 4/27/22
    CS1337.010

    Change Log and Features:
    4/24/22 --> created setDogNbr member function to set number for each instance of Dog class
                created Dog default constructor and Dog parameterized constructor

*/

#include <iostream>
#include "dog.h"
using namespace std;

int Dog::nbrOfDogs = 0;
//-----------------CONSTRUCTORS---------------------
Dog::Dog() {
    setType("dog");
    setSound("woof (generic dog sound)");
} //Default constructor
//----------------METHOD FUNCTIONS------------------
void Dog::setDogNbr() {
    nbrOfDogs++;
    dogNbr = nbrOfDogs;
} //Dog::setDogNbr
int Dog::getDogNbr() {
    return dogNbr;
} //Dog::getDogNbr
int Dog::getNbrOfDogs() {
    return nbrOfDogs;
} //Dog:getNbrofDogs
void Dog::introduceSelf() {
    Animal::introduceSelf();
    cout << "I am dog number: " << Dog::dogNbr << " out of " << Dog::nbrOfDogs << endl;
    cout << "I'm animal number " << Animal::animalNbr << "." << endl;
} //Dog::introduceSelf


