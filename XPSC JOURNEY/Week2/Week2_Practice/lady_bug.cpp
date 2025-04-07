
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59776163

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        bool ok = true;

        int chain1 = 0, chain2 = 0;

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {

                if (a[i] == '1')
                {
                    chain1++;
                }
                if (b[i] == '1')
                {
                    chain2++;
                }
            }

            else
            {
                if (a[i] == '1')
                {
                    chain2++;
                }
                if (b[i] == '1')
                {
                    chain1++;
                }
            }
        }

        int even_slot = n / 2;
        int odd_slot = (n + 1) / 2;

        if (chain1 > even_slot || chain2 > odd_slot)
        {
            ok = false;
        }

        if (ok)
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
