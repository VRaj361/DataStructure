#include <iostream>
using namespace std;

int main(void)
{

    //print the square  which are have 
    /*
        AAA
        BBB
        CCC
    */

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        char ch='A';
        while(j<n){
            cout<<char(ch+i);
            j++;
        }

        cout<<endl;
        i++;

    }


    return 0;
}
