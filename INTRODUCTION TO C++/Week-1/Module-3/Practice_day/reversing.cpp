
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int *n = new long long int;

    cin >> *n;

    long long int *arr = new long long int[*n];

    for (int i = 0; i < *n; i++)
    {

        cin >> arr[i];
    }

    for (int i = 0, j = *(n)-1; i < *(n) / 2; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    for (int i = 0; i < *n; i++)
    {

        cout << arr[i];
    }

    return 0;
}
