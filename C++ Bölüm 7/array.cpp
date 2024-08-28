#include<iostream>

using namespace std;

void diziDegistir(int arr[],int size){
    for(int i = 0;i<size;i++){
        arr[i]++;
    }

}

void terseDondur(int dizi[],int size){
    int dizi1[size];
    for(int i = 0;i<size;i++){
        dizi1[size-i-1] = dizi[i];
    }

    for(int i = 0;i<4;i++){
        cout << dizi1[i]<<endl;
    }
}

int main(){
    
    /*
    int dizi[5];
    dizi[0] = 12;
    dizi[1] = 345;
    dizi[2] = 45;
    dizi[3] = 67;
    dizi[4] = 3572;
   
    int uzunluk = sizeof(dizi)/sizeof(*dizi);

    diziDegistir(dizi,uzunluk);
    for (int i = 0;i<5;i++){
        cout<<dizi[i]<<endl;
    }
    */

   int dizi[4];
   for (int i = 0;i<4;i++){
    cout <<"LÜTFEN "<<i+1<<". SAYIYI GİRİN: "<<endl;
    cin >>dizi[i];

   }
   cout<<endl<<endl;

    terseDondur(dizi,4);
  
    return 0;
}