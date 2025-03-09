#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[1005];

    int rob_house(int i, vector<int> &nums)
    {

        if (i >= nums.size())
            return 0;

        if (dp[i] != -1)
            return dp[i];

        return dp[i] = max(nums[i] + rob_house(i + 2, nums), rob_house(i + 1, nums)); // churi koira 2 kodom niya dekhmu ar nahole churi na koira ek kodom giya dekhmu
    }

    int rob(vector<int> &nums)
    {

        memset(dp, -1, sizeof(dp));

        return rob_house(0, nums);
    }
};