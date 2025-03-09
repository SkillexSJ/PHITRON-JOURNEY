
#include <bits/stdc++.h>
using namespace std;

int path[10][10];
int dp[10][10];
int n, m;

int get_max(int i, int j)
{
    if (i == n - 1 && j == m - 1) // out of bounds
    {
        return path[i][j];
    }

    if (dp[i][j] != -1)
    {

        return dp[i][j];
    }

    int right = INT_MIN, down = INT_MIN;

    if (i + 1 < n) // niche jawar sujog ache
    {

        down = get_max(i + 1, j);
    }

    if (j + 1 < m)
    {

        right = get_max(i, j + 1);
    }

    return dp[i][j] = path[i][j] + max(right, down); // right and down er vitor max ta path er sathe jog hobe
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> path[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));

    cout << get_max(0, 0) << endl; // row column index pathailam

    return 0;
}
