#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,1};
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<"Peak Element in array "<<arr[s];


    return 0;
}