#include <iostream>
using namespace std;

int main(void)
{

    //pointer is store the address 

    //address of the number
    short n=5;
    cout<<"This is the address of n -> "<<&n<<endl;//hexadeciaml value

    //pointer basic
    short *p=&n;
    cout<<"Pointer of p is(Address) -> "<<p<<endl;//value of in p
    cout<<"Pointer of p is(Value) -> "<<*p<<endl;//value of p
    cout<<"Number of n is (Address) -> "<<&n<<endl;//address of n 
    cout<<"Number of n is (Value) -> "<<n<<endl;//value of n
    cout<<"Pointer of the p's Address is -> "<<&p<<endl;//Address of p

    //size of pointer and variable

    cout<<"Size of pointer p value is -> "<<sizeof(*p)<<endl;
    cout<<"Size of pointer p is -> "<<sizeof(p)<<endl;
    cout<<"Size of number n is -> "<<sizeof(n)<<endl;
    cout<<"Size of number n address is -> "<<sizeof(&n)<<endl;


    //format of the pointer
    //1)direct initialize -ex int *p=&i;
    //2)indirect initialize   int *p=0;
                                // p=&i;

    //both are valid
    //indirect pointer is been initialize with zero because of it will bad practice and without initialize it will give the garbage value

    //if you don't use pointer so it will deallocated and destroyed that otherwise it takes memory 
    //we will use free in c and delete in cpp
    //in cpp we will use both free and delete 
    

    //increment the value 
 
    cout<<"Increment the value "<<(*p)++<<endl<<"Print the value "<<*p;


    //copying the pointer
    short *q=p;
    cout<<endl<<"values "<<p<<" "<<q<<endl;
    cout<<"Pointer"<<*p<<" "<<*q<<endl;

    //concept
    int i=3;
    int *t=&i;
    cout<<"Value before "<<*t<<endl;
    cout<<"Value before "<<t<<endl; 
    *t=*t+1;
    cout<<"Value After "<<*t<<endl;
    t=t+1;
    cout<<"Value After "<<t<<endl;
    //4 bytes pointer can move further c,d,e,f,0


    return 0;
}
