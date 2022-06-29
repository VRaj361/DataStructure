#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int s, int e)
{
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == tar)
        {
            return m;
        }
        else if (arr[m] > tar)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return -1;
}

vector<int> searchMatrix(vector<vector<int>> arr, int tar)
{
    int rS = 0;
    int rE = arr.size() - 1;
    vector<int> ans;

    if (rE == 0)
    {
        int col = binarySearch(arr[0], tar, 0, arr[0].size() - 1);
        if (col == -1)
        {
            ans.push_back(-1);
            ans.push_back(col);
            return ans;
        }
        else
        {
            ans.push_back(0);
            ans.push_back(col);
            return ans;
        }
    }
    else
    {
        while (rS <= rE)
        {
            
            int m = rS + (rE - rS) / 2;
            
            if (arr[m][0] <= tar && arr[m][arr[m].size() - 1] >= tar)
            {
                
                int col = binarySearch(arr[m], tar, 0, arr[m].size() - 1);
                if (col == -1)
                {
                    ans.push_back(-1);
                    ans.push_back(col);
                    return ans;
                }
                else
                {
                    ans.push_back(m);
                    ans.push_back(col);
                    return ans;
                }
            }
            else if (arr[m][0] > tar)
            {
                rE = m - 1;
            }
            else
            {
                rS = m + 1;
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int target = 16;
    // work in only row wise array and rowwise and column wise both works fine

    vector<int> ans=searchMatrix(arr, target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}