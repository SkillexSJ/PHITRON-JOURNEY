
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59793626

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string line;
        cin >> line;

        long long normal_value = 0;

        for (int i = 0; i < n; i++)
        {
            if (line[i] == 'L')
            {
                normal_value += i;
            }

            else
            {
                normal_value += n - i - 1;
            }
        }

        vector<long long> gain(n);

        for (int i = 0; i < n; i++)
        {
            long long current_value = (line[i] == 'L') ? i : n - i - 1;
            long long new_value = (line[i] == 'L') ? n - i - 1 : i;
            long long diff = new_value - current_value;
            if (diff > 0)
            {
                gain[i] = diff;
            }
        }

        sort(gain.rbegin(), gain.rend());

        vector<long long> prefix_sum(n + 1, 0);
        for (int i = 0; i < gain.size(); i++)
        {
            prefix_sum[i + 1] = prefix_sum[i] + gain[i];
        }

        for (int k = 1; k <= n; k++)
        {
            int use = min(k, (int)gain.size());
            long long max_gain = prefix_sum[use];
            long long new_value = normal_value + max_gain;
            cout << new_value << " ";
        }
        cout << endl;
    }
    return 0;
}
