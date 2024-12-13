#include <stdio.h>

int main()
{
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        // cnt++;
        // printf("%d", cnt);  eikhane loop ta 3bar cholbe c++ ta 3 hobe
        for (int k = 0; k < 10; k++)
        {
            // cnt++;
            // printf("%d\n", cnt);  //eikhane inner loop ta 30 bar cholbe karon uporer outer loop er sathe eita gun hoye ase
            for (int j = 0; j < 2; j++)
            {
                // cnt++;
                // printf("%d\n", cnt); eita cholbe 60 bar (tahole bujha gelo ekta inner loop tar ager loop er poriman koto  er sathe gun hote thakbe )
            }
        }
    }

    return 0;
}