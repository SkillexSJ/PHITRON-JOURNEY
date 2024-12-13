#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);

        printf("Line 1 \n");
        printf("Line 2 \n");

        if (i == 5)
        {
            break; // eitar mane holo shorto puron hoise loop theke ber hoye ja

            continue; // eitar mane holo shorto paiso valo tar porer gula korar dorkar nai.kintu upore giye abar loop er kaj korte thako
        }
        printf("line 3 \n");
        printf("line 4 \n");
    }

    return 0;
}