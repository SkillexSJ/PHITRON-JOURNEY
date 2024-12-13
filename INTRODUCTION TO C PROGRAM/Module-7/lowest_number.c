#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    int min = INT_MAX;
    int index = -1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i + 1;
        }
    }

    printf("%d %d", min, index);

    return 0;
}