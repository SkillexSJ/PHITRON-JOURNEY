
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;

        cin >> s;

        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {

            sum1 += (s[i] - '0');
            sum2 += (s[j] - '0');
        }

        (sum1 == sum2) ? cout << "Yes" : cout << "NO" << endl;
    }

    return 0;
}
