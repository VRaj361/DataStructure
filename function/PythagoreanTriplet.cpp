#include<iostream>
#include<math.h>
using namespace std;

void checkTriplet(int x,int y,int z){
    int b,c;

    int maxv=max(x,max(y,z));
    if(maxv==x){
        b=y;
        c=z;
    }else if(maxv==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }
    if(pow(maxv,2)==(pow(b,2)+pow(c,2))){
        cout<<"Triplet"<<endl;
    }else{
        cout<<"no"<<endl;
    }

}

int main(){
    int x,y,z;
    cout<<"Enter x,y,z"<<endl;
    cin>>x>>y>>z;
    checkTriplet(x,y,z);
    return 0;
}