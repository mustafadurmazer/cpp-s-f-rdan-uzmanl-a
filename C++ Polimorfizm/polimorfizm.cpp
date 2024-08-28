#include <iostream>

using namespace std;

class hayvan{
public:
    virtual void sescikar(){
        cout<<"Hayvan ses çıkar";
    }
    void yazdir(){
        cout<<"Hayvan sınıfının yazdir metodu çağırıldı";
    }
};


class kedi:public hayvan{
public:
    void sescikar(){
        cout<<"MYAV MİYAV"; 
    }
    void yazdir(){
        cout<<"Kedi sınıfı yazdir";
}
};

class kopek:public hayvan{
public:
    void sescikar(){
        cout<<"HAV HAV HAV HAV"; 
    }
    void yazdir(){
        cout<<"Kopek sınıfı yazdir";
}
};

void ucKezSesCikar(hayvan* p){
    p->sescikar();
    cout<<endl;
    p->sescikar();
    cout<<endl;
    p->sescikar();
    cout<<endl;



}



int main(){
    
   /*
   phayvan = &tekir;

    phayvan->sescikar(); 
    cout<<endl;
    cout<<endl;
    phayvan->yazdir();
    cout<<endl;
    cout<<endl;
    kopek karabas;
    phayvan = &karabas;
    phayvan->sescikar();
*/ 

    hayvan *phayvan;
    kedi* ptekir;
    kedi tekir;
    ptekir = &tekir;
    kopek *pkarabas;
    kopek karabas;
    pkarabas = &karabas;
     
    ucKezSesCikar(&tekir);
    cout<<endl;
   
    ucKezSesCikar(pkarabas);





    return 0;
}