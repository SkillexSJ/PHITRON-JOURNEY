
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo O(n^3)  // n = number of nodes

int main()
{
    int n, e;
    cin >> n >> e;

    int ad_mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                ad_mat[i][j] = 0; // nijer theke nijer distance 0
            else
                ad_mat[i][j] = INT_MAX; // age shobar distance 0 rakhbo
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ad_mat[a][b] = c;
        // ad_mat[b][a] = c;   // for undirected graph
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ad_mat[i][k] != INT_MAX && ad_mat[k][j] != INT_MAX && ad_mat[i][k] + ad_mat[k][j] < ad_mat[i][j]) // jodi vainga jawa ta direct jawa theke choto hoy
                {
                    ad_mat[i][j] = ad_mat[i][k] + ad_mat[k][j]; // update the distance
                }
            }
        }
    }

    // check if there is a negative cycle
    for (int i = 0; i < n; i++)
    {
        if (ad_mat[i][i] < 0)
        {
            cout << "Negative cycle detected" << endl;
            return 0;
        }
    }

    // print the shortest path

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (ad_mat[i][j] == INT_MAX)
            {

                cout << "INF ";
            }

            else

                cout << ad_mat[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
