#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    bool found = false;

    for (int i = a; i <= b; i++)
    {

        if (i == 4 || i == 7)
        {
            printf("%d ", i);
            found = true;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    return 0;
}
