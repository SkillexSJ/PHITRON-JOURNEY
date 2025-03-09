#include <bits/stdc++.h>
using namespace std;
char grid[101][101];
bool vis[101][101];
int level[101][101];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    int ki, kj, qi, qj;

    while (t--)
    {
        cin >> n >> m;

        cin >> ki >> kj;
        cin >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(ki, kj);
        if (level[qi][qj] == -1)
        {
            cout << "-1" << endl;
        }

        else
        {
            cout << level[qi][qj] << endl;
        }
    }

    return 0;
}