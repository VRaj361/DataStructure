#include <iostream>
using namespace std;
int sumarray(int arr[],int s){
    if(s==0){
        return 0;
    }
    if(s==1){
        return arr[0];
    }

    int sum=arr[0]+sumarray(arr+1,s-1);


    

}
int main(void)
{
    int arr[]={1,2,3,4,5};
    int val=sumarray(arr,5);
    cout<<val<<endl;
    return 0;
}
