#include <iostream>
using namespace std;
int sum(int a,int b){//This is Prototype of the Function and this is declaration of the function
    //the argument is formal parameters
    int c;//this all code is the defination of the function and ilobarations this called body
    c=a+b;
    return c;
}
int main(void)
{
    
    // -> Function is like structure but in structure it is grouping the data element and in function 
    //    there is grouping instructions
    // -> function is procedures or modules.
    // -> all line code write in main (monolithic programming) which is bad practice use functions 
    // -> using function it called procedural programming or modular programming 

    int sum1=sum(3,4);
    //the argument is actual parameters
    //generally it is called caller and function is  called calling
    cout<<sum1<<endl;

    return 0;
}
