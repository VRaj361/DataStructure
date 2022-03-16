#include <iostream>
using namespace std;

int power(int b,int p){
    if(b==0){
        return 0;
    }
    if(p==0){
        return 1;
    }
    return power(b,p-1)*b;
}

int powerB(int b,int p){
    if(b==0){
        return 0;
    }
    if(p==0){
        return 1;
    }
    if(p%2==0){
        return powerB(b*b,p/2); 
    }else {
        return b*powerB(b*b,(p-1)/2);
    }
}//this is effcient method to solve the question of power because it reduce the number of steps behind it

int main(void)
{
    int val=power(9,4);
    cout<<val<<endl;
    int val1=powerB(9,4);
    cout<<val1<<endl;
    return 0;
}