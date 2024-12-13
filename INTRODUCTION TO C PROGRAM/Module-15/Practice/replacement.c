#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * (sizeof(int)));

    int *p = arr;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) < 0)
        {
            printf("2\n");
        }

        else
        {
            printf("1\n");
        }
    }

    return 0;
}