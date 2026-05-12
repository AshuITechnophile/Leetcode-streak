#include <iostream>
using namespace std;
int kthFactor(int n, int k)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (count == k)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int n, k;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << "Enter the value of k = ";
    cin >> k;
    cout << kthFactor(n, k);
    return 0;
}