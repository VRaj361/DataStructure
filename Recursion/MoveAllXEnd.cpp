#include<iostream>
using namespace std;
string printString(string str,int c,string str1){
    if(str.length()==0){
        for(int i=0;i<c;i++){
            str1+='x';
        }
        return str1;
    }
    if(str[0]=='x'){
        return printString(str.substr(1),c+1,str1);
    }else{
        return printString(str.substr(1),c,str1+str.at(0));
    }
    
}
int main(){
    cout<<printString("abxbfadbxbabfadxdxbxxbafdac",0,"");
}