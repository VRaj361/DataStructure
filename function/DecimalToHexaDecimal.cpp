#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=-1;
    string ans="";
    while(true){
        if(n==-1){
            cout<<"ffffffff"<<endl;
            break;
        }
        if(n==0){
            cout<<"0"<<endl;
            break;
        }
        if(n>=1&&n<=9){
            cout<<n<<endl;
            break;
        }

        int mod=n%16;
        if(mod>=10&&mod<=15){ 
            char c=mod-10+'a';
            ans=c+ans;
        }
        if(mod>=0&&mod<=9){
            ans=to_string(mod)+ans;
        }
        n/=16;

    }
    cout<<ans<<endl;
    return 0;
}