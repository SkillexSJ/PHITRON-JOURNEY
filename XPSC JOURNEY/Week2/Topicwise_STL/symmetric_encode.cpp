
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59793108

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> r;
        vector<bool> freq(26, false);

        for (char c : s)
        {
            if (!freq[c - 'a'])
            {
                r.push_back(c);
                freq[c - 'a'] = true;
            }
        }

        sort(r.begin(), r.end());
        string ans = "";

        int index_in_r[26];

        for (int i = 0; i < r.size(); i++)
        {
            index_in_r[r[i] - 'a'] = i;
        }

        for (char c : s)
        {
            int j = index_in_r[c - 'a'];
            int mirror = r.size() - 1 - j;
            ans += r[mirror];
        }

        cout << ans << endl;
    }

    return 0;
}
