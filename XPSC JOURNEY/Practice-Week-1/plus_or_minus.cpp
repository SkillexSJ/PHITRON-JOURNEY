
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59500140

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
        {

            cout << "+" << endl;
        }

        else if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}
