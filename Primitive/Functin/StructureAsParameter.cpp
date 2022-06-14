#include <iostream>
using namespace std;
struct Rec{
    int len;
    int bre;
}s{4,5};

struct arr{
    int a[4]={1,2,3,4};
}a;

void changeArr(struct arr &a1){
    a1.a[0]=5;
}
int area(struct Rec r1){
    r1.len=10;
    r1.bre=11;
    return r1.len*r1.bre;
}//call by value

int area1(struct Rec &r1){
    r1.len=10;
    r1.bre=11;
    return r1.len*r1.bre;
}//call by reference

void changeLen(struct Rec *r2){
    r2->len=12;
}
int main(void)
{
    //Call by value
    cout<<area(s)<<endl;
    cout<<s.bre<<endl;

    //call by reference
    cout<<area1(s)<<endl;
    cout<<s.bre<<endl;//change the value of breath in structure
    
    //change the length using call by address
    changeLen(&s);
    cout<<s.len<<endl;
    
    //Because if we can change the value of array then use call by address 

    changeArr(a);
    for(auto x:a.a){
        cout<<x<<endl;
    }


    return 0;
}
 