#include <iostream>
using namespace std;
int helper(int n, int s)
{
    if (n == 0)
    {
        return s;
    }
    if (n % 2 == 0)
    {
        return helper(n / 2, s + 1);
    }
    else
    {
        return helper(n - 1, s + 1);
    }
}

int main()
{
    cout << helper(14, 0);
    // Step 1) 14 is even; divide by 2 and obtain 7.
    // Step 2) 7 is odd; subtract 1 and obtain 6.
    // Step 3) 6 is even; divide by 2 and obtain 3.
    // Step 4) 3 is odd; subtract 1 and obtain 2.
    // Step 5) 2 is even; divide by 2 and obtain 1.
    // Step 6) 1 is odd; subtract 1 and obtain 0.
}