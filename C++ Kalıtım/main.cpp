#include <iostream>
#include "hayvan.cpp"
#include "hayvan.h"
#include "kedi.h"
#include "kedi.cpp"
using namespace std;



int main(){

    kedi tekir("Cabbar");
    kedi van("Pamuk");
    tekir.beslen();
    tekir.uyu();
    tekir.fareyakala();

    kedi* cat = new kedi("KARABAS");

    cout<<"Kedi sayisi: " <<kedi::getKediSayisi()<<endl;
    delete cat;
    cout<<"Kedi sayisi: " <<kedi::getKediSayisi();







    return 0;
}
