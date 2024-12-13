#include <stdio.h>
#include <string.h>

int main()
{

    char a[1000];

    scanf("%s", a);
    int length = strlen(a);

    int l = 0, r = length - 1;
    int flag = 1;

    while (l < r)
    {
        if (a[l] != a[r])
        {

            flag = 0;
            break;
        }

        l++;
        r--;
    }

    if (flag == 1)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}