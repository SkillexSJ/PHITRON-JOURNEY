#include <bits/stdc++.h>
using namespace std;

char grid[1001][1001];
bool visited[1001][1001];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m || grid[ci][cj] == '-')
        return false;
    return true;
}

int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    int count_kori = 1;

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

            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                count_kori++;
            }
        }
    }

    return count_kori;
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

    int store_count = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                int count_kori = bfs(i, j);
                store_count = min(store_count, count_kori);
            }
        }
    }

    if (store_count == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << store_count << endl;
    }

    return 0;
}