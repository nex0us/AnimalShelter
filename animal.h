//
// Created by Camden on 4/20/2022.
//

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
    Animal(string, string, int, int, string, string, string, string);
public:
    void setType(string);
    void setName(string);
    void setAge(int);
    void setWeight(int);
    void setBreed(string);
    void setColor(string);
    void setHealth(string);
    void setSound(string);
};


#endif //ANIMALSHELTER_ANIMAL_H
