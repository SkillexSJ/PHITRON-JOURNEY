#include <stdio.h>

int found;

long long int missing_finder(long long int pawa_gun, long long int m, long long int *result)
{

    if (m % pawa_gun == 0)
    {
        *result = m / pawa_gun;
        return *result;
    }
    else
    {
        found = 0;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int pawa_gun = a * b * c;
        long long int result;

        found = 1;

        missing_finder(pawa_gun, m, &result);

        if (!found)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", result);
        }
    }

    return 0;
}