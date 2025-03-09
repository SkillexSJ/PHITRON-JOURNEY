
#include <bits/stdc++.h>
using namespace std;

// ekta edge class banabo jeita 3ta value rakhbe

/// TC = O(VE)

class Edge
{
public:
    int a, b, c;

    Edge(int a, int b, int c)
    {

        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, m;
int dist[1000];
vector<Edge> edge_list; // ekta edge list nilam custom class niye

void Bellman_ford()
{

    for (int i = 0; i < n - 1; i++) // n-1 karon source er distance to jana achei
    {
        for (auto ed : edge_list)
        {

            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (dist[a] != INT_MAX && dist[a] + c < dist[b])
            {
                dist[b] = dist[a] + c;
            }
        }
    }

    // negative cycle detect korar jonno ekbar more loop chalabo
    // time for loop = O(V)
    for (auto ed : edge_list)
    {

        int a = ed.a;
        int b = ed.b;
        int c = ed.c;

        if (dist[a] != INT_MAX && dist[a] + c < dist[b])
        {
            cout << "Negative cycle detected" << endl;
            exit(0);
        }
    }

    cout << "No negative cycle detected" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dist[i] << endl;
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
        // edge_list.push_back(Edge(b, a, c)); // directed graph na hole ei line ta dite hobe na
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX; // shobar path first e INfinite thakbe
    }
    dist[0] = 0; // karon source node er distance 0 hoy

    Bellman_ford();

    return 0;
}
