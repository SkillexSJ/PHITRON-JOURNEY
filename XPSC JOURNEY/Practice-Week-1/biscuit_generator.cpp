
#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc125/submissions/64175214

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    if (a >= b)
    {
        cout << "0" << endl;
        return 0;
    }

    int count = 0;

    while (t >= a)
    {
        t -= a;
        count += b;
    }

    cout << count << endl;
    return 0;
}
