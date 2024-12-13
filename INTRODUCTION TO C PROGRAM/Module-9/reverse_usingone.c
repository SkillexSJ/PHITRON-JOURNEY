#include <stdio.h>

int a[100000], b[100000];

int main()
{

    int length1;

    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0, j = length1 - 1; i <= j; i++, j--) // i ta j porjonto cholbe karon j komte komte majhkhane ashbe ar i barte barte majhkhane ashbe tokhon e loop off kore dibo
    {
        int temp = a[i];

        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}