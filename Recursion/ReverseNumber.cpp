#include<iostream>
#include<math.h>
using namespace std;
int reverseNumber(int n){
    if(n%10==n){
        return n;
    }
    return (n%10)*(pow(10,(int)log10(n)))+reverseNumber(n/10); 
}
int main() {
    cout<<reverseNumber(1)<<endl;
}