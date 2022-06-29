#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
    int s=0;
    int e=5;
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;        
        s++;
        e--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i];
    }
    
       
}