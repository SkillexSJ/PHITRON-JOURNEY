
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[10001];
bool visited[10001];
int counter = 0; /// count er jonno
void dfs(int src)
{
    // ei recursion er kono base case nai karon visit na hole emnitei fire ashbe
    counter++;
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
    int src;
    cin >> src;
    dfs(src);

    cout << counter << endl;

    return 0;
}
