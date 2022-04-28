#include<iostream>
using namespace std;
int stringToInt(string s,int sum){
    if(s.length()==0){
        return sum;
    }
    sum=sum*10+s[0]-'0';
    return stringToInt(s.substr(1),sum);
}
int main(){
    cout<<stringToInt("1234",0);
}