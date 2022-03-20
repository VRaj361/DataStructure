// leetcode 54 spiral matrix
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int totale = row * col;
    vector<int> ans;
    // create four thinks
    int sr = 0;
    int sc = 0;
    int er = row - 1;
    int ec = col - 1;

    while (count < totale)
    {
        // four for loop
        for (int i = sc; count < totale && i <= ec; i++)
        {
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;
        // for loop for ending column
        for (int i = sr; count < totale && i <= er; i++)
        {
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        for (int i = ec; count < totale && i >= sc; i--)
        {
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;
        for (int i = er; count < totale && i >= sr; i--)
        {
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
    }

    return ans;
}
int main()
{
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=spiralOrder(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }

}