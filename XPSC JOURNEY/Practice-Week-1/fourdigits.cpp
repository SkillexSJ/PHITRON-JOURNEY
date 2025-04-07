
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59490139

int main()
{
    int n;
    cin >> n;

    string res = "";

    if (n < 1000)
    {

        res = "0";
        if (n < 100)
        {
            res += "0";
            if (n < 10)
            {
                res += "0";
            }
        }

        res += to_string(n);
    }

    else
    {
        res = to_string(n);
    }

    cout << res << endl;
    return 0;
}
