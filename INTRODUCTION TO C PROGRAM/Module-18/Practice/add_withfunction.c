#include <stdio.h>

int add(int a, int b)
{

    int sum = a + b;

    return sum;
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", add(x, y));

    return 0;
}