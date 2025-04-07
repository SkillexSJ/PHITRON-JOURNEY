
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59745595

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    map<string, string> misha_map;

    while (q--)
    {
        string old, new_name;
        cin >> old >> new_name;
        if (misha_map.find(old) != misha_map.end())
        {
            string old_name = misha_map[old];
            misha_map.erase(old);
            misha_map[new_name] = old_name;
        }
        else
        {
            misha_map[new_name] = old;
        }
    }

    cout << misha_map.size() << endl;
    for (auto it = misha_map.begin(); it != misha_map.end(); it++)
    {
        cout << it->second << " " << it->first << endl;
    }
    return 0;
}
