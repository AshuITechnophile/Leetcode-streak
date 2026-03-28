class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        string ans;
        while (i < s.size())
        {

            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }a
            if (s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
            {
                ans.push_back(s[i]);
            }
            i++;
        }
        string san;
        i = ans.size() - 1;
        while (i >= 0)
        {
            san.push_back(ans[i]);
            i--;
        }
        if (san == ans)
            return true;
        else
            return false;
    }
};