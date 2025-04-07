
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59507363

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<char> arr1(n);
        vector<char> arr2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        bool is_same = true;

        for (int i = 0; i < n; i++)
        {

            if ((arr1[i] == 'B' && arr2[i] == 'G') || (arr1[i] == 'G' && arr2[i] == 'B'))
            {
                continue;
            }

            else
            {
                is_same = false;
                break;
            }
            if (arr1[i] != arr2[i])
            {
                is_same = false;
                break;
            }
        }

        if (is_same)
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
