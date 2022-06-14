#include<iostream>
#include<string>
using namespace std;

string add(string a,string b){
    string r="";
    int sa=a.size()-1;
    int sb=b.size()-1;
    int temp=0;
    while(sa>=0||sb>=0||temp==1){//temp 1 means all the operation are conmplete but carry are there

        temp+=((sa>=0)?a[sa]-'0':0);
        temp+=((sb>=0)?b[sb]-'0':0);
        r=char(temp%2+'0')+r;
        temp/=2;
        sa--;
        sb--;
    }
    return r;
}


int main(){
    string a="10101",b="11100";
    cout<<add(a,b)<<endl;
    return 0;
}