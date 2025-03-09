
#include <bits/stdc++.h>
using namespace std;

// TC holo = O(N)

int par[1005]; // leader rakhar array

int find(int node)
{
    while (par[node] != -1) // jotokhon na main leader na pacchi
    {
        node = par[node];
    }

    return node;
}
int main()
{
    memset(par, -1, sizeof(par)); // prothome shobai nijei nijer leader
    par[0] = 1;                   // 1 holo tar leader
    par[1] = -1;                  // 1 nijei nijer ekjon leader
    par[2] = 1;                   // eigula 1 er aotay
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    cout << find(4);

    return 0;
}
