#include <iostream>
#include <stack>
using namespace std;
bool brackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                bool is_check = true;
                while (st.top() != '(')
                {
                    char c = st.top();
                    if (c == '+' || c == '-' || c == '*' || c == '/')
                    {
                        is_check = false;
                    }
                    st.pop();
                }
                if (is_check == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a+c*b)+(c))";
    bool a = brackets(s);
    cout << a;
}