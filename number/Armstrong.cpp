#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //1 5 3=> 1^3+5^3+3^3=>153
    int n=153;
    int sum=0;
    while(n>0){
        int mod=n%10;
        // int temp=pow(mod,3);
        // cout<<temp<<endl;
        int temp=mod*mod*mod;
        cout<<temp<<endl;
        sum+=temp;
        cout<<sum<<" ";
        n=n/10;
    }
    cout<<sum;
    return 0;
}