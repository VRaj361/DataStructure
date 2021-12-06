#include <iostream>
using namespace std;

class Rec{
    private:
        int bre,len;
    public:
        Rec(int l,int b){
            len=l;
            bre=b;
        }//constructor
        void area(){
            cout<<len*bre<<endl;
        }
        void changeLen(int n){
            len=n;
            cout<<len<<endl;
        }//changing the value of len
};

int main(void)
{
    //we will be declare the structure and function pointer into class
    Rec r(10,5);
    r.area();
    r.changeLen(5);
    
    return 0;
}
