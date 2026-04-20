#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int unique = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[unique])
        {
            unique++;
            nums[unique] = nums[i];
        }
    }
    return unique + 1;
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
    cout << removeDuplicates(nums);
    return 0;
}
