#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59745660
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        bool flag = true;
        while (true)
        {

            if (a < b - 1)
            {
                a++;
            }
            else if (a + 1 == b)
            {
                a--;
            }
            if (b > a + 1)
            {
                b--;
            }
            else if (b - 1 == a)
            {
                b++;
            }

            if (a <= 1)
            {
                flag = false;
                break;
            }

                        if (b >= n)
            {
                break;
            }

            if (a > b + 1)
            {
                a--;
            }
            else if (a - 1 == b)
            {
                a++;
            }
            if (b + 1 == a)
            {
                b--;
            }
            else if (b + 1 < a)
            {
                b++;
            }
            if (a >= n)
            {
                flag = false;
                break;
            }
            if (b <= 1)
            {
                break;
            }
        }

        (flag) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}