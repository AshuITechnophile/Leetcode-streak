#include <iostream>
using namespace std;
int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int k = x % 10;
        if ((rev > INT_MAX / 10) or (rev < INT_MIN / 10))
        {
            return 0;
        }
        rev = rev * 10 + k;
        x = x / 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}