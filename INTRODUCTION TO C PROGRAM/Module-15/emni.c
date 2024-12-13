#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {

        int n;
        scanf("%d", &n);

        char s[n + 5];

        scanf("%s", s);

        int a_count = 0;
        int b_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                a_count++;
            }
            else if (s[i] == 'b')
            {
                b_count++;
            }
        }

        int result;

        if (a_count == 0 || b_count == 0)
        {
            result = 1;
        }
        else if (a_count == b_count)
        {
            result = 2 * a_count;
        }
        else
        {
            result = 2 * (a_count < b_count ? a_count : b_count) - 1;
        }
        printf("%d\n", result);
    }

    return 0;
}