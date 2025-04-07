
#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc214/submissions/64175422

int main()
{
    int s, t;

    cin >> s >> t;

    int count = 0;

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            for (int c = 0; c <= s; c++)
            {
                if (a + b + c <= s && a * b * c <= t)
                {
                    count++;
                }

                else if (a + b + c <= s || a * b * c <= t)
                {
                    break;
                }
            }
        }
    }

    return 0;
}
