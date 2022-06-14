#include<iostream>
using namespace std;
void printing(string str){
    if(str==""){
        return;
    }
    printing(str.substr(1));
    cout<<str.at(0);
}
void reverse(int i,int j,string &str){
    if(i>j){
        return ;

    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(i,j,str);
}
int main(){
    string str="abcde";
    printing(str);
    reverse(0,4,str);
    cout<<endl<<str;
}