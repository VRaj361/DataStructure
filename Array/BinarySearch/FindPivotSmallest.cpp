#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,8,1,3};
    //1 is the answer
    int s=0,e=4;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<"Index of pivot is "<<s<<endl;
}