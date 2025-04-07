
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59490339

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (auto c : s)
    {
        mp[c]++;
    }

    if (mp.size() == 26)
    {

        cout << "None" << endl;
    }

    else
    {

        for (char c = 'a'; c <= 'z'; c++)
        {
            if (mp.find(c) == mp.end())
            {
                cout << c << endl;
                break;
            }
        }
    }
    return 0;
}
