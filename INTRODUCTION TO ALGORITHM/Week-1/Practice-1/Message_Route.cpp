
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100001];
int parent[100001];
bool visited[100001];

void bfs(int src, int n)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        if (node == n)
        {
            return;
        }

        for (int child : adj_list[node])
        {

            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = node;
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
    memset(parent, -1, sizeof(parent));
    memset(visited, false, sizeof(visited));

    bfs(1, n);

    if (!visited[n])
    {

        cout << "IMPOSSIBLE" << endl;
    }

    else
    {

        int node = n;
        vector<int> path;
        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }

        cout << path.size() << endl;
        for (int i = path.size() - 1; i >= 0; i--)
        {
            cout << path[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
