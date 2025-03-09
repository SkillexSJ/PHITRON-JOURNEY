
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100001];
bool visited[100001];
int level[100001];

void bfs(int src)
{
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int child : adj_list[node])
        {

            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[node] + 1;
            }
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

    int q;
    cin >> q;

    while (q--)
    {

        int src, desti;
        cin >> src >> desti;

        bfs(src);

        if (level[desti] != -1)
        {
            cout << level[desti] << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
