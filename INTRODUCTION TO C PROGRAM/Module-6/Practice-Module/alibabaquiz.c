#include <stdio.h>

int main()
{
    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int test1 = a + b - c;
    long long int test2 = a - b + c;

    long long int test3 = a * b + c;
    long long int test4 = a * b - c;

    long long int test5 = a + b * c;
    long long int test6 = a - b * c;

    if (test1 == d)
    {
        printf("YES\n");
    }
    else if (test2 == d)
    {
        printf("YES\n");
    }
    else if (test3 == d)
    {
        printf("YES\n");
    }
    else if (test4 == d)
    {
        printf("YES\n");
    }
    else if (test5 == d)
    {
        printf("YES\n");
    }
    else if (test6 == d)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}