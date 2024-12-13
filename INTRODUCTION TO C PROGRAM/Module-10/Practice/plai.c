#include <stdio.h>
int main()
{
    char str1[1005];
    char str2[1008];
    scanf("%s", str1);
    int l = 0;
    while (str1[l] != '\0')
    {
        l++;
    }
    int i = 0, j = l - 1;
    while (str1[i] != '\0')
    {
        str2[j] = str1[i];
        i++;
        j--;
    }
    int count = 0;
    i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            i++;
            count++;
        }
    }
    if (l == count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}