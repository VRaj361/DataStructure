#include <iostream>

// #include <bits/stdc++.h>
#include<vector>
using namespace std;
static vector<string> arr;
void permute(string s , string answer)
{
    if(s.length() == 0)
    {
        // cout<<answer<<"  ";
        arr.push_back(answer);
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        
        permute(rest , answer+ch);
    }
 
}
// void permutation(string s1, string arr[], string str)
// {
//     cout<<"in "<< <<endl;
//     if (s1.length() == 0)
//     {
//         cout<<"in base"<<endl;
//         arr[++count] = str;
//         cout<<str<<endl;
//         return;
//     }
//     for (int i = 0; i < s1.length(); i++)
//     {
//         char c = s1[i];
//         string left = s1.substr(0, i);
//         cout<<"left"<<left<<endl;
//         string right = s1.substr(i + 1);
//         cout<<"right"<<right<<endl;
//         string all = left + right;
//         cout<<all<<endl;
//         arr[++count] = all;
//         permutation(all, arr, str + c);
//     }
// }

bool checkInclusion(string s1, string s2)
{
    // cout<<"in check"<<endl;
    string str="";
    permute(s1,str);
    // cout<<arr.size()<<endl;

    
    for (int i = 0; i < arr.size(); i++)
    {   
        cout<<s2.find(arr[i])<<" find"<<endl;
        if (s2.find(arr[i]) >= 0&&s2.find(arr[i])<s2.length())
        {
            // cout<<"in if";
            return 1;
        }
    }
    return 0;
}
int main()
{   

    
string s1="abcdxabcde";
string s2="abcdeabcdx";
    // string arr[s1.length() * (s1.length() - 1)];
    
    // string str = "";
    // permutation(s1,arr,str);
    
    // cout<<"hi"<<endl;
    // for(auto x:arr){
    //     cout<<x <<" ";
    // }
    

    cout << checkInclusion(s1,s2);
    return 0;
}