#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{

    int n = nums.size();
    vector<int> leftProduct(n, 1);
    vector<int> rightProduct(n, 1);
    vector<int> ans(n);

    // left product
    for (int i = 1; i < n; i++)
    {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }
    // right product
    for (int i = n - 2; i >= 0; i--)
    {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    // final ans
    for (int i = 0; i < n; i++)
    {
        ans[i] = leftProduct[i] * rightProduct[i];
    }
    return ans;
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
    vector<int> ans = productExceptSelf(nums);
    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}