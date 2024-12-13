
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[100];
    int arr2[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < 100; i++)
    {
        cin >> arr2[i];
    }

    int noutn_arr[100];

    for (int i = 0, j = 0; i < sizeof(arr1); i++)
    {

        if (arr1[i] == arr2[j])
        {
            noutn_arr[i] = 1;
        }

        else
        {
            noutn_arr[i] = 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << noutn_arr[i] << " ";
    }

    return 0;
}
