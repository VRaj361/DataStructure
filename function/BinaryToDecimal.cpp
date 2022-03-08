#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int n=101;
    int mul=1;//consider the whole 2^pow answer
    //101 in binary then 1*2^2+0*2^1+1*2^0 in decimal
    while(n>0){
        int mod=n%10;
        ans+=mod*mul;
        mul*=2;
        n/=10;
    }
    //in octal to decimal there will consider the value of mul is 1 and multiply with 8
    //in hexa decimal to decimal will consider the value of mul is 1 and multiply with 16
    cout<<ans<<endl;
    return 0;
}