#include <iostream>
using namespace std;

void reverse(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    cout<<"this is "<<arr;
}//reverse array


int getLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }//for loop
    return count;
}//return the length of string
int main(void)
{
    char arr[10];
    cout<<"enter the name "<<endl;
    cin>>arr;
    //vraj -> vraj is store in array 
    // cout<<"The string is "<<arr[6];
    //vraj patel -> only store vraj and after store null '\0' so it is consider null after character store garbage value
    int len=getLength(arr);
    cout<<len;
    reverse(arr,len); 
    return 0;
}
