#include<iostream>
using namespace std;

int search(int *arr,int tar,int s,int e){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[s]<arr[mid]){
        if(tar>=arr[s]&&tar<=arr[mid]){
            return search(arr,tar,s,mid-1);
        }else{
            return search(arr,tar,mid+1,e);
        }
    }
    if(arr[mid]>=tar&&arr[e]<=tar){
        return search(arr,tar,mid+1,e);
    }
}
int main(){
    int arr[]={5,6,7,8,9,1,2,3};
    cout<<search(arr,8,0,8);
}
