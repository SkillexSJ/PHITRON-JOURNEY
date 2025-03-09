#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n;
    int dp[1005];

    int get_min(int i, vector<int> &cost)
    {

        if (i >= n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = cost[i] + min(get_min(i + 1, cost), get_min(i + 2, cost)); // 1 kodom othoba 2 kodom niye dekhbo
    }
    int minCostClimbingStairs(vector<int> &cost)
    {

        n = cost.size();
        memset(dp, -1, sizeof(dp));

        return min(
            get_min(0, cost),
            get_min(1, cost)); // setp 0 or step 1 niye dekhbo ke kom value ane
    }
};