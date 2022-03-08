#include <iostream>
using namespace std;

//e^x=1+x+x^2/2+....n
double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p*=x;
        f*=n;
        return r+(p/f);
    }

}


double e1(int x,int n){
    static double s;
    if(n==0){
        return s;
    }
    s=1+x*s/n;
    return e1(x,n-1);
}

int main(void)
{
    double val=e(1,10);
    cout<<val<<endl;

    //second method
    double val1=e1(1,10);
    cout<<val1<<endl;

    //doing loop also
    int x=1,n=10;
    double s=1;
    for(;n>0;n--){
        s=1+x*s/n;
    }
    cout<<s<<endl;
    return 0;
}
