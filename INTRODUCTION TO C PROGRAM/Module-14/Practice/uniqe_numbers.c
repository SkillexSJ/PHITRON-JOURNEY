#include <stdio.h>
#include <string.h>
#define MAX_NUM 100000
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int freq[MAX_NUM] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    int count = 0;

    for (int i = 0; i < MAX_NUM; i++)
    {
        if (freq[i] > 0)
        {
            count++;
            freq[i] = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}