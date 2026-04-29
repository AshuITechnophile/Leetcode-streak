#include <iostream>
using namespace std;
int lengthOfLastWord(string s)
{
    int len = 0;
    int i = s.size() - 1;
    while (i >= 0)
    {
        if (s[i] == ' ')
        {
            if (len > 0)
            {
                break;
            }
            i--;
            continue;
        }
        else
        {
            len++;
            i--;
        }
    }
    return len;
}
int main()
{
    string s;
    getline(cin, s);
    cout << lengthOfLastWord(s);
    return 0;
}