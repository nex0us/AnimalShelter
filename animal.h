// Camden Alpert, David Sajdak, Abraham Cherian
/* Changelog:
    - Added prototypes from animal.cpp
    - added getType member function
    - added set method functions for properties
    - added methods for tracking animal number variables
    - added methods for introduction and listAttributes for use in reports
 */

#ifndef ANIMALSHELTER_ANIMAL_H
#define ANIMALSHELTER_ANIMAL_H
#include <string>
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
    static int nbrOfAnimals; //tracks total number of animals
protected:
    int animalNbr; //assigns specific number to animal
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
