#include <iostream>
using namespace std;

int func(int n){
    static int i=5;
    if(n>0){
        return func(n-1)+i;
    }
}
int main(void)
{
    int val=func(5);
    cout<<val<<endl;
    return 0;
}
