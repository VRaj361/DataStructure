#include<iostream>
#include "Basic1.cpp"
using namespace std;
class Hello{//class
    //properties
    private://by default
    int a;


    public:
    int a1=10;
    
    Hello(){
        cout<<"Constuctor is called "<<endl;//first constructor is called because first object can load 
    }
    //getter and setter
    void setValue(int a){
        //value of this and address of setvalue call in main function both will be same pointing to same address
        
        this->a=a;
    }
    int getValue(){
        return a;
    }
};
int main(){
    Hello h1;//this will create a instance of the class
    cout<<h1.a1<<endl;//access properties using dot operator

    h1.setValue(12);
    cout<<h1.getValue()<<endl;

    //size of class object
    cout<<"Size of the element object is "<<sizeof(h1)<<endl;//concept of padding and greedy alignment 
    //a class stored two int then this takes total 8 bytes on basis of 32 bit operation system and c++ compiler
    //import another file class

    //dynamically create object
    Hello *h=new Hello;
    // Hello *h=new Hello();//same think
    cout<<"Value of a1 is "<<(*h).a1<<endl;
    (*h).setValue(15);
    cout<<"Get value of a is "<<(*h).getValue()<<endl;

    cout<<"Value of a1 is "<<h->a1<<endl;
    h->setValue(15);
    cout<<"Get value of a is "<<h->getValue()<<endl;

    




    Hello1 h11;
    // use all the properties directly 
    return 0;
}