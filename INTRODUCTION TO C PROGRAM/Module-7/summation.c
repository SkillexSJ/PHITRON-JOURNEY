#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long int A[N];
    long long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        sum += A[i];
    }

    if (sum < 0)
    {
        printf("%lld", -sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}
