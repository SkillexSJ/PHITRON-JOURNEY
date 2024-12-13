#include <stdio.h>
#include <string.h>

int main()
{
    char x[20 + 1];
    char y[20 + 1];

    scanf("%s %s", x, y);

    int length_x = strlen(x), length_y = strlen(y);

    int comp = strcmp(x, y);
    int comp2 = strcmp(y, x);

    if (comp < 0)
    {
        printf("%s\n", x);
    }

    else
    {
        printf("%s\n", y);
    }

    return 0;
}