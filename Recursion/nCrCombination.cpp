#include<iostream>
using namespace std;

int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
} 
int combination(int n,int r){
    
    return fact(n)/(fact(n-r)*fact(r));
}
int combination1(int n,int r){
    if(r==0||n==r){
        return 1;
    }
    return combination1(n-1,r-1)+combination1(n-1,r);
}

int main(){
    //solve using two method 
    //1)first is for every component we will find factorial 
    //2)pascal tringle

    //first method
    cout<<combination(8,2)<<endl;
    //second method
    cout<<combination1(8,2);
}