#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    char s2[1001];
    char s3[1001];

    scanf("%s %s %s", s1, s2, s3);

    int count = 0;
    for (size_t i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i] || s1[i] != s3[i]) // ei condition ta dite vule gesi
        {

            if (s1[i] != s2[i]) // s1 e target korsi
            {
                s2[i] = s1[i];
                count++;
            }

            if (s1[i] != s3[i])
            {
                s3[i] = s1[i];
                count++;
            }
        }
    }
    printf("%d\n", count);
}