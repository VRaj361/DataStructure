#include<iostream>
using namespace std;
void selection(int *arr,int r,int c,int max){
    if(r==0){
        return ;
    }
    if(c<r){
        if(arr[max]<arr[c]){
            selection(arr,r,c+1,c);
        }else{
            selection(arr,r,c+1,max);
        }
    }else{
        swap(arr[max],arr[r-1]);
        selection(arr,r-1,0,0);
    }
}
int main(){
    int arr[]={4,3,2,1,5};
    selection(arr,4,0,0);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}