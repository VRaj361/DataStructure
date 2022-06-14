#include<iostream>
#include<stack>
#define n 5
using namespace std;



void insertBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int top=st.top();
    st.pop();
    insertBottom(st,ele);
    st.push(top);
}//removed element can store in that particular stack

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    // insertBottom(st,top);
    st.push(top);//all the element firstly store in one variable and after we can put the element in the stack
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(3);
    
    reverse(s);
    
    //stack size
    cout<<"Stack size "<<s.size()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}