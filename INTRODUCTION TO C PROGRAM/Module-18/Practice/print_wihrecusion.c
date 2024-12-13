#include <stdio.h>

void kire(int a, int n)
{
    if (a >= n)
    {
        return;
    }

    printf("I love Recursion\n");

    kire(a + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    kire(0, n);

    return 0;
}