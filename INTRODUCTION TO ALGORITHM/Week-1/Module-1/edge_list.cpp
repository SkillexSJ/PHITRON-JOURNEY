
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;

    cin >> n >> e;

    vector<pair<int, int>> edges; // joray joray rakhbo

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        edges.push_back({a, b});
    }

    for (auto range : edges)
    {

        cout << range.first << " " << range.second;
        cout << endl;
    }

    return 0;
}
