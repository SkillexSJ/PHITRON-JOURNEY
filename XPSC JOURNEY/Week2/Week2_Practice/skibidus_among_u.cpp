#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59737538

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "us")
        {

            cout << 'i' << endl;
        }

        else
        {
            s = s.substr(0, s.size() - 2) + "i";
            cout << s << endl;
        }
    }

    return 0;
}