#include"ogrenci.h"
#include"ogrenci.cpp"
#include<iostream>
using namespace std;

class hesaplayici{
public:
    void orthesapla(ogrenci ogrenci){
        int ortalama = (ogrenci.not1 + ogrenci.not2)/2;
        cout<<ogrenci.ad << " isimli ogrencinin ortalaması: " << ortalama; 
    }

};
int main(){
    ogrenci ali("Ali",90,75);
    ogrenci veli("veli",50,75);
    hesaplayici hesapla;
    hesapla.orthesapla(ali);
    cout<<endl;
    hesapla.orthesapla(veli);




    return 0;
}

