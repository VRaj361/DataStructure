#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max_heap
    priority_queue<int> p;


    //min heap
    priority_queue<int,vector<int>,greater<int>> m;

    p.push(1);
    p.push(2);
    p.push(3);

    m.push(1);
    m.push(2);
    m.push(3);

    int s=p.size();//change the size
    int s1=m.size();//change the size
    for(int i=0;i<s;i++){
        cout<<p.top()<<" ";
        p.pop(); 
    }
    for(int i=0;i<s1;i++){
        cout<<m.top()<<" ";
        m.pop(); 
    }
    
    cout<<"isEmpty function "<<m.empty()<<endl;
    return 0;
}