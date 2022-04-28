#include<iostream>
#include<string>
using namespace std;
//hello-> hel*lo
string  pairStar(string str,string str1){
    if(str.length()==1){
        str1=str1+str.at(0);
        
        return str1;
    }

    if(str.at(0)==str.at(1)){
        str1=str1+str.at(0)+'*';
        return pairStar(str.substr(1),str1);
    }
    return pairStar(str.substr(1),str1);
}
string pairStar1(string str){
    if(str.length()==1){
        return str;
    }
    char c;
    
    if(str.at(0)==str.at(1)){
        c='*';
    }
    string s=pairStar1(str.substr(1));
    s=c+s;
    return str.at(0)+s;
}
int main(){
    
    cout<<pairStar("aaa","")<<endl;
    cout<<pairStar1("aaa");
    

}