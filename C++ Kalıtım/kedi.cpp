#include "kedi.h"
#include "hayvan.h"
#include <iostream>
int kedi::kedisayisi = 0;

// CONSTRUCTOR
kedi :: kedi(string ad) : hayvan(ad){
    kedisayisi++;
}

// DESTRUCTOR
kedi ::~kedi(){
    kedisayisi--;

}
void kedi::fareyakala(){
    cout<<kedi::isim<<" fareyi yakaladı.";
}
int kedi::getKediSayisi(){
    return kedisayisi;
    
}