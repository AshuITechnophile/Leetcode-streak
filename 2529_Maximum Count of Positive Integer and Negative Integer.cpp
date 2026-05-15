#include <iostream>
#include <vector>
using namespace std;
int maximumCount(vector<int> &nums)
{
    int p = 0, n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            p++;
        }
        else if (nums[i] < 0)
        {
            n++;
        }
    }
    return max(p, n);
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
    cout << maximumCount(nums);
    return 0;
}