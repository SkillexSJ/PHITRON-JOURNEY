
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59500027

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    long long sum = 0;
    long long odd_find = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 != 0)
        {
            odd_find = min(odd_find, a[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }

    else
    {

        if (odd_find != LLONG_MAX)
        {
            cout << sum - odd_find << endl;
        }

        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
