
#include <bits/stdc++.h>
using namespace std;

int grid[105][105];
bool visited[105][105];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int ci, int cj) // node gula range e ache kina dekhbo
{

    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;

    return true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl; // kaj korlam
    visited[si][sj] = true;          // visit banay dilam

    for (int i = 0; i < 4; i++)
    {
        int child_i = si + direction[i].first;  // child row er obostha UP/Down
        int child_j = sj + direction[i].second; // child column er obostha LEFT/RIGHT

        // child gula push er pala
        if (!visited[child_i][child_j] && valid(child_i, child_j)) // visit kora na hole and range er moddhe hole
        {
            dfs(child_i, child_j); // child gula call kora
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    int si, sj; // ekhon amar source er duita index lagbe
    cin >> si >> sj;

    dfs(si, sj); // source er upor dfs

    return 0;
}
