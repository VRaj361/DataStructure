//character implementation
#include<iostream>
using namespace std;
int main(){
    // int arr[5]={1,2,3,4,5};
    // char ch[5]="abcd";
    // cout<<arr<<endl;//address
    // cout<<ch<<endl;//string 
    
    // char *c=&ch[1];
    // cout<<*c<<endl;//first character
    // cout<<c<<endl;//whole string

    char character='c';
    char *p=&character;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&character<<endl;
    //do not directly asign any value to pointer because it will randomly pick some address and point that address 
    //and when the address was read only and when you should change the value of address that could be reflected in original data
}
