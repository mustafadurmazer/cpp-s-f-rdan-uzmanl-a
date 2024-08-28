#pragma once
#include<iostream>
using namespace std;

class otomobil{
public:
    // CONSTRUCTOR
    otomobil();
    otomobil(string _renk,int _beygir,string _model,int kp);

    // DESTRUCTOR
    ~otomobil();
 
    void ruhsatbilgileri();
    void setRenk(string _renk);
    string getRenk();
    void setBeygir(int _beygir);
    int getBeygir();
    int *KapıSayisi;


private:
    string renk;
    int beygir;
    string model;

};