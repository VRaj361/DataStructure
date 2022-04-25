#include<iostream>
using namespace std;
bool check(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]==str[j]){
        i++;
        j--;
    }else{
        return false;
    }
    return check(str,i,j);
}
int main(){
    string str="abbc";
    cout<<check(str,0,3);

}