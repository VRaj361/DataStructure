#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;//slow compare to unorder set    
    s.insert(1);
    s.insert(12);
    s.insert(14);
    s.insert(2);
    s.insert(2);
    for(auto i:s){
        cout<<i<<" ";//sorted order
    }
    //erase function same as all
    
    // s.erase(s.begin+2);//notvalid
    cout<<endl;
    set<int> ::iterator it=s.begin();
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";//sorted order
    }
    
    cout<<endl;
    cout<<"present or not "<<s.count(2)<<endl;
    set<int> ::iterator it1=s.find(2);
    cout<<endl<<*it1<<endl;

}