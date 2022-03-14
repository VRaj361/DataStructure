#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={0,0,1,1,2,2,2,2};
    int n=8;
    int k=2;

    pair<int,int> p;
    int s=0,e=arr.size()-1;
    int mid1=s+(e-s)/2;
    int s1=0,e1=arr.size()-1;
    int mid2=s1+(e1-s1)/2;
    int ans1=-1;
    int ans2=-1;
    
    while(s<=e){
        //equal condition
        if(k==arr[mid1]){
            //first occurance
            ans1=mid1;
            e=mid1-1;
        }else if(k>arr[mid1]){
            s=mid1+1;
        }else{
            e=mid1-1;
        }
        
        mid1=s+(e-s)/2;//update the mid
    }
    
    while(s1<=e1){
        //equal condition
        if(k==arr[mid2]){
            //last occurance
            ans2=mid2;
            s1=mid2+1;
        }else if(k>arr[mid2]){
            s1=mid2+1;
        }else{
            e1=mid2-1;
        }
        
        mid2=s1+(e1-s1)/2;//update the mid
    }
    p.first=ans1;
    p.second=ans2;
    cout<<"First Occurance "<<p.first<<endl;
    cout<<"Last Occurance "<<p.second<<endl;


}