#include <iostream>
#include <vector>
using namespace std;
int maxProduct(vector<string> &words)
{
    int n = words.size();
    vector<int> bit(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (char c : words[i])
        {
            bit[i] |= (1 << (c - 'a'));
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((bit[i] & bit[j]) == 0)
            {
                ans = max(ans, (int)words[i].size() * (int)words[j].size());
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Sixe of Array = ";
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    cout << maxProduct(words);
    return 0;
}
