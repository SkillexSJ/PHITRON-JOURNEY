
#include <bits/stdc++.h>
using namespace std;

// path printing er jonno amader parent wise tracking kore jete hobe

vector<int> adjacency_list[10001];
bool visited[10001];
int level[10001];
int parent[10001]; // parent er jonno track

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    // source er parent -1 hoy tail alada kore likhlam na

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
                level[child] = level[p] + 1;
                parent[child] = p; // child er parent ke "parent array te rekhe dilam"
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent)); // shobar parent -1 dhore nibo

    int src, desti;
    cin >> src >> desti;

    bfs(src);

    // print er kaj ulta hobe tobe vector niye thik kora jay

    int node = desti;
    vector<int> path;
    while (node != -1)
    {
        path.push_back(node); // eita muloto child ta
        node = parent[node];  // protibar parent array theke anbo
    }

    reverse(path.begin(), path.end());

    for (int num : path)
    {

        cout << num << " ";
    }

    return 0;
}
