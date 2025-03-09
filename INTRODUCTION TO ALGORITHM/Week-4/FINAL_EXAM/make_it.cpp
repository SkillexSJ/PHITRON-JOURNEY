#include <bits/stdc++.h>
using namespace std;

bool dp[1000001];

bool check(long long n, long long curr)
{

    if (curr > n)
    {
        return false;
    }

    if (curr == n)
    {
        return true;
    }

    if (dp[curr])
    {
        return false;
    }

    dp[curr] = true;

    return check(n, curr + 3) || check(n, curr * 2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        memset(dp, 0, sizeof(dp));

        bool hoise = check(n, 1);

        if (hoise)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
