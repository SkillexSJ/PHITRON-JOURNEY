
#include <bits/stdc++.h>
using namespace std;

// total TC = O(N+E) ba O(V+E)

vector<int> adjaecency_list[10001];
bool visited[10001]; // jate duplicate value insert na hoye jay

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true; // src node visited kora hoye jay

    while (!q.empty()) // O(N)
    {
        // ber kora
        int node = q.front();
        q.pop();

        // kaj kora
        // cout << node << " ";

        // child pushing
        for (int child : adjaecency_list[node]) // O(E)
        {
            if (!visited[child]) // oi child jodi visited na hoy tahole take push korabo
            {

                q.push(child);
                visited[child] = true; // true kore dibo tar ar kaj nai
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

        adjaecency_list[a].push_back(b);
        adjaecency_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited)); // dhore nibo je keu visited na

    int src, destination;
    cin >> src >> destination;
    bfs(src); // source ke pathailam

    (visited[destination] == true) ? cout << "YES" : cout << "NO" << endl; // dekhbo gese kina
    return 0;
}
