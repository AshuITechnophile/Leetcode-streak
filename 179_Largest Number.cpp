#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string largestNumber(vector<int> &nums)
{
    vector<string> arr;
    for (int x : nums)
    {
        arr.push_back(to_string(x));
    }
    sort(arr.begin(), arr.end(), [](const string &a, const string &b)
         { return a + b > b + a; });
    if (arr[0] == "0")
    {
        return "0";
    }
    string ans;
    for (const string &s : arr)
    {
        ans += s;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Size of Array = ";
    cin >> n;
    vector<int> nums(n);
    cout << "Input for K = ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    return 0;
}
