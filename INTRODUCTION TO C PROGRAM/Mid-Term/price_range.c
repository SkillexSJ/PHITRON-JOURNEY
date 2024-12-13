#include <stdio.h>

int main()
{
    long long int N, X, Y;

    scanf("%lld %lld %lld", &N, &X, &Y);

    long long int arr[N];

    int count = 0;

    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= X && arr[i] <= Y)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}