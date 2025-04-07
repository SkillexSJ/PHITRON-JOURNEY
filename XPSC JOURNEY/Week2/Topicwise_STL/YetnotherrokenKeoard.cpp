
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59759215

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        vector<int> low_letters;
        vector<int> up_letters;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {

                s[i] = '/';
                if (low_letters.size() > 0)
                {
                    s[low_letters.back()] = '/';
                    low_letters.pop_back();
                }

                continue;
            }

            else if (s[i] == 'B')
            {
                s[i] = '/';
                if (up_letters.size() > 0)
                {
                    s[up_letters.back()] = '/';
                    up_letters.pop_back();
                }
                continue;
            }

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                low_letters.push_back(i);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                up_letters.push_back(i);
            }
        }

        for (auto it : s)
        {

            if (it != '/')
            {
                cout << it;
            }
        }

        cout << endl;
    }

    return 0;
}
