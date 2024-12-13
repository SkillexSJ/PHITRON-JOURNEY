#include <stdio.h>

int main()
{
    char C;
    scanf("%c", &C);

    if (C >= 'a' || C <= 'z')
    {
        C++;
        printf("%c\n", C);
    }
    else if (C == 'z')
    {
        C = 'a';
        printf("%c\n", C);
    }
    return 0;
}