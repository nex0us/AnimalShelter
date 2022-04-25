// Created by Camden on 4/20/2022.
/* Changelog:
    - Added prototypes from animal.cpp
    - added getType member function
 */

#ifndef ANIMALSHELTER_ANIMAL_H
#define ANIMALSHELTER_ANIMAL_H
#include <string>
//#include "cat.h"
//#include "dog.h"
using namespace std;


class Animal {
private:
    string type;
    string name;
    int age;
    int weight;
    string breed;
    string color;
    string health;
    string sound;
    static int nbrOfAnimals;
    //int animalNbr;
protected:
    int animalNbr;
public:
    Animal();
    Animal(string, string, int, int, string, string, string, string);
    void setType(string);
    void setName(string);
    void setAge(int);
    void setWeight(int);
    void setBreed(string);
    void setColor(string);
    void setHealth(string);
    void setSound(string);
    string getType();
    void introduceSelf();
    void setAnimalNbr();
    int getAnimalNbr();
    int getNbrOfAnimals();
    string checkHealth();
    void listAttributes();
};


#endif //ANIMALSHELTER_ANIMAL_H
