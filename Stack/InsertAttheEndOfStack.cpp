#include<iostream>
#include<stack>
using namespace std;
void insertBottom(stack<int>& s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}//check empty condition and at that time insert the x 
	int ele=s.top();
	s.pop();
	insertBottom(s,x);//calling function itself
	s.push(ele);//at the end element push into stack
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
	insertBottom(myStack,x);    
	return myStack;
}
int main(){
    stack<int> s;
    s.push(6);
    s.push(2);
    s.push(4);
    s.push(9);
    s.push(3);
    s=pushAtBottom(s,5);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}