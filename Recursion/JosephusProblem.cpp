#include<iostream>
using namespace std;
//in this problem we have to given number of person and value which every iteration this val of position is killed so at last what number of person is left
//solution that person position starts as 0
//if the position starts as 1 then only do +1 in main recursive call
int jos(int n,int k){
    if(n==1){
        return 0;
    }
    return (jos(n-1,k)+k)%n;
}
//in every call the n should be reduce 
//5,3->4,3(because one person kill)
//relation ship of theory and recursive call are to be vary from k number so we add k in every call
//recursive call act as fresh call
//5,3 as example
//0,1,2,3,4 so 2 is killed so answer in next iteration should be 0,1,3,4 but as recursion it called as 0,1,2,3
//5,3   4,3
//3     0//next element should be as a call in recursion
//4     1
//0     2//this value is getting using modulo operator
//1     3

//2 is deleted

int main(){
    cout<<jos(5,3);
    //position starts with 1 then only can change is +1 in answer
}