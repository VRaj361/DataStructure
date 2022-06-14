#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,0,1,-3,1,1,1,-3,10,0};
    int arr1[5];
    int c=0;
    for(int i=0;i<9;i++){
        int count=0;
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                
                count++;
                arr[j]=0;
            }
        }
        arr1[c]=count;
        c++;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    // int ans;
    // for(int i=0;i<5;i++){
    //     ans^=arr[i];
    // }
    // for(int i=1;i<5;i++){
    //     ans^=i;
    // }
    


    return 0;
}