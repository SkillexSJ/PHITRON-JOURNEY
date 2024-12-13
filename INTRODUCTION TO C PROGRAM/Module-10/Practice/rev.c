#include <stdio.h>
#include <string.h>

int main()
{

    char s[1000];

    scanf("%s", s);

    int length = strlen(s);

    int l = 0, r = length - 1;
    int pal = 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            pal = 0;
            break;
        }

        l++;
        r--;
    }

    if (pal == 1)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}