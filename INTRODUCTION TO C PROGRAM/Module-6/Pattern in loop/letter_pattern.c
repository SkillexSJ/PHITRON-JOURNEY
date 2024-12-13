#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (char i = 0; i <= n; i++)
    {
        for (char j = 0; j <= i; j++)
        {
            printf("%c", 'A' + i);
        }
        printf(" \n");
    }

    return 0;
}