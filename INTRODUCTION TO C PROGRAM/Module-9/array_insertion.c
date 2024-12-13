#include <stdio.h>

int a[100000], b[100000];// age declare kore rakha valo 

int main()
{

    int length = 0;

    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    length++; // age ghor khali kore nibo karon khali na kore dile overwrite hoye jabe

    for (int i = length - 1; i >= index; i--) // ekdom sehs ghor theke kaj ta korbo
    {
        a[i + 1] = a[i]; // notun ghor ta sesher element er jonno hoye jabe
    }

    a[index] = value; // ekhon ami index e jake iccha boshate parbo

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}