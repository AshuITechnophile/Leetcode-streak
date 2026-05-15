#include <iostream>
using namespace std;
bool isSameAfterReversals(int num)
{
    int reversed1 = 0;
    int og = num;
    bool ans = true;

    while (num > 0)
    {
        int k = num % 10;

        reversed1 = reversed1 * 10 + k; // reversed number
        num = num / 10;
    }

    // Reverse again
    int reversed2 = 0;

    while (reversed1 > 0)
    {
        int m = reversed1 % 10;
        reversed2 = reversed2 * 10 + m;
        reversed1 = reversed1 / 10;
    }

    if (og != reversed2)
    {
        ans = false;
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    if (isSameAfterReversals(num) == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}