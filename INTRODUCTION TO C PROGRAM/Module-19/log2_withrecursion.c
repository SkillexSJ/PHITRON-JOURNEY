#include <stdio.h>

long long log_founder(long long n)
{

    if (n <= 1)
    {
        return 1;
    }

    return 1 + log_founder(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = log_founder(n);

    printf("%d\n", ans);

    return 0;
}