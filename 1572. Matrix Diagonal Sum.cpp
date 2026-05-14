#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int n = mat.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];         // primary diagonal
        sum += mat[i][n - i - 1]; // secondary diagonal
    }

    // remove double counted middle element (only if n is odd)
    if (n % 2 != 0)
    {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    // input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << diagonalSum(mat);

    return 0;
}