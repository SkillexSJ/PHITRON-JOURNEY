#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];

    scanf("%[^\n]", s);

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }

        else if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}