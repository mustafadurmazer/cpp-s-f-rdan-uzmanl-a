#include <iostream>
#include<fstream>
//#include<string>

using namespace std;

int main(){

    fstream file;
    file.open("/Users/mustafadurmazer/Desktop/C++/C++ Dosya İşlemleri/mustafa.txt",ios::in );

    if(!file.is_open()){
        cout<<"Dosya açılamıyor.";
    }
    else{
        string str;
        while(getline(file, str)){
            cout<<str;
            cout<<endl;
        }
        
        
        file.close();
    }











    return 0;
}