#include<iostream>
using namespace std;

int sumElement(int arr[],int val,int s){
    if(s==0){
        return val;
    }
    
    return sumElement(arr+1,val+arr[0],s-1);

}
int sumElement1(int *arr,int s){
    if(s==0){
        return 0;
    }
    if(s==1){
        return arr[0];
    }

    int sum = arr[0] + sumElement1(arr+1,s-1);
    return sum;
}
int main(){
    int arr[]={3,1,6,2,7,2};
    cout<<sumElement(arr,0,6)<<endl;
    cout<<sumElement1(arr,6);
}