#include<iostream>
using namespace std;
//you have to given number and solve howmany ways to return the to achieve this number
//2 -> 2 ,11 
void dice(int num,string str){
    if(num<=0){
        cout<<str<<endl;
        return;
    }
    for(int i=1;i<=6&&i<=num;i++){
        dice(num-i,str+char(i+'0'));
    }
}

int main(){
    dice(4,"");
}