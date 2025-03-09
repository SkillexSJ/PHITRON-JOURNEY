#include <bits/stdc++.h>
using namespace std;

/// chele jokhon tar babar baba hoye jabe tokhon cycle pabo

vector<int> adj_list[201];
bool visited[201];
bool path_visit[201]; // directed graph er jonno

bool cycle_detect;

void dfs(int src)
{

    visited[src] = true;
    path_visit[src] = true; // path visit kora hoyeche

    for (int child : adj_list[src])

    {

        if (visited[child] && path_visit[child]) // jodi oi node ta visit hoye thake and tar parent er parent tar
        {
            cycle_detect = true;
        }
        if (!visited[child])
        {

            dfs(child);
        }
    }

    path_visit[src] = false; // return er somoy path false hoye ashte thakbe
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
    }
    memset(visited, false, sizeof(visited));
    memset(path_visit, false, sizeof(path_visit));

    cycle_detect = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
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
