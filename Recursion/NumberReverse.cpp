#include<iostream>
#include<math.h>
using namespace std;
int reverse(int n,int ne){
    if(n==0){
        return ne;
    } 
    int num=n%10;
    ne=ne*10+num;
    return reverse(n/10,ne);

}
int helper(int n){//you can derived digits using log method 
    int d=(int)log10(n)+1;
    if(n==0){
        return 0;
    }
    
  
    
    return ((n%10*pow(10,d-1))+helper(n/10));
}


int main(){
    cout<<reverse(1234,0)<<endl;
    cout<<(int)log10(1234)+1<<endl;

    cout<<helper(6735);//above thing
}