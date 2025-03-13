
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> res;

    for (auto it : s)
    {

        res.insert(it);
    }

    for (auto it : res)
    {

        cout << it;
    }

    return 0;
}
