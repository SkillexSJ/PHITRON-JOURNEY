
#include <bits/stdc++.h>
using namespace std;

bool check(map<char, int> mp1, map<char, int> mp2)
{

    return mp1 == mp2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        map<char, int> mp1;
        map<char, int> mp2;

        for (auto ch : s1)
        {

            mp1[ch]++;
        }

        for (auto ch : s2)
        {

            mp2[ch]++;
        }

        bool hoise = check(mp1, mp2);

        if (hoise)
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
