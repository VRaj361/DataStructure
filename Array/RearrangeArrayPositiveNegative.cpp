#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0 && arr[j] >=0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]>=0){
            i++;
        }else if(arr[j]<0){
            j--;
        }
    }
}
int main() {
    int arr[7]={3,1,-2,-5,2,-4,1};
    
    rearrange(arr,7);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}