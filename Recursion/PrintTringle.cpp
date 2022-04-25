#include<iostream>
using namespace std;
void tringle(int r,int c){
    if(r==0){
        return ;
    }
    if(c<r){
        cout<<"* ";
        tringle(r,c+1);
    }else{
        cout<<endl;
        tringle(r-1,0);
    }
}
int main(){
    tringle(4,0);
}