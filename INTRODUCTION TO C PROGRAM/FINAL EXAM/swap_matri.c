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

    for (int i = 0; i < n; i++) // eikhane column swap hobe ek ek ta row theke
    {

        int temp = arr[i][0];

        arr[i][0] = arr[i][m - 1]; // m-1 bolte sesh column bujhaise
        arr[i][m - 1] = temp;
    }

    for (int i = 0; i < m; i++)
    {

        int temp = arr[0][i];

        arr[0][i] = arr[n - 1][i]; // n-1 bolte sesh row bujhiase
        arr[n - 1][i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
