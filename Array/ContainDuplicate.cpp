#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> arr={1,2,3,4};
    cout<<containsDuplicate(arr)<<endl;
}