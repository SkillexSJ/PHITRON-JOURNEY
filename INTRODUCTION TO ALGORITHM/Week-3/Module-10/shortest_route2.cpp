
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo O(n^3)  // n = number of nodes

int main()
{
    int n, e, q;
    cin >> n >> e >> q;

    long long ad_mat[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                ad_mat[i][j] = 0; // nijer theke nijer distance 0
            else
                ad_mat[i][j] = LLONG_MAX; // age shobar distance 0 rakhbo
        }
    }

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        ad_mat[a][b] = c;
        // ad_mat[b][a] = c;   // for undirected graph
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ad_mat[i][k] != LLONG_MAX && ad_mat[k][j] != LLONG_MAX && ad_mat[i][k] + ad_mat[k][j] < ad_mat[i][j]) // jodi vainga jawa ta direct jawa theke choto hoy
                {
                    ad_mat[i][j] = ad_mat[i][k] + ad_mat[k][j]; // update the distance
                }
            }
        }
    }

    while (q--)
    {
        long long int a, b;
        cin >> a >> b;
        if (ad_mat[a][b] == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ad_mat[a][b] << endl;
        }
    }

    return 0;
}
