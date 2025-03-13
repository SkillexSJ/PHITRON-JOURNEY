#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long sum = 0;

    int prev = 1e9;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (prev > a[i])
        {
            prev = a[i];
        }
        else
        {
            prev--;
        }
        if (prev <= 0)
        {
            break;
        }

        sum += prev;
    }

    cout << sum << endl;

    return 0;
}
