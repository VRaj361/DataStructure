#include<iostream>
using namespace std;
class Monkey{
    public:
        int noOfMonkey;
        int weight;
        int age=100;
    int getAge(){
        return this->age;
    }
};
class Human:public Monkey{
    public:
        string color="white";
    void print(){
        cout<<"This is human"<<endl;
    }
};
//access modifier
//0) first class second class ->
//1) public,public -> public
//2) public,private -> private
//3) public,protected -> protected
//4) protected,public ->  protected
//5) protected,protected -> protected
//6) protected,private -> private
//7) private,public -> NA
//8) private,protected -> NA
//9) private,private -> NA
//above six think which contain answer as private and protected can not access in main method but accessed by child class
int main(){
    //inheritance basic
    Human h1;
    cout<<"Age of parent class monkey"<<h1.age<<endl;
    cout<<"Age of parent class monkey method"<<h1.getAge()<<endl;
    h1.print();

    //multiple inhertance A->B->C
    
}