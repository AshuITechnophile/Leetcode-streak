#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0) return;   // safety
    k = k % n;
    // poora array reverse
    reverse(nums.begin(), nums.end());
    // left reverse
    reverse(nums.begin(), nums.begin() + k);
    // right reverse
    reverse(nums.begin() + k, nums.end());
    return;
}
int main()
{
    int n, k;
    cout << "Size of Array = ";
    cin >> n;
    vector<int> nums(n);
    cout << "Input for K = ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    rotate(nums, k);

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}