#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;
vector<pair<int, int>> adj_list[MAX_N];
long long desti[MAX_N];
int parent[MAX_N];

int n, e;

void dijkstra(int src)
{

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, src});
    parent[src] = -1;
    desti[src] = 0;

    while (!pq.empty())
    {
        auto par = pq.top();
        int par_node = par.second;
        long long par_dist = par.first;
        pq.pop();

        if (par_dist != desti[par_node])
            continue;

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dist = child.second;
            if (desti[par_node] + child_dist < desti[child_node])
            {
                desti[child_node] = desti[par_node] + child_dist;
                parent[child_node] = par_node;
                pq.push({desti[child_node], child_node});
            }
        }
    }
}

int main()
{

    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        desti[i] = LLONG_MAX;
        parent[i] = -1;
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    dijkstra(1);

    if (desti[n] == LLONG_MAX)
    {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> path;

    for (int cur = n; cur != -1; cur = parent[cur])
    {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end());

    for (auto x : path)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}