
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // O(n);

    sort(arr, arr + n); // O(logn)

    while (q--) // O(q)
    {
        int l = 0;
        int r = n - 1;

        int val;

        cin >> val;

        int flag = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (arr[mid] == val)
            {
                flag = 1;
                break;
            }

            else if (arr[mid] > val)
            {
                r = mid - 1;
            }

            else

            {

                l = mid + 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }

        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
