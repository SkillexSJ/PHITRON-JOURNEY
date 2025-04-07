
#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc209/submissions/64168578

int main()
{
    int a, b;
    cin >> a >> b;

    if ((b - a) <= 1)
    {

        cout << 0;
        return 0;
    }

    else
    {

        cout << abs(b - a) + 1;
    }

    return 0;
}
