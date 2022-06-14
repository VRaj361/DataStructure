#include<iostream>
#include<conio.h>

using namespace std;
//don't write to std::cout all time
int main(){
    //pattern which contain only border not inner part
    
    //first of all first line and last line print all the stars 
    //now between first and last line we will consider the first and last position of the line which prints star 
    
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1){
                cout<<"*";
            }else{
                if(j==0||j==n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }

    return 0;
}