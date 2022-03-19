#include <iostream>
using namespace std;
char getMaxOccuringChar(string str)
{
    // Your code here
    int arr[26] = {0}; // all character is placed with 0
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int num = ch - 'a';
        arr[num]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
    }
    char answer = 'a' + ans;
    return answer;
}
int main()
{
    char c=getMaxOccuringChar("test");
    cout<<c<<endl;
    return 0;
}