
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

    int num;
    cin >> num;

    cout << adj_list[num].size() << endl; // kar kar sathe direct connection eikhane pawa jabe

    return 0;
}
