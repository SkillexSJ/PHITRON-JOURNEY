#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        while (true)
        {

            int pos = s.find(x);

            if (pos != -1)
            {

                s.replace(pos, x.size(), "#");
            }
            else
            {

                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}
