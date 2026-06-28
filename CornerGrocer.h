#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <map>
#include <string>
using namespace std;

//Class used to read grocery data, cout item frequencies, and 
//display reports to user. 
class CornerGrocer {
private: 
    map<string, int> itemFrequencies;

public:
    void LoadItemsFromFile();
    void SaveFrequencyFile();
    void SearchItem();
    void PrintAllFrequencies();
    void PrintHistogram();
};

#endif