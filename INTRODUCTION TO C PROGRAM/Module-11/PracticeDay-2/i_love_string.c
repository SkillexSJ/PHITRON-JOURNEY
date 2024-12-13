#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        char S[51];
        char N[51];

        scanf("%s %s", S, N);

        int length_s = strlen(S), length_n = strlen(N);

        char new[length_s + length_n + 1];

        int index_of_new = 0;

        for (int i = 0; i < length_s || i < length_n; i++)
        {
            if (i < length_s) // mul logic eikhane duita alada vabe dekhbe
            {
                new[index_of_new++] = S[i];
            }

            if (i < length_n) // mul logic eikhane duita alada vabe dekhbe
            {
                new[index_of_new++] = N[i];
            }
        }

        new[index_of_new] = '\0';

        printf("%s\n", new);
    }

    return 0;
}