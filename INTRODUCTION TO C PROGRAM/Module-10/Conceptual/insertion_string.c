#include <stdio.h>

int main()
{
    char word[8];

    scanf("%s", word);

    for (int i = 6; i >= 2; i--) // right to left jacche
    {
        word[i + 1] = word[i];
    }

    word[2] = 'c';

    return 0;
}