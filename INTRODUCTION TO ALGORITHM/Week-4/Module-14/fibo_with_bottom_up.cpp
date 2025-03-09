
#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;

    return 0;
}
