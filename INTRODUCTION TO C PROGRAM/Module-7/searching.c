#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {

        scanf("%d", &arr[i]);
    }

    int search;
    scanf("%d", &search);

    int found = -1;

    for (int i = 0; i < N; i++)
    {
        if (search == arr[i])
        {
            found = i;
            break;
        }
        }

    printf("%d\n", found);

    return 0;
}