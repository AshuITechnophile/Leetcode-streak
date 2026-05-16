#include <iostream>
using namespace std;
int scoreOfString(string s)
{
    int sum = 0;

    for (int i = 1; i < s.size(); i++)
    {
        sum += abs(s[i] - s[i - 1]);
    }
    return sum;
}
int main()
{
    string s;
    getline(cin, s);
    cout << scoreOfString(s);
    return 0;
}