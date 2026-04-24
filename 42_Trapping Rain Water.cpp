#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int m = height.size();
    int left = 0, right = m - 1;
    int answer = 0;
    int rightmax = 0, leftmax = 0;
    while (left < right)
    {
        if (height[left] <= height[right])
        {
            if (leftmax >= height[left])
            {
                answer += leftmax - height[left];
            }
            else
            {
                leftmax = height[left];
            }
            left++;
        }
        else
        {
            if (rightmax >= height[right])
            {
                answer += rightmax - height[right];
            }
            else
            {
                rightmax = height[right];
            }
            right--;
        }
    }
    return answer;
}
int main()
{
    int n;
    cout << "Size of the Array";
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << trap(height);
    return 0;
}