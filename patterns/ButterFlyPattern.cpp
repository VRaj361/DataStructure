#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n=4;
    /*
        *      *
        **    **
        ***  ***
        ********
        ********
        ***  ***
        **    **
        *      *
    */

    
    //we can manage the space using 2*number-2*row
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<(2*n)-(2*i);k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<"*";
        }
        for(int k=(2*(i-1));k>0;k--){
            cout<<" ";
        }
        for(int j=n-i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}