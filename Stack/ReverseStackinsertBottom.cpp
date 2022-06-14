#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int> &s,int num){
	if(s.empty()){
		s.push(num);
		return;
	}
	int ele=s.top();
	s.pop();
	insertBottom(s,num);
	s.push(ele);
}

void reverseStack(stack<int> &s) {
    // Write your code here
	if(s.empty()){
		return;
	}
	int ele=s.top();
	s.pop();
	reverseStack(s);
	insertBottom(s,ele);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(3);
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}   