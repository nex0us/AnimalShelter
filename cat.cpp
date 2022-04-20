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


void Cat::setCatNbr(int newCatNbr) {
    catNbr = newCatNbr;
}

Cat::Cat() {
    setType("cat");
}

Cat::Cat(int cat) {
    setCatNbr(cat);
}

/*string type;
string name;
int age;
int weight;
string breed;
string color;
string health;
string sound;*/