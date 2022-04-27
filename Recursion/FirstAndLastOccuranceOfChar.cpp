#include<iostream>
using namespace std;
void firstLastOccu(string str,int i,int j,int k){//i for first occurance and j for second occurance   

    if(str.length()==k){
        cout<<"firse Occurance is "<<i<<endl;
        cout<<"last Occurance is "<<j<<endl;
        return;
    }
    if(str[k]=='a'&&i==-1){
        firstLastOccu(str,k,j,k+1);
    }else if(str[k]=='a'){
        firstLastOccu(str,i,k,k+1);
    }else{
        firstLastOccu(str,i,j,k+1);
    }
}
int main(){
    string str="fadfaa";
    firstLastOccu(str,-1,-1,0);
}