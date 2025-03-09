#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int ci, int cj)
{

    if (ci < 0 || ci >= n || cj < 0 || cj >= m || grid[ci][cj] == '#')
        return false;

    return true;
}

void dfs(int si, int sj)
{

    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if (valid(ci, cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (visited[i][j] == false)
            {
                if (grid[i][j] == '.')
                {
                    count++;
                    dfs(i, j);
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}