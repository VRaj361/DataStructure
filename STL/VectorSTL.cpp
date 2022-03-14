#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    cout<<"Capacity is => "<<v.capacity()<<endl;
    cout<<"Size is => "<<v.size()<<endl;


    //add element
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    cout<<"Capacity is => "<<v.capacity()<<endl;
    cout<<"Size is => "<<v.size()<<endl;


    cout<<"First index value => "<<v.front()<<endl;
    cout<<"Last index value => "<<v.back()<<endl;

    cout<<"Random element using at method =>"<<v.at(2)<<endl;

    cout<<"Before Pop"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

    v.pop_back();
    cout<<"After Pop"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<"Clear function in vector"<<endl;
    v.clear();
    cout<<"Capacity is => "<<v.capacity()<<endl;
    cout<<"Size is => "<<v.size()<<endl;

    
    vector<int> a(5,2);//5 is the size of array and 2 is value which is initialize with all the index 
    cout<<"A Array"<<endl;

    for(auto i:a){
        cout<<i<<" ";
    }


    vector<int> a1(a);//copy a array in a1
    cout<<"A1 Array"<<endl;

    for(auto i:a1){
        cout<<i<<" ";
    }
    

    //verctor is same as arraylist if we increase the number of element so verctor can dynamically create new array and add those element size should be increase by double
    return 0;
}