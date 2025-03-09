#include <bits/stdc++.h>
using namespace std;

/// chele jokhon tar babar baba hoye jabe tokhon cycle pabo

vector<int> adj_list[201];
bool visited[201];
int parent[201]; // cycle detect er jonno

bool cycle_detect;

void bfs(int s)
{

    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {

        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (visited[child] && parent[par] != child) // jodi oi node ta visit hoye thake and tar parent er parent tar
            {
                cycle_detect = true;
                return;
            }
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = par;
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
    memset(parent, -1, sizeof(parent));
    
    cycle_detect = false;
    
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])  
        {
            bfs(i);
            if (cycle_detect)  
                break;
        }
    }

    if (cycle_detect)
    {
        cout << "cycle" << endl;
    }

    else
        cout << "NO cycle" << endl;

    return 0;
}
