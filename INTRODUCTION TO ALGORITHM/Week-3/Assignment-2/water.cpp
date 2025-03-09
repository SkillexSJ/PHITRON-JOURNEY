
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> water(n);

        for (int i = 0; i < n; i++)
        {
            cin >> water[i];
        }

        int maxi1 = INT_MIN, maxi2 = INT_MIN;
        int target_left = -1, target_right = -1;

        for (int i = 0; i < n; i++)
        {
            if (water[i] > maxi1)
            {
                swap(maxi1, maxi2);
                swap(target_left, target_right);
                maxi1 = water[i];
                target_left = i;
            }

            else if (water[i] > maxi2)
            {
                maxi2 = water[i];
                target_right = i;
            }
        }

        if (target_left < target_right)
        {
            cout << target_left << " " << target_right << endl;
        }

        else
        {
            cout << target_right << " " << target_left << endl;
        }
    }

    return 0;
}
