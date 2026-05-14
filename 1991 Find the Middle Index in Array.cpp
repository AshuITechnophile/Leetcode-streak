#include<iostream>
#include<vector>
using namespace std;
 int findMiddleIndex(vector<int> &nums)
    {
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total = total + nums[i];
        }
        int leftsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int rightsum = total - leftsum - nums[i];
            if (leftsum == rightsum)
            {
                return i;
            }
            leftsum = leftsum + nums[i];
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
    cout<<findMiddleIndex(nums);
   return 0;
}