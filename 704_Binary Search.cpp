#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, target;
    cout << "Sixe of Array = ";
    cin >> n;
    cout << "Enter target = ";
    cin >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << search(nums, target);
    return 0;
}