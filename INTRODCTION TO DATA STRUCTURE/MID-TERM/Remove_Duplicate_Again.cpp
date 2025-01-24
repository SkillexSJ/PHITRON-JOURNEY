
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }

    for (auto it1 = l.begin(); it1 != l.end(); it1++)
    {
        for (auto it2 = next(it1); it2 != l.end();)
        {
            if (*it1 == *it2)
            {
                it2 = l.erase(it2);
            }
            else
            {
                it2++;
            }
        }
    }

    l.sort();

    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
