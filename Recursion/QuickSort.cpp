#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex){
        
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }


    }
}

void quickSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p);
    quickSort(arr,p+1,e);
} 
int main(){
    vector<int> arr={5,4,23,2,1,0,77};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}