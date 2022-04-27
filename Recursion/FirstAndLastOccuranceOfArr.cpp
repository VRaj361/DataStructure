#include<iostream>
using namespace std;
int firstLastOccurance(int arr[],int n,int i,int key){
    if(n==i){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstLastOccurance(arr,n,i+1,key);
}
int lastFirstOccurance(int arr[],int n,int i,int key){
    if(n==i){
        return -1;
    }
    int index=lastFirstOccurance(arr,n,i+1,key);
    if(index!=-1){
        return index;
    }
    
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,2};
    cout<<firstLastOccurance(arr,5,0,2)<<endl;
    cout<<lastFirstOccurance(arr,5,0,2);
}