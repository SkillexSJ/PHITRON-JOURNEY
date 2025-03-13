#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    vector<long long> temp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }

    long long target;
    cin >> target;

    sort(temp.begin(), temp.end());

    int l = 0, r = n - 1;
    long long result = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (temp[mid] == target)
        {

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == target)
                {
                    result = i;
                    break;
                }
            }
            break;
        }
        else if (temp[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << result << endl;
    return 0;
}
