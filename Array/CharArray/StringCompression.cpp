// leetcode 443 string compresion
#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{

    int i = 0;
    int ans = 0;
    while (i < chars.size())
    {

        int j = i + 1;
        while (j < chars.size() && chars[i] == chars[j])
        {
            j++;
        }

        int count = j - i;
        chars[ans++] = chars[i];

        if (count > 1)
        {
            string st = to_string(count);
            for (char x : st)
            {
                chars[ans++] = x;
            }
        }

        i = j;

    } // end of outerloop
    return ans;
}

int main()
{
    vector<char> chars={'a','a','b','b','c','c','c'};
    int coutn=compress(chars);
    cout<<coutn<<endl;
    return 0;
}