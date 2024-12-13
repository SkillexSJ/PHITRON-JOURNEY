#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];

    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int index = s[i] - 'a';

        freq[index] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        int index = s[i] - 'a';
        if (freq[i] > 0)
        {
            printf("%c ", i + 'a');
            freq[i] = 0;
        }
    }

    return 0;
}