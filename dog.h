/*
    Dog Class file for Animal Shelter
    Abraham Cherian
    4/20/22 to 4/27/22
    CS1337.010

    Purpose:
    Create dog class file for HW6

    Change Log and Features:
    4/24/22 --> created Dog class (subclass of Animal)
                added data members

    Notes:
*/

#ifndef ANIMALSHELTER_DOG_H
#define ANIMALSHELTER_DOG_H

#include "animal.h"
#include <string>

using namespace std;

class Dog : public Animal {
private:
    static int nbrOfDogs;
    int dogNbr;
public:
    using Animal::Animal;
    Dog();
    Dog(int);
    void setDogNbr();
    int getDogNbr();
    void introduceSelf();
    int getNbrOfDogs();
};

#endif //ANIMALSHELTER_DOG_H