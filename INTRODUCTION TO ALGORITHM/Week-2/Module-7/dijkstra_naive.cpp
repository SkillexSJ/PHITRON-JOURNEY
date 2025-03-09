#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[201]; // dijkstra r jonno vinno data type
int desti[201];                       // visit array r bodle desti array

void dijkstra(int src)
{

    queue<pair<int, int>> q;
    q.push({src, 0});
    desti[src] = 0; // karon start point er cost "0" hoy

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_node = par.first;
        int par_dist = par.second;

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dist = child.second;

            if (par_dist + child_dist < desti[child_node]) // jodi baba ar cheler value ta bortoman cheler value theke choto hoy tokhon oitai amar "cost"
            {
                desti[child_node] = par_dist + child_dist; // desti update jemon vabe visit update kortam
                q.push({child_node, desti[child_node]});   // notun baba cheler man push hoye gelo
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        desti[i] = INT_MAX; // dhore nibo shobai max
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << desti[i] << endl;
    }

    return 0;
}
