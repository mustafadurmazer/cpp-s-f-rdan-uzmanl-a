#include <iostream>
#include "hayvan.h"
using namespace std;

hayvan::hayvan(string ad){
    hayvan::isim = ad;
}

void hayvan::beslen(){
    cout<<hayvan::isim <<" Besleniyor..."<<endl;

}

void hayvan::uyu(){
    cout<<hayvan::isim <<" Uyuyor..."<<endl;

}

void hayvan::setIsım(string ad){
    hayvan::isim = ad;
}

string hayvan::getIsım(){
    return hayvan::isim;
}