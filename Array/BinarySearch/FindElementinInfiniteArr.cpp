#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int s, int e)
{
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] > tar)
        {
            e = m - 1;
        }
        else if (arr[m] < tar)
        {
            s = m + 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}

int ansq(vector<int> arr, int tar)
{
    int s = 0;
    int e = 1;

    while (tar > arr[e])
    {
        s = e;
        e *= 2;
    }

    return binarySearch(arr, tar, s, e);
}
int main()
{
    vector<int> arr = {3,5,6,9,10,90,100,130,140,160,170};
    cout << ansq(arr, 130);
}