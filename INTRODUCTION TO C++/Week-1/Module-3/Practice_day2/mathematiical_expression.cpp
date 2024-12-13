
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    cin >> a;
    cin.ignore();
    cin >> s;
    cin >> b;
    cin.ignore();
    cin >> q;
    cin >> c;

    if (s == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }

        else
        {
            cout << a << " " << s << " " << b << " " << q << " " << a + b << endl;
        }
    }

    if (s == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }

        else
        {
            cout << a << " " << s << " " << b << " " << q << " " << a - b << endl;
        }
    }

    if (s == '*')
    {
        if (a * b == c)
        {
            cout << "Yes";
        }

        else
        {
            cout << a << " " << s << " " << b << " " << q << " " << a * b << endl;
        }
    }

    return 0;
}
