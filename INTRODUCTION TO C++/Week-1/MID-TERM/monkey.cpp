#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int len = strlen(s);

        sort(s, s + len);

        char sorted_with_space[100001];
        int index = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
                sorted_with_space[index++] = s[i];
            }
        }

        sort(sorted_with_space, sorted_with_space + index);

        sorted_with_space[index] = '\0';

        cout << sorted_with_space << endl;
    }

    return 0;
}
