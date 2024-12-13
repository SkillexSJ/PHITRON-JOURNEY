#include <stdio.h>

int freq[100005];
int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        freq[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {

        printf("%d\n", freq[i]);
    }

    return 0;
}