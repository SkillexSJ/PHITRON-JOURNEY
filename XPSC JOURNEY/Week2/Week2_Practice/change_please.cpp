#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/viewsolution/1149400312

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        if (n == 100)
            cout << 0 << endl;
        else if (n == 90)
            cout << 10 << endl;

        else
        {

            int calc = 100 - n;

            calc /= 10;

            cout << calc * 10 << endl;
        }
    }
}
