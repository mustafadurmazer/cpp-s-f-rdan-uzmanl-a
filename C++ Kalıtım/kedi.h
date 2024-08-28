#pragma once
#include "hayvan.h"

class kedi : public hayvan{
public:
    kedi(string ad);
    ~kedi();
    void fareyakala();
    static int getKediSayisi();
private:
    static int kedisayisi;
    
};  