#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    int freq[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int count_freq = 0;

    for (int i = 1; i <= 100000; i++)
    {
        if (freq[i] == 1)
        {
            count_freq++;
        }
    }

    printf("%d\n", count_freq);

    return 0;
}