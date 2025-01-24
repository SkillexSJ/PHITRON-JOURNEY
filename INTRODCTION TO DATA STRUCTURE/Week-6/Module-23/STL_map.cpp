
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m; // key holo string, value holo int
    m["Shakil"] = 1;    // shakil key e 1 value rakhlam
    m["Rakib"] = 2;     // rakib key e 2 value rakhlam
    m["Sajid"] = 3;     // sajid key e 3 value rakhlam

    m.insert({"Soojib", 4}); // insert function use kore key value insert korlam Olog(n) complexity
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // key and value print korlam
    }

    if (m.count("Kuuta")) // khuje ei function diye dekha jay key ache kina
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
