#include<iostream>

using namespace std;

int main(){
    /*
    int birler;
    int onlar;
    int yuzler;
    int binler;

    int sayac =0;
    for(int i = 1000;i<=9999;i++){
        birler = i%10;
        onlar = (i/10)%10;
        yuzler = (i/100)%10;
        binler = (i/1000);

        if (birler != yuzler && birler != onlar && birler != binler && onlar != yuzler && onlar != binler && yuzler != binler){
            sayac++;   
        }


    }

    cout <<"Basamakları farklı olan sayı sayısı: "<<sayac<<endl;

        

*/

    for (int i = 20;i<=40;i++){
        cout <<i<<" Sayısının Bölenleri: ";
        for (int j = 1;j<=i;j++){
            if (i%j == 0){
                cout << j <<" ";
            }
        }
        cout << endl;

    }

    return 0;
}