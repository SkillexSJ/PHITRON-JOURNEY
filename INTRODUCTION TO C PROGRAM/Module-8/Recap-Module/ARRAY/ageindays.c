#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int year = 365, month = 30;

    year = n / 365;

    int remaining_days = n % 365;

    month = remaining_days / 30;

    int final_days = remaining_days % 30;

    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", final_days);

    return 0;
}