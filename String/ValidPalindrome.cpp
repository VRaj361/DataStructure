#include <iostream>
#include<cctype>
using namespace std;
bool isPalindrome(string s)
{
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s.at(i) == ' ' || s.at(i) == ':' || s.at(i) == ',')
            {
            }
            else
            {
                str += s.at(i);
            }
        }
        cout << str << " " << s;
        for (int i = 0; i < str.size() / 2; i++)
        {
            // cout<<str.at(str.size()-1-i);
            if (tolower(str.at(i)) == tolower(str.at(str.size() - i-1)))
            {
                i++;
            }
            else
            {
                return false;
            }
        }
        return true;
}
int main()
{
    string s="A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;
}