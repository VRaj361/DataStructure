// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int &val, bool &isSort) {
    if(st.empty()) {
        st.push(val);
        return;
    }
    
    if(isSort && st.top() >= val) {
        st.push(val);
        return;
    }
    
    int temp = st.top();
    st.pop();
    
    insertAtBottom(st, val, isSort);
    
    st.push(temp);
}

void sortStack(stack<int> &st){
    if(st.size() == 0){
        return ;
    }
    
    int temp = st.top();
    st.pop();
    
    sortStack(st);
    bool isSort = true;
    insertAtBottom(st, temp, isSort);
}

void reverseStack(stack<int> &st){
    if(st.size() == 0){
        return ;
    }
    
    int temp = st.top();
    st.pop();
    
    reverseStack(st);
    bool isSort = false;
    insertAtBottom(st, temp, isSort);
}

int main() {
    stack<int> st;
    st.push(11);
    st.push(40);
    st.push(113);
    st.push(20);
    st.push(112);
    st.push(11);
    st.push(1131);
    
    // Insert at bottom
    // int temp = st.top();
    // st.pop();
    // insertAtBottom(st,temp);
    
    // Sort Stack
    // sortStack(st);

    //reverse Stack
    reverseStack(st);
    
    while(!st.empty()) {
        cout<<st.top() <<" ";
        st.pop();
    }
    return 0;
}