#include<iostream>
using namespace std;
#define n 5
//push pop isempty and top element means peek element 
class stack{
    private:
        int top;
        int *arr;
    public:
        stack(){
            arr=new int[n];
            top=-1;
        }

        int Top(){
            if(top==-1){
                cout<<"Stack underflow no element in array"<<endl;
                return -1;
            }
            return arr[top];
        }//top function

        void push(int val){
            if(top==n-1){
                cout<<"Stack overflow"<<endl;
                return;
            }
            top++;
            arr[top]=val;
        }//push function

        void pop(){
            if(top==-1){
                cout<<"Stack underflow"<<endl;
                return;
            }
            top--;
        }//pop function

        bool empty(){
            return top==-1;
        }//empty function
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"empty or not "<<s.empty()<<endl;
}