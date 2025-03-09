
#include <bits/stdc++.h>
using namespace std;

int par[100005];
int group_size[100005];

void union_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

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
    int n, m;
    cin >> n >> m;
    union_init(n);

    int count = 0;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        int par_a = find(a);
        int par_b = find(b);

        if (par_a != par_b)
        {

            dsu_union(a, b);
        }
    }

    std::vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int par_1 = find(1);
        int par_2 = find(i);

        if (par_1 != par_2)
        {

            dsu_union(1, par_2);
            count++;
            ans.push_back(i);
        }
    }

    cout << count << endl;

    for (auto it : ans)
    {
        cout << 1 << " " << it << endl;
    }

    return 0;
}
