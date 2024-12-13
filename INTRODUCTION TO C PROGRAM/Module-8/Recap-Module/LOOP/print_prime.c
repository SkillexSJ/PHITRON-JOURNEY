#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0 && i != n)
            {
                continue;
            }

            else if (i == n)
            {
                printf("%d ", i);
                break;
            }
        }
    }

    return 0;
}