// Camden Alpert, David Sajdak, Abraham Cherian
// AnimalShelter
// 4/20/22
/* Changelog:
    - Added readDataFile function for reading csv file
    - Added splitString function (David's algorithm), and splitVectorStrings
    - Added formatData, print2DVector, createAnimals functions
    - Fixed error where commas were skipped by split functions
    - created classify animals function to store objects in correct animal vector (cat, dog, etc.)
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

//function prototypes
void classifyAnimals(Animal newAnimal, string type, string name, int age, int weight, string breed, string color, string health, string sound);

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
        cout << line << endl;
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
void createAnimals() {
    //commas followed by non alpha are not initialized
    formatData(sepData);
    //print2DVector(sepData);
    for (int i = 0; i < sepData.size(); i++) {
        string type = sepData[i][0];
        string name = sepData[i][1];
        //cout << sepData[i][2] << endl;
        //cout << sepData[i][3] << endl;
        int age = (sepData[i][2] == "" ? 0 : stoi(sepData[i][2]));
        int weight = (sepData[i][3] == "" ? 0 : stoi(sepData[i][3]));
        string breed = sepData[i][4];
        string color = sepData[i][5];
        string health = sepData[i][6];
        string sound = sepData[i][7];
        Animal newAnimal(type,name,age,weight,breed,color,health,sound);
        animals.push_back(newAnimal);
        cout << endl;
        cout << animals[i].getType() << endl;
        classifyAnimals(newAnimal,type,name,age,weight,breed,color,health,sound);
    }
}
void classifyAnimals(Animal newAnimal, string type, string name, int age, int weight, string breed, string color, string health, string sound) {
    if (newAnimal.getType() == "dog") {
            Dog newDog(type,name,age,weight,breed,color,health,sound);
            newDog.setDogNbr();
            dogs.push_back(newDog);
            cout << "In classify animals function, classified as: " << newDog.getType() << endl;
            cout << "Dog number: " << newDog.getDogNbr() << endl;
    } 
    else if (newAnimal.getType() == "cat") {
            Cat newCat(type,name,age,weight,breed,color,health,sound);
            newCat.setCatNbr();
            cats.push_back(newCat);
            cout << "In classify animals function, classified as: " << newCat.getType() << endl;
            cout << "Cat number: " << newCat.getCatNbr() << endl;
    }
}

int main() {
    string fileName = "Animal Shelter Data-05.csv";
    readDataFile(fileName);
    splitVectorStrings(origData);
    print2DVector(sepData);
    createAnimals();
    // cout << "Data file name to read from: " << endl;
    // cin >> fileName;
}
