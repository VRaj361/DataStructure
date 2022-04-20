#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    string str="vraj";
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty()){
        //in java we have pop() method which is return the value of poping element
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
        
    }
    cout<<"answer is "<<ans<<endl;
    
}