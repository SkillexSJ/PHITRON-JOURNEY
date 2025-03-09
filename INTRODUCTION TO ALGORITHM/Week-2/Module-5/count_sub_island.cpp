
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool visited[505][505];
    vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;
    bool valid(int ci, int cj)
    {

        if (ci < 0 || ci >= n || cj < 0 || cj >= m)
            return false;

        return true;
    }
    bool hoise;
    void dfs(int si, int sj, vector<vector<int>> &grid1,
             vector<vector<int>> &grid2)
    {

        visited[si][sj] = true;
        if (grid1[si][sj] == 0) // eita main kaj
            hoise = false;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + direction[i].first;
            int cj = sj + direction[i].second;

            if (valid(ci, cj) && !visited[ci][cj] && grid2[ci][cj] == 1)
            {

                dfs(ci, cj, grid1, grid2);
            }
        }
    }
    int countSubIslands(vector<vector<int>> &grid1,
                        vector<vector<int>> &grid2)
    {
        memset(visited, false, sizeof(visited));

        n = grid2.size();
        m = grid2[0].size();

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (!visited[i][j] && grid2[i][j] == 1)
                {

                    hoise = true; // ar eita

                    dfs(i, j, grid1, grid2);

                    if (hoise)
                        count++;
                }
            }
        }

        return count;
    }
};
