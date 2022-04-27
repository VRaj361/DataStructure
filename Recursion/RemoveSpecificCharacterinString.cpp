#include<iostream>
#include<string>
using namespace std;
void solve(string& str,int i,char c,string& ans){ 
    if(i>=str.length()){
        return ;
    }
    if(c==str[i]){  
        solve(str,i+1,c,ans);    
    }else{
        ans.push_back(str[i]);
        solve(str,i+1,c,ans);
    }
}
void solve1(string& str,string str1){
    if(str1.length()==1){
     
        if(str1.at(0)=='a'){
            
            return; 
        }else{
            str=str+str1.at(0);
            return;
        }
    
        
    }
    char c=str1.at(0);
    if(c=='a'){
        solve1(str,str1.substr(1));
    }else{
        str=str+c;
        solve1(str,str1.substr(1));
    }

}
string solve2(string str1){
    if(str1.empty()){
        return "";
    }
    char c=str1.at(0);
    if(c=='a'){
        return solve2(str1.substr(1));
    }else{
        
        return c+solve2(str1.substr(1));
    }

}
int main(){
    string str="abababaccdacacadffa";
    string ans="";
    solve(str,0,'a',ans);
    cout<<ans<<endl;

    string ans1="";
    solve1(ans1,str);
    cout<<ans1<<endl;

    cout<<solve2(str);

}