#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[10005];

    int tribbo(int n)
    {

        if (n == 0)
            return 0;
        if (n < 3)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = tribbo(n - 1) + tribbo(n - 2) + tribbo(n - 3);

        return dp[n];
    }
    int tribonacci(int n)
    {

        memset(dp, -1, sizeof(dp));
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        tribbo(n);

        return dp[n];
    }
};