#include <iostream>
using namespace std;

int main(void)
{
    int a=10;
    // int &r;//it must be initialize 
    // int &r=11;//reference will not take value of constat

    // int &r=&a;//not store the address 
    int &r=a;//valid
    cout<<a<<endl<<r;
    cout<<&a<<endl<<&r;
    a++;
    cout<<endl<<r<<endl;
    //r and a are same if one changes then another change will reflact  automatically

    // int &b=r;//three are same now
    //to change the reference
    int b=10;
    // int &r=b;
    //previously declared
    r=b;
    //the changes are reflacted in a variable also
    
    cout<<a<<endl<<b<<endl<<r;

    
    return 0;
}
