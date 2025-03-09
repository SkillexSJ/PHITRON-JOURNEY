#include <bits/stdc++.h>
using namespace std;

int dp[10001];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, max_weight;
        cin >> n >> max_weight;

        vector<int> weight(n), value(n);
        for (int i = 0; i < n; i++)
            cin >> weight[i];
        for (int i = 0; i < n; i++)
            cin >> value[i];

        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            for (int w = max_weight; w >= weight[i]; w--)
            {
                dp[w] = max(dp[w], value[i] + dp[w - weight[i]]);
            }
        }

        cout << dp[max_weight] << endl;
    }

    return 0;
}
