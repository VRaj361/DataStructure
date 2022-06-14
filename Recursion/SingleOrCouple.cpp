#include<iostream>
using namespace std;
//party problem when the person is come only single or couple
int party(int n){
    if(n<=1){
        return 1;
    }
    int single=party(n-1);
    int couple=(n-1)*party(n-2);
    return single+couple;
}
int main(){
    int n=4;
    cout<<party(n);
}