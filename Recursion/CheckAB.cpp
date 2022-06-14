#include<iostream>
using namespace std;
//check ab where string starts with a and followed with a or bb
bool checkAB(string str){
    //a -> a ,bb
    //bb-> a 
    if(str.length()==0){
        return true;
    }
    if(str.at(0)=='a'){
        
        if(str.length()>2&&str.substr(1,2)=="bb"){
            // cout<<"i "<<str.at(0)<<str.at(1);
            return checkAB(str.substr(3));
        }else{
            
            
            return checkAB(str.substr(1));
        }
    }//a it self return or bb return
    return false;
}
int main(){
    cout<<checkAB("abb");
}