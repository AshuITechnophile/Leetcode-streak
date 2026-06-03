#include <iostream>
#include <vector>
using namespace std;
vector<int> scoreValidator(vector<string> &events)
{
    int score = 0;
    int counter = 0;
    int n = events.size();
    for (int i = 0; i < n; i++)
    {
        if (counter == 10)
            return {score, counter};
        if (events[i] == "0" || events[i] == "1" || events[i] == "2" || events[i] == "3" || events[i] == "4" || events[i] == "6")
        {
            score = score + stoi(events[i]);
        }
        else if (events[i] == "W")
        {
            counter++;
        }
        else if (events[i] == "WD")
        {
            score++;
        }
        else if (events[i] == "NB")
        {
            score++;
        }
    }
    return {score, counter};
}
int main()
{
    int n;
    cout << "Enter the size of the Array";
    cin >> n;
    vector<string> events(n);
    for (int i = 0; i < n; i++)
    {
        cin >> events[i];
    }
    return 0;
}