#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
        
    }
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
    int n=getLength(arr);
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}