#include<iostream>
using namespace std;
int main() {
    int arr[]={7,10,4,10,6,5,2};
    int curr_leader = arr[6];//last element
    cout<<curr_leader<<" ";
    for(int i=5;i>=0;i--){
        if(curr_leader<arr[i]){
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
    
}