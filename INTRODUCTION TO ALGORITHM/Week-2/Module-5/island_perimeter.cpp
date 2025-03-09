#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool visited[105][105];
    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool valid(int ci, int cj, int n, int m)
    {

        if (ci < 0 || ci >= n || cj < 0 || cj >= m)
            return false;

        return true;
    }

    int count_kori = 0;
    void dfs(int si, int sj, int n, int m, vector<vector<int>> &grid)
    {

        visited[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + direction[i].first;
            int cj = sj + direction[i].second;

            if (!valid(ci, cj, n, m) || (valid(ci, cj, n, m) == true && grid[ci][cj] == 0))
            {

                count_kori++;
            }

            else if (!visited[ci][cj] && grid[ci][cj] == 1)
            {

                dfs(ci, cj, n, m, grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        memset(visited, false, sizeof(visited));
        int n = grid.size();
        int m = grid[0].size();
        // int count_kori = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 1 && !visited[i][j])
                {

                    dfs(i, j, n, m, grid);
                }
            }
        }

        return count_kori;
    }
};