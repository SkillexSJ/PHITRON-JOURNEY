#include <bits/stdc++.h>
using namespace std;

int par[100005];
int group_size[100005];

int find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }

    int leader = find(par[node]);
    par[node] = leader;

    return leader;
}

void dsu_union(int node1, int node2)
{

    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }

    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    memset(par, -1, sizeof(par));
    for (int i = 1; i <= n; i++)
    {
        group_size[i] = 1;
    }

    int distinct_cycle_count = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        if (find(a) == find(b))
        {
            distinct_cycle_count++;
        }
        else
        {
            dsu_union(a, b);
        }
    }

    cout << distinct_cycle_count << endl;

    return 0;
}