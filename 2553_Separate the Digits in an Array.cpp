#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> separateDigits(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int n = nums[i];

        vector<int> temp;
        while (n > 0)
        {
            int rev = n % 10;
            temp.push_back(rev);
            n = n / 10;
        }
        reverse(temp.begin(), temp.end());
        for (int k : temp)
        {
            ans.push_back(k);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the Array";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = separateDigits(nums);
    for (int d : result)
    {
        cout << d << " ";
    }
    return 0;
}
