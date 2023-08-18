#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//leetcode 1552
// Magnetic Force Between Two Balls

bool isPossible(vector<int> arr, int m, int mid)
{
    int pos = arr[0];
    int c = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - pos >= mid)
        {
            c++;
            pos = arr[i];
        }

        if (m == c)
        {
            return true;
        }
    }
    return false;
}

int maxDistance(vector<int> position, int m)
{
    sort(position.begin(), position.end());
    int s = 0;
    int e = position[position.size() - 1] - position[0];
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(position, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> position = {1,2,3,4,7};
    cout<<maxDistance(position, 3);
}