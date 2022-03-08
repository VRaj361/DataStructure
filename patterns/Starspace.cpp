#include <iostream>
using namespace std;

int main(void)
{

    //without taking third variable using only i and j
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int sp=n-i;
        while(sp){
            cout<<" ";
            sp=sp-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;

    }

    for(int i=0;i<=15;i+=2){
        cout<<i<<endl;
        if(i&1){
            continue;
        }
        i++;
    }

    return 0;
}
