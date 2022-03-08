#include<iostream>
#include<math.h>
// #include<bits/stdc++.h>//for all external files
using namespace std;
int main(){
    //after 10 value it will consider as alphabets
    int ans=0;
    string n="1CF";
    int mul=1;
    int s=n.size();//we use size of string to collect the character of string
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=mul*(n[i]-'0');
        }
        if(n[i]>='A' && n[i] <='F'){
            ans+=mul*(n[i]-'A'+10);
        }
        mul*=16;
    }
    cout<<ans<<endl;
    
}