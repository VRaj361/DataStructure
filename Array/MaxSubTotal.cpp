#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = nums[0];
    int sum1=nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        sum=max(sum+nums[i],nums[i]);
        sum1=max(sum1,sum);    
    }
    return sum1;
}
int main()
{
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"this is the number"<<maxSubArray(arr)<<endl;  
}