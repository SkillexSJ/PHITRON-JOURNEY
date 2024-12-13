#include <stdio.h>

int main()
{
    int n, m, x;

    scanf("%d %d %d", &n, &m, &x);

    int arr[n][m];
    int number[x];

    int freq[x];

    for (int i = 0; i < x; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < x; k++)
            {
                if (arr[i][j] == number[k])
                {
                    freq[k]++;
                }
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}