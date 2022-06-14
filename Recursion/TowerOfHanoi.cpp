#include<iostream>
using namespace std;
void towerHanoi(int n,char src,char help,char des){
    if(n==0){
        return;
    }

    //first call to shift all think to
    towerHanoi(n-1,src,des,help);
    cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<des<<endl;
    towerHanoi(n-1,help,src,des);
}
int main(){
    towerHanoi(3,'S','H','D');
}