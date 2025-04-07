
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59787432

int main()
{
    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        m[name]++;
    }

    cout << "NO" << endl;

    for (auto it : m)
    {
        if (it.second > 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
