
#include <bits/stdc++.h>
using namespace std;

bool check(long long n, long long curr)
{

    if (curr == n)
        return true;
    if (curr > n)
        return false;

    return check(n, curr * 10) || check(n, curr * 20);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        bool hoise = check(n, 1);

        if (hoise)
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
