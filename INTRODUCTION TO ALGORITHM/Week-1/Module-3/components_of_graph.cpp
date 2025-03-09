
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[10001];
bool visited[10001];

void dfs(int src)
{
    // ei recursion er kono base case nai karon visit na hole emnitei fire ashbe
    // cout << src << " ";
    visited[src] = true; // visit hoye gelo

    for (int child : adj_list[src])
    {

        if (visited[child] == false) // false hoilei oi child ke dfs pathabo
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i); // jokhon e visited false pabo tokhon e bujhbo je eita notun ekta graph
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
