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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += abs(*(p + i));
    }

    printf("%d\n", sum);

    return 0;
}