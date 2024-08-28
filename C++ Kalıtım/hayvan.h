#pragma once

#include <iostream>
using namespace std;

class hayvan{
public:
    hayvan(string ad);
    void beslen();
    void uyu();
    string getIsım();
    void setIsım(string ad);

protected:
    string isim;

};
