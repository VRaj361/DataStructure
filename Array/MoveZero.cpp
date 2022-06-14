#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
}
int main(){
    vector<int> arr={1,0,0,3,12,0,0};
    moveZeroes(arr);
    for(auto x:arr){
        cout<<x<<" ";
    }    
    return 0;
}