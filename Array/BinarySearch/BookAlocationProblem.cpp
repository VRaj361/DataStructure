#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m,int mid){
    int sum=0;
    int student=1;

    for(int i=0;i<n;i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
    
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    //find max element
    int e=0;
    for(int i=0;i<n;i++){
        e+=arr[i];
    }
    int s=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return s;
}
int main() {
    vector<int> arr{10,20,30,40};

    cout<<allocateBooks(arr,4,2)<<endl;
}