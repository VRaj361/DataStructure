//codestudio 30 string
//LEETCODE 125
#include<iostream>
using namespace std;
char lowercase(char c){
    char temp;
    if(c>='a'&&c<='z'){
        return c;
    }else{
        temp=c-'A'+'a';
    }
    return temp;
}
int valid(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9'){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string str)
{
    int s=0;
    int e=str.length()-1;

    while(s<=e){
        // if(str[s]==' '|| str[s]>=32&&str[s]<=47 || str[s]>=58&&str[s]<=64 || str[s]>=91&&str[s]<=96 || str[s]>=123&&str[s]<=126){
        //     s++;
        // }else if(str[e]==' '|| str[e]>=32&&str[e]<=47 || str[e]>=58&&str[e]<=64 || str[e]>=91&&str[e]<=96 || str[e]>=123&&str[e]<=126){
        //  	e--;   
        // }    
        if(!valid(str[s])){
            s++;
        }else if(!valid(str[e])){
            e--;
        } 
        else if(lowercase(str[s])==lowercase(str[e])){
            s++;
            e--;
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    string str="A1b22Ba";
    bool is_check=checkPalindrome(str);
    cout<<is_check;
    return 0;
}