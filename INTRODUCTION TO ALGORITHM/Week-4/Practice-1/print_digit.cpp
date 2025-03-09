#include <bits/stdc++.h>
using namespace std;

void check(long long n, bool isLast = false)
{
    if (n == 0)
    {
        return;
    }

    check(n / 10, false);

    if (!isLast)
    {
        cout << n % 10 << " ";
    }
    else
    {
        cout << n % 10;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            check(n, true);
        }

        cout << endl;
    }

    return 0;
}
