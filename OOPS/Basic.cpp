#include<iostream>
#include "Basic1.cpp"
#include<string.h>
using namespace std;
class Hello{//class
    //properties
    private://by default
    int a;


    public:
    int a1=10;
    int b1;
    char *name;
    static int run;

    Hello(){
        cout<<"Constuctor is called "<<endl;//first constructor is called because first object can load 
    }
    Hello(int b1){
        this->b1=b1;
    }
    //copy constructor
    Hello(Hello& temp){//automatically override the implementation
        cout<<"Copy constructor called "<<endl;
        this->b1=temp.b1;
        // this->name=temp.name;
        char *temp1=new char[strlen(temp.name)+1];//for null character
        strcpy(temp1,temp.name);
        this->name=temp1;


    }
    //getter and setter
    void setValue(int a){
        //value of this and address of setvalue call in main function both will be same pointing to same address
        
        this->a=a;
    }
    int getValue(){
        return a;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    static int print(){
        cout<<run<<endl;
    }
    ~Hello(){
        //destructor
        cout<<"Destructor called for dynamic memory "<<endl;
    }

   

};
int Hello::run=5;
int main(){
    Hello h1,h2(111);//this will create a instance of the class
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

    
    //copy consturctor

    cout<<"Value of b1 using h2 object is "<<h2.b1<<endl;
    char name[5]="Vraj";
    h2.setName(name);
    cout<<"Value of name is using h2 object is "<<h2.name<<endl;
    Hello h3(h2);//calling copy constructor
    cout<<"Value of b1 using h3 object is "<<h3.b1<<endl;
    cout<<"Value of name is using h3 object is "<<h3.name<<endl;
    //shallow copy
    h2.name[0]='R';
    cout<<"Value of name is using h2 object is "<<h2.name<<endl;
    cout<<"Value of name is using h3 object is "<<h3.name<<endl;
    
    //deep copy changes in copy constructor file

    //assignment operator menas you can store one object to another object like h1=h2;

    //Destructor
    Hello s;//static
    //automatically call
    Hello *d=new Hello();//dynamic
    delete d;

    //static keyword
    cout<<Hello::run<<endl;
    h1.run=10;
    cout<<h1.run<<endl;//initialization in memory one time Compile onces so no extra memory can take

    //static function can only runs static variables
    Hello::print();
    Hello1 h11;
    // use all the properties directly 
    return 0;
}