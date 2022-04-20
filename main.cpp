// Camden Alpert, David Sajdak, Abraham Cherian
// AnimalShelter
// 4/20/22
/* Changelog:
    -
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "animal.h"
using namespace std;

vector<string> origData;
vector<vector<string>> separatedData;

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

void animalCreator() {
    //commas followed by non alpha are not initialized
    for (int i = 0; i < origData.size(); i++) {

    }
}
int main() {
    string fileName = "Animal Shelter Data-05.csv";
    readDataFile(fileName);
    animalCreator();
    // cout << "Data file name to read from: " << endl;
    // cin >> fileName;
}
