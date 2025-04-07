
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59737223

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_B = -1, last_B = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {

                if (last_B == -1)
                {
                    first_B = i;
                    last_B = i;
                }

                else
                {
                    last_B = i;
                }
            }
        }

        cout << last_B - first_B + 1 << endl;
    }

    return 0;
}
