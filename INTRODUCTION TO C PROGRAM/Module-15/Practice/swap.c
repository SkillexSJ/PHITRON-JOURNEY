#include <stdio.h>

int main()
{
    int x, y;

    int *p = &x;
    int *q = &y;

    scanf("%d %d", p, q);

    int temp = *p;

    *p = *q;
    *q = temp;

    printf("%d %d\n", *p, *q);

    return 0;
}