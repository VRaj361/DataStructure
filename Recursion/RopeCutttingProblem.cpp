#include<iostream>
#include<math.h>
using namespace std;
int rope(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int val1=rope(n-a,a,b,c);
    int val2=rope(n-b,a,b,c);
    int val3=rope(n-c,a,b,c);
    int val=max(max(val1,val2),val3);
    cout<<val<<endl;
    if(val==-1){
        return -1;
    }
    return val+1;
    
}
int main(){
    // cout<<rope(23,11,9,12);
    cout<<rope(9,2,2,2);
    
}