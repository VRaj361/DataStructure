#include<iostream>
using namespace std;
bool checkPalindrome(string str)
{
    int s=0;
    int e=str.length()-1;

    while(s<=e){
        if((str.at(s))==(str.at(e))){
            cout<<(str.at(s))<<" "<<(str.at(e));
            s++;
            e--;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    bool is_check=checkPalindrome("c1 O$d@eeD o1c");
    cout<<is_check<<endl;
    return 0;
}