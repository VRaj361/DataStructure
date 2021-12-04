#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(void)
{
    //Pointer is use to access memory indirectly
    //One of the point is to access the heap memory which is outside the program
    //Pointer is use various places like in internal structure of OS to access the files to access 
    //hardware components
    // Pointer use for accessing heap , accessing resources ,parameter passing
    

    //syntax
    int a=10;//normal 
    int *b=&a;//address variable it's also taking memory 8 bytes for 64 bit computer
    //int *b;
    //b=&a; //another syntax

    cout<<a<<endl<<*b<<endl<<b<<endl<<&a<<endl<<&b<<endl;
    //here b are storing the address of a 


    //in c language
    //pointer will use to declare heap memory 
    //int *p;
    //p=(int *)malloc(5*sizeof(int));
    //pointer(p)=(return type pointer(int *))malloc(howmany variables(5)*howmany int takes in memory(sizeof(int)))
    //it is allocate the size in heap

    //in cpp the syntax is simple
    int *p=new int[5];
    cout<<*p<<endl;//return the heap array address

    //when you declare the heap memory must be delete and free it
    delete []p;//for cpp language
    free(p);//for c language

    //Create a array

    int arr[]={1,2,3,4,5};
    int *point;
    point=arr;//you will store whole array in pointer

    for(int i=0;i<5;i++){
        cout<<point[i]<<endl;
    }

    //Create a array in heap c language

    int *po;
    po=(int *)malloc(5*(sizeof(int)));//allocate the memory in heap
    po[0]=12;
    po[1]=13;
    po[2]=14;
    po[3]=15;
    po[4]=16;
    cout<<po[0]<<endl<<po[4]<<endl;

    //create the array in heap cpp
    int *poi;
    poi=new int[5];
    poi[0]=12;
    poi[1]=13;
    poi[2]=14;
    poi[3]=15;
    poi[4]=16;
    cout<<poi[0]<<endl<<poi[1]<<endl;

    //taking size example
    char *p1;
    int *p2;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    //if you create structure and anything it will take 8 byte or 4 byte 
    //compiler can decide it to take memory of pointer

    return 0;
}
