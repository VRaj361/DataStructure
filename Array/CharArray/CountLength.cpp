#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    //character array is a string when we can store all index in array
    //in char array the last element of string is null character for termination of the array
    char arr[20];
    cout<<"Enter String"<<endl;
    cin>>arr;

    cout<<"Your string is "<<arr<<endl; 
    //if we give space then it will put null character in place of tab,space,enter


    //length
    cout<<"The length of this string is "<<getLength(arr)<<endl;

    return 0;
}