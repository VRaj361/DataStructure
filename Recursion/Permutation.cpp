#include <iostream>
#include<vector>
using namespace std;
//for number
void solve(vector<int> nums, vector<vector<int>> &ans, int i)
{
    if (i >= nums.size())
    { // base case
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        solve(nums, ans, i + 1);
        // backtrack
        swap(nums[i], nums[j]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    solve(nums, ans, 0);
    return ans;
}

//for string
void permutationChar(string str,string str1){
    if(str.length()==0){
        cout<<str1<<endl;
        return;
    }
    char c=str.at(0);
    for(int i=0;i<=str1.length();i++){
        string f=str1.substr(0,i);
        string l=str1.substr(i,str1.length());
        permutationChar(str.substr(1),f+c+l);
    }
    //cba
}

int main()
{
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    permutationChar("abc","");
}