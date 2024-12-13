#include <stdio.h>

// ei problem e shadharon vvabe hocche ar amake main function eo value ta ke pathate hobe tai array nisi areka nij thheke index nisi oita baraisi bar bar

void print(int a, int n, int result[], int *index)
{
    if (a > n)
    {
        return;
    }

    result[*index] = a;
    (*index)++;

    print(a + 1, n, result, index);

    if (a != n)
    {
        result[*index] = a;
        (*index)++;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int n;
        scanf("%d", &n);

        int result[2 * n];
        int index = 0;

        print(1, n, result, &index);

        for (int i = 0; i < index; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
