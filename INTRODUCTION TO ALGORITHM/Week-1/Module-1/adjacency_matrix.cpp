
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int matrix[n + 1][n + 1];
    memset(matrix, 0, sizeof(matrix));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1; // eita lekhsi karon 4 theke 4 othoba 2 theke 2 kintu jawa jay
            }
        }
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;    // node duita input nilam
        matrix[a][b] = 1; // a node er sathe b node er connection ache
        matrix[b][a] = 1; // eita jodi undirected hoy tahole deya lagbe
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
