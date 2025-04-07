
#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc191/submissions/64175468

int main()
{
    int n, x;

    cin >> n >> x;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            continue;
        }
        cout << a[i] << " ";
    }
    return 0;
}
