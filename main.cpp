// Camden Alpert, David Sajdak, Abraham Cherian
// AnimalShelter
// 4/20/22
/* Changelog:
    - Added readDataFile function for reading csv file
    - Added splitString function (David's algorithm), and splitVectorStrings
    - Added formatData, print2DVector, createAnimals functions
    - Fixed error where commas were skipped by split functions
    - created classify animals function to store objects in correct animal vector (cat, dog, etc.)
    - finished reports for numbers, cats, dogs, and animals
    - added showAdoptableAnimals function
    - cleaned code
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "animal.h"
#include "animal.cpp"
#include "cat.h"
#include "cat.cpp"
#include "dog.h"
#include "dog.cpp"
using namespace std;

vector<string> origData; //csv data in lines
vector<vector<string>> sepData; //stores the csv data by rows and columns
vector<Animal> animals;
vector<Cat> cats;
vector<Dog> dogs;
vector<Animal> adoptableAnimals;

//function prototypes
void classifyAnimals(Animal newAnimal, string type, string name, int age, int weight, string breed, string color, string health, string sound);


// data functions
void readDataFile(string fileName) {
    ifstream infile;
    infile.open(fileName);
    string line;
    while (infile) {
        if (infile.peek() == 'A') {
            getline(infile, line);
        }
        getline(infile,line);
        origData.push_back(line);
    }
}
void splitString(string line) {
    //splits a string into separate words
	string temp = "";
    vector<string> vecTemp;
    for (int j = 0; j < line.length(); j++) {
        if (line[j] == ',') {
            vecTemp.push_back(temp);
            temp = "";
        } else {
            temp.push_back(line[j]);
        }
    }
    vecTemp.push_back(temp);
    sepData.push_back(vecTemp);
}
void splitVectorStrings(vector<string> &vec) {
    //splits vector strings into 2d vector words/sentences, store to sepData vector
    for (auto x: vec) {
        splitString(x);
    }
}
void formatData(vector<vector<string>> &vec) {
    //Takes the separate words in a vector and turns them into blanks
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == ",") {
                vec[i][j] = "";
            }
        }
    }
}
void print2DVector(vector<vector<string>> vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}


// animal functions
void createAnimals() {
    //commas followed by non alpha are not initialized
    formatData(sepData);
    for (int i = 0; i < sepData.size(); i++) {
        string type = sepData[i][0];
        string name = sepData[i][1];
        int age = (sepData[i][2] == "" ? 0 : stoi(sepData[i][2]));
        int weight = (sepData[i][3] == "" ? 0 : stoi(sepData[i][3]));
        string breed = sepData[i][4];
        string color = sepData[i][5];
        string health = sepData[i][6];
        string sound = sepData[i][7];
        Animal newAnimal(type,name,age,weight,breed,color,health,sound);
        newAnimal.setAnimalNbr();
        animals.push_back(newAnimal);
        classifyAnimals(newAnimal,type,name,age,weight,breed,color,health,sound);
    }
    animals.pop_back();
}
void classifyAnimals(Animal newAnimal, string type, string name, int age, int weight, string breed, string color, string health, string sound) {
    if (newAnimal.getType() == "dog") {
            Dog newDog(type,name,age,weight,breed,color,health,sound);
            newDog.setDogNbr();
            dogs.push_back(newDog);
    } 
    else if (newAnimal.getType() == "cat") {
            Cat newCat(type,name,age,weight,breed,color,health,sound);
            newCat.setCatNbr();
            cats.push_back(newCat);
    }
}
void introduceAnimals(vector<Cat> &vecCat, vector<Dog> &vecDog, vector<Animal> &vecAnimal) {
    for (int cat = 0; cat < vecCat.size(); cat++) {
        vecCat[cat].introduceSelf();
    }
    cout << "\n\\----------------------------------------------------------\\";
    for (int dog = 0; dog < vecDog.size(); dog++) {
        vecDog[dog].introduceSelf();
    }
    cout << "\n\\----------------------------------------------------------\\" << endl;
    for (int animal = 0; animal < vecAnimal.size(); animal++) {
        if (vecAnimal[animal].getType() == "cat" || vecAnimal[animal].getType() == "dog")
            continue;
        else {
            vecAnimal[animal].introduceSelf();
            cout << "I'm animal number " << vecAnimal[animal].getAnimalNbr() - 1 << "." << endl;
        }
    }
    cout << "\n\\----------------------------------------------------------\\" << endl;
}
void showAdoptableAnimals() {
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i].checkHealth() == "good") {
            adoptableAnimals.push_back(animals[i]);
        }
    }
    cout << "\nAdoptable Animals: " << endl;
    cout << "Number of adoptable animals: " << adoptableAnimals.size() << endl;
    for (int i = 0; i < adoptableAnimals.size(); i++) {
        adoptableAnimals[i].listAttributes();
    }
}
void reportNumber() {
    cout << "\nTotal number of animals created: " << animals[0].getNbrOfAnimals() - 2 << endl;
    cout << "Number of cats created: " << cats[0].getNbrOfCats() << endl;
    cout << "Number of dogs created: " << dogs[0].getNbrOfDogs() << endl;
    cout << "\n\\----------------------------------------------------------\\";
}


int main() {
    string fileName = "Animal Shelter Data-05.csv";
    readDataFile(fileName);
    splitVectorStrings(origData);
    //print2DVector(sepData);
    createAnimals();
    reportNumber();
    introduceAnimals(cats, dogs, animals);
    showAdoptableAnimals();
}
