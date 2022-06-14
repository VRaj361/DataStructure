#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){


    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<binary_search(v.begin(),v.end(),5);//element present or not
    cout<<endl;
    cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;


    //min max swap is function are there
    string a="abcd";
    reverse(a.begin(),a.end());
    cout<<"String is -> "<<a<<endl;

    //rotate vector
    rotate(v.begin(),v.begin()+2,v.end());//one element rotate
    //quick sort,heap sort,insertion sort=> intro sort use in rotate function
    for(auto i:v){
        cout<<i<<" ";
    }


    return 0;
}