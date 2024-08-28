#include <iostream>

using namespace std;

class otomobil{
private:
    string marka;

public:
    int yıl;
    otomobil(string _marka,int _yıl){
        marka = _marka;
        yıl = _yıl;
    }
    friend void(bilgigoster(otomobil oto));
};

void bilgigoster(otomobil oto){
    cout<<oto.yıl<<endl<<oto.marka;
}

int main(){
    otomobil otomobil1("opel",2011);
    bilgigoster(otomobil1);



}