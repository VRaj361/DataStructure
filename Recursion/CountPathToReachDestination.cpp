#include<iostream>
using namespace std;
int path(int i,int j,int n,int m){
    if(i==n||j==m){
        return 0;
    }
    if(i==n-1&&j==m-1){
        return 1;
    }
    int down=path(i+1,j,n,m);
    int right=path(i,j+1,n,m);
    return down+right;
}
//n and m value of matrix and how many way to react the destination
//you can only move right and down 
int main(){
    cout<<path(0,0,3,3);
}
