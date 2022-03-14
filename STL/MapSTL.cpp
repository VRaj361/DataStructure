#include<iostream>
#include<map>
using namespace std;
int main(){
    
    map<int,string> m;
    m[1]="this";
    m[2]="th";
    m[3]="t";
    m[4]="th";

    for(auto i:m){
        cout<<i.first<<endl;
    }//print all element


    m.insert({5,"this taht"});
    for(auto i:m){
        cout<<i.first<<endl;
    }//print all element

    cout<<"Finding element 3-> "<<m.count(13)<<endl;

    //erase function 
    m.erase(3);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;//unorder map has O(1) use hastable
        //ordered map has O(n) use red black tree binary tree
    }//print all element


    //find method
    auto m1=m.find(3);
    for(auto i=m1;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    

    return 0;
}
