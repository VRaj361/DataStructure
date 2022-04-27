#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums,vector<int> arr,int index,vector<vector<int>>& ans){

    if(index>=nums.size()){
        ans.push_back(arr);
        return; 
    }
    //exclude
    solve(nums,arr,index+1,ans);
    //include
    int ele=nums[index];
    arr.push_back(ele);
    solve(nums,arr,index+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> arr;
    int index=0;
 
    solve(nums,arr,index,ans);
    return ans;
}
int main(){
    vector<int> arr={1,2,3};
    vector<vector<int>> ans=subsets(arr);
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}