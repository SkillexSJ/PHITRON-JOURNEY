#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

void union_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
        group_size[i] = 1;
    }
}

int find(int node)
{
    if (par[node] == node)
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

    int n;
    cin >> n;
    union_init(n);

    int e = n - 1;
    vector<pair<int, int>> cycle_detect;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int par_a = find(a);
        int par_b = find(b);

        if (par_a != par_b)
        {

            dsu_union(a, b);
        }

        else
        {
            cycle_detect.push_back({a, b});
        }
    }

    set<int> components;

    for (int i = 1; i <= n; i++)
    {

        components.insert(find(i));
    }

    vector<int> component(components.begin(), components.end());

    int t = component.size() - 1;

    cout << t << endl;

    for (int i = 0; i < t; i++)
    {
        cout << cycle_detect[i].first << " " << cycle_detect[i].second << " " << component[i] << " " << component[i + 1] << endl;
    }

    return 0;
}