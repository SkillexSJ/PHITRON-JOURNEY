
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100001];
bool visited[100001];
int level[100001];

void bfs(int src)
{

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
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    bfs(0);
    int l;
    cin >> l;

    vector<int> level_print;

    for (int i = 0; i < n; i++)
    {
        if (level[i] == l) // level mile gele oi node ke push
        {
            level_print.push_back(i);
        }
    }

    for (auto i = level_print.rbegin(); i != level_print.rend(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
