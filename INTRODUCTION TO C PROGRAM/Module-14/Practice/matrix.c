#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum_primary = 0;
    int sum_secondary = 0;

    for (int i = 0; i < n; i++)
    {
        sum_primary += arr[i][i];
        sum_secondary += arr[i][n - 1 - i];
    }

    printf("%d\n", abs(sum_primary - sum_secondary));

    return 0;
}