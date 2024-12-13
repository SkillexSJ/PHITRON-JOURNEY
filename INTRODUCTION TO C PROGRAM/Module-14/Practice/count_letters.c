#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, x;

        long long int *p = &n;
        long long int *q = &x;

        scanf("%lld %lld", p, q);

        long long int max = LLONG_MIN;

        for (long long int i = 0; i < *p; i++)
        {
            long long int Si, Ri;
            scanf("%lld %lld", &Si, &Ri);

            if (Si <= x && Ri > max)
            {
                max = Ri;
            }
        }

        printf("%lld\n", max);
    }
    return 0;
}
