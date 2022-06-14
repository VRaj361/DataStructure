#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,2,1};
    //xor operation can solve this problem 
    //when you xor number with 0 answer should be zero
    //if you can xor number with number answer should be 0
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl; 
}