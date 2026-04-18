#include <iostream>
#include <algorithm>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    int i = 0;
    while (i < s.size())
    {
        if (s[i] != t[i])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);
    if (isAnagram(s, t) == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}