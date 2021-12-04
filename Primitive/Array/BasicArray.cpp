#include <iostream>
using namespace std;

int main(void)
{

    //Array is the abstract data type (ADT which hide the internal work only show outer work)
    //Array is Primitive  data type
    //Array store continues memory location and take only one data types at a time
    //Array is the initialise that square brackets and give the argument to size 
    //Array store in stack when it declare in main function

    //initialize this way
    int arr[5];
   //shows the garbage value when you print


    //if you don't take scanning value that  initialize this way also
    int arr1[]={1,2,34};
    cout<<arr1[1]<<endl;
 
    //to print the value
    for(int i=0;i<3;i++){
        cout<<arr1[i]<<endl;
    }

    //to print the value of foreach loop
    for(int x:arr1){
        cout<<x<<endl;
    }

    //if you doesn't care about the data type
    for(auto x:arr1){
        cout<<x<<endl;
    }

    return 0;
}
