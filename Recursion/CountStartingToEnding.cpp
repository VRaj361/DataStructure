#include<iostream>
using namespace std;
//snake and dice game starting and ending position 
//1 to 4 then we have to show the count of all the posible solution
int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for (int i = 1; i <= 6; i++)
    {
        count+=countPath(s+i,e);
    }
    
    return count;
}
int main(){
    cout<<countPath(0,3);   
}