#include <stdio.h>

int main()
{
    int x, y, z;

    int *p = &x;
    int *q = &y;
    int *r = &z;

    scanf("%d %d %d", p, q, r);
    // p boro
    if (*p <= *q && *p <= *r)
    {
        printf("%d ", *p);

        if (*q > *r)
        {
            printf("%d", *q);
        }

        else
        {
            printf("%d", *r);
        }
    }

    // q boro
    else if (*q <= *q && *q <= *r)
    {
        printf("%d ", *q);

        if (*p > *r)
        {
            printf("%d", *p);
        }

        else
        {
            printf("%d", *r);
        }
    }

    else
    {
        printf("%d ", *r);
        if (*p > *q)
        {
            printf("%d", *p);
        }

        else
        {
            printf("%d\n", *q);
        }
    }

    return 0;
}