#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(void)
{
    //call by value
    //call by address 
    //call by reference
    //These are available in c++ and c supports only two first line

    int x=5;
    int y=6;
    swap(x,y);
    cout<<y<<endl<<x<<endl;

    return 0;
}
