#include <stdio.h>
#include <limits.h>

int max = INT_MIN;

int min = INT_MAX;

void founder(int *aho_vatija, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (aho_vatija[i] > max)
        {
            max = aho_vatija[i];
        }

        if (aho_vatija[i] < min)
        {
            min = aho_vatija[i];
        }
    }
}

void max_min(int *arr, int n)
{
    founder(arr, n);
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

    max_min(arr, n);

    printf("%d %d\n", min, max);

    return 0;
}