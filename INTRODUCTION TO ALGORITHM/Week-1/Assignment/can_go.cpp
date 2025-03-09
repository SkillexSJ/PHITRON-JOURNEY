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

    int si = -1, sj = -1, di = -1, dj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {

                si = i;
                sj = j;
            }

            if (grid[i][j] == 'B')
            {

                di = i;
                dj = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    dfs(si, sj);

    if (visited[di][dj] == true)
    {

        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }

    return 0;
}