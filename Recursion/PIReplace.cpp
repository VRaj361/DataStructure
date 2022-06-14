#include<iostream>
using namespace std;
void replaceString(string str){
    if(str.length()==0){
        return ;
    }
    if(str[0]=='p'&&str[1]=='i'){
        cout<<"3.14";
        replaceString(str.substr(2));
    }else{
        cout<<str[0];
        replaceString(str.substr(1));
    }
} 
int main(){
    string str="pipiiii";
    cout<<str<<endl;
    replaceString(str);
    // cout<<str<<endl;
}