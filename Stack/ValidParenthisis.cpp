#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string str)
{
	stack<char> s;
    for(int i=0;i<str.size();i++){
		if(str[i]=='{'||str[i]=='['||str[i]=='('){
			s.push(str[i]);
		}else{
			if(!s.empty()){
				char c=s.top();
                if((str[i]==')'&&c=='(')||(str[i]==']'&&c=='[')||(str[i]=='}'&&c=='{')){
                    s.pop();
                }
                else{
				    return false;
			    }
			}
            else{
				return false;
			}
		}
	}
    
	if(s.empty()){
		return true;
	}else{
		return false;
	}
}
int main(){
    cout<<isValidParenthesis("{}");

}