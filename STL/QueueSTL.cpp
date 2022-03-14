#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string> q;
    q.push("vraj");
    q.push("patel");
    q.push("bhai saheb");

    cout<<"top element of Queue =>"<<q.front()<<endl;
    q.pop();
    cout<<"top element of Queue =>"<<q.front()<<endl;
    
    //size another method can be same



    return 0;
}