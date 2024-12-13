#include <stdio.h>

void zeroshifer(int *a, int b)
{
    int nonzerindex = 0;

    for (int i = 0; i < b; i++)
    {
        if (a[i] != 0)
        {
            a[nonzerindex] = a[i];
            if (nonzerindex != i)
            {
                a[i] = 0;
            }

            nonzerindex++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
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

    zeroshifer(arr, n);

    return 0;
}