#include <iostream>
#include<vector>
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
static vector<int> v;
void linearsearchall(int *arr,int n,int k,int s){
    
    if(s==n){
        return ;
    }
    if(arr[s]==k){
        v.push_back(s);
    }
    linearsearchall(arr,n,k,s+1);
}
int main(void)
{
    int arr[]={2,5,1,6,55,6};
    linearsearch(arr,6,1);
    linearsearchall(arr,6,6,0);
    cout<<"[";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<"]";
    return 0;
}
