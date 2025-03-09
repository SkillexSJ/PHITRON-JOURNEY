#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dfs(int row, int col, vector<vector<int>> &grid)
    {

        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() ||
            grid[row][col] == 0)
        {
            return 0;
        }

        int fish = grid[row][col];
        grid[row][col] = 0;

        fish += dfs(row + 1, col, grid);
        fish += dfs(row - 1, col, grid);
        fish += dfs(row, col + 1, grid);
        fish += dfs(row, col - 1, grid);

        return fish;
    }
    int findMaxFish(vector<vector<int>> &grid)
    {

        int max_fish = 0;
        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++)
        {

            for (int j = 0; j < col; j++)
            {

                if (grid[i][j] > 0)
                {

                    max_fish = max(max_fish, dfs(i, j, grid));
                }
            }
        }

        return max_fish;
    }
};