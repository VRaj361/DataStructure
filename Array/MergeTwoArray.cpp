#include<iostream>
using namespace std;

void MergeArray(int arr1[],int arr2[],int n,int m){
    int arr3[n+m];
    int i=0,j=0,k=0;
    while(i<=n&&j<=m){
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }else{
            arr3[k++]=arr1[i++];
        }
    }
    while(i<=n){
        arr3[k++]=arr1[i++];
    }
    while(j<=m){
        arr3[k++]=arr2[j++];
    }
    for(auto x:arr3){
        cout<<x<<" ";
    }
}

int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    MergeArray(arr1,arr2,4,4);
}