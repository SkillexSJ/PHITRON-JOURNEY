
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4, 5};

    int k = 2;

    auto it1 = l1.begin();
    advance(it1, 1);

    auto it2 = prev(l1.end(), 2);

    iter_swap(it1, it2);

    for (auto &i : l1)
    {
        cout << i << " ";
    }

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
