#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    int m = a.size();
    int n = b.size();

    vector<int> nums;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            nums.push_back(a[i]);
            i++;
        }
        else
        {
            nums.push_back(b[j]);
            j++;
        }
    }

    while (i < m)
    {
        nums.push_back(a[i]);
        i++;
    }

    while (j < n)
    {
        nums.push_back(b[j]);
        j++;
    }

    return nums;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums = merge(nums1, nums2);
    int s = nums.size();

    if (s % 2 != 0)
    {
        return nums[s / 2];
    }
    else
    {
        return (nums[s / 2] + nums[(s / 2) - 1]) / 2.0;
    }
}

int main()
{
    int n1, n2;

    cout << "Size of Array A: ";
    cin >> n1;
    vector<int> a(n1);

    cout << "Enter elements of A: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Size of Array B: ";
    cin >> n2;
    vector<int> b(n2);

    cout << "Enter elements of B: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << findMedianSortedArrays(a, b);

    return 0;
}