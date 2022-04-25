/*
    Cat file for Animal Shelter
    David Sajdak
    4/20/22 to 4/27/22
    CS1337.010

    Purpose: 
    Create cat cpp file for HW6

    Change Log and Features:
    4/20/22 --> created setCatNbr member function to set number for each instance of Cat class
                created Cat default constructor and Cat paramterized constructor

    Notes:
*/

#include <iostream>
#include "cat.h"
using namespace std;

int Cat::nbrOfCats = 0;

void Cat::setCatNbr() {
    nbrOfCats++;
    catNbr = nbrOfCats;
}

int Cat::getCatNbr() {
    return catNbr;
}

Cat::Cat() {
    setType("cat");
}

/*Cat::Cat(int cat) {
    setCatNbr(cat);
<<<<<<< HEAD
}*/
=======
}

void Cat::introduceSelf() {
    Animal::introduceSelf();
}
>>>>>>> 2c7d7a2c4c03783ae468af41530eb0f56668407a
