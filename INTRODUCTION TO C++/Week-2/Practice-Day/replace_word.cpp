
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (1)
    {
        if (s.find("EGYPT") != -1)
        {
            int pos = s.find("EGYPT");

            s.replace(pos, 5, " ");
        }

        else
        {
            break;
        }
    }

    cout << s;

    return 0;
}
