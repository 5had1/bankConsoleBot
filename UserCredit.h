#pragma once
#include <string>
#include "Date.h"
using namespace std;
class UserCredit {
public:
    bool has;
    string workName;
    int sumCurrent;
    int sumAll;
    Date dateTaking; // DDMMYYYY
    Date dateCurrent;
    UserCredit(bool lhas) {
        has = lhas;
    }
    void setCredit(int sum, int duration /*������ �����*/) {
        has = true;
    }
    void getInfo() {

    }
};

