
#include <bits/stdc++.h>
using namespace std;

bool check(stack<char> s1, stack<char> s2)
{

    while (!s1.empty() && !s2.empty())
    {
        s1.pop();
        s2.pop();
        if (s1.empty() && s2.empty())
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> s1;
        stack<char> s2;

        for (char ch : s)
        {

            if (ch == '1')
            {
                s1.push(ch);
            }
        }

        for (char ch : s)
        {

            if (ch == '0')
            {
                s2.push(ch);
            }
        }

        bool hoyeche = check(s1, s2);

        if (hoyeche)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
