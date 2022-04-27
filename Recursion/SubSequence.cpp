#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string str,string s,int index,vector<string>& ans){
	if(index>=str.length()){
		if(s.length()>0){ 
			ans.push_back(s);//do not consider empty space in subsequence
		}
		return;
	}	
	//exclude 
	solve(str,s,index+1,ans);
	//include
	char a=str[index];
	s.push_back(a);
	solve(str,s,index+1,ans);
}
vector<string> subsequences(string str){
	vector<string> ans;
	string s="";
	int index=0;
	solve(str,s,index,ans);
	return ans;
}

void substring(string str,string str1){
	if(str.length()==0){
		cout<<str1<<endl;
		return;
	}
	//include 
	char c=str[0];
	substring(str.substr(1),str1+c);
	//exclude
	substring(str.substr(1),str1);
}

int main(){
    vector<string> ans;
    ans=subsequences("abc");
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
	cout<<endl<<endl;
	//second method where we can print the string directly
	substring("abc","");


}