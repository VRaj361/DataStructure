#include <iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bre;
};

int main(void)
{

    //if a structure is exist how we can point the structure
    //point to Structure

    struct Rectangle r{10,5};
    struct Rectangle *p=&r;
    //point to the structure
    //() will be compulsory because of precedence
    (*p).len=20;//changes will happen
    cout<<(*p).len+10<<endl;//adding the value
    cout<<r.len<<endl;

    //to simple line
    p->len=30;
    cout<<p->len<<endl;
    cout<<r.len<<endl;


    //the Structure obj created in heap so use malloc function and cast it after use using pointer
    
    struct Rectangle *p1;
    // p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));//c language
    p1=new Rectangle;
    p1->len=40;
    cout<<p1->len<<endl;//created in heap 
    cout<<r.len<<endl;


    return 0;
}
