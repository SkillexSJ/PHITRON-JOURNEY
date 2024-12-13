#include <stdio.h>

int a[100000], b[100000];

int main()
{

    int length1 = 0, length2 = 0;

    scanf("%d", &length1);
    // before copy//
    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    // before copy/
    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }

    a[2] = 100; // ekhon a er man change korleo b er man change hobe na karon ekbar copy kore felse.

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}