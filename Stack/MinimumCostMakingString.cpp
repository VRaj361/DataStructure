#include<iostream>
#include<stack>
using namespace std;
#include<stack>
int findMinimumCost(string str) {
	if(str.length()%2==1){
		return -1;
	}
  	stack<char> s;
	for(int i=0;i<str.length();i++){
		if(str[i]=='{'){
			s.push(str[i]);
		}else{
			if(!s.empty()&&s.top()=='{'){
				s.pop();
			}else{
				s.push(str[i]);
			}
		}	
	}//end of for loop
	int oc=0,cc=0;//open curly braces,close curly braces
	while(!s.empty()){
		if(s.top()=='{'){
			oc++;
		}else{
			cc++;
		}
		s.pop();
	}
 	return (oc+1)/2+(cc+1)/2;
}
int main(){
    string str="{}}{}}";
    cout<<findMinimumCost(str)<<endl;
    str="{{{{";
    cout<<findMinimumCost(str)<<endl;
    str="{{{}}";
    cout<<findMinimumCost(str)<<endl;



}