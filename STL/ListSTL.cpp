#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l;
    l.push_back(3);
    l.push_front(5);
    for(auto i:l){
        cout<<i<<" ";
    }

    //front ,back ,empty all function are there

    //erase function 
    //stack pointer pointing that element can remove from the stack
    cout<<endl;
    l.erase(l.begin());//because you will add 5 at last so stack is pointing to 5 
    for(auto i:l){
        cout<<i<<" ";
    }


    cout<<"Size of list =>"<<l.size()<<endl;

    //copy list
    list<int> li(l);   
    list<int> li1(5,100);   
    return 0;
}