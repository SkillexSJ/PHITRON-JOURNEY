#include <bits/stdc++.h>
using namespace std;

int dp[16][15001];

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int coins[15];
        int totalSum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
            totalSum += coins[i];
        }

        memset(dp, false, sizeof(dp));
        dp[0][0] = true;

        int half1 = n / 2;
        int half2 = (n + 1) / 2;
        int min_diff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = half2; j > 0; j--)
            {
                for (int k = totalSum; k >= coins[i]; k--)
                {
                    if (dp[j - 1][k - coins[i]])
                    {
                        dp[j][k] = true;
                    }
                }
            }
        }

        for (int i = half1; i <= half2; i++)
        {
            for (int j = 0; j <= totalSum; j++)
            {

                if (dp[i][j])
                {

                    int diff = totalSum - j;

                    min_diff = min(min_diff, abs(diff - j));
                }
            }
        }

        cout << min_diff << endl;
    }
    return 0;
}
