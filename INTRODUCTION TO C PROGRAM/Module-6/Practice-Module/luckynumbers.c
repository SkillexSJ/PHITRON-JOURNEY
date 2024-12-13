#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 10 && N <= 99)
    {

        int digit = N % 10;

        int seconddigit = N / 10;

        if (seconddigit == 0)
        {
            printf("YES\n");
        }

        else if (digit % seconddigit == 0 || seconddigit % digit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}