#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int total = 0;

    // Step 1: Calculate total sum
    for (int i = 0; i < nums.size(); i++)
    {
        total += nums[i];
    }

    int leftsum = 0;

    // Step 2: Traverse again to find pivot
    for (int j = 0; j < nums.size(); j++)
    {
        int rightsum = total - leftsum - nums[j];

        if (leftsum == rightsum)
        {
            return j;
        }

        leftsum += nums[j];
    }

    return -1;
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
    cout << pivotIndex(nums);
    return 0;
}