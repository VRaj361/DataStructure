#include <iostream>
using namespace std;

//structure is the user defined data types where we will group together 
    //related data member  named as one name which is similar or disimilar type

    //collection of data members named one name

    //systax
    struct Rectangle
    {
        int len;//int take two or four bytes
        int bre;//int take two or four bytes
    };//so structure occupied 4 or 8 byte memory becuase of int data type

    struct Stu
    {
        int roll_no;
        int arr[5];
    } s;//access using s is like struct Sum s in main method
    


int main(void)
{

    struct Rectangle r;//declaretion
    //so here r takes 4 bytes or 8 bytes when len takes 2 bytes and bre takes 
    //2 bytes also

    struct Rectangle q{1,2};//declaretion + initialization 

    //structure store there memory in the stack

    //access the variable 
    // . (dot) operator is use to set the value of structure
    r.len=10;
    r.bre=20;

    //the value will be overrided

    //access the len and bre
    cout<<"The Area of the Rectangle is "<<r.len*r.bre<<endl;
    cout<<r.len<<endl;

    //second structure

    //inilialize directly also
    // struct Stu s={1,2};
    s.roll_no=1;
    s.arr[0]=2;
    cout<<s.arr<<endl;//print the address
    cout<<s.arr[0]<<endl;
    //this is for one student 

    // to initialize all the student
    struct Stu s1[4]={{1,2},{3,4},{6,5},{7,8}};
    cout<<s1[3].roll_no<<endl;
    return 0;
}
