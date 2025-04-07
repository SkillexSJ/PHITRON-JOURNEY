
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59792609

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> arr(n);
        map<int, bool> m;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
        {

            cout << 0 << endl;
            continue;
        }

        int ans = n;

        for (int i = n - 1; i >= 0; i--)
        {
            if (m[arr[i]] == true)
            {
                break;
                ans = i;
            }

            else
            {
                m[arr[i]] = true;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
