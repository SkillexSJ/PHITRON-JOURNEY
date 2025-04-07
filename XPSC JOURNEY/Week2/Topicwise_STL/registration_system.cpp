
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59763595

int main()
{
    int n;
    cin >> n;

    map<string, int> mp;
    vector<string> names(n);

    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
        mp[names[i]]++;
        if (mp[names[i]] > 1)
        {
            cout << names[i] << mp[names[i]] - 1 << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }
    return 0;
}
