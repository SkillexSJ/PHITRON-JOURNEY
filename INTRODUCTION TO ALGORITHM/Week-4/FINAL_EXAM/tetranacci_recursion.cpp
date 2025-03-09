
#include <bits/stdc++.h>
using namespace std;

int dp[10005];

int tetra(int n)
{

    if (n == 0)
        return 0;
    if (n < 3)
        return 1;
    if (n == 3)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = tetra(n - 1) + tetra(n - 2) + tetra(n - 3) + tetra(n - 4);

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    cout << tetra(n) << endl;

    return 0;
}
