#include <iostream>
using namespace std;
template <class T>
class Rec{
    private:
        T a;
        T b;
        //it should good practice to declare the value of variable
    public:
        Rec(T a,T b);
        T add();
};
template <class T>
Rec<T>::Rec(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Rec<T>::add(){
    T c;
    c=a+b;
    return c;
}
int main(void)
{
    //template class is generics 
    //class should not know about what data type main is call so use template
    //so main call all types of data and class simply return that value in that data type

    Rec<int> r(4,5);
    cout<<r.add()<<endl;

    return 0;
}
