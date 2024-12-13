#include <stdio.h>
#include <stdbool.h>

int main()
{

    int tourday = 4;

    if (tourday == 2)
    {
        bool boatache = true;

        if (boatache)
        {
            printf("Amra Srimangal Jacchi \n");
        }
        else
        {
            printf("Sylhet jamu \n");
        }
    }

    else if (tourday == 4)
    {
        bool boatache = false;
        if (boatache)
        {
            printf("Amra rangamati jabo \n");
        }
        else
        {
            printf("amra coxbazar jabo \n");
        }
    }

    else
    {
        printf("Kotaho jabo na \n");
    }

    return 0;
}