
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    long long ad_mat[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                ad_mat[i][j] = 0;
            else
                ad_mat[i][j] = LLONG_MAX;
        }
    }

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        ad_mat[a][b] = min(ad_mat[a][b], c); // multiple edge thakle minimum distance nibo
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ad_mat[i][k] != LLONG_MAX && ad_mat[k][j] != LLONG_MAX && ad_mat[i][k] + ad_mat[k][j] < ad_mat[i][j])
                {
                    ad_mat[i][j] = ad_mat[i][k] + ad_mat[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;

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
