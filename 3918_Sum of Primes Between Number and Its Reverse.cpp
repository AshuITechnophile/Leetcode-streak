#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int sumOfPrimesInRange(int n)
{
    int temp = n;
    int rev_no = 0;
    int sum = 0;
    while (temp > 0)
    {
        int rev = temp % 10;
        rev_no = (rev_no * 10) + rev;
        temp = temp / 10;
    }
    for (int i = min(n, rev_no); i <= max(n, rev_no); i++)
    {
        if (isPrime(i) == 1)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfPrimesInRange(n);
    return 0;
}