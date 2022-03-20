//codestudio string 20
#include<iostream>
using namespace std;
void replaceSpaces(string &str){
	// Write your code here.
    //inplace sorting 
    int i=0;
    int len=str.length();
    while(i!=len){
        if(str[i]==' '){
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }else{
            str.push_back(str[i]);
        }
        i++;
    }
    for(int i=0;i<len;i++){
        str[i]='\0';
    }
    
    
}
int main(){
    string str="coding ninja is the plateform for coding";
    replaceSpaces(str);
    cout<<endl;
    cout<<str<<endl;

    return 0;
}