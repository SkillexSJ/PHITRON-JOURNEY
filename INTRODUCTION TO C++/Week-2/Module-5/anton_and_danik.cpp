
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    string s;

    cin >> s;

    int anton = 0;

    int danik = 0;

    for (auto i = s.begin(); i < s.end(); i++)
    {
        if (*i == 'A')
        {

            anton++;
        }

        if (*i == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }

    else if (danik > anton)
    {

        cout << "Danik" << endl;
    }

    else if (anton == danik)
    {

        cout << "Friendship" << endl;
    }
    return 0;
}
