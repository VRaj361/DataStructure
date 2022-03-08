#include <iostream>
using namespace std;

int sumn(int n){
    if(n==0){
        return 0;
    }else{
        return sumn(n-1)+n;
    }
}


int main(void)
{
//we have to solve this question using three types 
//1) formula
//2) for loop
//3) recursion

    int val=sumn(5);
    cout<<"val is "<<val<<endl;

    
    return 0;
}

