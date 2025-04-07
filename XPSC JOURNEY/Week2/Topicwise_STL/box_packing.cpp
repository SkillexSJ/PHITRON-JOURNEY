
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59794041

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    int ans = INT_MIN;

    for (auto it : m)
    {
        ans = max(ans, it.second);
    }
    cout << ans << endl;

    return 0;
}
