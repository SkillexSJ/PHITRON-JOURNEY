#include <stdio.h>
#include <limits.h>

int max = INT_MIN;

void max_founder(int *arr, int n, int i)
{

    if (arr[i] > max)
    {
        max = arr[i];
    }

    if (i == n - 1)
    {
        return;
    }

    max_founder(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_founder(arr, n, 0);

    printf("%d", max);

    return 0;
}