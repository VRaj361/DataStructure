#include <iostream>
using namespace std;
//saydigit 40-> output will be four zero
void saydigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int val=n%10;
    
    saydigit(n/10,arr);
    cout<<arr[val];


}
int main(void)
{
    //using recursion
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(40,arr);
    return 0;
}
