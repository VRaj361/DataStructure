#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    for(auto i:d){
        cout<<i<<" ";
    }

    cout<<endl;
    d.pop_front();
    for(auto i:d){
        cout<<i<<" ";
    }

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    cout<<"First element in index using at method =>"<<d.at(0);

    cout<<"Begin element =>"<<d.front()<<endl;
    cout<<"last element =>"<<d.back()<<endl;


    cout<<"Empty or not "<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+2);
    for(auto i:d){
        cout<<i<<" ";
    }

    //max size will remain same means when we allocate the memory in dequeue that remain same in memory 
    //but the size is goes to 0 when you erase all the element

    

    return 0;
}