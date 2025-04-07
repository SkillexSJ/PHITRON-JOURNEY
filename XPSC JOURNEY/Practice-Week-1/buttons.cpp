
#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc124/submissions/64168785

int calc(int a, int b)
{

    return max({a + (a - 1), b + (b - 1), a + b});
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << calc(a, b);
    return 0;
}
