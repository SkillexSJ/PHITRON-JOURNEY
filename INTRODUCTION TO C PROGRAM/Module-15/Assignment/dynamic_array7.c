#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    int *ar = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < n; i++)
    {

        ar = realloc(ar, i * sizeof(int));

        *(ar + i) = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}