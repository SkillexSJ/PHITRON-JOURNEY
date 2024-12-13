#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int arr[N];
    int count_one = 0;
    int count_zero = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            count_zero++;
        }

        else if (arr[i] == 1)
        {
            count_one++;
        }
    }

    printf("%d %d\n", count_zero, count_one);

    return 0;
}