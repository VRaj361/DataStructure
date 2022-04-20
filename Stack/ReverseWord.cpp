#include<iostream>
#include<stack>
using namespace std;
void reverseString(string s){
    stack<string> st;
    string word="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '&&i<s.length()-1){
            word+=s[i];
        }else{
            cout<<"word "<<word<<endl;
            st.push(word);
            word="";
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string str="hey, what's up? how is your day?";
    reverseString(str);
}