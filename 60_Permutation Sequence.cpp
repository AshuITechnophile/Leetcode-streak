#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string getPermutation(int n, int k)
{
    vector<char> p;
    for (int i = 1; i <= n; i++)
    {
        p.push_back('0' + i);
    }
    for (int i = 1; i < k; i++)
    {
        next_permutation(p.begin(), p.end());
    }
    string ans = "";
    for (char c : p)
    {
        ans = ans + c;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    cout << getPermutation(n, k);
    return 0;
}
