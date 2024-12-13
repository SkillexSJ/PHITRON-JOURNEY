#include <stdio.h>

void print(int a, int n)
{
    if (a > n)
    {
        return;
    }

    print(a + 1, n);

    if (a < n)
    {
        printf(" ");
    }
    printf("%d", a);
}

int main()
{
    int n;
    scanf("%d", &n);

    print(1, n);
    return 0;
}
