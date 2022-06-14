#include <iostream>
using namespace std;

int power(int b,int p){
    if(b==0){
        return 0;
    }
    if(p==0){
        return 1;
    }
    return power(b,p-1)*b;//stack size n
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

int powerC(int n,int p){
    if(n==0){
        return 0;
    }
    if(p==0){
        return 1;
    }
    if(p%2==0){
        return powerC(n,p/2)*powerC(n,p/2);
    }else{
        return n*powerC(n,p/2)*powerC(n,p/2);//stack size logn
    }
}


int main(void)
{
    int val=power(9,4);
    cout<<val<<endl;
    int val1=powerB(9,4);
    cout<<val1<<endl;
    int val2=powerC(9,4);
    cout<<val2<<endl;
    return 0;
}
