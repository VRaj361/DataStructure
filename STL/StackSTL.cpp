#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> str;
    str.push("vraj");
    str.push("patel");
    str.push("Bhai saheb");

    cout<<"element print => "<<str.top()<<endl;
    str.pop();
    cout<<"element print => "<<str.top()<<endl;


    cout<<"Size is stack => "<<str.size()<<endl;
    cout<<"IsEmpty function =>"<<str.empty()<<endl;//it contain some elements so return false

    return 0;
}