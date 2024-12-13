
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int freq[5] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            freq[0]++;
        }

        if (s[i] == 'g' || s[i] == 'G')
        {
            freq[1]++;
        }

        if (s[i] == 'y' || s[i] == 'Y')
        {
            freq[2]++;
        }

        if (s[i] == 'p' || s[i] == 'P')
        {
            freq[3]++;
        }

        if (s[i] == 't' || s[i] == 'T')
        {
            freq[4]++;
        }
    }

    int min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (freq[i] < min)
        {
            min = freq[i];
        }
    }

    cout << min << endl;

    return 0;
}
