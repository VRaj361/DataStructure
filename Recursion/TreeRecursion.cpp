#include <iostream>
using namespace std;

void func(int n){
    if(n>0){
        cout<<n;
        func(n-1);
        func(n-1);
    }
}

int main(void)
{
    func(3);
    return 0;
}
