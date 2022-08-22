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
void firstLast(int arr[],int tar,int i,int first,int last,int n){
    if(n==i){
        cout<<endl<<first<<" "<<last<<endl;
        return;
    }
    if(tar==arr[i]){
        if(first==-1){
            first=i;
            last=i;
        }else{
            last=i;
        }
    }
    firstLast(arr,tar,i+1,first,last,n);
}
int main(){
    int arr[]={1,2,3,4,2};
    cout<<firstLastOccurance(arr,5,0,2)<<endl;
    cout<<lastFirstOccurance(arr,5,0,2);
    int first=-1;
    int last=-1;
    firstLast(arr,2,0,first,last,5);
    
}