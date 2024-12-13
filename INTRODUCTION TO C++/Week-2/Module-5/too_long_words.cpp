
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {

        string n;

        cin >> n;

        if (n.size() > 10)
        {

            cout << n.front() << n.size() - 2 << n.back() << endl;
        }

        else
        {

            cout << n << endl;
        }
    }

    return 0;
}
