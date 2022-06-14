#include<iostream>
#include<unordered_set>
using namespace std;
void substring(string str,string str1,unordered_set<string>& s){
	if(str.length()==0){
        s.insert(str1);
		return;
	}
	//include 
	char c=str[0];
	substring(str.substr(1),str1+c,s);
	//exclude
	substring(str.substr(1),str1,s);
}
int main(){
    unordered_set<string> s;
	substring("aaa","",s);
    for(auto x:s){
        cout<<x<<endl;
    }
}