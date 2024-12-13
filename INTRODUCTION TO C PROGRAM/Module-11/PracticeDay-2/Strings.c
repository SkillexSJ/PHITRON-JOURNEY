#include <stdio.h>
#include <string.h>

int main()
{
    char a[10 + 1];
    char b[10 + 1];

    scanf("%s %s", a, b);

    printf("%d %d\n", strlen(a), strlen(b));

    char new[22];
    new[0] = '\0';

    strcat(new, a);
    strcat(new, b);

    printf("%s\n", new);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}