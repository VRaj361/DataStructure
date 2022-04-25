#include<iostream>
using namespace std;
//enter digit sum

int sumDigit(int n){
    if(n==0){
        return 0;
    }
    return n+sumDigit(n-1);
}
int main(){
    cout<<"Enter number "<<endl;
    cout<<sumDigit(4);
}