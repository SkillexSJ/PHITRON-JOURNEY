
#include <bits/stdc++.h>
using namespace std;

// shortest distance ber kora muloto level wise gelei hoye jay

vector<int> adjacency_list[10001];
bool visited[10001];
int level[10001]; // level er jonno

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0; // source er level 0 hoy

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : adjacency_list[p])
        {
            if (!visited[child])
            {

                q.push(child);
                visited[child] = true;
                level[child] = level[p] + 1; // child er level parent er level theke 1 beshi hoy
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

        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level)); // dhore nei shobar level -1

    int src, desti;
    cin >> src >> desti;

    bfs(src);

    cout << "shortest distance to ->  " << desti << " is " << level[desti] << endl;

    return 0;
}
