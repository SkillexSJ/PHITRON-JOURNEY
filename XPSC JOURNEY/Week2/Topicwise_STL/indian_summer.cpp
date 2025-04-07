
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59745248

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }

    cout << mp.size() << endl;
    return 0;
}
