#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<int> &arr){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;//because j index in lowest element index;
    }
}
int main(){
    vector<int> arr={4,3,2,1};
    insertionSort(4,arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}