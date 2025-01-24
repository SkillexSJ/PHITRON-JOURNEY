
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s; // set e duplicate value thakbe na

    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val); // insert function use kore value insert korlam
        // time complexity O(log(n))
    }

    for (auto i : s)
    {
        cout << i << " "; // set e value gula sorted order e thakbe
    }

    if (s.count(5)) // khuje ei function diye dekha jay value ache kina
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
