//reverse the array from given index 
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int s=m,e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}


int main(){

    vector<int> arr={63,2,7,3,2,8};
    reverseArray(arr,2);
    for(auto x:arr){
        cout<<x<<" ";
    }


    return 0;
}