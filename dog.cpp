/*
    Dog file for Animal Shelter
    Abraham Cherian
    4/20/22 to 4/27/22
    CS1337.010

    Purpose:
    Create dog cpp file for HW6

    Change Log and Features:
    4/24/22 --> created setDogNbr member function to set number for each instance of Dog class
                created Dog default constructor and Dog parameterized constructor

    Notes:
*/

#include <iostream>
#include "dog.h"
using namespace std;

int Dog::nbrOfDogs = 0;

void Dog::setDogNbr() {
    nbrOfDogs++;
    dogNbr = nbrOfDogs;
}

int Dog::getDogNbr() {
    return dogNbr;
}

Dog::Dog() {
    setType("dog");
}

/*Dog::Dog(int dog) {
    setDogNbr(dog);
}*/

void Dog::introduceSelf() {
    Animal::introduceSelf();
    cout << "I am dog number: " << Dog::dogNbr << " out of " << Dog::nbrOfDogs << endl;

}


