#include<iostream>
using namespace std;
void swapAlter(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    cout<<"swap alternate"<<endl;
    //array element turn by turn swap
    int arr[7]={1,2,3,4,5,6,7};
    swapAlter(arr,7);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }



}