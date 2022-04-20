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



void readDataFile(string fileName) {
    ifstream infile;
    infile.open(fileName);
    while (infile) {
        
    }
}
int main() {
    string fileName = "Animal Shelter Data-05.csv";
    readDataFile(fileName);
    // cout << "Data file name to read from: " << endl;
    // cin >> fileName;
}
