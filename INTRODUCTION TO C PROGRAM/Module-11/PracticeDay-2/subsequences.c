#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];

    scanf("%999s", S);
    char comp[] = "hello";

    int length = strlen(S);
    int length2 = strlen(comp);

    int j = 0;

    for (int i = 0; i < length && j < length2; i++)
    {
        if (S[i] == comp[j])
        {
            j++;
        }
    }

    if (j == length2)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
