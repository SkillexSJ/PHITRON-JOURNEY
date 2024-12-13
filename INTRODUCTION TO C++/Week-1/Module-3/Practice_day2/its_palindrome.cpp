
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    int its_pali = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            its_pali = 0;
            break;
        }
    }

    if (its_pali)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
