#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int freq[26] = {0};

        int len;

        cin >> len;

        string s;

        cin >> s;

        for (int i = 0; i < len; i++)
        {
            freq[s[i] - 'A']++;
        }

        int sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= 1)
            {
                sum += freq[i] + 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}