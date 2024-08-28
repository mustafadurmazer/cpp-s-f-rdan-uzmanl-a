#include<iostream>
#include<list>
using namespace std;

void printList(list<int> l){
    list<int> :: iterator itr;
    for(itr=l.begin();itr != l.end();itr++){
        cout<<*itr<<endl;
    }
}

int main(){

    list<int> lst;
    lst.push_back(15);
    lst.push_back(8);
    lst.push_back(12);
    lst.push_front(4);
    printList(lst);
    cout<<endl;
    lst.pop_back();
    lst.pop_front();
    printList(lst);
    cout<<endl;
    list<int> :: iterator it;
    it = lst.begin();
    it++;

    lst.insert(it,1,31);
    printList(lst);

    return 0;
}