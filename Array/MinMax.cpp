#include<iostream>
using namespace std;
int main() {
    int arr[5]={111,221,12,423,122};
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"min => "<<min<<" max => "<<max;
}