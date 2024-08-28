#include <iostream>
using namespace std;

int main2(){
    try{
        int x = 30;
        int y;
        cout<<"Pozitif sayı girin!"<<endl;
        cin>>y;

        if(y == 0){
            throw 100;
        }
        else if(y<0){
            throw 101;
        }
        else{
            int z = x/y;
            cout << z << endl;
        }
    }
    catch(int hatakodu){
        cout<<"Bir exception oluştu, hata kodu: "<<hatakodu<<endl;
        return -1;
    }
   
   
   
   
   
   
   
   
   
   
   
   
    /*try{
        int yas;
        cout<<"Yasınız?"<<endl;
        cin>>yas;
        cout<<endl;
        if(yas>20){
            cout<<"Yasınız yeterince buyuk";
        }
        else{
            throw(yas);
        }
    }
    catch (int hatano){
        cout<<"Yasınız kucuk yasınız: "<<hatano;
    }
    */









    return 0;
}