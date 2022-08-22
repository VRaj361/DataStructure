#include<iostream>
using namespace std;
int pairSinglePair(int n){
    if(n<=1){
        return 1;
    }
    //single or pair
    return pairSinglePair(n-1)+(n-1)*pairSinglePair(n-2);//single or 
}
int main() {
    int n=3;
    cout<<pairSinglePair(n)<<endl;
}