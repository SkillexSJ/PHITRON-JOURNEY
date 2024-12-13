#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long int arr[N];
    int max = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        long long int difference = arr[i] - max;

        if (difference <= 0)
        {
            printf("%lld ", -difference);
        }
    }

    return 0;
}