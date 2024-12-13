#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int min_pos = 0, max_pos = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    int temp = arr[min_pos];

    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}