
#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(n)

int main()
{
    string s;

    cin >> s;

    vector<int> freq(26);

    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';

        freq[index]++;
    }

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 97) << " " << ":" << " " << freq[i];
            cout << endl;
        }
    }

    return 0;
}
