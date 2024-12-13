#include <stdio.h>

int main()
{
    long long int N, T;

    scanf("%lld %lld", &N, &T);

    long long int arr[N];

    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    int count = 0;
    for (long long int i = 0; i < N; i++)
    {
        sum += arr[i];

        if (sum <= T)
        {
            count++;
        }

        else
        {

            break;
        }
    }

    printf("%d\n", count);

    return 0;
}