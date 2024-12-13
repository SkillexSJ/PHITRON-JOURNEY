#include <stdio.h>
#include <string.h>
int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        char s[100];

        scanf("%s", s);

        int string_lenth = strlen(s);

        int max_length = 10;
        int new_legth = string_lenth - 2;

        if (string_lenth <= max_length)
        {
            printf("%s\n", s);
        }

        else
        {
            printf("%c%d%c\n", s[0], new_legth, s[string_lenth - 1]);
        }
    }

    return 0;
}