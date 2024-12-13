
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main()
{
    long long int *n = new long long int;
    cin >> *n;

    long long int *arr = new long long int[*n];

    long long int max_num = LLONG_MIN;

    for (int i = 0; i < *n; i++)
    {
        cin >> arr[i];

        max_num = max(max_num, arr[i]);
    }

    cout << max_num << endl;

    return 0;
}
