#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMin(vector<int> &nums)
{
    int min_ele = *min_element(nums.begin(), nums.end());
    return min_ele;
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
    cout << findMin(nums);
    return 0;
}
