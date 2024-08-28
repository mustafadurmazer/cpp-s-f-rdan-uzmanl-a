#include<iostream>

using namespace std;

int main(){

   /* int index = 0;
    while (index <=3){
        cout <<"İndex değeri :" << index << endl;
        index++;
    }
   */
  /*
  int baslangic ;
  cout <<"Sayi girin:\n";
  cin >>baslangic;

  int bitis ;
  cout <<"Sayi girin:\n";
  cin >>bitis;

  while (baslangic <= bitis){
    if (baslangic%7==0){
        cout<<"7 bölünebilen sayi: " <<baslangic<<endl;
    }
    baslangic++;
  }
  */

 /*
    int a = 1;
    for (;a<=10;a++){
        if (a%2==0){
        cout<<"Sayi: " << a<< endl;
    }}
*/
  /*
  int baslangic ;
  cout <<"Sayi girin:\n";
  cin >>baslangic;
  int sonuc = 1;

 for (int i = 1;i<=baslangic;i++){
    sonuc = sonuc*i;
 }
    cout <<"Sayının faktorıyeli :" <<sonuc;
*/
  int baslangic ;
  cout <<"Sayi girin:\n";
  cin >>baslangic;

  for(int i= 1;i<= baslangic;i++){
    for(int j = 1;j<=i;j++){
        cout << i<<" "; 
    }
    cout <<endl;
  }



    return 0;
}