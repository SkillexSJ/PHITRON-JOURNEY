#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool visited[505][505];
    int par[505];
    int group_size[505];
    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool valid(int ci, int cj, int n, int m, vector<vector<int>> &grid)
    {

        if (ci < 0 || ci >= n || cj < 0 || cj >= m || grid[ci][cj] == 0)
            return false;

        return true;
    }

    int find(int node)
    {
        if (par[node] == -1)
        {
            return node;
        }

        int leader = find(par[node]);
        par[node] = leader;

        return leader;
    }

    void dfs(int si, int sj, int n, int m, vector<vector<int>> &grid)
    {

        visited[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + direction[i].first;
            int cj = sj + direction[i].second;

            if (valid(ci, cj, n, m, grid) && !visited[ci][cj])
            {
                dfs(ci, cj, n, m, grid);
            }
        }
    }

    int numEnclaves(vector<vector<int>> &grid)
    {

        memset(visited, false, sizeof(visited));
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if ((i == 0 || i == n - 1 || j == 0 || j == m - 1) &&
                    grid[i][j] == 1 && !visited[i][j])
                {
                    dfs(i, j, n, m, grid);
                }
            }
        }

        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 1; j < m - 1; j++)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    count++;
                }
            }
        }

        return count;
    }
};