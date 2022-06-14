#include <iostream>
using namespace std;
int pascaltringle(int n,int r){
    if(n==r||r==0){
        return 1;
    }
    return pascaltringle(n-1,r-1)+pascaltringle(n-1,r);
}
int main(void)
{
    int val=pascaltringle(4,2);//4*3/2
    cout<<val<<endl;
    return 0;
}
