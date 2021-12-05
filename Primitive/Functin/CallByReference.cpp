#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(void)
{
    int x=5;
    int y=6;
    swap(x,y);
    cout<<x<<endl<<y<<endl;
    //big function which performloop and some computaional task then not use call by reference
    //one change is like we can not change the value directly using functions but here that swap 
    //function is part of main method so value will change directly
    return 0;
}
