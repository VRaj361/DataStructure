#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int> &arr, int c, int mid)
{
    // if (n % 2 == 0)
    // {
        if (c == mid)
        {
            arr.pop();
            return;
        }
        int num = arr.top();
        arr.pop();
        insert(arr, c + 1, mid);
        arr.push(num);
    // }
    // else
    // {
    //     if (c == n-mid)
    //     {
    //         arr.pop();
    //         return;
    //     }
    //     int num = arr.top();
    //     arr.pop();
    //     insert(arr, c + 1, mid,n);
    //     arr.push(num);
    // }
}

void deleteMiddle(stack<int> &arr, int n)
{

    // Write your code here
    int mid = n / 2;
    int count = 0;
    insert(arr, count, mid);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);

    deleteMiddle(s, 5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}