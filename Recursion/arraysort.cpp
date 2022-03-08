#include <iostream>
using namespace std;

void sortarr(int arr[],int s){
    if(s==0||s==1){
        cout<<"true"<<endl;
        return;
    }
    if(arr[0]>arr[1]){
        cout<<"false"<<endl;
        return;
    } 
    
    sortarr(arr+1,s-1);


}


int main(void)
{
    int arr[]={1,2,3,4,5};
    sortarr(arr,4);
    return 0;
}
