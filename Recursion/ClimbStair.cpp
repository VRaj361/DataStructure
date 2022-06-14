#include<iostream>
using namespace std;
int climbStair(int n){
    if(n<0){
        return 0;
    }//you are 0th position -1,-2 stair are not availible
    if(n==0){//0 th step par se 0th step par aane ke liye 1 step lagega
        return 1;
    }
    return climbStair(n-1)+climbStair(n-2);//two choice climb one stair or two stair
}

int ClimbStair1(int n){
    //the user have to three option either it can go for 1 stair,2 stair,3 stair
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return ClimbStair1(n-1)+ClimbStair1(n-2)+ClimbStair1(n-3);
}

int main(){
    cout<<climbStair(4)<<endl;
    cout<<ClimbStair1(5);
}