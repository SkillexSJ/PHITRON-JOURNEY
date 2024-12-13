#include <stdio.h>

int a[100000], b[100000];

int main()
{

    int length1 = 0;

    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0, j = length1 - 1; i < length1; i++, j--)
    {

        b[j] = a[i];
    }

    for (int i = 0; i < length1; i++)
    {
        a[i] = b[i]; // eikhane copy kore "a" array te rakhte hobe nahole only b tei reverse theke jabe
    }

    for (int i = 0; i < length1; i++)
    {
        pintf("%d", a[i]);
    }

    return 0;
}