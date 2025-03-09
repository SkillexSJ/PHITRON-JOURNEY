#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /// oije node of component oitai muloto ei problem ta

    bool visited[105][105];
    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int n, m;
    int count = 0;

    bool valid(int ci, int cj)
    {

        if (ci < 0 || ci >= n || cj < 0 || cj >= m)
            return false;

        return true;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {

        visited[si][sj] = true;
        count++;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + direction[i].first;
            int cj = sj + direction[i].second;

            if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == 1)
            {

                dfs(ci, cj, grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {

        memset(visited, false, sizeof(visited));

        n = grid.size();
        m = grid[0].size();
        int mx = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 1 && !visited[i][j])
                {
                    count = 0;
                    dfs(i, j, grid);
                    mx = max(count, mx);
                }
            }
        }

        return mx;
    }
};