#include <iostream>
#include <math.h>
using namespace std;
double myPow(double x, int n)
{
    double result = pow(x, n);
    return result;
}
int main()
{
    double x;
    int n;
    cout << "Enter the value of X = ";
    cin >> x;
    cout << "Enter the value of n = ";
    cin >> n;
    cout << myPow(x, n);
    return 0;
}