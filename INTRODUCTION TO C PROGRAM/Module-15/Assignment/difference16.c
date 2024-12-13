#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *p = &a;
    int *q = &b;

    int dif = abs(*p - *q);

    printf("%d\n", dif);

    return 0;
}