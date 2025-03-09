#include <bits/stdc++.h>
using namespace std;

// eita TC holo = O(logV(V+E)) ba O(ELogV) o bole

vector<pair<int, int>> adj_list[201]; // dijkstra r jonno vinno data type
int desti[201];                       // visit array r bodle desti array

void dijkstra(int src)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // notun kaj
    pq.push({0, src});                                                                  // aage ekhon cost push hobe                                                                // ekhon age cost tarpor node bohsabo
    desti[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();

        int par_node = par.second; // change hoise
        int par_dist = par.first;

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dist = child.second;

            if (par_dist + child_dist < desti[child_node]) // jodi baba ar cheler value ta bortoman cheler value theke choto hoy tokhon oitai amar "cost"
            {
                desti[child_node] = par_dist + child_dist; // desti update jemon vabe visit update kortam
                pq.push({desti[child_node], child_node});  // notun baba cheler man push hoye gelo
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
        cout << desti[i] << " " << endl;
    }

    return 0;
}
