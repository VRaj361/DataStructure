#include<iostream>
#include<string>
using namespace std;
static string str[10]={".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
void combination(string input,string com){
    if(input.length()==0){
        cout<<com<<endl;
        return;
    }
    char c=input.at(0);
    string temp=str[c-'0'];
    for(int i=0;i<temp.length();i++){
        combination(input.substr(1),com+temp.at(i));
    }
} 
int main(){
    combination("23","");
}