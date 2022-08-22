#include<iostream>
using namespace std;
int sumDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumDigits(n/10);
}
int productDigits(int n){
    if(n%10==n){
        return n;
    }
    return (n%10)*productDigits(n/10);
}
int main() {
    //sum of all digits
    cout<<sumDigits(123)<<endl;

    //product of all digits
    cout<<productDigits(1234)<<endl;

}