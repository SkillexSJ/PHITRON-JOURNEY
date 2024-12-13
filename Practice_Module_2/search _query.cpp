
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;

    cin >> q;

    while (q--)
    {
        int khujo;

        cin >> khujo;

        int l = 0;
        int r = n - 1;

        bool paisi = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] == khujo)
            {
                paisi = true;
                break;
            }

            else if (v[mid] > khujo)
            {
                r = mid - 1;
            }

            else
                l = mid + 1;
        }

        (paisi) ? cout << "YES" : cout << "NO";

        cout << endl;
    }

    return 0;
}
