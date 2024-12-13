
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count_odd = 0;
        int count_even = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                count_even++;
            }

            if (arr[i] % 2 != 0)
            {
                count_odd++;
            }
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }

        else if (count_even == count_odd)
        {

            cout << 0 << endl;
        }

        else
        {
            if (count_even > count_odd)
            {
                cout << count_even - (n / 2) << endl;
            }
            else
            {
                cout << count_odd - (n / 2) << endl;
            }
        }
    }
    return 0;
}
