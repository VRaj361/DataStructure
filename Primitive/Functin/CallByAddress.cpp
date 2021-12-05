#include <iostream>
using namespace std;
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    int x=5;
    int y=6;
    swap(&x,&y);
    cout<<x<<endl<<y<<endl;
    //this is swap the value internally
    return 0;
}
