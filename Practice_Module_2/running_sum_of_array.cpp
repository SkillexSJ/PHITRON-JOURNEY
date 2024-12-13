
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> prefix(n + 1);

    prefix[1] = arr[1];

    for (int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}
