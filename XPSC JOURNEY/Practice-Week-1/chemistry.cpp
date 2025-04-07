
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59515355

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int odd_count = 0;
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                odd_count++;
            }
        }

        if (odd_count <= k + 1)
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
