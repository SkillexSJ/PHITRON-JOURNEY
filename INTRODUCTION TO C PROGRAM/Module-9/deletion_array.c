#include <stdio.h>

int a[100000], b[100000]; // age declare kore rakha valo

int main()
{

    int length = 0;

    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    int index; // array er size jodi 5 hoy tahole index 0 theke 4 porjonto niye kaj korte parbo
    scanf("%d", &index);

    for (int i = index; i < length - 1; i++) // eikhane seseher elemnt ta lagbe na ktai length -1 porjonto loop chollo
    {
        a[i] = a[i + 1];
    }

    length--; // delete korar khtere length ta komate hoy karon ami ghor delete korchi

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}