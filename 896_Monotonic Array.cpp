#include <iostream>
#include <vector>
using namespace std;
bool isMonotonic(vector<int> &nums)
{
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] > nums[i - 1])
        {
            decreasing = false;
        }
        else if (nums[i] < nums[i - 1])
        {
            increasing = false;
        }
        if (!increasing && !decreasing)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Sixe of Array = ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << isMonotonic(nums);
    return 0;
}
