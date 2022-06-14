#include <iostream>
#include <stack>
#include <vector>

// leetcode 84 hard
using namespace std;
vector<int> nextSmallerElement(vector<int> &h, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int ele = h[i];
        while (s.top() != -1 && h[s.top()] >= ele)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &h, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int ele = h[i];
        while (s.top() != -1 && h[s.top()] >= ele)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &h)
{
    int n = h.size();

    vector<int> next(n);
    next = nextSmallerElement(h, n);

    vector<int> prev(n);
    prev = prevSmallerElement(h, n);

    int area = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = h[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}
int main()
{   
    vector<int> v;
    
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    cout<<largestRectangleArea(v);
}