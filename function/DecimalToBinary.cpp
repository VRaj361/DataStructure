#include<iostream>
#include<string>
using namespace std;
int main(){

    //10
    /*

        10/2=>0 5
         5/2=>1 2
         2/2=>0 1
         1/2=>1

         10=>1010

    */
    int n=16;
    string ans="";
    while(true){
        if(n==0){
            cout<<"0"<<endl;
            break;
        }
        if(n==1){
            ans=to_string(n)+ans;
            break;
        }
        int mod=n%2;
        ans=(to_string(mod))+ans;
        cout<<ans<<endl;
        n/=2;
        
    }
    cout<<ans<<endl;


    return 0;
}