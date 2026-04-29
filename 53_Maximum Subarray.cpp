#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int currentsum = 0;
    int maxsum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        currentsum += nums[i];
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxsum;
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
    cout << maxSubArray(nums);
    return 0;
}