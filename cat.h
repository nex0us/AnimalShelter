/*
    Cat Class file for Animal Shelter
    David Sajdak
    4/20/22 to 4/27/22
    CS1337.010

    Purpose: 
    Create cat class file for HW6

    Change Log and Features:
    4/20/22 --> 

    Notes:
*/

#ifndef ANIMALSHELTER_CAT_H
#define ANIMALSHELTER_CAT_H
#include "animal.h"
#include <string>

using namespace std;


class Cat : public Animal {
private:
    static int nbrOfCats;
    int catNbr;
public:
    Cat();
    Cat(int);
    void setCatNbr(int);
};


#endif //ANIMALSHELTER_CAT_H