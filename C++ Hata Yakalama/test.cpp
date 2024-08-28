#include <iostream>
using namespace std;
#include"hatasınıfı.cpp"
#include"hatasınıfı.h"


int main(){
    try{
        int x;
        cout<<"X değerini girin"<<endl;
        cin >>x;
        if (x<0)
            throw hatasınıfı("hatamesajı no:1");
        else if(x == 0)
            throw 101;

    }
    catch(hatasınıfı h){
        cout<<"Exception yakalandı! "<<h.gethata()<<endl;
    }
    catch(int hatakodu){
        cout<<"Sayı 0 a eşit.2.catch blogu çalıştı";
    }
    catch(...){}
    return 0;
}
