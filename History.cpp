//
// Created by frpat on 11/22/2024.
//

#include "History.h"
#include <iostream>
using namespace std;

void History::addRecord(const string &record) {
    records.push_back(record);
}


void History::showHistory() {
    cout<< "Historial de operacioned";
    for(auto& record: records) {
        cout << record << endl;
    }
}