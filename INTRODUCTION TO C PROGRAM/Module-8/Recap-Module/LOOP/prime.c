#include <stdio.h>

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) == 2) // eitao
    {
        if (n <= 0 || m <= 0)
        {
            break;
        }

        if (n < m) // eijaygta notun shikhlam
        {
            int temp = n;
            n = m;
            m = temp;
        }
        int sum = 0;
        printf("\n");

        for (int i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }

        printf(" sum =%d", sum);
    }
}