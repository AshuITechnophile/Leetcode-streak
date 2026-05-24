#include <iostream>
#include <vector>
using namespace std;
vector<int> countOppositeParity(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] % 2 == 0)
            {
                if (nums[j] % 2 == 1)
                {
                    count++;
                }
            }
            else
            {
                if (nums[j] % 2 == 0)
                {
                    count++;
                }
            }
        }
        ans.push_back(count);
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
    vector<int> result = countOppositeParity(nums);
    for (int d : result)
    {
        cout << d << " ";
    }
    return 0;
}
