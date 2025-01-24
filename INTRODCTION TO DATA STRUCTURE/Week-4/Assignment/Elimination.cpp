
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;
        stack<char> s1;

        for (char ch : s)
        {

            if (!s1.empty() && s1.top() == 1 && ch == '0')
            {
                s1.pop();
            }
            else
            {
                s1.push(ch);
            }
        }

        if (s1.empty())
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
