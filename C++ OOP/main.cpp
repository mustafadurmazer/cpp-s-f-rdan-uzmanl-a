#include <iostream>
#include "otomobil.h"
#include "otomobil.cpp"
using namespace std;

int main(){
    otomobil otomobil1("Beyaz",75,"Audi",5);

    cout<< *(otomobil1.KapıSayisi);
    otomobil1.ruhsatbilgileri();
    cout<<endl;
    otomobil1.setRenk("Pembe");
    otomobil1.setBeygir(125);
    otomobil1.ruhsatbilgileri();
    cout<<endl;
    cout<<otomobil1.getBeygir();
    cout<<endl;
    cout<<otomobil1.getRenk();
    cout<<endl;

    cout<<endl;
    otomobil *p;
   /*p = &otomobil1;

    p->ruhsatbilgileri();
    */

    p = new otomobil("Sarı",90,"Bmw",4);
    p->setRenk("KAHVERENGŞ");
    cout << *(p->KapıSayisi);
    cout<<endl;
    p->ruhsatbilgileri();
    delete p; // POİNTERLA OLUŞTURULAN SINIFLAR MUTLAKA İŞİNİZ BİTTİĞİNDE DELETE EDİN!



    return 0;

}