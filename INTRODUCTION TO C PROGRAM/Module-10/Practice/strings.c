#include <stdio.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s %s", a, b);

    int length1 = 0, length2 = 0;

    while (a[length1] != '\0') // eivabe sting er length neya shikhbo
    {
        length1++;
    }

    while (b[length2] != '\0')
    {
        length2++;
    }

    char merge[22];

    int i = 0;

    while (a[i] != '\0')
    {
        merge[i] = a[i]; // eivabe string connect kora shikhbo
        i++;
    }

    int j = 0;

    while (b[j] != '\0')
    {
        merge[i + j] = b[j];
        j++;
    }

    merge[length1 + length2] = '\0';

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", length1, length2);
    printf("%s\n", merge);
    printf("%s %s\n", a, b);

    return 0;
}