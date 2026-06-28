#include <iostream>
#include "CornerGrocer.h"
using namespace std;

int main() {

    //Create CornerGrocer object to manage grocery data
    CornerGrocer groceryProgram;

    //Store user's menu selection
    int menuChoice = 0;

    //Read grocery items from input file

    groceryProgram.LoadItemsFromFile();

    //Create backup frequency.dat file

    groceryProgram.SaveFrequencyFile();

    //Display menu until exit is chosen

        while (menuChoice != 4) {
            cout << endl;
            cout << "******** Corner Grocer Menu ********" << endl;
            cout << "1. Search for an item" << endl;
            cout << "2. Display all item frequencies" << endl;
            cout << "3. Display item histogram" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";

            cin >> menuChoice; 

            //Execute menu option selected by user

            switch (menuChoice) {
            case 1:
                groceryProgram.SearchItem();
                break;

            case 2: 
                groceryProgram.PrintAllFrequencies();
                break;
            
            case 3:
                groceryProgram.PrintHistogram();
                break;

            case 4: 
                cout << "Goodbye!" << endl;
                break;
            
            default:
                cout << "Invalid option. Please choose 1, 2, 3, or 4." << endl;
                break;
            }
        }
        
        return 0;
}