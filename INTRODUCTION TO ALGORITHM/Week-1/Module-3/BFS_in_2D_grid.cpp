
#include <bits/stdc++.h>
using namespace std;

int grid[105][105];
bool visited[105][105];
int level[105][105]; // short distance er jonno

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int ci, int cj) // node gula range e ache kina dekhbo
{

    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;

    return true;
}

void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj}); // row column rakhlam
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int p_i = p.first;
        int p_j = p.second; // parent er row column nilam'

        // cout << p_i << " " << p_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = p_i + direction[i].first;
            int cj = p_j + direction[i].second; // child er row column nilam

            if (!visited[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[p_i][p_j] + 1; // eita kori shortest distance er jonno
            }
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
    memset(level, -1, sizeof(level));

    int si, sj, di, dj; // ekhon amar source er duita index lagbe
    cin >> si >> sj >> di >> dj;

    bfs(si, sj); // source er upor bfs

    cout << level[di][dj];
    return 0;
}
