#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[]={1,2,3,45};//basic implementation

    array<int,5> ar={234,534,23,6};//STL Array which contain two parameter one is data type another is size

    cout<<ar.size()<<endl;//size of array

    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }//iterate the element using for loop
    
    cout<<endl<<"2nd index of the array ar is "<<ar.at(2)<<endl;//at method to access the index value

    cout<<"Array is empty or not => return in 0 or 1 (bool) "<<ar.empty()<<endl;

    cout<<"First Element => "<<ar.front()<<endl;
    cout<<"Last Element => "<<ar.back()<<endl;



}