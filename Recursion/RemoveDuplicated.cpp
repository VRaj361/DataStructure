#include<iostream>
using namespace std;
string removeDuplication(string str,string str1,int *arr){
    if(str.length()==0){
        return str1;
    }
    char c=str.at(0);
    if(arr[c-97]==0){
        arr[c-97]=1;
        return removeDuplication(str.substr(1),str1+c,arr);
    }else{
        return removeDuplication(str.substr(1),str1,arr);
    }
}
int main(){
    int arr[26]={0};
    cout<<removeDuplication("aaxbbcacdbx","",arr);
}