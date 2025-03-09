
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool visited[1005][1005];
    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool valid(int ci, int cj, vector<vector<int>> &grid)
    {

        if (ci < 0 || ci >= grid.size() || cj < 0 || cj >= grid[0].size() ||
            grid[ci][cj] == 1)
            return false;

        return true;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {

        visited[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + direction[i].first;
            int cj = sj + direction[i].second;

            if (valid(ci, cj, grid) && !visited[ci][cj])
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int closedIsland(vector<vector<int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < n; i++)
        {

            if (grid[i][0] == 0)
                dfs(i, 0, grid);
            if (grid[i][m - 1] == 0)
                dfs(i, m - 1, grid);
        }

        for (int j = 0; j < m; j++)
        {

            if (grid[0][j] == 0)
                dfs(0, j, grid);
            if (grid[n - 1][j] == 0)
                dfs(n - 1, j, grid);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j])
                {
                    if (grid[i][j] == 0)
                    {

                        count++;
                        dfs(i, j, grid);
                    }
                }
            }
        }

        return count;
    }
};
int main()
{

    return 0;
}
