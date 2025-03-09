#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
    long long c;
    Edge(int a, int b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<Edge> edge_list;
long long dist[1005];

bool Bellman_ford(int s)
{

    for (int i = 1; i <= n; i++)
    {
        dist[i] = LLONG_MAX;
    }

    dist[s] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        bool updated = false;
        for (int j = 0; j < edge_list.size(); j++)
        {
            int a = edge_list[j].a, b = edge_list[j].b;
            long long c = edge_list[j].c;
            if (dist[a] != LLONG_MAX && dist[a] + c < dist[b])
            {
                dist[b] = dist[a] + c;
                updated = true;
            }
        }
        if (!updated)
            break;
    }

    for (int j = 0; j < edge_list.size(); j++)
    {
        int a = edge_list[j].a, b = edge_list[j].b;
        long long c = edge_list[j].c;
        if (dist[a] != LLONG_MAX && dist[a] + c < dist[b])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int s;
    cin >> s;

    if (Bellman_ford(s))
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (dist[x] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[x] << endl;
        }
    }

    return 0;
}
