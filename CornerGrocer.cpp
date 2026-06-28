#include "CornerGrocer.h"
#include <iostream>
#include <fstream>
using namespace std;

//Reach each grocery item from the input file and count frequency

void CornerGrocer::LoadItemsFromFile() {
    ifstream
inputFile("CS210_Project_Three_Input_File.txt");
    string itemName;

    while (inputFile >> itemName) {

        //Increase the count each time the item appears
        itemFrequencies[itemName]++;
    }

    inputFile.close();
}

//Save grocery item requencies to backup file
void CornerGrocer::SaveFrequencyFile() {
    ofstream
outputFile("frequency.dat");

    for (auto item : itemFrequencies) {
        outputFile << item.first << " " << item.second << endl;
    }

    outputFile.close();
}

//Allow user to search for frequency of single item
void CornerGrocer::SearchItem() {
    string itemName;

    cout << "Enter the item you want to search for: "; 
    cin >> itemName;

    cout << itemName << " " <<itemFrequencies[itemName] << endl;
}

//Display every grocery item with number of times it was purchased
void CornerGrocer::PrintAllFrequencies() {
    for (auto item : itemFrequencies) {
        //Print the item name and its frequency
        cout << item.first << " " << item.second << endl;
    }
}

//Display text based histogram using asterisks
void CornerGrocer::PrintHistogram() {
    for (auto item : itemFrequencies) {
        //Print an asterisk for each purchase of item
        cout << item.first << " ";

        for (int i = 0; i < item.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}
