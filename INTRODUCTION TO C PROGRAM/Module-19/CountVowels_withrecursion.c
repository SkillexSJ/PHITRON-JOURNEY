#include <stdio.h>
#include <string.h>

int isVowel(char *vowel)
{
    int index = 0;
    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
    {
        return 1;
    }

    else
        return 0;
}

int vowel_count(char *s, int i)
{

    if (s[i] == '\0')
    {
        return 0;
    }

    if (isVowel(s[i]))
    {
        return 1 + vowel_count(s, i + 1);
    }

    else
        return 0 + vowel_count(s, i + 1);
}

int main()
{
    char s[201];
    fgets(s, sizeof(s), stdin);

    int ans = vowel_count(s, 0);

    printf("%d", ans);

    return 0;
}