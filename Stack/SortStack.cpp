#include<iostream>
#include<stack>
using namespace std;
void sort1(stack<int> &s,int n){
	if(s.empty()||(!s.empty()&&s.top()<n)){
		s.push(n);
		return;
	}	
	int num=s.top();
	s.pop();
	sort1(s,n);
	s.push(num);
}
void sortStack(stack<int> &s)
{
	//firstly take element a side
	//base condition
	if(s.empty()){
		return;
	}
	int num=s.top();
	s.pop();
	sortStack(s);
	sort1(s,num);
}
int main(){
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}