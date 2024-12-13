
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    vector<long long int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> pref(n + 1);

    pref[1] = arr[1];

    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;

        cin >> l >> r;

        long long int sum = 0;

        if (l == 1)
        {
            sum = pref[r];
        }

        sum = pref[r] - pref[l - 1];

        cout << sum << endl;
    }

    return 0;
}
