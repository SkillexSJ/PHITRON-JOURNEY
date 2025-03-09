
#include <bits/stdc++.h>
using namespace std;

int grid[10001][10001];
bool visited[10001][10001];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int ci, int cj)
{

    if (ci < 0 || ci >= n || cj < 0 || cj >= m || grid[ci][cj] == '-')
        return false;

    return true;
}

void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int p_i = p.first;
        int p_j = p.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = p_i + direction[i].first;
            int cj = p_j + direction[i].second;

            if (!visited[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    bfs(si, sj);

    if (visited[di][dj])
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
