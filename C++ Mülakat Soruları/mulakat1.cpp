#include <iostream>
#include <math.h>
using namespace std;

void kare(int *ptr,int uzunluk){
    
    for(int i = 0;i<uzunluk;i++){
        if(*ptr%2 == 0){
            *ptr = *ptr * *ptr;
        }
        ptr++;
    }
}
void tersinecevir(int *p,int boyut){
    cout<<"Boyut: "<<boyut<<endl;
    for(int i = boyut-1;i>=0;i--){
        cout<<p[i]<<" ";
        
    }

}
void update(int*a,int*b){
    int c = *a;
    *a = *a + *b;
    *b = abs(c - *b);
}

int main(){
    
    int a,b;
    int *pa = &a, *pb = &b;
    scanf("%d %d",&a,&b);
    update(pa,pb);
    printf("%d\n%d",a,b);











    /*
    int eleman;
    cout<<"Dizinin eleman sayısını girin.";
    cin>>eleman;
    int *p = new int[eleman];
    for(int i = 0;i<eleman;i++){
        cout<<i+1<<". Elemanı gir"<<endl;
        cin>>p[i];
        cout<<endl;
    }
    tersinecevir(p,eleman);
    delete[] p;
    */
    




// POİNTER KULLANARAK DİZİ DEĞİŞTİRME
 /*
 int *ptr;
    int dizi[] = {2,5,6,9,10};
    int boyut = sizeof(dizi);
    int tur = sizeof(dizi[0]);
    int uzunluk = boyut/tur;
    ptr = dizi;
    kare(ptr,uzunluk);
    for(int i =0;i<5;i++ ){
        cout<<dizi[i]<<endl;
    }
    */   






    /*int x = 1;
    do{
        x++;
        cout<<"*";
    } while (++x < 5 );

    cout << endl << "X: " << x <<endl;
*/




//POİNTER ÖRNEKLER
/*
     int x = 3;
    int y = 7;
    int *p1;
    int *p2;

    p2 = &y;
    p1 = &x;

    y = y+3;

    *p1 = *p1 * 3;
    *p1 = *p2 * *p1;

    cout<< *p1;
*/   
 

    return 0;
}