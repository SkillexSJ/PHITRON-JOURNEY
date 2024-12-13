#include <stdio.h>

int swap(int *a, int *b)
{

    int temp = *a;

    *a = *b;

    *b = temp;

    return 0;
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}