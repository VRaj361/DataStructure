#include<iostream>
using namespace std;
int search(int arr[],int s,int e,int tar){
    if(s>e){
        return -1;
    }

    int m=s+(e-s)/2;
    if(arr[m]==tar){
        return m;
    }

    if(arr[m]>=arr[s]){
        if(tar>=arr[s] && tar<=arr[m]){
            return search(arr,s,m-1,tar);
        }else{
            return search(arr,m+1,e,tar);
        }
    }
    if(tar>=arr[m] && tar<=arr[e]){
        return search(arr,m+1,e,tar);
    }else{
        
        return search(arr,s,m-1,tar);
    }
}
int main() {
    //81234567
    int arr[]={8,9,10,3,4,5,6,7};
    cout<<search(arr,0,8,);
}