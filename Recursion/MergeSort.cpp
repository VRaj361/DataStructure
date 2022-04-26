#include<iostream>
using namespace std;

void merge(int *arr,int s,int mid,int e){
    int n1 = mid-s+1;
    int n2= e-mid;

    int *a1=new int[n1];
    int *a2=new int[n2];
     
    //int k=s;
    for(int i=0;i<n1;i++){
        a1[i]=arr[i+s];
    }
    // k=mid+1;
    for(int i=0;i<n2;i++){
        a2[i]=arr[mid+1+i];//k++
    }

    int i=0;
    int j=0;
    int k=s;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]){
            arr[k++]=a1[i++];
        }else{
            arr[k++]=a2[j++];
        }
    }
    while(i<n1){
        arr[k++]=a1[i++];
    }
    while(j<n2){
        arr[k++]=a2[j++];
    }
}
void mergeSort(int *arr,int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);

        merge(arr,s,mid,e);
    }
}
int main(){
    int arr[]={3,7,0,1,9,12,34,11,21,12,12,34,7,4,0,87};
    mergeSort(arr,0,16);
    for(int i=0;i<16;i++){
        cout<<arr[i]<<" ";
    }
}