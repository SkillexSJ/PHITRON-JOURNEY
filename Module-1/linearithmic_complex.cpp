#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // Sorting is typically O(n log n)

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    /// arekvabe hoy

    for (int i = 1; i <= n; i *= 2)
    {
        for (int j = 1; j <= n; j *= 2)
        {
            cout << j;
        }

    } // O(n) * O(log n ) = O(n log n)

    return 0;
}
