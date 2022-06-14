#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void length(char *n){
    int count=0;
    for(int i=0;i<n[i]!='\0';i++){
        count++;
    }
    cout<<count<<endl;

}//finding the length
//chaning the character is base on ascii code you can add or subtract 32 in the ascii code to get the result for capital to small and small to capital 
//count vowel
//count total words using spaces -> you can check the condition for spaces that previous element is not space
//validate the string
//reverse string
void reverse(char *n){
    char *n1;
    int i;
    for(i=0;i<n[i]!='\0';i++){
        
    }   
    cout<<i<<endl;
    i=i-1;
    int j;
    for(j=0;i>=0;i--,j++){
        n1[j]=n[i];
    } 
    n1[j]='\0';
    cout<<n1<<endl;
}

int main(void)
{
    char a[5];//it is way to initialize it 
    char b[7]={'a','b','c','d','e',' ','r'};//another way
    char c[]={65,66,67,68,69};
    cout<<b<<endl;
    cout<<c<<endl;
    char d[]="vraj";//cpp will add the null or string termination
    cout<<d<<endl;
    char e[7]={'a','b','c','d','e','\0','r'};//another way
    cout<<e<<endl;
    // gets(e);
    // printf("%s",e);

    char *n="vraj patel";
    // length(n);
    // cout<<n<<endl;

    reverse(n);
    return 0;
}
