
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59787309

int main()
{
    int n;
    cin >> n;

    set<string> names;
    vector<string> chats;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        chats.push_back(name);
    }

    vector<string> res(n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (names.insert(chats[i]).second)
        {
            res.push_back(chats[i]);
        }
    }

    for (auto it : res)
    {
        cout << it << endl;
    }

    return 0;
}
