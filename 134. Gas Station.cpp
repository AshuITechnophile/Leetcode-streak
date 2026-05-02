#include <iostream>
#include <vector>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int total = 0;
    int leftgas = 0;
    int ans = 0;

    for (int i = 0; i < gas.size(); i++)
    {
        total += (gas[i] - cost[i]);
        leftgas += (gas[i] - cost[i]);
        if (leftgas < 0)
        {
            ans = i + 1;
            leftgas = 0;
        }
    }
    if (total >= 0)
    {
        return ans;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Sixe of Array = ";
    cin >> n;
    cout << "Enter the values of gas Array = ";
    vector<int> gas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    cout << "Enter the values of cost Array = ";
    vector<int> cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    cout << canCompleteCircuit(gas, cost);
    return 0;
}