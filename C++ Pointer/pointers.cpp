#include<iostream>

using namespace std;

int ucaginYonBilgileriniHesapla(int x_){
    x_=34;
    return x_;
}

void ucaginYonBilgileriniHesapla(int* p){
    *p = 34;

}


int main(){

    int arr[] = {8,12,30};

    int *p;
    p = arr;
    cout<<*(p)<<endl;
    cout <<*(p+1)<<endl;
    cout << *(p+2)<<endl;



    
/*

int x = 30;
    x = ucaginYonBilgileriniHesapla(x);

    cout <<"Yeni yön: " << x<<endl;

    int *ptr;
    ptr = &x;
    ucaginYonBilgileriniHesapla(ptr);
    cout <<"Yeni yön: " << x;


int *ptr;
    ptr = &x;
    
    cout <<&x <<endl;
    cout<<&*ptr;
    cout<<ptr;
*/
    









    return 0;

}