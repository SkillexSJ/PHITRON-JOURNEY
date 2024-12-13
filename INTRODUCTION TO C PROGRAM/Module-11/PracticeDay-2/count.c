#include <stdio.h>

int main()
{
    char s[1000000 + 1];

    scanf("%s", s);

    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int digit = s[i] - '0';

        sum += digit;
    }

    printf("%d\n", sum);

    return 0;
}