#include<iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Turkish");
   /*
   cout << "3 Adet sayi giriniz\n";
   int sayi1,sayi2,sayi3;
   cout <<"Sayı1'i girin\n";
   cin >> sayi1;

   cout <<"Sayı2'i girin\n";
   cin >> sayi2;

   cout <<"Sayı3'i girin\n";
   cin >> sayi3;

    if(sayi1>sayi2 && sayi1>sayi3 && sayi2>sayi3){
        cout << "Büyükten küçüğe sayılar  "<<sayi1<<" "<<sayi2<<" "<<sayi3;
    }
    else if(sayi1>sayi2 && sayi1>sayi3 && sayi3>sayi2){
        cout << "Büyükten küçüğe sayılar  "<<sayi1<<" " <<sayi3 << " "<<sayi2;
    }
    else if(sayi2>sayi1 && sayi2>sayi3 && sayi1>sayi3){
        cout << "Büyükten küçüğe sayılar  "<<sayi2<<" " <<sayi1 << " "<<sayi3;
    }
    else if(sayi2>sayi1 && sayi2>sayi3 && sayi3>sayi1){
        cout << "Büyükten küçüğe sayılar  "<<sayi2<<" " <<sayi3 << " "<<sayi1;
    }
    else if(sayi3>sayi1 && sayi3>sayi2 && sayi1>sayi2){
        cout << "Büyükten küçüğe sayılar  "<<sayi3<<" " <<sayi1 << " "<<sayi2;
    }
    else if(sayi3>sayi1 && sayi3>sayi2 && sayi2>sayi1){
        cout << "Büyükten küçüğe sayılar  "<<sayi3<<" " <<sayi2 << " "<<sayi1;
    }
     */
    int gun =3;
    switch(gun)
    {
        case 1:
            cout<<"PZT";
            break;
        case 2:
            cout<<"SALI";
            break;
        case 3:
            cout<<"ÇARŞAMBA";
            break;
        case 4:
            cout<<"PERŞEMBE";
            break;
        case 5:
            cout<<"CUMA";
            break;
        case 6:
            cout<<"CUMARTESİ";
            break;
        case 7:
            cout<<"PAZAR";
            break;
        default:
            cout <<"YANLIŞ DEĞER GİRDİNİZ";
    }
    



    
    return 0;      
}