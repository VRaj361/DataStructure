#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main(){

    int n=12;
    // for(int i=2;i*i<=n;i++){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"non prime"<<endl;
            return 0;
        }
    }
    cout<<"prime number";

    return 0;
}