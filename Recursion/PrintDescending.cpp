#include<iostream>
using namespace std;
//asending also here
void reverseOrder(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    reverseOrder(n-1);
}
void normalOrder(int n){
    if(n==0){
        return ;
    }
    normalOrder(n-1);
    cout<<n<<" ";
}
int main(){
    reverseOrder(5);
    cout<<endl;
    normalOrder(5);
}