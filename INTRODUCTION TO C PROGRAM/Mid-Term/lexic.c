#include <stdio.h>
#include <string.h>

int main()
{

    char S1[1001];
    char S2[1001];
    char S3[1001];

    scanf("%s %s %s", S1, S2, S3);

        // s1 = max
    if (strcmp(S1, S2) >= 0 && strcmp(S1, S3) >= 0)
    {

        printf("%s\n", S1);
    }

    // s2= max
    else if (strcmp(S2, S1) >= 0 && strcmp(S2, S3) >= 0)
    {

        printf("%s\n", S2);
    }

    // s3= max
    else
    {

        printf("%s\n", S3);
    }

    // s1 = min
    if (strcmp(S1, S2) <= 0 && strcmp(S1, S3) <= 0)
    {

        printf("%s\n", S1);
    }
    // s2 = min
    else if (strcmp(S2, S1) < 0 && strcmp(S2, S3) < 0)
    {

        printf("%s\n", S2);
    }
    // s3 = min
    else
    {

        printf("%s\n", S3);
    }

    return 0;
}