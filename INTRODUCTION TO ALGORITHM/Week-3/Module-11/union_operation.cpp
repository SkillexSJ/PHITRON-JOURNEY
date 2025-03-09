#include <bits/stdc++.h>
using namespace std;

// time comeplexity holo = O(alpha(n)) = O(4) = O(1) // alpha(n) holo ackermann function
// alpha(n) holo ekta function jeta n er value beshi hole o 4 er ceye beshi hobe na
// so, eta almost constant time nite pare

int par[1005];        // leader rakhar array
int group_size[1005]; // group size rakhar array jehetu amra leader by size ber korbo

int find(int node)
{
    if (par[node] == -1) // base case
    {
        return node;
    }

    // optimized way//
    int leader = find(par[node]);
    par[node] = leader; // path compression hoye jabe ek barei shobar leader ber kore felte parbo

    return leader;
}

void dsu_union(int node1, int node2)
{

    int leader1 = find(node1);
    int leader2 = find(node2); // khuje ante patahailam

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;                     // jodi leade1 boro hoy tahole shey leader2 er bap
        group_size[leader1] += group_size[leader2]; // ekhon leader2 er dol bol leader1 er sathe jukto hoye jabe
    }

    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{

    memset(par, -1, sizeof(par));              // prothome shobai nijei nijer leader
    memset(group_size, 1, sizeof(group_size)); // prothome shobai nijei nijer leader tai size 1 thake

    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }

    return 0;
}