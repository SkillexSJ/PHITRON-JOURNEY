#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);

    long long int arr[N];

    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (long long int i = 0; i < N; i++)
    {
        if (arr[i] < 1)
        {
            printf("Entry-level candidate\n");
        }

        else if (arr[i] >= 1 && arr[i] <= 3)
        {

            printf("Junior candidate\n");
        }

        else if (arr[i] >= 4 && arr[i] <= 7)
        {

            printf("Mid-level candidate\n");
        }

        else if (arr[i] > 7)
        {

            printf("Senior candidate\n");
        }
    }

    return 0;
}