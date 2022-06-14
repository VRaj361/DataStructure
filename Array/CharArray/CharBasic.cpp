#include<iostream>
using namespace std;
int main(){
    //character array is a string when we can store all index in array
    //in char array the last element of string is null character for termination of the array
    char arr[20];
    cout<<"Enter String"<<endl;
    cin>>arr;

    cout<<"Your string is "<<arr<<endl; 
    //if we give space then it will put null character in place of tab,space,enter

    return 0;
}