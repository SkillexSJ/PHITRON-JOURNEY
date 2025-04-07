
#include <bits/stdc++.h>
using namespace std;

/// https://vjudge.net/solution/59506258

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        int count_one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                count_one++;
            }
        }

        cout << n - (count_one / 2) << endl;
    }

    return 0;
}
