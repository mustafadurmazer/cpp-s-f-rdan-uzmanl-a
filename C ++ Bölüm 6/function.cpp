#include<iostream>

using namespace std;

int fonksiyon(int a){
    int sonuc;
    sonuc = 3*a+2;
    return sonuc;
}
int alanhesapla(int a,int b){
        return a*b;

}

int main(){
    cout <<"Merhaba"<<endl;    

    cout<<fonksiyon(5);
    cout << endl <<"Üçgenin alanı: " << alanhesapla(3,5);

    return 0;
}