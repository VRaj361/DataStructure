#include<iostream>
using namespace std;
int tilesfloor(int n,int m){
    if(n==m){
        return 2;
    }
    if(n<m){
        return 1;
    }
    int verticle=tilesfloor(n-m,m);
    int horizontal=tilesfloor(n-1,m);
    return verticle+horizontal;
}
int main(){
    cout<<tilesfloor(4,2);
}