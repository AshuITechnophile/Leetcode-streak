#include <iostream>
#include <algorithm>
using namespace std;
string reverseWords(string s)
{
    int len = s.size() - 1;
    int i = len;
    string ans;

    string temp;
    while (i >= 0)
    {
        if (s[i] == ' ')
        {
            if (!temp.empty())
            {
                reverse(temp.begin(), temp.end());
                ans.append(temp);
                temp.clear();
            }

            if (i != 0 && s[i] == s[i - 1])
            {
                i--;
            }
            else
            {
                ans.push_back(' ');
                i--;
            }
        }
        else
        {
            temp.push_back(s[i]);
            i--;
        }
    }
    if (!temp.empty())
    {
        reverse(temp.begin(), temp.end());
        ans.append(temp);
        temp.clear();
    }
    i = 0;
    while (ans[i] == ' ')
    {
        ans.erase(0, 1);
    }

    i = ans.size() - 1;
    while (ans[i] == ' ')
    {
        ans.pop_back();
        i--;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s);
    return 0;
}