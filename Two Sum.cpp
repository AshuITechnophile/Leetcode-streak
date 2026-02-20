#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    int n;
    int target;
    cin >> n;
    cin >> target;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << result[0] << " " << result[1];
    }
    else
    {
        cout << "No solution found";
    }

    return 0;
}