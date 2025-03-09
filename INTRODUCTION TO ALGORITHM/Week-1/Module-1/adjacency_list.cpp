
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;

    cin >> n >> e;

    vector<int> list[n + 1];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        list[a].push_back(b); // a th node e b ke rakhlam
        list[b].push_back(a); // undirected er jonno
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (auto range : list[i])
        {

            cout << range << " ";
        }
        cout << endl;
    }

    return 0;
}
