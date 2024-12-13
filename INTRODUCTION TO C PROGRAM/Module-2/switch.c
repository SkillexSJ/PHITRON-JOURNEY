#include <stdio.h>

int main()
{
    int day = 2, hour = 15;

    switch (day)
    {
    case 1:
        switch (hour)
        {
        case 10:
            printf("shokal 10 ta baje \n");

            break;
        }
        printf("Saturday \n");

        break;
    case 2:
        switch (hour)
        {
        case 15:
            printf("Robibar 15ta  \n");
        }
        printf("sunday \n");

        break;
    case 3:
        printf("monday\n");

        break;
    case 4:
        printf("tuesday \n");

        break;
    case 5:
        printf("wednesday\n");

        break;
    case 6:
        printf("thusrday \n");

        break;
    case 7:
        printf("friday \n");

        break;

    default:
    {
        printf("Wrong day \n");
    }
    break;
    }

    return 0;
}