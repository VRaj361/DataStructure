#include<iostream>
using namespace std;
//one numeric string is given we need to convert the Numeric string to character string 
static char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void convertion(string str,string s){
    if(str.length()==0){
       
        cout<<s<<endl;
        return;
    }
    char c=str.at(0)-'0';
    convertion(str.substr(1),s+arr[c-1]);
    if(str.length()>1){
        int num=(str.at(0)-'0')*10+(str.at(1)-'0');
        if(num>=10&&num<=26){
            convertion(str.substr(2),s+arr[num-1]);
        }
    }
    
    
}
int main(){
    convertion("1123","");
}