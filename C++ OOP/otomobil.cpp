#include "otomobil.h"

// CONSTRUCTOR
otomobil::otomobil(){

}


otomobil::otomobil(string _renk,int _beygir,string _model,int kp){
    cout<<"Constructor çagırıldı";
    cout<<endl;
    renk = _renk;
    beygir = _beygir;
    model = _model;
    //KapıSayisi =  new int(kp);
    KapıSayisi = new int(kp);
}

// OTOMOBİL DESTRUCTOR

otomobil::~otomobil(){
    cout<<otomobil::model<<" Destructor çagırıldı";
    cout<<endl;
    delete KapıSayisi;
}

void otomobil::setRenk(string _renk){
    otomobil::renk = _renk;
}
string otomobil::getRenk(){
    return otomobil::renk;
}
void otomobil::setBeygir(int _beygir){
    otomobil::beygir = _beygir;
}
int otomobil::getBeygir(){
    return beygir;
}

 void otomobil::ruhsatbilgileri(){
    cout<<"Model: "<< otomobil::model<<endl;
    cout<<"Renk: "<<otomobil::renk<<endl;
    cout<<"Beygir: "<<otomobil::beygir<<endl;
    cout<<"Kapı Sayısı: "<<*(otomobil::KapıSayisi)<<endl;
 }
