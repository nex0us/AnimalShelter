/*
    Cat file for Animal Shelter
    Camden Alpert, David Sajdak, Abraham Cherian
    4/20/22 to 4/27/22
    CS1337.010

    Purpose: 
    Create cat cpp file for HW6

    Change Log and Features:
    4/20/22 --> created setCatNbr member function to set number for each instance of Cat class
                created Cat default constructor and Cat parameterized constructor

    Notes:
*/

#include <iostream>
#include "cat.h"
using namespace std;

int Cat::nbrOfCats = 0;

//-----------------CONSTRUCTORS---------------------
Cat::Cat() {
    setType("cat");
    setSound("meow (generic cat sound)");
} //Default Constructor
//-----------------METHOD FUNCTIONS-----------------
void Cat::setCatNbr() {
    nbrOfCats++;
    catNbr = nbrOfCats;
} //Cat::setCatNbr
int Cat::getCatNbr() {
    return catNbr;
} //Cat::getCatNbr
int Cat::getNbrOfCats() {
    return nbrOfCats;
} //Cat::getNbrOfCats
void Cat::introduceSelf() {
    Animal::introduceSelf();
    cout << "I am cat number: " << Cat::catNbr << " out of " << Cat::nbrOfCats << endl;
    cout << "I'm animal number " << Animal::animalNbr << "." << endl;
} //Cat::introduceSelf
