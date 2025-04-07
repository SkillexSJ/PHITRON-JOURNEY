
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59482870

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == c || b == c)
    {
        cout << c << endl;
    }

    else
    {
        int res = -1;

        for (int i = a; i <= b; i++)
        {
            if (i % c == 0)
            {
                res = i;
                break;
            }
        }

        cout << res << endl;
    }

    return 0;
}
