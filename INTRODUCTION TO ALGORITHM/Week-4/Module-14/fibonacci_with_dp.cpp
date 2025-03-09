
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo = O(2^n) jeita kharap

int dp[10005];

int fibo(int n)
{

    if (n < 2)
        return n;

    if (dp[n] != -1)
        return dp[n]; // jodi age thekei calculate thake tahole ar dokar nai jog korar

    dp[n] = fibo(n - 1) + fibo(n - 2); // ager duita value er jogfol memorization kore rakhbo dp array te

    return dp[n]; // tarpor jog kora value ta return korbo
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    cout << fibo(n);
    return 0;
}
