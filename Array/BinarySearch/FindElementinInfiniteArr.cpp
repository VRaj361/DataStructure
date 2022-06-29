#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr,int tar,int s,int e){
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>tar){
            e=m-1;
        }else if (arr[m]<tar){
            s=m+1;
        }else{
            return m;
        }
    }
    return -1;
}

int ansq(vector<int> arr,int tar){
    int s=0;
    int e=1;
    
    while(tar>arr[e]){
        int temp=e+1;
        e=e+(e-s+1)*2;
        s=temp;
    }
    
    return binarySearch(arr,tar,s,e);
}
int main() {
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(90);
    arr.push_back(100);
    arr.push_back(130);
    arr.push_back(140);
    arr.push_back(160);
    arr.push_back(170);
    cout<<ansq(arr,90);
}