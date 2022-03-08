#include <iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int linearsearch(int arr[],int n,int k){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    bool remain=linearsearch(arr+1,n-1,k);
    // cout<<remain<<endl;
    return remain;
}
int main(void)
{
    int arr[]={2,5,1,66,55,6};
    linearsearch(arr,6,1);
    return 0;
}
