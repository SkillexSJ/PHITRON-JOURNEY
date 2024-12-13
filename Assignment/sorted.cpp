
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool hoise = 1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[i + 1])
            {
                hoise = false;
                break;
            }
        }

        (hoise) ? cout << "YES" : cout << "NO";

        cout << endl;
    }

    return 0;
}
