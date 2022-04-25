#include<iostream>
using namespace std;
int countZero(int n,int c){
    // cout<<n<<" "<<c;
    if(n==0){
        return c;
    }
    if(n%10==0){
        return countZero(n/10,++c);
    }else{
        return countZero(n/10,c);
    }
    
}
int main(){
    cout<<countZero(50000,0);
}
