#include<iostream>
using namespace std;

long long int squareRoot(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int square=-1;
    while(s<=e){
        long long int ans=mid*mid;
        if(ans==n){
            return mid;
        }
        if(ans>n){
            e=mid-1;
        }else{
            square=mid;
            s=mid+1;
            
        }
        mid=s+(e-s)/2;
    }//end of while loop
    return square;
}
    
    
int mySqrt(int x) {
    return squareRoot(x);
}

double morePrecision(int n,int precision,int tempNum){
//n is input number in main function.precision is after decimal howmany digit required,tempNum is mysqrt num
    double ans=tempNum;
    double factor=1;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int tempNum=mySqrt(37);    
    cout<<"Square root is => "<<morePrecision(37,4,tempNum)<<endl;
    return 0;
}