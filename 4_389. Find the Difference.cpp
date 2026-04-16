#include <iostream>
#include <algorithm>
using namespace std;
char findTheDifference(string s, string t)
{
    int i = 0;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    while (i < s.size())
    {

        if (s[i] != t[i])
        {
            return t[i];
        }

        i++;
    }
    return t[i];
}
int main()
{
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);
    cout << findTheDifference(s, t);
    return 0;
}