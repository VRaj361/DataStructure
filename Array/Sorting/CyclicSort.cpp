#include<iostream>
using namespace std;
int main() {
    //range between 1 to n
    int arr[] ={5,4,3,2,1};
    int i = 0;
    int n = 5;
    while(i<n){
        
        if(arr[i]-1 != i){
            swap(arr[i],arr[arr[i]-1]);
        }else{
            i++;
        } 
       
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}