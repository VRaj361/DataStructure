#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//largest minimum distance between cows
bool isPossible(vector<int> &arr, int k,int m){
    int cowCount=1;
    int pos=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-pos>=m){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            pos=arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k){
    sort(arr.begin(),arr.end());
    int s=0;
    int e=-1;
    for(int i=0;i<arr.size();i++){
        e=max(e,arr[i]);
    }
    int ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(isPossible(arr,k,m)){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;

}
int main() {
    vector<int> arr{0,3,4,7,10,9};
    cout<<aggressiveCows(arr,4)<<endl;
}