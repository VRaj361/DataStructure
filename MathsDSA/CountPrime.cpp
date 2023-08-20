#include <iostream>
#include <vector>
using namespace std;

// 204 count prime leetcode
// Sieve of Erathosthenes
int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    cout << countPrimes(18) << endl;
}
