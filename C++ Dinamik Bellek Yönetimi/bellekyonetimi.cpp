#include <iostream>

using namespace std;

int main(){
    int n;
    int toplam = 0;
    cout <<"Dizi eleman sayısını girin: "<<endl;
    cin >> n;

    int *p = new int[n];

    for(int i=0;i<n;i++ ){
        cin>> p[i] ;
        toplam = toplam + p[i];
    }
    cout << "Toplam : "<< toplam;
    delete[] p; 
    

/*
a0 =0
a1 = 1
a2 = 4
a3 = 9;
a4 = 15
*/

















/* int *p = new int(5);

    cout << *p<<endl;


    delete p;
    
    *p = 12;
    cout << *p<<endl;

    p = NULL;

    cout << *p;

    ------
    int *p;
    p = NULL;
    if(p != NULL)
        *p = 5;
    else 
        p = new int(5);
    cout <<*p<<endl;


*/
    




    return 0;
}