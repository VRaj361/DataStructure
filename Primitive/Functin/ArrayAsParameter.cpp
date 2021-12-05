#include <iostream>
using namespace std;
void printArr(int *arr){
    arr[1]=4;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    //both are same if you can use pointer or arr[] 
}//this array is his own copy

int main(void)
{

    //in parameter we will only use address in array so we will pass pointer and in function 
    //it is pointer to an array

    int arr[]={1,2,3,4,5};
    printArr(arr);
    return 0;
}
