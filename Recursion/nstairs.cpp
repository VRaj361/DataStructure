#include <iostream>
using namespace std;
//count the no of steps which are climb to stair a person climb 1 or 2 cidi at a time
int nstair(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return nstair(n-1)+nstair(n-2);
}
int main(void)
{
    int val=nstair(4);
    // {{1,1,1,1},{2,2},{1,1,2},{2,1,1},{1,2,1}}
    cout<<val<<endl;
    return 0;
}
