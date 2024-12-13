
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;

    cin >> n >> q;

    vector<long long> v(n);

    for (long long i = 0; i < n; i++) // O(n)
    {
        cin >> v[i];
    }

    vector<long long> prefixSum(n + 1);

    prefixSum[0] = 0;

    for (long long i = 1; i <= n; i++) // O(n)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i - 1];
    }

    for (int i = 0; i < q; i++) // O(q)
    {
        int l, r;

        cin >> l >> r;

        long long int sum = prefixSum[r] - prefixSum[l - 1];

        cout << sum << endl;
    }

    return 0;
}
