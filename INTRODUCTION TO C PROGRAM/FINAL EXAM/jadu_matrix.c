#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int found = 1; // age thekei dhore nisi true

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i == m - 1 - j) // eikhane age primary ar secondary diagonal check kore nise
            {
                if (arr[i][j] != 1)
                {
                    found = 0;
                    break;
                }
            }

            else // eikhane baki diagnal gulo
            {
                if (arr[i][j] != 0)
                {
                    found = 0;
                    break;
                }
            }
        }
    }

    if (found)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}