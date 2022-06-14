#include <iostream>
using namespace std;
int * arrayHeap(){//[] to return the array
    int *p;
    // p=(int *)malloc(5*(sizeof(int)));
    p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=i+2;
    }
    return (p);
}
int main(void)
{
    //return the heap array (dynamic array)

    int *p;
    p=arrayHeap();
    cout<<p<<endl;//Address

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}
