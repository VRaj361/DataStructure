#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={2,-3,3,3,-2};
    int s=0;
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));//as per guild 
                //min value and after max value
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(vector<int> vect:ans){
        for(int x:vect){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    //sort using decending order 

    return 0;
}