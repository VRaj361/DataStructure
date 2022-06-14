#include<iostream>
using namespace std;
string replaceCharacter(string str,char c,char r){
    if(str.length()==0){
        return str;
    }
    char c1;
    if(str.at(0)==c){
        c1=r;
    }else{
        c1=str.at(0);
    }
    string s=replaceCharacter(str.substr(1),c,r);
    return c1+s;
}
int main(){
    cout<<replaceCharacter("abaxv",'a','x');
}